using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Game.Controller;
using OPS.Obfuscator.Attribute;
using UnityEngine;
using UnityEngine.UI;

public class HomeView : View
{
	[CompilerGenerated]
	private sealed class _003CCollectTicket_003Ed__10 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public HomeView _003C_003E4__this;

		public int ticket;

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
		public _003CCollectTicket_003Ed__10(int _003C_003E1__state)
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
	private sealed class _003CWaitAndShowDailyQuest_003Ed__25 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

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
		public _003CWaitAndShowDailyQuest_003Ed__25(int _003C_003E1__state)
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
	private GameObject m_TestPanel;

	[SerializeField]
	private TicketView m_TicketView;

	[SerializeField]
	private DiamondView m_DiamondView;

	[Header("皮肤详情页相关")]
	[SerializeField]
	private Button _btnInfoClose;

	[SerializeField]
	private RectTransform _infoRoot;

	private Camera _uICamera;

	public List<SkinItemData> SkinItemData;

	private static bool m_HasCheckedFirstLaunch;

	public override void Init(params object[] data)
	{
	}

	private void CloseInfo()
	{
	}

	public void ShowInfoRoot(RectTransform btnInfoTrans, string skinName)
	{
	}

	[IteratorStateMachine(typeof(_003CCollectTicket_003Ed__10))]
	private IEnumerator CollectTicket(int ticket)
	{
		return null;
	}

	public override void Show()
	{
	}

	private void CheckAndShowDialogs()
	{
	}

	public override void Close()
	{
	}

	private void InitTest()
	{
	}

	[DoNotRename]
	public void OnAddGoldBtnClicked()
	{
	}

	[DoNotRename]
	public void OnAddMoneyBtnClicked(int money)
	{
	}

	[DoNotRename]
	public void OnUnlockSkinBtnClicked()
	{
	}

	private void GetSkinData()
	{
	}

	private void ShowDailyReward()
	{
	}

	private void ShowSubscriptionDailyReward()
	{
	}

	private void CheckWeeklyLeagueReward()
	{
	}

	private void TryGainRankSkin()
	{
	}

	private void CheckAndShowDailyQuest()
	{
	}

	[IteratorStateMachine(typeof(_003CWaitAndShowDailyQuest_003Ed__25))]
	private IEnumerator WaitAndShowDailyQuest()
	{
		return null;
	}

	private void ShowRemoveAdDialog()
	{
	}
}
