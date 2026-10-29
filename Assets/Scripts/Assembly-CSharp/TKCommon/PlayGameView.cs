using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using DG.Tweening;
using Game.Controller;
using OPS.Obfuscator.Attribute;
using UnityEngine;
using UnityEngine.UI;

namespace TKCommon
{
	public class PlayGameView : View
	{
		[CompilerGenerated]
		private sealed class _003CAdsBreakWaiting_003Ed__188 : IEnumerator<object>, IEnumerator, IDisposable
		{
			private int _003C_003E1__state;

			private object _003C_003E2__current;

			public PlayGameView _003C_003E4__this;

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
			public _003CAdsBreakWaiting_003Ed__188(int _003C_003E1__state)
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
		private sealed class _003CCountdownCoroutine_003Ed__221 : IEnumerator<object>, IEnumerator, IDisposable
		{
			private int _003C_003E1__state;

			private object _003C_003E2__current;

			public PlayGameView _003C_003E4__this;

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
			public _003CCountdownCoroutine_003Ed__221(int _003C_003E1__state)
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
		private sealed class _003CDelayAdjustGameTopByBoxSpriteTop_003Ed__102 : IEnumerator<object>, IEnumerator, IDisposable
		{
			private int _003C_003E1__state;

			private object _003C_003E2__current;

			public PlayGameView _003C_003E4__this;

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
			public _003CDelayAdjustGameTopByBoxSpriteTop_003Ed__102(int _003C_003E1__state)
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
		private sealed class _003CDelayAdsPlay_003Ed__190 : IEnumerator<object>, IEnumerator, IDisposable
		{
			private int _003C_003E1__state;

			private object _003C_003E2__current;

			public PlayGameView _003C_003E4__this;

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
			public _003CDelayAdsPlay_003Ed__190(int _003C_003E1__state)
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
		private sealed class _003CHideLeagueTipCoroutine_003Ed__180 : IEnumerator<object>, IEnumerator, IDisposable
		{
			private int _003C_003E1__state;

			private object _003C_003E2__current;

			public float delay;

			public PlayGameView _003C_003E4__this;

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
			public _003CHideLeagueTipCoroutine_003Ed__180(int _003C_003E1__state)
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
		private sealed class _003CRefreshDescPosCoroutine_003Ed__116 : IEnumerator<object>, IEnumerator, IDisposable
		{
			private int _003C_003E1__state;

			private object _003C_003E2__current;

			public PlayGameView _003C_003E4__this;

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
			public _003CRefreshDescPosCoroutine_003Ed__116(int _003C_003E1__state)
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

		private RectTransform m_trans_Test;

		private Slider m_slider_blinkMin;

		private Text m_txt_blinkMin;

		private Slider m_slider_blinkMax;

		private Text m_txt_blinkMax;

		private Button m_btn_DropLine;

		private Button m_btn_AddScore;

		private RectTransform m_trans_Root;

		private RectTransform m_trans_PlayGame;

		private RectTransform m_trans_GameTop;

		private Text m_txt_Score;

		private Text m_txt_HistoryScore;

		private RectTransform m_trans_Task;

		private Image m_img_Progress;

		private Image m_img_Target;

		private RectTransform m_trans_ImgGift;

		private Text m_txt_Progress;

		private RectTransform m_trans_Level;

		private Image m_img_ProgressLevel;

		private Text m_txt_Level;

		private Image m_img_NextPreview;

		private RectTransform m_trans_RemoveAd;

		private NormalClickButton m_btn_League;

		private NormalClickButton m_btn_Task;

		private NormalClickButton m_btn_Room;

		private RectTransform m_trans_GameBottom;

		private RectTransform m_trans_bannerBottom;

		private RectTransform m_trans_ToolPanel;

		private RectTransform m_trans_Clean;

		private RectTransform m_trans_Bomb;

		private RectTransform m_trans_Upgrade;

		private RectTransform m_trans_Shake;

		private RectTransform m_trans_Settings;

		private RectTransform m_trans_LevelPreviews;

		private Image m_img_1_Preview;

		private Image m_img_2_Preview;

		private Image m_img_3_Preview;

		private Image m_img_4_Preview;

		private Image m_img_5_Preview;

		private Image m_img_6_Preview;

		private Image m_img_7_Preview;

		private Image m_img_8_Preview;

		private Image m_img_9_Preview;

		private Image m_img_10_Preview;

		private Image m_img_11_Preview;

		private Image m_img_Combo;

		private RectTransform m_trans_Tip;

		private Image m_img_TargetFruit;

		private Text m_txt_TargetNum;

		private RectTransform m_trans_ToolDesc;

		private RectTransform m_trans_DescBg;

		private Image m_img_Tool;

		private Text m_txt_ToolDescription;

		private NormalClickButton m_btn_Cancel;

		private RectTransform m_trans_shakeGuide;

		private RectTransform m_trans_ShakeCountdown;

		private Text m_txt_ShakeCountdown;

		private RectTransform m_trans_Skin;

		private RectTransform m_trans_Panel;

		private NormalClickButton m_btn_Close;

		private ScrollRect m_scrollrect_Skin;

		private MergeFruit mMergeFruit;

		private bool IsFinishing;

		private int mHistoryScore;

		private int mCurrentScore;

		private Camera _fruitCamera;

		private int UseContinueCount;

		private Coroutine showExpLevelUpCoroutine;

		private string _currentUsingSkin;

		private const int NonIphoneXToolPanelTopPadding = 20;

		private const float GameTopTargetGap = 220f;

		private const float GameTopMaxMoveUpHeight = 60f;

		[SerializeField]
		private Sprite m_RemoveAdsIconSprite;

		private bool _hasGameTopOriginPosition;

		private Vector2 _gameTopOriginPosition;

		private Coroutine _adjustGameTopCoroutine;

		private RectTransform _imgTitleRectTransform;

		private Image _removeAdIconImage;

		private Sprite _subscriptionIconSprite;

		private Action ExpUpAction;

		private int _nextItemIndex;

		private TaskItemData _currentTask;

		private List<SkinItemData> _skinItemData;

		private bool _hasCreated;

		private int _unlockGrade;

		private Coroutine _leagueTipCoroutine;

		private Vector2 _leagueTipOriginPos;

		private bool _isLeagueTipInitialized;

		private string _lastShowTargetSkinName;

		private Sprite _targetIcon;

		private Coroutine delayAdCoroutine;

		private Coroutine adsBreakWaitingCoroutine;

		private bool isBannerShow;

		[Header("Combo动画图")]
		[SerializeField]
		private Sprite[] m_ComboSprites;

		private int lastComboCount;

		private Coroutine _countdownCoroutine;

		private Sequence mShowToolDescriptionSeq;

		private Sequence mCloseToolDescriptionSeq;

		private float _countdownTime;

		public bool IsShowGame { get; private set; }

		private void GetBindComponents(GameObject go)
		{
		}

		public static bool ShouldStartNextGameDirectly(bool nextGameDirectly)
		{
			return false;
		}

		public override void Init(params object[] data)
		{
		}

		private void InitForTest()
		{
		}

		[DoNotRename]
		public void OnTestDropLine()
		{
		}

		private void AddScore()
		{
		}

		private void RefreshToolPanel(bool hasAd)
		{
		}

		private void OnDestroy()
		{
		}

		private void ResetCameraPositionOnDestroy()
		{
		}

		public override void Show()
		{
		}

		public override void ReShow(string lastViewName)
		{
		}

		public override void ReActive(string lastViewName)
		{
		}

		public override void Close()
		{
		}

		private void BindListeners()
		{
		}

		private void UnbindListeners()
		{
		}

		private void DefaultInGame()
		{
		}

		private void StartMergeFruit()
		{
		}

		private void ScheduleAdjustGameTopByBoxSpriteTop()
		{
		}

		[IteratorStateMachine(typeof(_003CDelayAdjustGameTopByBoxSpriteTop_003Ed__102))]
		private IEnumerator DelayAdjustGameTopByBoxSpriteTop()
		{
			return null;
		}

		private void AdjustGameTopByBoxSpriteTopImmediately()
		{
		}

		private void AdjustGameTopByBoxSpriteTop()
		{
		}

		private void CacheGameTopOriginPosition()
		{
		}

		private bool TryGetImgTitleVerticalScreenRange(out float bottomScreenY, out float topScreenY)
		{
			bottomScreenY = default;
			topScreenY = default;
			return false;
		}

		private RectTransform GetImgTitleRectTransform()
		{
			return null;
		}

		private Camera GetUICamera()
		{
			return null;
		}

		private void ShowStarterPackDialog()
		{
		}

		private void ClearAllMergeFruits()
		{
		}

		public float GetBottomHeight()
		{
			return 0f;
		}

		private void InitForUI()
		{
		}

		private void InitToolPanelLayout()
		{
		}

		private void ResetLevelPreviewsForNextGame()
		{
		}

		[IteratorStateMachine(typeof(_003CRefreshDescPosCoroutine_003Ed__116))]
		private IEnumerator RefreshDescPosCoroutine()
		{
			return null;
		}

		private void RefreshExp()
		{
		}

		private void UpdateTaskUI()
		{
		}

		public void UpdateScore(int score)
		{
		}

		public void UpdateNextPreview(int index)
		{
		}

		private void OnSwitchSkin(string currentSkinName)
		{
		}

		private void ExpLevelUp()
		{
		}

		private void ShowExpLevelUpDialog()
		{
		}

		private void StopShowExpLevelUpCoroutine()
		{
		}

		private void RefreshRemoveAd()
		{
		}

		private void RefreshSubscriptionIcon()
		{
		}

		private void CacheSubscriptionIcon()
		{
		}

		public void StartFinishGame()
		{
		}

		private void GoReviveDialog()
		{
		}

		private void ReviveGame()
		{
		}

		private void PlayFinishAd()
		{
		}

		private void GoFinishView()
		{
		}

		private void GoHome(int ticket)
		{
		}

		private void GoHomeDirectly(int ticket)
		{
		}

		private void GoHomeDirectly(int ticket, bool allowJumpToRoomBuild)
		{
		}

		private bool ShouldStartNextGameDirectly()
		{
			return false;
		}

		private void GoNextGameDirectly(int ticket)
		{
		}

		private void AddGameCompleteReward(int ticket)
		{
		}

		private void EnterGameAnimation(float duration, Action endAction)
		{
		}

		private void ExitGameAnimation(Action endAction)
		{
		}

		private void InitGameView()
		{
		}

		private void RefreshCurrentScore()
		{
		}

		private void RefreshScoreTxt()
		{
		}

		[DoNotRename]
		public void OnRemoveBtnClicked()
		{
		}

		[DoNotRename]
		public void OnRemoveAdBottomClicked()
		{
		}

		private void RestoreBannerAfterSubscriptionClosed()
		{
		}

		public Vector3 GiftPos()
		{
			return default;
		}

		private void RefreshEntryRedPoints()
		{
		}

		private static void SetButtonRedPoint(Component button, bool active)
		{
		}

		[DoNotRename]
		public void OnLeagueBtnClicked()
		{
		}

		[DoNotRename]
		public void OnTaskBtnClicked()
		{
		}

		[DoNotRename]
		public void OnRoomBtnClicked()
		{
		}

		[DoNotRename]
		public void OnSettingsBtnClicked()
		{
		}

		private void HomeAction()
		{
		}

		private void RestartAction()
		{
		}

		private void QuitGame()
		{
		}

		[DoNotRename]
		public void OnEnterGame()
		{
		}

		[DoNotRename]
		public void OnDiamondViewClicked()
		{
		}

		[DoNotRename]
		public void OnBackBtnClicked()
		{
		}

		private void CheckDialogClose()
		{
		}

		private void ShowRateUsDialogForPlayLevel()
		{
		}

		private void ShowRateUsDialogForExpLevel()
		{
		}

		public void ShowRateUsDialog()
		{
		}

		private void CreateSkinItems(List<SkinItemData> skinItems)
		{
		}

		public void ShowSkinList()
		{
		}

		public void CloseSkinList()
		{
		}

		private void RefreshSkinItems(List<SkinItemData> skinItems)
		{
		}

		private void MergeFruitItem(int grade)
		{
		}

		private void TryUnlockGrade(int grade)
		{
		}

		public void ShowLeagueTip(float displayDuration = 3f)
		{
		}

		[IteratorStateMachine(typeof(_003CHideLeagueTipCoroutine_003Ed__180))]
		private IEnumerator HideLeagueTipCoroutine(float delay)
		{
			return null;
		}

		private void AdjustForBanner(bool show)
		{
		}

		private void RefreshAdBottom(bool hasAd)
		{
		}

		private void StartAdsBreakWaiting()
		{
		}

		private void StopAdsBreakWaiting()
		{
		}

		[IteratorStateMachine(typeof(_003CAdsBreakWaiting_003Ed__188))]
		private IEnumerator AdsBreakWaiting()
		{
			return null;
		}

		private void ShowAdBreakView()
		{
		}

		[IteratorStateMachine(typeof(_003CDelayAdsPlay_003Ed__190))]
		private IEnumerator DelayAdsPlay()
		{
			return null;
		}

		private void StopDelayAdCoroutine()
		{
		}

		private void BindComboAnimationEvent()
		{
		}

		private void ResetComboAnimation()
		{
		}

		public void ShowComboAnimation(int comboCount)
		{
		}

		private void LogFinishGame()
		{
		}

		private int GetTickets()
		{
			return 0;
		}

		private void OnApplicationQuit()
		{
		}

		private void OnApplicationPause(bool pauseStatus)
		{
		}

		private void SaveCurrentScore()
		{
		}

		[DoNotRename]
		public void OnCleanToolClicked()
		{
		}

		[DoNotRename]
		public void OnBombToolClicked()
		{
		}

		[DoNotRename]
		public void OnUpgradeToolClicked()
		{
		}

		[DoNotRename]
		public void OnShakeToolClicked()
		{
		}

		private void HideTop()
		{
		}

		private void ShowTop()
		{
		}

		private void ShowToolDescriptionAnim()
		{
		}

		private void CloseToolDescriptionAnim(Action completeAction)
		{
		}

		private void OnBtnCancel()
		{
		}

		private void DoCleanTool()
		{
		}

		private void DoBombTool()
		{
		}

		private void DoUpgradeTool()
		{
		}

		private void DoShakeTool()
		{
		}

		private void StartCountdown()
		{
		}

		private void StopCountdown()
		{
		}

		[IteratorStateMachine(typeof(_003CCountdownCoroutine_003Ed__221))]
		private IEnumerator CountdownCoroutine()
		{
			return null;
		}
	}
}
