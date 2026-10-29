using System;
using System.IO;
using System.Linq;
using UnityEditor;
using UnityEditor.SceneManagement;
using UnityEngine;

/// <summary>Build a native-asset-backed scene and a Linux development player.</summary>
public static class RecoveredProjectBuilder
{
    [InitializeOnLoadMethod]
    private static void OpenPlayableSceneOnFirstEditorStart()
    {
        if (Application.isBatchMode || SessionState.GetBool("recovery.sceneOpened",false)) return;
        SessionState.SetBool("recovery.sceneOpened",true);
        EditorApplication.delayCall += () =>
        {
            var active = UnityEngine.SceneManagement.SceneManager.GetActiveScene();
            const string path = "Assets/Recovery/Scenes/FruitMergePlayable.unity";
            if (!EditorApplication.isPlayingOrWillChangePlaymode && string.IsNullOrEmpty(active.path) && !active.isDirty && File.Exists(path))
                EditorSceneManager.OpenScene(path);
        };
    }

    [MenuItem("Fruit Merge/Prepare Project")]
    public static void Prepare()
    {
        const string prefix = "Assets/bundles/main/";
        Directory.CreateDirectory("Assets/Resources");
        var catalog = AssetDatabase.LoadAssetAtPath<RecoveredCatalog>("Assets/Resources/RecoveredCatalog.asset");
        if (!catalog) { catalog = ScriptableObject.CreateInstance<RecoveredCatalog>(); AssetDatabase.CreateAsset(catalog, "Assets/Resources/RecoveredCatalog.asset"); }
        catalog.gamePrefab = AssetDatabase.LoadAssetAtPath<GameObject>(prefix + "prefabs/game/MergeFruit.prefab");
        catalog.roomPrefabs = AssetDatabase.FindAssets("t:Prefab", new[] {prefix + "prefabs/game/rooms"})
            .Select(AssetDatabase.GUIDToAssetPath).Select(AssetDatabase.LoadAssetAtPath<GameObject>).ToArray();
        catalog.sounds = AssetDatabase.FindAssets("t:AudioClip", new[] {prefix + "sounds"})
            .Select(AssetDatabase.GUIDToAssetPath).Select(AssetDatabase.LoadAssetAtPath<AudioClip>).ToArray();
        catalog.font = AssetDatabase.LoadAssetAtPath<Font>("Assets/Font/MADE Tommy Soft Bold PERSONAL USE.otf");
        if (!catalog.font) catalog.font = AssetDatabase.LoadAssetAtPath<Font>("Assets/Font/LiberationSans.ttf");
        catalog.roomConfiguration = AssetDatabase.LoadAssetAtPath<TextAsset>("Assets/Resources/config/Room.json");
        catalog.skinConfiguration = AssetDatabase.LoadAssetAtPath<TextAsset>("Assets/Resources/config/SkinData.json");
        if (!catalog.gamePrefab || !catalog.roomConfiguration || !catalog.skinConfiguration) throw new InvalidOperationException("Required recovered assets missing");
        EditorUtility.SetDirty(catalog);
        var scene = EditorSceneManager.NewScene(NewSceneSetup.EmptyScene, NewSceneMode.Single);
        new GameObject("Recovered Game Host").AddComponent<RecoveredGameFlow>();
        Directory.CreateDirectory("Assets/Recovery/Scenes");
        const string scenePath = "Assets/Recovery/Scenes/FruitMergePlayable.unity";
        EditorSceneManager.SaveScene(scene, scenePath);
        EditorBuildSettings.scenes = new[] {new EditorBuildSettingsScene(scenePath, true)};
        PlayerSettings.companyName = "LuciusTran";
        PlayerSettings.productName = "Fruit Merge";
        PlayerSettings.defaultScreenWidth = 540; PlayerSettings.defaultScreenHeight = 960;
        PlayerSettings.fullScreenMode = FullScreenMode.Windowed;
        PlayerSettings.runInBackground = true;
        PlayerSettings.SetScriptingBackend(UnityEditor.Build.NamedBuildTarget.Standalone, ScriptingImplementation.Mono2x);
        PlayerSettings.stripEngineCode = false;
        // The native-derived classes use Unity's legacy pointer API.
        var settings = new SerializedObject(AssetDatabase.LoadAllAssetsAtPath("ProjectSettings/ProjectSettings.asset")[0]);
        var input = settings.FindProperty("activeInputHandler");
        if (input != null) { input.intValue = 0; settings.ApplyModifiedPropertiesWithoutUndo(); }
        AssetDatabase.SaveAssets();
        Debug.Log("RECOVERY_PREPARED: " + scenePath + "; rooms=" + catalog.roomPrefabs.Length + "; sounds=" + catalog.sounds.Length);
    }

    public static void BuildLinux()
    {
        Prepare();
        string destination = Path.GetFullPath("Builds/Linux/FruitMerge");
        Directory.CreateDirectory(Path.GetDirectoryName(destination));
        var report = BuildPipeline.BuildPlayer(new BuildPlayerOptions {
            scenes = EditorBuildSettings.scenes.Select(s => s.path).ToArray(),
            locationPathName = destination, target = BuildTarget.StandaloneLinux64,
            options = BuildOptions.Development
        });
        if (report.summary.result != UnityEditor.Build.Reporting.BuildResult.Succeeded)
            throw new InvalidOperationException("Recovery player build failed: " + report.summary.result);
        Debug.Log("RECOVERY_BUILD_SUCCEEDED: " + destination);
    }
}
