using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

public partial class FruitItem : MonoBehaviour
{
	private enum E_SpriteState
	{
		Noraml = 0,
		Failed = 1,
		Blink = 2
	}

	[CompilerGenerated]
	private sealed class _003CDelay_003Ed__36 : IEnumerator<object>, IEnumerator, IDisposable
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
		public _003CDelay_003Ed__36(int _003C_003E1__state)
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
	private sealed class _003CDestroyFruit_003Ed__33 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public FruitItem _003C_003E4__this;

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
		public _003CDestroyFruit_003Ed__33(int _003C_003E1__state)
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
	private sealed class _003CWaitingComboEnd_003Ed__64 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public FruitItem _003C_003E4__this;

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
		public _003CWaitingComboEnd_003Ed__64(int _003C_003E1__state)
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
	private FruitType m_FruitType;

	[SerializeField]
	private int m_MergeScore;

	[HideInInspector]
	public Rigidbody2D _rigidbody2D;

	[HideInInspector]
	public CircleCollider2D _circleCollider2D;

	[HideInInspector]
	public SpriteRenderer _sprite;

	[HideInInspector]
	public Transform _BrainrotCollider;

	[HideInInspector]
	public Transform _CapybaraCollider;

	private Animator _finishAnimator;

	private GameObject _toolEffect;

	private Sprite _normalSprite;

	private Sprite _blinkSprite;

	private Sprite _failedSprite;

	private int _baseOrder;

	private MergeFruit _mergeFruit;

	private float _startWaitingFinishTime;

	private string _currentUsingSkin;

	private E_SpriteState _currentSpriteState;

	private bool isDestroying;

	private bool _isRedAnimationStarted;

	private Coroutine _blinkCoroutine;

	private Coroutine _waitingBlinkCoroutine;

	[Header("Combo特效")]
	[SerializeField]
	private GameObject m_ComboEffectPrefab;

	private int ComboCount;

	private Coroutine checkComboEndCoroutine;

	private GameObject mComboEffectObj;

	[Header("Merge特效")]
	[SerializeField]
	private GameObject m_EffectPrefab;

	[Header("Destroy特效")]
	[SerializeField]
	private GameObject m_DestroyPrefab;

	[SerializeField]
	private float m_DestroyScale;

	public bool IsCollided;

	private bool IsMerged;

	private bool isScaleAnimationPlaying;

	private float scaleAnimationDuration;

	private float minScaleFactor;

	[HideInInspector]
	public bool isPlayTouchSound;

	public FruitType FruitType => m_FruitType;

	public float StartWaitingFinishTime => _startWaitingFinishTime;

	private void Awake()
	{
		// Native reference: FruitItem_Awake_1875b28.cpp
		_rigidbody2D = GetComponent<Rigidbody2D>();
		_circleCollider2D = GetComponent<CircleCollider2D>();
		_sprite = GetComponent<SpriteRenderer>();
		_finishAnimator = GetComponent<Animator>();
		if (_finishAnimator) _finishAnimator.enabled = false;
		_BrainrotCollider = transform.Find("Brainrot");
		_CapybaraCollider = transform.Find("Capybara");
		var effect = transform.Find("ToolEffect");
		if (effect) { _toolEffect = effect.gameObject; _toolEffect.SetActive(false); }
		_baseOrder = _sprite ? _sprite.sortingOrder : 12;
		CheckMergeFruit();
		if (_sprite) { _sprite.sharedMaterial = RecoveredGameFlow.SpriteMaterial; _sprite.sortingOrder = 20; }
		if (_rigidbody2D) { _rigidbody2D.simulated = false; _rigidbody2D.collisionDetectionMode = CollisionDetectionMode2D.Continuous; }
		UpdateSkin(RecoveredGameFlow.ActiveSkin);
	}

	private void OnDestroy()
	{
	}

	private void UpdateSkin(string usingSkinName)
	{
		// Native reference: FruitItem_UpdateSkin_1875e34.cpp
		_currentUsingSkin = usingSkinName;
		_normalSprite = RecoveredGameFlow.FruitSprite(usingSkinName, (int)m_FruitType);
		_failedSprite = RecoveredGameFlow.FruitSprite(usingSkinName, (int)m_FruitType, "_1");
		_blinkSprite = RecoveredGameFlow.FruitSprite(usingSkinName, (int)m_FruitType, "_2");
		if (_sprite && _normalSprite) _sprite.sprite = _normalSprite;
		UpdateCollider2D();
	}

	private void UpdateCollider2D()
	{
		// Native reference: FruitItem_UpdateCollider2D_18761e4.cpp
		// Special skin collision meshes are optional in this export; keep the original circle otherwise.
		if (_BrainrotCollider) _BrainrotCollider.gameObject.SetActive(_currentUsingSkin == "Brainrot");
		if (_CapybaraCollider) _CapybaraCollider.gameObject.SetActive(_currentUsingSkin == "Capybara");
		if (_circleCollider2D) _circleCollider2D.enabled = !((_currentUsingSkin == "Brainrot" && _BrainrotCollider) || (_currentUsingSkin == "Capybara" && _CapybaraCollider));
	}

	public void SetKinematic(bool isKinematic)
	{
		// Native reference: FruitItem_SetKinematic_18763bc.cpp
		if (!_rigidbody2D) return;
		_rigidbody2D.bodyType = isKinematic ? RigidbodyType2D.Kinematic : RigidbodyType2D.Dynamic;
		_rigidbody2D.simulated = !isKinematic;
		if (isKinematic) StopAllAnimationCoroutines();
	}

	public void ReleaseDown()
	{
		// Native reference: FruitItem_ReleaseDown_187657c.cpp
		SetKinematic(false);
		if (_sprite) _sprite.sortingOrder = _baseOrder;
	}

	private void CheckMergeFruit()
	{
		// Native reference: FruitItem_CheckMergeFruit_18765c0.cpp
		if (!_mergeFruit) _mergeFruit = GetComponentInParent<MergeFruit>();
		if (!_mergeFruit) _mergeFruit = FindFirstObjectByType<MergeFruit>();
	}

	private Transform GetEffectParent()
	{
		return null;
	}

	private void Update()
	{
		// Native reference: FruitItem_Update_18766fc.cpp
		if (IsMerged || !_rigidbody2D || _rigidbody2D.bodyType == RigidbodyType2D.Kinematic || !_rigidbody2D.simulated) return;
		CheckMergeFruit();
		if (!_mergeFruit || _mergeFruit.RecoveredPaused) return;
		if (_mergeFruit.StartedFinishGame || _mergeFruit.GameState != GameState.Game || _mergeFruit.ShowTaskReward) {
		    _startWaitingFinishTime = 0f; ResetRedAnimation(); return;
		}
		// Native expression: sprite.bounds.max.y - deadline > sprite.bounds.size.y * .75.
		Bounds b = _sprite ? _sprite.bounds : _circleCollider2D.bounds;
		if (b.max.y - _mergeFruit.DeadPositionY() > b.size.y * 0.75f) {
		    _startWaitingFinishTime += Time.deltaTime;
		    if (_startWaitingFinishTime > .5f) StartRedAnimation();
		    if (_startWaitingFinishTime > 3.5f) _mergeFruit.FinishGame();
		} else { _startWaitingFinishTime = 0f; ResetRedAnimation(); }
		DropOutDestroy();
	}

	private void DropOutDestroy()
	{
		// Native reference: FruitItem_DropOutDestroy_1876a20.cpp
		if (transform.position.y < -25f) RetireRecovered();
	}

	[IteratorStateMachine(typeof(_003CDestroyFruit_003Ed__33))]
	public IEnumerator DestroyFruit(Action action = null)
	{
		// Recovery adapter; see RECOVERY.md.
		RetireRecovered();
		action?.Invoke();
		yield break;
	}

	public void ClearForFinish()
	{
		// Native reference: FruitItem_ClearForFinish_1876b74.cpp
		StopAllAnimationCoroutines();
		if (_rigidbody2D) _rigidbody2D.linearVelocity = Vector2.zero;
	}

	public void Reset()
	{
	}

	[IteratorStateMachine(typeof(_003CDelay_003Ed__36))]
	private IEnumerator Delay(float duration, Action action)
	{
		// Recovery adapter; see RECOVERY.md.
		yield return new WaitForSeconds(duration);
		action?.Invoke();
	}

	private void StartRedAnimation()
	{
		// Native reference: FruitItem_StartRedAnimation_1876878.cpp
		_isRedAnimationStarted = true;
		if (_sprite) _sprite.color = Color.Lerp(Color.white, new Color(1f,.35f,.35f), .5f + .5f * Mathf.Sin(Time.time * 12f));
	}

	private void StopRedAnimation()
	{
		// Native reference: FruitItem_StopRedAnimation_18768b8.cpp
		ResetRedAnimation();
	}

	private void ResetRedAnimation()
	{
		// Native reference: FruitItem_ResetRedAnimation_1876994.cpp
		_isRedAnimationStarted = false;
		if (_sprite) _sprite.color = Color.white;
	}

	public bool IsShowingToolEffect()
	{
		// Native reference: FruitItem_IsShowingToolEffect_1876cd0.cpp
		return _toolEffect && _toolEffect.activeSelf;
	}

	public void ShowToolEffect()
	{
		// Native reference: FruitItem_ShowToolEffect_1876ce8.cpp
		if (_toolEffect) _toolEffect.SetActive(true);
	}

	public void HideToolEffect()
	{
		// Native reference: FruitItem_HideToolEffect_1876bd0.cpp
		if (_toolEffect) _toolEffect.SetActive(false);
		SwitchNormalStates();
	}

	public void HideToolEffectWithoutNormalStates()
	{
		// Native reference: FruitItem_HideToolEffectWithoutNormalStates_1876d10.cpp
		if (_toolEffect) _toolEffect.SetActive(false);
	}

	public void SwitchFinishedStates()
	{
		// Native reference: FruitItem_SwitchFinishedStates_1876c9c.cpp
		_currentSpriteState = E_SpriteState.Failed;
		if (_sprite && _failedSprite) _sprite.sprite = _failedSprite;
	}

	private void SwitchNormalStates()
	{
		// Native reference: FruitItem_SwitchNormalStates_1875f40.cpp
		_currentSpriteState = E_SpriteState.Noraml;
		if (_sprite && _normalSprite) _sprite.sprite = _normalSprite;
	}

	private void SwitchBlinkStates()
	{
		// Native reference: FruitItem_SwitchBlinkStates_1876d2c.cpp
		_currentSpriteState = E_SpriteState.Blink;
		if (_sprite && _blinkSprite) _sprite.sprite = _blinkSprite;
	}

	public void StartWaitingBlinkCoroutine()
	{
	}

	private void StopWaitingBlinkCoroutine()
	{
	}

	private void StopBlinkCoroutine()
	{
	}

	public void StopAllAnimationCoroutines()
	{
		// Native reference: FruitItem_StopAllAnimationCoroutines_1876404.cpp
		StopAllCoroutines();
		ResetRedAnimation();
	}

	private int GetCurrentCombo(FruitItem fruit)
	{
		// Native reference: FruitItem_GetCurrentCombo_1876d84.cpp
		int count = Mathf.Max(ComboCount, fruit.ComboCount);
		StopComboCheck(); fruit.StopComboCheck();
		return count;
	}

	private void StopComboCheck()
	{
		// Native reference: FruitItem_StopComboCheck_1876bb8.cpp
		ComboCount = 0;
		if (checkComboEndCoroutine != null) StopCoroutine(checkComboEndCoroutine);
		checkComboEndCoroutine = null;
	}

	private void CleanLastComboEffect()
	{
	}

	private void StartWaitingForCombo()
	{
		// Native reference: FruitItem_StartWaitingForCombo_1876de4.cpp
		if (checkComboEndCoroutine != null) StopCoroutine(checkComboEndCoroutine);
		checkComboEndCoroutine = StartCoroutine(WaitingComboEnd());
	}

	private GameObject ShowComboEffect()
	{
		return null;
	}

	private ComboEffect[] FindAllEffects()
	{
		return null;
	}

	[IteratorStateMachine(typeof(_003CWaitingComboEnd_003Ed__64))]
	private IEnumerator WaitingComboEnd()
	{
		// Recovery adapter; see RECOVERY.md.
		yield return new WaitForSeconds(1f);
		if (ComboCount > 2) RecoveredGameFlow.Instance?.ShowCombo(ComboCount);
		ComboCount = 0; checkComboEndCoroutine = null;
	}

	private void CheckPenetration(FruitItem item)
	{
	}

	public void ClearMaterialFactor(float time, float duration)
	{
	}

	public void ResetMaterialFactor()
	{
	}

	private void RecordMergeCountForLog()
	{
	}

	private void RecordComboCountForLog()
	{
	}

	public void RecordFruitMax()
	{
	}

	private void LogFruitMerge()
	{
	}

	private void OnCollisionEnter2D(Collision2D other)
	{
		// Native reference: FruitItem_OnCollisionEnter2D_1877ce8.cpp
		if (IsMerged || !_mergeFruit || _mergeFruit.StartedFinishGame) return;
		var fruit = other.collider.GetComponentInParent<FruitItem>();
		if (fruit) { SetCollided(fruit); if (CanMerge(fruit)) Merge(fruit); else PlayTouchSound(); }
		else { IsCollided = true; PlayTouchSound(); }
	}

	private void StartCollisionDirectionScaleAnimation(Vector3 collisionNormal)
	{
	}

	private ContactPoint2D FindMaxVelocityContact(Collision2D collision)
	{
		return default;
	}

	private void SetCollided(FruitItem fruit)
	{
		// Native reference: FruitItem_SetCollided_1877e2c.cpp
		IsCollided = true;
		if (fruit) fruit.IsCollided = true;
		if (_mergeFruit) _mergeFruit.CheckRedLine();
	}

	private bool CanMerge(FruitItem fruit)
	{
		// Native reference: FruitItem_CanMerge_18780a0.cpp
		return fruit && m_FruitType == fruit.m_FruitType && !IsMerged && !fruit.IsMerged;
	}

	private void SetMerged(FruitItem fruit)
	{
		// Native reference: FruitItem_SetMerged_1878850.cpp
		IsMerged = true;
		if (fruit) fruit.IsMerged = true;
	}

	private void DestroyOldFruits(FruitItem fruit)
	{
		// Native reference: FruitItem_DestroyOldFruits_187886c.cpp
		RetireRecovered();
		if (fruit) fruit.RetireRecovered();
	}

	private void Merge(FruitItem fruit)
	{
		// Native reference: FruitItem_Merge_18780dc.cpp
		if (!CanMerge(fruit)) return;
		SetMerged(fruit);
		Vector3 position = (transform.position + fruit.transform.position) * 0.5f;
		int combo = GetCurrentCombo(fruit);
		if (m_FruitType != FruitType.Fruit11) {
		    var created = _mergeFruit.CreateFruitItem((int)m_FruitType + 1, position);
		    if (created) {
		        var next = created.GetComponent<FruitItem>();
		        next.isPlayTouchSound = true; next.ComboCount = combo + 1;
		        next.StartWaitingForCombo(); next.ReleaseDown(); next.PlayCreateAnimation();
		        next.UpdateScoreUI(); next.UpdateMergeExp(); next.PlayMergeParticle(position);
		        RecoveredGameFlow.Instance?.RecordFruit((int)next.m_FruitType);
		    }
		} else { PlayDestroyParticle(position); }
		DestroyOldFruits(fruit);
		RecoveredGameFlow.Instance?.PlaySound("fruit_merge");
		_mergeFruit.QueueSave();
	}

	private void UpdateScoreUI()
	{
		// Native reference: FruitItem_UpdateScoreUI_187905c.cpp
		RecoveredGameFlow.Instance?.AddScore(m_MergeScore);
	}

	private void UpdateMergeExp()
	{
		// Native reference: FruitItem_UpdateMergeExp_187898c.cpp
		if (_mergeFruit) _mergeFruit.expMergeCount++;
	}

	private void PlayMergeParticle(Vector3 pos)
	{
		// Native reference: FruitItem_PlayMergeParticle_1878dc4.cpp
		RecoveredGameFlow.Instance?.Burst(pos, _sprite ? _sprite.color : Color.white);
	}

	private void PlayDestroyParticle(Vector3 pos)
	{
		// Native reference: FruitItem_PlayDestroyParticle_1879178.cpp
		RecoveredGameFlow.Instance?.Burst(pos, new Color(1f,.75f,.2f));
	}

	private void PlayCreateAnimation()
	{
		// Native reference: FruitItem_PlayCreateAnimation_1878c14.cpp
		StartCoroutine(RecoveredPop());
	}

	public void UpdateAnimation(Vector3 pos)
	{
	}

	private void PlayTouchSound()
	{
		// Native reference: FruitItem_PlayTouchSound_1878410.cpp
		if (!isPlayTouchSound) { isPlayTouchSound = true; RecoveredGameFlow.Instance?.PlaySound("fruit_floor1"); }
	}

	private void PlayMergeSound()
	{
	}

	private void PlayComboSound()
	{
	}

	private void PlayMergeVibrate()
	{
	}
}
