using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;

/// <summary>
/// Reconstructed local host for recovered gameplay. UI/layout, profile storage,
/// tool access and ticket rewards are explicit integrations; see RECOVERY.md.
/// No advertising, payment or analytics adapters are executed.
/// </summary>
public partial class RecoveredGameFlow : MonoBehaviour
{
    public static RecoveredGameFlow Instance { get; private set; }
    public static string ActiveSkin => Instance ? Instance.Profile.skin : "Watermelon";
    private static Material spriteMaterial;
    public static Material SpriteMaterial
    {
        get
        {
            if (!spriteMaterial) spriteMaterial = new Material(Shader.Find("Sprites/Default"));
            return spriteMaterial;
        }
    }

    [Serializable] public class ProfileData
    {
        public int version = 1;
        public int best, totalScore, score, tickets, roomIndex, merges, highestFruit;
        public int nextIndex, drops;
        public string skin = "Watermelon", board = "", dailyClaim = "";
        public bool sound = true;
        public List<int> built = new List<int>();
        public int coins, taskIndex, taskCount, taskSkinProgress, dailyDay;
        public int[] tools = new int[4];
        public List<string> unlockedSkins = new List<string>();
    }
    [Serializable] public class RoomConfig { public string RoomName, DisplayName; public RoomItem[] ItemList; }
    [Serializable] public class RoomItem { public string ItemName; public int ItemTickets; }
    [Serializable] private class RoomWrapper { public RoomConfig[] Items; }
    [Serializable] public class SkinConfig { public string Name, Type; public int UnlockValue; }
    [Serializable] private class SkinWrapper { public SkinConfig[] SkinItems; }

    public ProfileData Profile { get; private set; }
    public MergeFruit Game { get; private set; }
    public RoomConfig[] Rooms { get; private set; }
    public SkinConfig[] Skins { get; private set; }
    public bool IsPlaying => page == Page.Play;
    public bool DeveloperUnlocks; // Explicit Inspector opt-in for development.
    private enum Page { Home, Play, Pause, Finished, Skins, Rooms, Settings, Progress }
    private Page page = Page.Home, returnPage = Page.Home;
    private RecoveredCatalog catalog;
    private Camera worldCamera;
    private AudioSource music, effects;
    private GameObject roomObject;
    private string notice = "", combo = "";
    private float noticeUntil, comboUntil;
    private float lastSound;
    private int revives;
    private GUIStyle title, heading, text, small, button, scoreStyle;
    private Texture2D panelTexture, buttonTexture, pressedTexture;
    private float viewScale;
    private Vector2 viewOffset;
    private string profilePath;
    private bool testMode;
    private bool gameInitialized;
    private Page inspectPage;

    private void Awake()
    {
        if (Instance && Instance != this) { Destroy(gameObject); return; }
        Instance = this;
        testMode = Array.IndexOf(Environment.GetCommandLineArgs(), "--recovery-test") >= 0;
        profilePath = Path.Combine(Application.persistentDataPath, testMode
            ? "smoke-profile-" + System.Diagnostics.Process.GetCurrentProcess().Id + ".json"
            : "recovered-profile.json");
        catalog = Resources.Load<RecoveredCatalog>("RecoveredCatalog");
        if (!catalog) throw new InvalidOperationException("Missing RecoveredCatalog. Run Fruit Merge > Prepare Project.");
        Profile = LoadProfile(profilePath);
        Rooms = JsonUtility.FromJson<RoomWrapper>("{\"Items\":" + catalog.roomConfiguration.text + "}").Items;
        Skins = JsonUtility.FromJson<SkinWrapper>(catalog.skinConfiguration.text).SkinItems;
        if (string.IsNullOrEmpty(Profile.skin)) Profile.skin = "Watermelon";
        if (Array.Find(Skins, s => s.Name == Profile.skin) == null) Profile.skin = "Watermelon";
        Profile.roomIndex = Mathf.Clamp(Profile.roomIndex, 0, Rooms.Length - 1);
        Profile.built ??= new List<int>();
        while (Profile.built.Count < Rooms.Length) Profile.built.Add(0);
        for (int i = 0; i < Rooms.Length; i++) Profile.built[i] = Mathf.Clamp(Profile.built[i], 0, Rooms[i].ItemList.Length);
        LoadProgression();
        PrepareCamera();
        Game = Instantiate(catalog.gamePrefab).GetComponent<MergeFruit>();
        RepairRenderers(Game.gameObject);
        // Exported WorldMaskController/DOTween dependencies are metadata stubs.
        // The indicator and particle wrappers are replaced by host visuals.
        foreach (var mask in Game.GetComponentsInChildren<WorldMaskController>(true)) mask.enabled = false;
        Game.gameObject.SetActive(false);
        music = gameObject.AddComponent<AudioSource>(); music.loop = true; music.volume = .23f;
        music.clip = Sound("fruit_bgm");
        effects = gameObject.AddComponent<AudioSource>(); effects.volume = .55f;
        if (Profile.sound && music.clip) music.Play();
        Application.targetFrameRate = 60;
        if (testMode) StartCoroutine(RecoveredPlaySmoke.Run(this));
    }

    private static ProfileData LoadProfile(string path)
    {
        if (!File.Exists(path)) return new ProfileData();
        try { return JsonUtility.FromJson<ProfileData>(File.ReadAllText(path)) ?? new ProfileData(); }
        catch (Exception e) when (e is IOException || e is ArgumentException)
        { Debug.LogWarning("Cannot read recovery profile: " + e.Message); return new ProfileData(); }
    }

    public void SaveProfile()
    {
        Directory.CreateDirectory(Path.GetDirectoryName(profilePath));
        string temporary = profilePath + ".tmp";
        File.WriteAllText(temporary, JsonUtility.ToJson(Profile, true));
        if (File.Exists(profilePath)) File.Replace(temporary, profilePath, null);
        else File.Move(temporary, profilePath);
    }

    public void WriteBoard(string json, int nextIndex, int drops)
    { Profile.board = json; Profile.nextIndex = nextIndex; Profile.drops = drops; SaveProfile(); }
    public string ReadBoard() => Profile.board;
    public void ClearBoard() { Profile.board = ""; SaveProfile(); }
    public void ResetRunScore() { Profile.score = 0; revives = 0; }

    public void BeginGame(bool resume)
    {
        HideRoom(); CameraForGame(); Time.timeScale = 1f;
        Game.gameObject.SetActive(true); page = Page.Play;
        if (!gameInitialized) { Game.StartGame(null); gameInitialized = true; }
        if (!resume) { ResetRunScore(); Game.NewStart(); }
        else { Game.RecoveredPaused = false; if (Game.StartedFinishGame) Game.NewStart(); else Game.EnsureRecoveredPreview(); }
        Game.RecoveredDrops = resume ? Profile.drops : 0;
    }

    public void GoHome()
    {
        if (Game.gameObject.activeSelf && !Game.StartedFinishGame) Game.SaveRecoveredNow();
        Game.RecoveredPaused = true; Time.timeScale = 1f;
        Game.gameObject.SetActive(false); HideRoom(); page = Page.Home;
        SaveProfile();
    }

    public void Pause()
    {
        if (page != Page.Play) return;
        Game.SaveRecoveredNow(); Game.RecoveredPaused = true; Time.timeScale = 0f; page = Page.Pause;
    }
    public void Resume() { Time.timeScale = 1f; Game.RecoveredPaused = false; page = Page.Play; }
    public void GameOver() { page = Page.Finished; SaveProfile(); PlaySound("fruit_complete"); }
    public void Revive()
    {
        if (revives >= 1) return;
        revives++; page = Page.Play; Time.timeScale = 1f; Game.ClearFruitsByRevive();
    }

    public void AddScore(int amount)
    {
        Profile.score += amount; Profile.totalScore += amount;
        Profile.best = Mathf.Max(Profile.best, Profile.score); Profile.merges++;
        // Local reconstruction reward: one ticket per merge, independent of ad services.
        Profile.tickets++; SaveProfile();
    }
    public void RecordFruit(int index) { Profile.highestFruit = Mathf.Max(Profile.highestFruit, index); RecordTaskFruit(index + 1); }
    public void ShowCombo(int count) { combo = "COMBO x" + count; comboUntil = Time.unscaledTime + 1.5f; }

    private void PrepareCamera()
    {
        foreach (var camera in FindObjectsByType<Camera>(FindObjectsSortMode.None)) camera.gameObject.SetActive(false);
        var obj = new GameObject("Recovered Camera"); obj.tag = "MainCamera";
        worldCamera = obj.AddComponent<Camera>();
        obj.AddComponent<AudioListener>();
        foreach (var listener in FindObjectsByType<AudioListener>(FindObjectsSortMode.None))
            if (listener.gameObject != obj) listener.enabled = false;
        CameraForGame();
    }
    private void CameraForGame()
    {
        worldCamera.orthographic = true; worldCamera.orthographicSize = 12.1f;
        worldCamera.transform.position = new Vector3(0, 0, -30);
        worldCamera.clearFlags = CameraClearFlags.SolidColor;
        worldCamera.backgroundColor = new Color(.99f,.95f,.87f); worldCamera.cullingMask = ~0;
        UpdateViewport();
    }
    private void UpdateViewport()
    {
        viewScale = Mathf.Min(Screen.width / 540f, Screen.height / 960f);
        viewOffset = new Vector2((Screen.width - 540f * viewScale) * .5f, (Screen.height - 960f * viewScale) * .5f);
        worldCamera.rect = new Rect(viewOffset.x / Screen.width, viewOffset.y / Screen.height,
            540f * viewScale / Screen.width, 960f * viewScale / Screen.height);
    }
    private void Update()
    {
        UpdateViewport();
        if (Input.GetKeyDown(KeyCode.Escape)) { if (page == Page.Play) Pause(); else if (page == Page.Pause) Resume(); else GoHome(); }
    }
    public bool PointerOverUI()
    {
        var p = ((Vector2)Input.mousePosition - viewOffset) / viewScale;
        return p.x < 0 || p.x > 540 || p.y < 145 || p.y > 790;
    }

    public static Sprite FruitSprite(string skin, int index, string suffix = "")
    {
        var sprite = Resources.Load<Sprite>("texture/skin/" + skin.ToLowerInvariant() + "/" + (index + 1) + suffix);
        return sprite ? sprite : Resources.Load<Sprite>("texture/skin/watermelon/" + (index + 1));
    }
    public static void RepairRenderers(GameObject obj)
    {
        foreach (var renderer in obj.GetComponentsInChildren<SpriteRenderer>(true)) renderer.sharedMaterial = SpriteMaterial;
    }
    public void SelectSkin(string name)
    {
        Profile.skin = name;
        foreach (var fruit in Game.GetComponentsInChildren<FruitItem>(true)) fruit.ApplyRecoveredSkin(name);
        SaveProfile(); Notice("Skin selected: " + name);
    }
    public bool IsSkinUnlocked(SkinConfig skin)
    {
        if (DeveloperUnlocks || skin.Name == "Watermelon" || Profile.unlockedSkins.Contains(skin.Name)) return true;
        if (skin.Type == "Score") return Profile.totalScore >= skin.UnlockValue;
        if (skin.Type == "Room") { int completed = 0; for (int i = 0; i < Rooms.Length; i++) if (Profile.built[i] >= Rooms[i].ItemList.Length) completed++; return completed >= skin.UnlockValue; }
        if (skin.Type == "Task") return Profile.taskSkinProgress >= skin.UnlockValue;
        // Rank/task services are not reconstructed; available via the Inspector development toggle.
        return false;
    }
    private AudioClip Sound(string name) => Array.Find(catalog.sounds, clip => clip && clip.name == name);
    public void PlaySound(string name)
    {
        if (!Profile.sound || Time.unscaledTime - lastSound < .035f) return;
        var clip = Sound(name); if (clip) { effects.PlayOneShot(clip); lastSound = Time.unscaledTime; }
    }
    public void Burst(Vector3 pos, Color color) { StartCoroutine(BurstRoutine(pos, color)); }
    private IEnumerator BurstRoutine(Vector3 pos, Color color)
    {
        var particles = new List<GameObject>();
        for (int i = 0; i < 8; i++)
        {
            var obj = new GameObject("Merge sparkle"); obj.transform.position = pos;
            var sr = obj.AddComponent<SpriteRenderer>(); sr.sprite = FruitSprite(ActiveSkin, 0);
            sr.sharedMaterial = SpriteMaterial; sr.sortingOrder = 30; sr.color = color;
            obj.transform.localScale = Vector3.one * .15f; particles.Add(obj);
        }
        float t = 0f;
        while (t < .35f)
        {
            t += Time.deltaTime;
            for (int i = 0; i < particles.Count; i++)
            {
                float a = i * Mathf.PI / 4;
                particles[i].transform.position = pos + new Vector3(Mathf.Cos(a), Mathf.Sin(a)) * t * 4;
                particles[i].transform.localScale = Vector3.one * .15f * (1 - t / .35f);
            }
            yield return null;
        }
        foreach (var obj in particles) Destroy(obj);
    }

    private void HideRoom() { if (roomObject) Destroy(roomObject); roomObject = null; }
    public void OpenRooms()
    {
        returnPage = page == Page.Pause ? Page.Pause : Page.Home;
        Game.gameObject.SetActive(false); Time.timeScale = 1f; page = Page.Rooms; RefreshRoom();
    }
    public void RefreshRoom()
    {
        HideRoom();
        var room = Rooms[Profile.roomIndex];
        var prefab = Array.Find(catalog.roomPrefabs, p => p && p.name == room.RoomName);
        if (!prefab) { Notice("Room prefab missing: " + room.RoomName); return; }
        roomObject = Instantiate(prefab); RepairRenderers(roomObject);
        // Static decor is restored. Spine animation remains unavailable in the exported plugin.
        foreach (var behaviour in roomObject.GetComponentsInChildren<MonoBehaviour>(true)) behaviour.enabled = false;
        var renderers = roomObject.GetComponentsInChildren<SpriteRenderer>(true);
        Bounds bounds = default; bool found = false;
        foreach (var renderer in renderers)
        {
            if (!renderer.sprite) continue;
            if (!found) { bounds = renderer.bounds; found = true; } else bounds.Encapsulate(renderer.bounds);
        }
        if (found)
        {
            worldCamera.transform.position = bounds.center + new Vector3(0, 0, -30);
            worldCamera.orthographicSize = Mathf.Max(bounds.extents.y * 1.5f, bounds.extents.x / (540f / 960f) * 1.12f);
        }
        for (int i = 0; i < room.ItemList.Length; i++)
        {
            var child = FindDeep(roomObject.transform, room.ItemList[i].ItemName);
            if (child) child.gameObject.SetActive(i < Profile.built[Profile.roomIndex]);
        }
    }
    private static Transform FindDeep(Transform root, string name)
    {
        foreach (var child in root.GetComponentsInChildren<Transform>(true)) if (child.name == name) return child;
        return null;
    }
    public bool BuyRoomItem()
    {
        var room = Rooms[Profile.roomIndex]; int built = Profile.built[Profile.roomIndex];
        if (built >= room.ItemList.Length) return false;
        int price = room.ItemList[built].ItemTickets;
        if (Profile.tickets < price && !DeveloperUnlocks) { Notice("Earn tickets by merging fruit"); return false; }
        Profile.tickets = Mathf.Max(0, Profile.tickets - price); Profile.built[Profile.roomIndex]++;
        SaveProfile(); RefreshRoom(); PlaySound("fruit_build"); return true;
    }
    public void Notice(string message) { notice = message; noticeUntil = Time.unscaledTime + 2.5f; }
    private void OnApplicationPause(bool paused) { if (paused && Game) { Game.SaveRecoveredNow(); SaveProfile(); } }
    private void OnApplicationQuit() { if (Game) Game.SaveRecoveredNow(); SaveProfile(); Time.timeScale = 1f; }
    private void OnDestroy() { if (Instance == this) { Instance = null; Time.timeScale = 1f; } }

    private void Styles()
    {
        if (title != null) return;
        panelTexture = Solid(new Color(1f,.98f,.92f,.97f));
        buttonTexture = Solid(new Color(.97f,.64f,.23f)); pressedTexture = Solid(new Color(.91f,.47f,.13f));
        text = new GUIStyle(GUI.skin.label) { font = catalog.font, fontSize = 22, alignment = TextAnchor.MiddleCenter, wordWrap = true };
        text.normal.textColor = new Color(.27f,.20f,.16f);
        small = new GUIStyle(text) { fontSize = 16 };
        heading = new GUIStyle(text) { fontSize = 30, fontStyle = FontStyle.Bold };
        title = new GUIStyle(heading) { fontSize = 51 };
        scoreStyle = new GUIStyle(heading) { fontSize = 40 };
        button = new GUIStyle(GUI.skin.button) { font = catalog.font, fontSize = 22, fontStyle = FontStyle.Bold };
        button.normal.background = buttonTexture; button.hover.background = buttonTexture;
        button.active.background = pressedTexture; button.normal.textColor = new Color(.25f,.15f,.09f);
        button.hover.textColor = button.normal.textColor; button.active.textColor = Color.white;
        button.border = new RectOffset(0,0,0,0);
    }
    private static Texture2D Solid(Color color) { var texture = new Texture2D(1,1); texture.SetPixel(0,0,color); texture.Apply(); return texture; }
    private bool Button(float x, float y, float w, float h, string label, Action action)
    { if (!GUI.Button(new Rect(x,y,w,h), label, button)) return false; PlaySound("fruit_uiselect"); action(); return true; }
    private void Label(float x, float y, float w, float h, string value, GUIStyle style = null) => GUI.Label(new Rect(x,y,w,h), value, style ?? text);
    private void Panel(float x, float y, float w, float h) => GUI.DrawTexture(new Rect(x,y,w,h), panelTexture);
    private void FruitIcon(Rect rect, int index, string skin = null)
    {
        var sprite = FruitSprite(skin ?? ActiveSkin, index);
        if (!sprite) return;
        Rect uv = sprite.textureRect;
        uv = new Rect(uv.x / sprite.texture.width, uv.y / sprite.texture.height, uv.width / sprite.texture.width, uv.height / sprite.texture.height);
        float aspect = sprite.rect.width / sprite.rect.height;
        if (aspect > 1) { float h = rect.width / aspect; rect.y += (rect.height - h) / 2; rect.height = h; }
        else { float w = rect.height * aspect; rect.x += (rect.width - w) / 2; rect.width = w; }
        GUI.DrawTextureWithTexCoords(rect, sprite.texture, uv, true);
    }
    private void OnGUI()
    {
        if (!catalog || Profile == null) return;
        Styles();
        var old = GUI.matrix;
        GUI.matrix = Matrix4x4.TRS(viewOffset, Quaternion.identity, Vector3.one * viewScale);
        inspectPage = page;
        if (page == Page.Play) DrawPlay();
        else if (page == Page.Home) DrawHome();
        else if (page == Page.Pause || page == Page.Finished) DrawOverlay();
        else if (page == Page.Skins) DrawSkins();
        else if (page == Page.Rooms) DrawRooms();
        else if (page == Page.Progress) DrawProgression();
        else DrawSettings();
        if (Time.unscaledTime < noticeUntil) { Panel(25,760,490,58); Label(35,765,470,48,notice,small); }
        if (Time.unscaledTime < comboUntil && page == Page.Play) Label(100,350,340,70,combo,heading);
        GUI.matrix = old;
    }
    private void DrawHome()
    {
        Panel(0,0,540,960);
        Label(20,75,500,68,"FRUIT MERGE",title);
        Label(20,145,500,40,"Drop · Merge · Decorate",text);
        FruitIcon(new Rect(155,220,230,230),10);
        FruitIcon(new Rect(55,350,90,90),2); FruitIcon(new Rect(400,275,85,85),3);
        Label(30,475,480,44,"BEST  " + Profile.best + "     TICKETS  " + Profile.tickets,heading);
        Button(65,550,410,65, string.IsNullOrEmpty(Profile.board) ? "PLAY" : "CONTINUE", () => BeginGame(!string.IsNullOrEmpty(Profile.board)));
        Button(65,635,195,58,"SKINS",() => { returnPage = Page.Home; page = Page.Skins; });
        Button(280,635,195,58,"ROOMS",OpenRooms);
        Button(65,713,195,55,"REWARDS",() => page = Page.Progress);
        Button(280,713,195,55,"SETTINGS",() => { returnPage = Page.Home; page = Page.Settings; });
        Label(40,840,460,55,"Fruit Merge\nUnity edition",small);
    }
    private void DrawPlay()
    {
        Panel(0,0,540,165); Panel(0,815,540,145);
        Button(16,22,64,48,"II",Pause);
        Label(105,12,300,30,"SCORE",small); Label(100,43,310,60,Profile.score.ToString(),scoreStyle);
        Label(95,108,320,28,"Best " + Profile.best + "   /   Tickets " + Profile.tickets,small);
        Label(425,12,95,30,"NEXT",small); FruitIcon(new Rect(443,50,60,60),Game.RecoveredNextIndex);
        string hint = Game.GameState == GameState.Game ? "Drag, then release to drop" : "Tap a fruit · or cancel";
        Label(30,775,480,32,hint,small);
        if (Game.GameState != GameState.Game) Button(185,760,170,45,"CANCEL",() => { Game.CancelUseBomb(); Game.CancelUseUpgrade(); });
        Button(15,838,117,55,"CLEAN",() => UseTool(0));
        Button(145,838,117,55,"BOMB",() => UseTool(1));
        Button(275,838,117,55,"UPGRADE",() => UseTool(2));
        Button(405,838,117,55,"SHAKE",() => UseTool(3));
        Label(15,905,510,34,"Tools: " + string.Join(" / ", Profile.tools) + "  ·  refill: 5 tickets",small);
    }
    private void UseTool(int index)
    {
        if (Game.GameState != GameState.Game) return;
        if (!(index == 0 ? Game.CanClean() : Game.CanBombOrUpgradeOrShake())) { Notice("Drop some fruit first"); return; }
        if (Profile.tools[index] == 0 && Profile.tickets < 5 && !DeveloperUnlocks) { Notice("Need a tool or 5 tickets"); return; }
        Action pay = () => { if (Profile.tools[index] > 0) Profile.tools[index]--; else Profile.tickets = Mathf.Max(0, Profile.tickets - 5); SaveProfile(); };
        if (index == 0) { Game.DoToolClean(); pay(); }
        else if (index == 1) Game.DoToolBomb(pay);
        else if (index == 2) Game.DoToolUpgrade(pay);
        else Game.DoToolShake(pay, null);
    }
    private void DrawOverlay()
    {
        Panel(35,200,470,570);
        Label(50,235,440,65,page == Page.Pause ? "PAUSED" : "NICE PLAY!",title);
        Label(65,320,410,65,"Score " + Profile.score + "\nBest " + Profile.best,heading);
        if (page == Page.Pause) Button(75,425,390,60,"RESUME",Resume);
        else if (revives < 1) Button(75,425,390,60,"REVIVE",Revive);
        Button(75,510,390,60,"NEW GAME",() => BeginGame(false));
        Button(75,595,185,55,"SKINS",() => { returnPage = page; page = Page.Skins; });
        Button(280,595,185,55,"HOME",GoHome);
        if (page == Page.Pause) Button(75,675,390,50,"SETTINGS",() => { returnPage = Page.Pause; page = Page.Settings; });
    }
    private void DrawSkins()
    {
        Panel(0,0,540,960); Label(20,35,500,65,"FRUIT SKINS",title);
        for (int i = 0; i < Skins.Length; i++)
        {
            var skin = Skins[i]; int col = i % 3, row = i / 3;
            float x = 20 + col * 173, y = 140 + row * 215;
            FruitIcon(new Rect(x+23,y,120,110),8,skin.Name);
            Label(x,y+113,160,35,skin.Name,small);
            bool unlocked = IsSkinUnlocked(skin);
            if (unlocked) Button(x,y+155,157,43,Profile.skin == skin.Name ? "SELECTED" : "USE",() => SelectSkin(skin.Name));
            else Label(x,y+150,157,52,skin.Type + " " + skin.UnlockValue,small);
        }
        Button(65,850,410,55,"BACK",() => page = returnPage);
    }
    private void DrawRooms()
    {
        var room = Rooms[Profile.roomIndex]; int built = Profile.built[Profile.roomIndex];
        Panel(0,0,540,145); Label(50,20,440,48,room.DisplayName,heading);
        Label(50,78,440,35,"Room " + (Profile.roomIndex+1) + "  ·  " + built + "/" + room.ItemList.Length + "  ·  Tickets " + Profile.tickets,small);
        Panel(0,760,540,200);
        if (built < room.ItemList.Length)
            Button(65,780,410,58,"BUILD  ·  " + room.ItemList[built].ItemTickets + " tickets",() => BuyRoomItem());
        else Label(65,775,410,58,"ROOM COMPLETE",heading);
        Button(20,865,90,50,"<",() => { Profile.roomIndex = (Profile.roomIndex + Rooms.Length - 1) % Rooms.Length; RefreshRoom(); });
        Button(130,865,280,50,"HOME",GoHome);
        Button(430,865,90,50,">",() => { Profile.roomIndex = (Profile.roomIndex+1) % Rooms.Length; RefreshRoom(); });
    }
    private void DrawSettings()
    {
        Panel(0,0,540,960); Label(20,120,500,65,"SETTINGS",title);
        Button(65,290,410,65,Profile.sound ? "SOUND ON" : "SOUND OFF",() => { Profile.sound = !Profile.sound; if (Profile.sound) music.Play(); else music.Stop(); SaveProfile(); });
        Label(60,410,420,120,"Progress is saved locally.\nMouse and touch supported.\nEscape pauses the game.",text);
        Button(65,700,410,60,"BACK",() => page = returnPage);
    }
}
