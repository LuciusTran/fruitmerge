using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using TKLClient;
using TKLUnityIAP;
using UnityEngine;

public class IAPItemManager : Singleton<IAPItemManager>
{
	private class product
	{
		public string id;

		public int index;

		public double price;

		public product(string ID, int Index)
		{
		}

		public product(string ID, double Price, int Index)
		{
		}
	}

	[CompilerGenerated]
	private sealed class _003CIAPInitialTimeout_003Ed__39 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public IAPItemManager _003C_003E4__this;

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
		public _003CIAPInitialTimeout_003Ed__39(int _003C_003E1__state)
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

	private bool m_IsSubscriptionActive;

	private bool m_IsNoAdsActive;

	private bool m_IsStarterBundleActive;

	private GameObject mask;

	public bool IsSubscriptionActive
	{
		get
		{
			return false;
		}
		set
		{
		}
	}

	public bool IsNoAdsActive
	{
		get
		{
			return false;
		}
		set
		{
		}
	}

	public bool IsStarterBundleActive
	{
		get
		{
			return false;
		}
		set
		{
		}
	}

	public static void UpdateSubscriptionStatusIsVip(bool isVip)
	{
	}

	public static void UpdateNoAdsStatus()
	{
	}

	public double GetPrice(string productId)
	{
		return 0.0;
	}

	public static string AdUserItemProductId()
	{
		return null;
	}

	public static TKLIAPInfo AdUserItemInfo()
	{
		return null;
	}

	public static TKLIAPInfo StrictUserItemInfo()
	{
		return null;
	}

	public static TKLIAPInfo ReleaseModeItemInfo()
	{
		return null;
	}

	public static TKLIAPInfo WeeklyItemInfo()
	{
		return null;
	}

	public static TKLIAPInfo WeeklyNoFreeItemInfo()
	{
		return null;
	}

	public static TKLIAPInfo MonthlyItemInfo()
	{
		return null;
	}

	public static TKLIAPInfo YearlyItemInfo()
	{
		return null;
	}

	public static TKLIAPInfo RemoveAdsItemInfo()
	{
		return null;
	}

	public static TKLUnityIAPConfigModel WeeklyItemModel()
	{
		return null;
	}

	public static TKLUnityIAPConfigModel WeeklyNoFreeItemModel()
	{
		return null;
	}

	public static TKLUnityIAPConfigModel MonthlyItemModel()
	{
		return null;
	}

	public static TKLUnityIAPConfigModel YearlyItemModel()
	{
		return null;
	}

	public static TKLUnityIAPConfigModel AdUserItemModel()
	{
		return null;
	}

	public static TKLUnityIAPConfigModel ReleaseModeItemModel()
	{
		return null;
	}

	public static TKLUnityIAPConfigModel RemoveAdsItemModel()
	{
		return null;
	}

	public static List<TKLUnityIAPConfigModel> GetNonConsumableProductsModel()
	{
		return null;
	}

	public static List<TKLUnityIAPConfigModel> GetConsumableProductsModel()
	{
		return null;
	}

	public static List<TKLUnityIAPConfigModel> GetSubscriptionProductsModel()
	{
		return null;
	}

	private void PurchaseOnly(string productId, Action successCallback, string fromwhere, string successEvent, string failEvent, string missEvent)
	{
	}

	public void Purchase(string productId, Action successCallback, string fromwhere, string successEvent = "PurchaseProductSuccess", string failEvent = "PurchaseProductFailure", string missEvent = "PurchaseMissingSKU")
	{
	}

	private void RequestProductBeforePurchase(string productId, Action successCallback, string fromwhere, string successEvent, string failEvent, string missEvent)
	{
	}

	public void StartInitIAP(Callback<bool> isInitSuccess)
	{
	}

	[IteratorStateMachine(typeof(_003CIAPInitialTimeout_003Ed__39))]
	private IEnumerator IAPInitialTimeout()
	{
		return null;
	}

	public static List<TKLUnityIAPConfigModel> GetAllItemModels()
	{
		return null;
	}

	public static List<TKLIAPInfo> GetAllProductModels()
	{
		return null;
	}

	private static List<product> GetAllSubs()
	{
		return null;
	}

	private static List<product> GetAllItems()
	{
		return null;
	}

	public static TKLIAPInfo GetSubInfo(string remoteId, double remotePrize, int productIndex)
	{
		return null;
	}

	public static TKLUnityIAPConfigModel GetSubModel(string remoteId, int index)
	{
		return null;
	}

	public static TKLIAPInfo GetItemInfo(string remoteId, double remotePrize, int productIndex)
	{
		return null;
	}

	public static TKLUnityIAPConfigModel GetItemModel(string remoteId, int index)
	{
		return null;
	}
}
