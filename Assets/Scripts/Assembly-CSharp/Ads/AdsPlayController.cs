using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using GoogleMobileAds.Api;
using Loxodon.Log;
using StarRising.AdEngine;

namespace Ads
{
	public class AdsPlayController
	{
		[CompilerGenerated]
		private sealed class _003CDelayFrame_003Ed__88 : IEnumerator<object>, IEnumerator, IDisposable
		{
			private int _003C_003E1__state;

			private object _003C_003E2__current;

			public Action callback;

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
			public _003CDelayFrame_003Ed__88(int _003C_003E1__state)
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

		private static readonly ILog log;

		private CommonEnum.INTERSTITIAL_PLACE playType;

		private CommonEnum.REWARDED_PLACE rewardPlayType;

		private static readonly object _lock;

		private static AdsPlayController _instance;

		private Action<bool> completeAction;

		private DateTime lastPlayTime;

		private bool isFirstAdPlay;

		private bool isInterstitialDisplayed;

		private bool isRewardedReceivedReward;

		public static bool isDisplayingAds;

		private bool m_isBannerCreate;

		private bool m_HasCallShownBanner;

		private bool m_HasLoadedBanner;

		private static readonly TimeSpan AdmobAppOpenExpireDuration;

		private static readonly TimeSpan AdmobAppOpenForegroundCooldown;

		private string admobAppOpenAdUnitId;

		private AppOpenAd admobAppOpenAd;

		private DateTime admobAppOpenLoadedTime;

		private DateTime lastAdmobAppOpenClosedTime;

		private bool isAdmobSdkInitialized;

		private bool isAdmobSdkInitializing;

		private bool pendingLoadAdmobAppOpen;

		private bool isAdmobAppOpenLoading;

		private bool isAdmobAppOpenShowing;

		private bool isAdmobAppOpenDisplayed;

		private bool admobAppOpenShowOnForeground;

		private bool pendingShowAdmobAppOpenAfterLoad;

		private DateTime admobAppOpenStartupShowStartTime;

		private bool hasHandledAdmobAppOpenStartupShow;

		private bool hasRegisteredAdmobAppOpenLifecycle;

		private Action<bool> admobAppOpenCompleteAction;

		public long startWatchAdsTimestamp;

		private bool isInitedOldId;

		private AdInfo willShowRewardAdInfo;

		private AdInfo willShowInterstitialAdInfo;

		public static AdsPlayController Instance => null;

		private bool isBannerCreate
		{
			get
			{
				return false;
			}
			set
			{
			}
		}

		public void Init()
		{
		}

		public void UpdateAdIds()
		{
		}

		public void TryCreateBanner()
		{
		}

		public void ShowBanner()
		{
		}

		public void HideBanner()
		{
		}

		public void DestroyBanner()
		{
		}

		public void SetInputEnabled(bool enabled)
		{
		}

		private void InitAdmobAppOpenAd()
		{
		}

		private void LoadAdmobAppOpenAd(bool showAfterLoadOnSplash = false)
		{
		}

		public bool IsAdmobAppOpenReady()
		{
			return false;
		}

		private void BeginAdmobAppOpenSplashLoadWait()
		{
		}

		private bool CanAutoShowAdmobAppOpenAdAfterSplashLoad()
		{
			return false;
		}

		public bool TryShowAdmobAppOpenAdOnSplashClosed()
		{
			return false;
		}

		private void TryShowAdmobAppOpenAdOnForeground()
		{
		}

		public bool TryShowAdmobAppOpenAd(Action<bool> completeHandler = null)
		{
			return false;
		}

		public bool IsRewardedReady()
		{
			return false;
		}

		public void StartPlayRewarded(CommonEnum.REWARDED_PLACE placetype, Action<bool> completeHandler, Action startAction = null)
		{
		}

		private void PlayReward(CommonEnum.REWARDED_PLACE placetype, Action<bool> completeHandler, Action startAction = null, bool replace = false)
		{
		}

		public void StartPlayInterstitial(CommonEnum.INTERSTITIAL_PLACE placetype, Action<bool> completeHandler)
		{
		}

		public void StartPlayInterstitial(CommonEnum.INTERSTITIAL_PLACE placetype, Action<bool> completeHandler, int level = -1)
		{
		}

		public void StartPlayInterstitial(CommonEnum.INTERSTITIAL_PLACE placetype, Action<bool> completeHandler, bool needShowNotReadyDialog = false, bool ignoreCheckInterval = false, int level = -1)
		{
		}

		public void StartPlayIncentiveInterstitial(CommonEnum.INTERSTITIAL_PLACE placetype, Action<bool> completeHandler, int level = -1)
		{
		}

		public bool IsInterstitialReady(CommonEnum.INTERSTITIAL_PLACE placetype, bool ignoreCheckInterval = false)
		{
			return false;
		}

		private void IntervalStartPlayInterstitial(CommonEnum.INTERSTITIAL_PLACE placetype, Action<bool> completeHandler, bool needShowNotReadyDialog = false, bool ignoreCheckInterval = false, int level = -1)
		{
		}

		private void OnAdDisplayedHandler(AdInfo info)
		{
		}

		private void OnAdDisplayFailedHandler(AdInfo info, int errorCode, string errorMessage)
		{
		}

		private void OnAdRevenuePaidHandler(AdRevenueInfo adRevenueInfo)
		{
		}

		private void OnAdLoadedHandler(AdInfo info)
		{
		}

		private void OnAdLoadFailedHandler(AdInfo info, int errorCode, string errorMessage)
		{
		}

		private void OnAdHiddenHandler(AdInfo info)
		{
		}

		private void OnAdClickedHandler(AdInfo adInfo)
		{
		}

		private static string SnapshotToJson(PoolSnapshot snapshot)
		{
			return null;
		}

		private void OnAdRewardReceivedHandler(AdInfo info, AdRewardInfo reward)
		{
		}

		private void EnsureAdmobSdkInitialized()
		{
		}

		private void RegisterAdmobAppOpenLifecycle()
		{
		}

		private void OnApplicationFocusChanged(bool hasFocus)
		{
		}

		private void OnApplicationQuitting()
		{
		}

		private bool ShouldBlockAdmobAppOpenAd()
		{
			return false;
		}

		private bool IsAdmobAppOpenAdEnabled()
		{
			return false;
		}

		private void RegisterAdmobAppOpenAdCallbacks(AppOpenAd ad)
		{
		}

		private void FinishAdmobAppOpenAd(bool isPlayed)
		{
		}

		private void DestroyAdmobAppOpenAd()
		{
		}

		private void TrackAdmobAppOpenRevenue(AppOpenAd ad, AdValue adValue)
		{
		}

		private void TrackAdmobAppOpenMBridgeRevenue(string adUnitId, string networkName, string currency, double revenue, string precision, Dictionary<string, object> adNetworkUnitInfo)
		{
		}

		private void TrackAdmobAppOpenMBridgeRevenueWithAdjustId(string adUnitId, string networkName, string currency, double revenue, string precision, Dictionary<string, object> adNetworkUnitInfo, string adjustAdid)
		{
		}

		private Dictionary<string, object> ConvertAdmobUnitMapping(AdapterResponseInfo adapterInfo)
		{
			return null;
		}

		public void SetDelay(Action callback)
		{
		}

		[IteratorStateMachine(typeof(_003CDelayFrame_003Ed__88))]
		public IEnumerator DelayFrame(Action callback)
		{
			return null;
		}

		private string GetReason(CommonEnum.REWARDED_PLACE placetype)
		{
			return null;
		}

		private string GetReason(CommonEnum.INTERSTITIAL_PLACE placetype)
		{
			return null;
		}

		private bool ShouldPlay(CommonEnum.INTERSTITIAL_PLACE placetype, bool log, bool resetFirst = true)
		{
			return false;
		}
	}
}
