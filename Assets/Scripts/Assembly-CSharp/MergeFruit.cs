using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using DG.Tweening;
using OPS.Obfuscator.Attribute;
using TKCommon;
using UnityEngine;

public partial class MergeFruit : MonoBehaviour
{
	[Serializable]
	[DoNotObfuscateClass]
	private class FruitData
	{
		public Vector3 Position;

		public FruitType FruitType;
	}

	[Serializable]
	[DoNotObfuscateClass]
	private class FruitDataWrapper
	{
		public List<FruitData> Fruits;
	}

	[CompilerGenerated]
	private sealed class _003CDelay_003Ed__55 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public float duration;

		public Action action;

		object IEnumerator<object>.Current
		{
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		object IEnumerator.Current
		{
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[DebuggerHidden]
		public _003CDelay_003Ed__55(int _003C_003E1__state)
		{
		}

		[DebuggerHidden]
		void IDisposable.Dispose()
		{
		}

		private bool MoveNext()
		{
			return false;
		}

		bool IEnumerator.MoveNext()
		{
			//ILSpy generated this explicit interface implementation from .override directive in MoveNext
			return this.MoveNext();
		}

		[DebuggerHidden]
		void IEnumerator.Reset()
		{
		}
	}

	[CompilerGenerated]
	private sealed class _003CStartClearFrictionGravity_003Ed__111 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public MergeFruit _003C_003E4__this;

		public float duration;

		object IEnumerator<object>.Current
		{
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		object IEnumerator.Current
		{
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[DebuggerHidden]
		public _003CStartClearFrictionGravity_003Ed__111(int _003C_003E1__state)
		{
		}

		[DebuggerHidden]
		void IDisposable.Dispose()
		{
		}

		private bool MoveNext()
		{
			return false;
		}

		bool IEnumerator.MoveNext()
		{
			//ILSpy generated this explicit interface implementation from .override directive in MoveNext
			return this.MoveNext();
		}

		[DebuggerHidden]
		void IEnumerator.Reset()
		{
		}
	}

	[CompilerGenerated]
	private sealed class _003CUpdateExpCountdown_003Ed__105 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public MergeFruit _003C_003E4__this;

		object IEnumerator<object>.Current
		{
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		object IEnumerator.Current
		{
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[DebuggerHidden]
		public _003CUpdateExpCountdown_003Ed__105(int _003C_003E1__state)
		{
		}

		[DebuggerHidden]
		void IDisposable.Dispose()
		{
		}

		private bool MoveNext()
		{
			return false;
		}

		bool IEnumerator.MoveNext()
		{
			//ILSpy generated this explicit interface implementation from .override directive in MoveNext
			return this.MoveNext();
		}

		[DebuggerHidden]
		void IEnumerator.Reset()
		{
		}
	}

	[CompilerGenerated]
	private sealed class _003CUpgradeFruit_003Ed__123 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public FruitItem fruit;

		public MergeFruit _003C_003E4__this;

		public Action action;

		object IEnumerator<object>.Current
		{
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		object IEnumerator.Current
		{
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[DebuggerHidden]
		public _003CUpgradeFruit_003Ed__123(int _003C_003E1__state)
		{
		}

		[DebuggerHidden]
		void IDisposable.Dispose()
		{
		}

		private bool MoveNext()
		{
			return false;
		}

		bool IEnumerator.MoveNext()
		{
			//ILSpy generated this explicit interface implementation from .override directive in MoveNext
			return this.MoveNext();
		}

		[DebuggerHidden]
		void IEnumerator.Reset()
		{
		}
	}

	[SerializeField]
	private GameObject[] m_FruitItemPrefabs;

	[SerializeField]
	private Transform m_LineTrans;

	[SerializeField]
	private Transform m_RedLine;

	[SerializeField]
	private Transform m_RedUpPosition;

	[SerializeField]
	private Transform m_RedDownPosition;

	[SerializeField]
	private Transform m_DeadLine;

	[SerializeField]
	private Transform m_ClearLine;

	[SerializeField]
	private Transform m_GamePanel;

	[SerializeField]
	private Transform m_Box;

	[SerializeField]
	private Transform m_BoxSpriteRenderer;

	private const int MAX_RANDOM_INDEX = 5;

	private const float FRUIT_CREATE_INTERVAL = 0.3f;

	private float leftEdgeX;

	private float rightEdgeX;

	private float bottomEdgeY;

	private int _nextRandomIndex;

	private Vector3 _lastFruitPos;

	private bool _isBlock;

	private Coroutine _createCoroutine;

	private GameObject _currentFruit;

	private Transform _currentIndicator;

	private WorldMaskController _currentWordMaskController;

	private PlayGameView _playGameView;

	private bool _isDragging;

	private GameState _gameState;

	private Coroutine _waitingFinishGameCoroutine;

	private bool _startedFinishGame;

	private GUIStyle labelStyle;

	private Bounds bounds;

	private float _highestYPosition;

	private Sequence fadeSequence;

	public bool ShowTaskReward;

	public const string SAVE_KEY = "FruitPositions";

	private bool _isPaused;

	public int expMergeCount;

	private float expCountdown;

	private Coroutine expCountdownCoroutine;

	private Coroutine clearFrictionGravityCoroutine;

	private float clearFrictionGravityTime;

	private float clearFrictionGravityDuration;

	private Action _cleanAction;

	private Action _bombAction;

	private Action _upgradeAction;

	public GameState GameState => _gameState;

	public bool StartedFinishGame => _startedFinishGame;

	private void Awake()
	{
		// Native reference: MergeFruit_Awake_18799b8.cpp
		_currentIndicator = m_LineTrans ? m_LineTrans.Find("indicator") : null;
		_gameState = GameState.Game;
		RecoveredPaused = true;
	}

	private void OnDestroy()
	{
	}

	public void StartGame(PlayGameView gameView)
	{
		// Native reference: MergeFruit_StartGame_1879dec.cpp
		_playGameView = gameView; InitEdges(); LoadFruits(); ResetLastFruitPosByLine();
		RandomNextFruit(); CreateRandomFruitItem(); RecoveredPaused = false;
	}

	public void QuitGame()
	{
		// Native reference: MergeFruit_QuitGame_187a674.cpp
		SaveFruits();
		RecoveredPaused = true;
	}

	private void OnGUI()
	{
	}

	private void Update()
	{
		// Native reference: MergeFruit_Update_187b00c.cpp
		if (RecoveredPaused || _startedFinishGame || !RecoveredGameFlow.Instance || !RecoveredGameFlow.Instance.IsPlaying) return;
		if (_gameState != GameState.Game) { RecoveredToolInput(); return; }
		if (Input.GetMouseButtonDown(0) && !RecoveredGameFlow.Instance.PointerOverUI()) StartFruitDragging(Input.mousePosition);
		if (_isDragging && Input.GetMouseButton(0)) UpdatePos(Input.mousePosition);
		if (_isDragging && Input.GetMouseButtonUp(0)) ReleaseCurrentFruit();
	}

	private void FixedUpdate()
	{
		// Native reference: MergeFruit_FixedUpdate_187bfe0.cpp
		if (_saveAt > 0f && Time.time >= _saveAt) { _saveAt = 0f; SaveFruits(); }
	}

	private void HideCurrentFruit()
	{
	}

	private void ShowCurrentFruit()
	{
	}

	private void HideCurrentIndicator()
	{
		// Native reference: MergeFruit_HideCurrentIndicator_187c304.cpp
		if (_currentIndicator) _currentIndicator.gameObject.SetActive(false);
	}

	private void ChangeCurrentIndicatorColor()
	{
	}

	private void UpdateIndicatorMaskArea()
	{
	}

	private void OnDrawGizmos()
	{
	}

	private void OnSwitchSkin(string skinName)
	{
	}

	private void ShowCurrentIndicator()
	{
		// Native reference: MergeFruit_ShowCurrentIndicator_187c358.cpp
		if (_currentIndicator) _currentIndicator.gameObject.SetActive(false); // Dummy exported mask shader; runtime line replaces it.
	}

	private void UpdateCurrentIndicatorPosition()
	{
		// Native reference: MergeFruit_UpdateCurrentIndicatorPosition_187c5b0.cpp
		if (_currentIndicator && _currentFruit) { var p = _currentIndicator.position; p.x = _currentFruit.transform.position.x; _currentIndicator.position = p; }
	}

	private bool IsUType()
	{
		return false;
	}

	private void BoxAdapt()
	{
	}

	public Vector2 GetBoxBottomScreenY()
	{
		return default;
	}

	public bool TryGetBoxSpriteTopScreenY(out float screenY)
	{
		screenY = default;
		return false;
	}

	private void DestroyChildren(Transform root)
	{
		// Native reference: MergeFruit_DestroyChildren_187cc04.cpp
		for (int i = root.childCount - 1; i >= 0; i--) { var obj = root.GetChild(i).gameObject; obj.SetActive(false); Destroy(obj); }
	}

	[IteratorStateMachine(typeof(_003CDelay_003Ed__55))]
	private IEnumerator Delay(float duration, Action action)
	{
		// Recovery adapter; see RECOVERY.md.
		yield return new WaitForSeconds(duration);
		action?.Invoke();
	}

	private bool IsUICover()
	{
		return false;
	}

	private bool IsTouchDown()
	{
		return false;
	}

	private bool IsTouchMove()
	{
		return false;
	}

	private bool IsTouchUp()
	{
		return false;
	}

	public float DeadPositionY()
	{
		// Native reference: MergeFruit_DeadPositionY_1876854.cpp
		return m_DeadLine.position.y;
	}

	private void InitEdges()
	{
		// Native reference: MergeFruit_InitEdges_1879eb8.cpp
		var left = m_Box.Find("Left"); var right = m_Box.Find("Right"); var bottom = m_Box.Find("Bottom");
		leftEdgeX = left.position.x + .5f; rightEdgeX = right.position.x - .5f; bottomEdgeY = bottom.position.y + 1f;
	}

	private void ResetLastFruitPosByLine()
	{
		// Native reference: MergeFruit_ResetLastFruitPosByLine_187a57c.cpp
		_lastFruitPos = m_LineTrans.position;
	}

	private void ResetLastFruitPosByCurrent()
	{
		// Native reference: MergeFruit_ResetLastFruitPosByCurrent_187cf54.cpp
		if (_currentFruit) _lastFruitPos = _currentFruit.transform.position;
	}

	private void RandomNextFruit()
	{
		// Native reference: MergeFruit_RandomNextFruit_187a5a8.cpp
		_nextRandomIndex = UnityEngine.Random.Range(0, MAX_RANDOM_INDEX);
	}

	private void StartFruitDragging(Vector2 touchPosition)
	{
		// Native reference: MergeFruit_StartFruitDragging_187bab0.cpp
		_isDragging = true;
		UpdatePos(touchPosition);
	}

	private void UpdatePos(Vector2 touchPosition)
	{
		// Native reference: MergeFruit_UpdatePos_187bbdc.cpp
		if (!_isDragging || !_currentFruit) return;
		float x = Camera.main.ScreenToWorldPoint(touchPosition).x;
		var item = _currentFruit.GetComponent<FruitItem>();
		float radius = item._sprite ? item._sprite.bounds.extents.x : .5f;
		x = Mathf.Clamp(x, leftEdgeX + radius, rightEdgeX - radius);
		_currentFruit.transform.position = new Vector3(x, _currentFruit.transform.position.y, 0);
		ResetLastFruitPosByCurrent(); UpdateCurrentIndicatorPosition();
	}

	public void ClearFruitsByRevive()
	{
		// Native reference: MergeFruit_ClearFruitsByRevive_187cf8c.cpp
		ResetStatus();
		foreach (var fruit in RecoveredFruits) {
		    if (fruit._sprite && fruit._sprite.bounds.max.y >= m_ClearLine.position.y) fruit.RetireRecovered();
		    else fruit.ApplyRecoveredSkin(RecoveredGameFlow.ActiveSkin);
		}
		DestroyCurrentFruit(); ResetLastFruitPosByLine(); CreateRandomFruitItem(); QueueSave();
	}

	public void NewStart()
	{
		// Native reference: MergeFruit_NewStart_187d228.cpp
		StopAllCoroutines(); DestroyChildren(m_GamePanel); _currentFruit = null;
		ResetStatus(); ResetLastFruitPosByLine(); RandomNextFruit();
		CreateRandomFruitItem(); ClearFruitsPrefs(); QueueSave();
	}

	public void Retry()
	{
		// Native reference: MergeFruit_Retry_187d670.cpp
		RecoveredGameFlow.Instance?.ResetRunScore();
		NewStart();
	}

	private void ResetStatus()
	{
		// Native reference: MergeFruit_ResetStatus_187d0d8.cpp
		_startedFinishGame = false; _isDragging = false; RecoveredPaused = false; _gameState = GameState.Game;
		Time.timeScale = 1f; _isBlock = false; ShowTaskReward = false;
	}

	public void ClearStatus()
	{
		// Native reference: MergeFruit_ClearStatus_187d9a4.cpp
		ResetStatus();
	}

	public void EnterGame()
	{
		// Native reference: MergeFruit_EnterGame_187da4c.cpp
		RecoveredPaused = false;
	}

	public void FinishGame()
	{
		// Native reference: MergeFruit_FinishGame_18768cc.cpp
		if (_startedFinishGame) return;
		_startedFinishGame = true; _isDragging = false; StopCreateRandomFruitCoroutine();
		foreach (var fruit in RecoveredFruits) { fruit.ClearForFinish(); fruit.SwitchFinishedStates(); }
		Time.timeScale = 0f; ClearFruitsPrefs(); RecoveredGameFlow.Instance?.GameOver();
	}

	private void ChangeFruitsFinishStates(Action endAction)
	{
	}

	public void PrepareForCapture()
	{
	}

	public Rect CaptureRect(Camera fruitCamera)
	{
		return default;
	}

	private void DestroyCurrentFruit()
	{
		// Native reference: MergeFruit_DestroyCurrentFruit_187d188.cpp
		if (_currentFruit) { _currentFruit.SetActive(false); Destroy(_currentFruit); }
		_currentFruit = null;
	}

	public void StartRedLineAnimation()
	{
	}

	public void StopRedLineAnimation()
	{
	}

	public void CheckRedLine()
	{
		// Native reference: MergeFruit_CheckRedLine_1877e48.cpp
		bool danger = false;
		foreach (var f in RecoveredFruits) if (f.IsCollided && f._rigidbody2D.bodyType == RigidbodyType2D.Dynamic && f.transform.position.y > DeadPositionY() - 2f) danger = true;
		if (m_RedLine) m_RedLine.gameObject.SetActive(danger);
	}

	private void StopCreateRandomFruitCoroutine()
	{
		// Native reference: MergeFruit_StopCreateRandomFruitCoroutine_187ab80.cpp
		if (_createCoroutine != null) StopCoroutine(_createCoroutine);
		_createCoroutine = null;
	}

	private void StartCreateRandomFruitCoroutine()
	{
		// Native reference: MergeFruit_StartCreateRandomFruitCoroutine_187e3ac.cpp
		StopCreateRandomFruitCoroutine();
		_createCoroutine = StartCoroutine(Delay(FRUIT_CREATE_INTERVAL, CreateRandomFruitItem));
	}

	private void CreateRandomFruitItem()
	{
		// Native reference: MergeFruit_CreateRandomFruitItem_187a5cc.cpp
		if (_currentFruit || _startedFinishGame) return;
		_currentFruit = CreateFruitItem(_nextRandomIndex, _lastFruitPos);
		RandomNextFruit(); ShowCurrentIndicator();
	}

	public GameObject CreateFruitItem(int index, Vector3 pos)
	{
		// Native reference: MergeFruit_CreateFruitItem_1878ab8.cpp
		if (index < 0 || index >= m_FruitItemPrefabs.Length) return null;
		var obj = Instantiate(m_FruitItemPrefabs[index], pos, Quaternion.identity, m_GamePanel);
		obj.GetComponent<FruitItem>().SetKinematic(true);
		return obj;
	}

	private void ReleaseCurrentFruit()
	{
		// Native reference: MergeFruit_ReleaseCurrentFruit_187bdd4.cpp
		if (!_isDragging || !_currentFruit) return;
		_isDragging = false; HideCurrentIndicator();
		var item = _currentFruit.GetComponent<FruitItem>(); item.ReleaseDown();
		item._rigidbody2D.linearVelocity = Vector2.down * 8f;
		_currentFruit = null; RecoveredDrops++;
		RecoveredGameFlow.Instance?.RecordTaskFruit((int)item.FruitType + 1);
		StartCreateRandomFruitCoroutine(); QueueSave();
	}

	private void OpenTaskCompleteView()
	{
	}

	private void CloseTaskCompleteView()
	{
	}

	private void LoadFruits()
	{
		// Native reference: MergeFruit_LoadFruits_1879fc8.cpp
		string json = RecoveredGameFlow.Instance ? RecoveredGameFlow.Instance.ReadBoard() : "";
		if (string.IsNullOrEmpty(json)) return;
		FruitDataWrapper data;
		try { data = JsonUtility.FromJson<FruitDataWrapper>(json); }
		catch (ArgumentException) { UnityEngine.Debug.LogWarning("Invalid saved board; starting an empty board."); return; }
		if (data == null || data.Fruits == null) return;
		foreach (var fruit in data.Fruits) {
		    if ((int)fruit.FruitType < 0 || (int)fruit.FruitType >= m_FruitItemPrefabs.Length || !float.IsFinite(fruit.Position.x) || !float.IsFinite(fruit.Position.y)) continue;
		    var obj = CreateFruitItem((int)fruit.FruitType, fruit.Position);
		    obj.GetComponent<FruitItem>().ReleaseDown();
		}
	}

	private void SaveFruits()
	{
		// Native reference: MergeFruit_SaveFruits_187a718.cpp
		if (!RecoveredGameFlow.Instance || _startedFinishGame) return;
		var data = new FruitDataWrapper { Fruits = new List<FruitData>() };
		foreach (var fruit in RecoveredFruits) {
		    if (!fruit.RecoveredMerged && fruit._rigidbody2D.bodyType == RigidbodyType2D.Dynamic)
		        data.Fruits.Add(new FruitData { Position = fruit.transform.position, FruitType = fruit.FruitType });
		}
		RecoveredGameFlow.Instance.WriteBoard(JsonUtility.ToJson(data), _nextRandomIndex, RecoveredDrops);
	}

	public void ClearFruitsPrefs()
	{
		// Native reference: MergeFruit_ClearFruitsPrefs_187e47c.cpp
		RecoveredGameFlow.Instance?.ClearBoard();
	}

	private void OnApplicationQuit()
	{
		// Native reference: MergeFruit_OnApplicationQuit_187e4d8.cpp
		SaveFruits();
	}

	private void OnApplicationPause(bool pauseStatus)
	{
		// Native reference: MergeFruit_OnApplicationPause_187e6b8.cpp
		if (pauseStatus) SaveFruits();
	}

	private void StartGameRecord()
	{
	}

	private void QuitGameRecord()
	{
	}

	private void StartExpCountdown()
	{
	}

	[IteratorStateMachine(typeof(_003CUpdateExpCountdown_003Ed__105))]
	private IEnumerator UpdateExpCountdown()
	{
		return null;
	}

	private void StopExpCountdown()
	{
	}

	public void FixPenetration()
	{
	}

	[IteratorStateMachine(typeof(_003CStartClearFrictionGravity_003Ed__111))]
	private IEnumerator StartClearFrictionGravity(float duration)
	{
		return null;
	}

	public void StopFixPenetration()
	{
	}

	private void ResetFrictionGravity()
	{
	}

	private bool IsUsingClean()
	{
		return false;
	}

	public void CancelUseClean()
	{
	}

	private bool IsUsingBomb()
	{
		// Native reference: MergeFruit_IsUsingBomb_187b598.cpp
		return _gameState == GameState.Bomb;
	}

	public void CancelUseUpgrade()
	{
		// Native reference: MergeFruit_CancelUseUpgrade_187eb74.cpp
		_gameState = GameState.Game; _upgradeAction = null;
	}

	private bool IsUsingUpgrade()
	{
		// Native reference: MergeFruit_IsUsingUpgrade_187b81c.cpp
		return _gameState == GameState.Upgrade;
	}

	public void CancelUseBomb()
	{
		// Native reference: MergeFruit_CancelUseBomb_187ecbc.cpp
		_gameState = GameState.Game; _bombAction = null;
	}

	[IteratorStateMachine(typeof(_003CUpgradeFruit_003Ed__123))]
	private IEnumerator UpgradeFruit(FruitItem fruit, Action action)
	{
		return null;
	}

	public bool CanClean()
	{
		// Native reference: MergeFruit_CanClean_187ed90.cpp
		foreach (var f in RecoveredFruits) if ((int)f.FruitType < 2 && f._rigidbody2D.bodyType == RigidbodyType2D.Dynamic && !f.RecoveredMerged) return true;
		return false;
	}

	public bool CanBombOrUpgradeOrShake()
	{
		// Native reference: MergeFruit_CanBombOrUpgradeOrShake_187eefc.cpp
		foreach (var f in RecoveredFruits) if (f._rigidbody2D.bodyType == RigidbodyType2D.Dynamic && !f.RecoveredMerged) return true;
		return false;
	}

	public void DoToolClean()
	{
		// Native reference: MergeFruit_DoToolClean_187f068.cpp
		if (_gameState != GameState.Game) return;
		foreach (var f in RecoveredFruits) if ((int)f.FruitType < 2 && f._rigidbody2D.bodyType == RigidbodyType2D.Dynamic) f.RetireRecovered();
		QueueSave();
	}

	public void DoToolCleanGuide(Action action)
	{
	}

	public void DoToolBomb(Action action)
	{
		// Native reference: MergeFruit_DoToolBomb_187f300.cpp
		_gameState = GameState.Bomb; _bombAction = action;
	}

	public void DoToolUpgrade(Action action)
	{
		// Native reference: MergeFruit_DoToolUpgrade_187f3f0.cpp
		_gameState = GameState.Upgrade; _upgradeAction = action;
	}

	public void DoToolShake(Action shakeStartAction, Action finishAction)
	{
		// Native reference: MergeFruit_DoToolShake_187f5a8.cpp
		// Integration approximation: recovered native shake uses a tween/sequence on the box.
		if (!CanBombOrUpgradeOrShake()) return;
		shakeStartAction?.Invoke();
		foreach (var f in RecoveredFruits) if (f._rigidbody2D.bodyType == RigidbodyType2D.Dynamic)
		    f._rigidbody2D.AddForce(new Vector2(UnityEngine.Random.Range(-.35f,.35f), .45f), ForceMode2D.Impulse);
		finishAction?.Invoke(); QueueSave();
	}

	public void CancelUseShake()
	{
	}

	private void CleanToolAction()
	{
	}

	public void TestDropLine()
	{
	}
}
