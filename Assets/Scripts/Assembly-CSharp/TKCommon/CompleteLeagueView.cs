using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Game.Controller;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace TKCommon
{
	public class CompleteLeagueView : View
	{
		[CompilerGenerated]
		private sealed class _003C_003Ec__DisplayClass100_0
		{
			public CompleteLeagueView _003C_003E4__this;

			public bool isFirstHit;

			public Action onComplete;

			public RankItem rankItem;

			public int flyCompletedCount;
		}

		[CompilerGenerated]
		private sealed class _003CBaseScrollToTarget_003Ed__103 : IEnumerator<object>, IEnumerator, IDisposable
		{
			private int _003C_003E1__state;

			private object _003C_003E2__current;

			public CompleteLeagueView _003C_003E4__this;

			public int index;

			public float time;

			private float _003CscrollPosition_003E5__2;

			private float _003Cduration_003E5__3;

			private float _003CelapsedTime_003E5__4;

			private float _003CstartingPos_003E5__5;

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
			public _003CBaseScrollToTarget_003Ed__103(int _003C_003E1__state)
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
		private sealed class _003CDelay_003Ed__109 : IEnumerator<object>, IEnumerator, IDisposable
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
			public _003CDelay_003Ed__109(int _003C_003E1__state)
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
		private sealed class _003CPlayFlyFruitAnimation_003Ed__100 : IEnumerator<object>, IEnumerator, IDisposable
		{
			private int _003C_003E1__state;

			private object _003C_003E2__current;

			public CompleteLeagueView _003C_003E4__this;

			public Action onComplete;

			public int scoreAdd;

			private _003C_003Ec__DisplayClass100_0 _003C_003E8__1;

			private Vector3 _003CtargetPos_003E5__2;

			private Sprite _003CfruitSprite_003E5__3;

			private Vector3 _003CstartPos_003E5__4;

			private Vector2 _003CtargetSize_003E5__5;

			private Vector3 _003CtargetScale_003E5__6;

			private int _003CflyCount_003E5__7;

			private float _003CspawnInterval_003E5__8;

			private int _003Ci_003E5__9;

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
			public _003CPlayFlyFruitAnimation_003Ed__100(int _003C_003E1__state)
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

		private ScrollRect m_scrollrect_League;

		private Image m_img_FirstAvatar;

		private Text m_txt_First;

		private TextMeshProUGUI m_tmpui_FirstScore;

		private Image m_img_First;

		private Image m_img_SecondAvatar;

		private Text m_txt_Second;

		private TextMeshProUGUI m_tmpui_SecondScore;

		private Image m_img_Second;

		private Image m_img_ThirdAvatar;

		private Text m_txt_Third;

		private TextMeshProUGUI m_tmpui_ThirdScore;

		private Image m_img_Third;

		private Text m_txt_CountDown;

		private Image m_img_Bg;

		private Image m_img_mine_avatar;

		private Image m_img_border;

		private Text m_txt_UserName;

		private Image m_img_WeeklyScore;

		private TextMeshProUGUI m_tmpui_WeeklyScore;

		private Image m_img_TargetIcon;

		private Image m_img_RankScore;

		private Text m_txt_ScoreTitle;

		private TextMeshProUGUI m_tmpui_RankScore;

		private Text m_txt_rankIndex;

		private RectTransform m_trans_rank1;

		private RectTransform m_trans_rank2;

		private RectTransform m_trans_rank3;

		private RectTransform m_trans_Bubble;

		private Text m_txt_Bubble;

		private NormalClickButton m_btn_Continue;

		private ScrollRect m_scrollrect_League_Pad;

		private Image m_img_FirstAvatar_Pad;

		private Text m_txt_First_Pad;

		private TextMeshProUGUI m_tmpui_FirstScore_Pad;

		private Image m_img_First_Pad;

		private Image m_img_SecondAvatar_Pad;

		private Text m_txt_Second_Pad;

		private TextMeshProUGUI m_tmpui_SecondScore_Pad;

		private Image m_img_Second_Pad;

		private Image m_img_ThirdAvatar_Pad;

		private Text m_txt_Third_Pad;

		private TextMeshProUGUI m_tmpui_ThirdScore_Pad;

		private Image m_img_Third_Pad;

		private Text m_txt_CountDown_Pad;

		private Image m_img_Bg_Pad;

		private Image m_img_mine_avatar_Pad;

		private Image m_img_border_Pad;

		private Text m_txt_UserName_Pad;

		private Image m_img_WeeklyScore_Pad;

		private TextMeshProUGUI m_tmpui_WeeklyScore_Pad;

		private Image m_img_TargetIcon_Pad;

		private Image m_img_RankScore_Pad;

		private Text m_txt_ScoreTitle_Pad;

		private TextMeshProUGUI m_tmpui_RankScore_Pad;

		private Text m_txt_rankIndex_Pad;

		private RectTransform m_trans_rank1_Pad;

		private RectTransform m_trans_rank2_Pad;

		private RectTransform m_trans_rank3_Pad;

		private RectTransform m_trans_Bubble_Pad;

		private Text m_txt_Bubble_Pad;

		private NormalClickButton m_btn_Continue_Pad;

		[SerializeField]
		private GameObject _itemPrefab;

		[SerializeField]
		private GameObject _itemPrefab_Pad;

		private int centerIndex;

		private float itemHeight;

		private float itemSpacing;

		private float contentTop;

		private Action _onClose;

		private List<DataManager.LeagueFakeData> _leagueDataList;

		private Button _btnContinue;

		private ScrollRect _scrollRect;

		private GameObject _prefab;

		private bool _usePadAdaptation;

		private Image _imgFirst;

		private Image _imgFirstAvatar;

		private Text _txtFirst;

		private TextMeshProUGUI _tmpuiFirstScore;

		private Image _imgSecond;

		private Image _imgSecondAvatar;

		private Text _txtSecond;

		private TextMeshProUGUI _tmpuiSecondScore;

		private Image _imgThird;

		private Image _imgThirdAvatar;

		private Text _txtThird;

		private TextMeshProUGUI _tmpuiThirdScore;

		private bool _isClosed;

		private int _moveToIndex;

		private int _lastIndex;

		private int _startScore;

		private int _targetScore;

		private GameObject _autoScrollCloneItem;

		private void GetBindComponents(GameObject go)
		{
		}

		public override void Init(params object[] data)
		{
		}

		public override void Show()
		{
		}

		public override void Close()
		{
		}

		private void OnDestroy()
		{
		}

		private void RefreshCountDown()
		{
		}

		private void PopulateList()
		{
		}

		private void PlayRankUpAnimation()
		{
		}

		[IteratorStateMachine(typeof(_003CPlayFlyFruitAnimation_003Ed__100))]
		private IEnumerator PlayFlyFruitAnimation(int scoreAdd, Action onComplete)
		{
			return null;
		}

		private void StartAutoScroll(int mineIndex, int up, Action finishCallback = null)
		{
		}

		private void AutoAddCount(int mineIndex, int up, GameObject newItem, float updateCountDuration, Action finishCallback = null)
		{
		}

		[IteratorStateMachine(typeof(_003CBaseScrollToTarget_003Ed__103))]
		private IEnumerator BaseScrollToTarget(int index, float time = 0.3f)
		{
			return null;
		}

		private void JumpToPosition(int index)
		{
		}

		private float GetTargetY(int index, float itmHeight, float itmSpacing, float cntTop)
		{
			return 0f;
		}

		private GameObject CopyGameObject(GameObject source, Transform newParent)
		{
			return null;
		}

		private void DisableUserTouch()
		{
		}

		private void EnableUserTouch()
		{
		}

		[IteratorStateMachine(typeof(_003CDelay_003Ed__109))]
		protected new IEnumerator Delay(float duration, Action action)
		{
			return null;
		}

		private void PlayLeagueFruitMergeSound()
		{
		}

		private void PlayLeagueRankLandingFeedback()
		{
		}
	}
}
