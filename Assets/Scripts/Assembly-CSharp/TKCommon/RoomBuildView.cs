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
	public class RoomBuildView : View
	{
		[CompilerGenerated]
		private sealed class _003CTicketFlyLoopCoroutine_003Ed__39 : IEnumerator<object>, IEnumerator, IDisposable
		{
			private int _003C_003E1__state;

			private object _003C_003E2__current;

			public RoomBuildView _003C_003E4__this;

			public float flyDuration;

			private int _003CintervalCoins_003E5__2;

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
			public _003CTicketFlyLoopCoroutine_003Ed__39(int _003C_003E1__state)
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

		private RectTransform m_trans_ticket;

		private Image m_img_ItemProgress;

		private RectTransform m_trans_Money;

		private Text m_txt_ItemTicket;

		private RectTransform m_trans_test;

		private Dropdown m_drop_Room;

		private Button m_btn_AutoFinish;

		private RectTransform m_trans_ComingSoon;

		private RectTransform m_trans_BuildDisable;

		private Text m_txt_TicketDisable;

		private RectTransform m_trans_BaseTicket;

		private RectTransform m_trans_Mask;

		private RectTransform m_trans_BuildEnable;

		private Text m_txt_TicketEnable;

		private RectTransform m_trans_JuiceBar;

		private Text m_txt_roomName;

		private Image m_img_GiftProgress;

		private Image m_img_Giftbox;

		private RectTransform m_trans_GiftBomb;

		private Text m_txt_GiftProgress;

		private Image m_img_box1;

		private Text m_txt_box1Text;

		private Image m_img_box2;

		private Text m_txt_box2Text;

		private Image m_img_box3;

		private Text m_txt_box3Text;

		private RectTransform m_trans_TicketAnimationRoot;

		private bool isBuyingItem;

		private Coroutine mStopTicketScaleCoroutine;

		private Coroutine mTicketFlyCoroutine;

		private Tweener m_NumberTweener;

		private int _logicRemainingTickets;

		private int _visualCurrentTickets;

		private int _cachedTotalTicket;

		private int _pendingFlyingAmount;

		[SerializeField]
		private GameObject m_BuyingEffectPrefab;

		[SerializeField]
		private Sprite[] boxSprites;

		private BuildHouse mBuildHouse;

		private bool _fromGame;

		private void GetBindComponents(GameObject go)
		{
		}

		[DoNotRename]
		public void OnBuildBtnPressed()
		{
		}

		[DoNotRename]
		public void OnBuildBtnReleased()
		{
		}

		private void StartTicketFlyLoop(float flyDuration)
		{
		}

		[IteratorStateMachine(typeof(_003CTicketFlyLoopCoroutine_003Ed__39))]
		private IEnumerator TicketFlyLoopCoroutine(float flyDuration)
		{
			return null;
		}

		private void OnSingleTicketArrived(int amountConsumed, bool isFinalTransaction)
		{
		}

		private void TriggerBuyItem(int lastAmountConsumed)
		{
		}

		private void StopTicketFly()
		{
		}

		private void StopBuildingAnimation()
		{
		}

		private void SingleTicketFlyEffect(float flyDuration, Action startAction = null, Action endAction = null)
		{
		}

		private Vector2 ConvertRectTransformPosition(RectTransform targetRect, RectTransform newParentRect)
		{
			return default;
		}

		private void StartBuildBtnScaleAnimation()
		{
		}

		private void StopBuildBtnScaleAnimation()
		{
		}

		private void StartItemTicketScaleAnimation(float delayDuration)
		{
		}

		private void StopItemTicketScaleAnimation(float delayDuration)
		{
		}

		private void StopTicketScaleCoroutine()
		{
		}

		private void ShowStagedReward(string roomName, int stage)
		{
		}

		public override void Init(params object[] data)
		{
		}

		private void OnEnable()
		{
		}

		private void OnDisable()
		{
		}

		private void OnDestroy()
		{
		}

		private void RefreshAllTickets()
		{
		}

		private void UseTicketsForEnableButton(int cost)
		{
		}

		private void RefreshEnableButtonTickets(int ticket)
		{
		}

		private void NextRoom()
		{
		}

		private void ShowRoomMask()
		{
		}

		public void HideRoomMask()
		{
		}

		public void EnableLongPress()
		{
		}

		public void DisableLongPress()
		{
		}

		private void RefreshRoomName()
		{
		}

		public override void Show()
		{
		}

		public override void Close()
		{
		}

		[DoNotRename]
		public void OnGiftBombEnd()
		{
		}

		private void GetBuildHouse()
		{
		}

		private void EnterBuilding()
		{
		}

		private void RefreshTicketPos(Vector3 ticketPos, int itemCost, int itemTotal, Action completeAction = null)
		{
		}

		[DoNotRename]
		public void OnBackBtnClicked()
		{
		}

		[DoNotRename]
		public void OnBuildBtnClicked()
		{
		}

		private void OpenPlayGameAndDestroyRoom()
		{
		}

		private void CloseRoomBuildView()
		{
		}

		private void MarkOldStagedRewardsAsCollected(int finishedGift, int totalGift, string currentRoomName)
		{
		}

		public void RefreshBoxImages()
		{
		}

		private void InitTest()
		{
		}

		private void AutoFinishRoom()
		{
		}
	}
}
