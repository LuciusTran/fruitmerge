using System.Collections.Generic;
using LitJson;

namespace TKLClient
{
	public class TKLSwitcherConfig
	{
		public string onlineVersion;

		public string test_cdn;

		public string cdn;

		public string EventsNeedAddSuffixWhiteList;

		public double TKLoggerEventProbability;

		public bool AutoCheckConnect;

		public string NotificationTime;

		public bool RewardAdHasInterval;

		public bool PlayAdmobAppOpenAdOnlyNewUser;

		public float AdmobAppOpenStartupWaitSeconds;

		public int Interstitial_Play_Interval;

		public int Release_Interstitial_Play_Interval;

		public int Interstitial_First_Play_Interval;

		public int Release_First_Interstitial_Play_Interval;

		public double Play_Interstitial_Radio_BackApp;

		public double Release_Play_Interstitial_Radio_BackApp;

		public double Play_Interstitial_Radio_AdsBreak;

		public double Release_Play_Interstitial_Radio_AdsBreak;

		public double Play_Interstitial_Radio_FinishGame;

		public double Release_Play_Interstitial_Radio_FinishGame;

		public float SubscriptionLogRadio;

		public bool ShowSubscriptionWhenFirstLaunch;

		public bool ShowSubscriptionWhenLaunch;

		public bool ShowSubscriptionOnceOneDay;

		public bool NormalSubscriptionCloseSmall;

		public bool AdSubscriptionCloseSmall;

		public int AdUserSubsCloseShowingWaitSeconds;

		public int AdUserSubsCloseShowingWaitSecondsFor2;

		public string AdUserSubsBtnDesc;

		public string ad_user_product_id;

		public double ad_user_product_price;

		public string weekly_product_id;

		public double weekly_product_price;

		public string monthly_product_id;

		public double monthly_product_price;

		public string yearly_product_id;

		public double yearly_product_price;

		public string strictUserIapId;

		public double strictUserIapPrice;

		public string remove_ads_with_coin_product_id;

		public double remove_ads_with_coin_product_price;

		public string remove_ads_product_id;

		public double remove_ads_product_price;

		public string starter_bundle_product_id;

		public double starter_bundle_product_price;

		public string coin1_product_id;

		public double coin1_product_price;

		public string coin2_product_id;

		public double coin2_product_price;

		public string coin3_product_id;

		public double coin3_product_price;

		public string coin4_product_id;

		public double coin4_product_price;

		public List<string> TKLogWhiteList;

		public Dictionary<string, JsonData>[] ListABTestKeys;

		public Dictionary<string, JsonData>[] NewUserListABTestKeys;

		public Dictionary<string, Dictionary<string, object>> mediaConfig;

		public bool OpenTestLog;

		public bool EnableDebug;

		public bool EnableIOSRelease;

		public bool ShowFruitPreviews;

		public string DefaultSkin;

		public bool UseBox;

		public bool PlayAdWhenDone;

		public bool RemoveAdWithCoin_Home;

		public bool RemoveAdWithCoin_GameTop;

		public bool RemoveAdWithCoin_GameBottom;

		public bool ShowStarterPackDialog;

		public bool ShowRemoveAdDialog;

		public bool ShowFirstLaunchSubscribtion;

		public bool ShowRemoveAdIconForSubscription;

		public bool JumpToRoomBuild;

		public bool StartGameDirectly;

		public bool NextGameDirectlyForNewUser;

		public bool SwitchCoinsAndTickets;

		public bool EnableLocalCheck;

		public bool CheckReceiptResultIsUseful;

		public string ShopConfigRemoteVersion;

		public int SkinDataVersion;

		public int TaskDataVersion;

		public int LeagueDataVersion;

		public int RoomVersion;

		public int DailyQuestVersion;

		public float FM_Friction;

		public float FM_Bounce;

		public float FM_MergeOriginScale;

		public int FM_ExpPerLevel;

		public int FM_AddCoinPerLevel;

		public int FM_AddTicketPerLevel;

		public bool FM_EnableServerTimeCheck;

		public int FM_LeaderboardMaxScore;

		public int FM_AdLimitLevel;

		public int FM_ExpPerMerge;

		public int FM_LimitExpCount;

		public int FM_LimitExpPerMerge;

		public int UnlockLevelupLevel;

		public int UnlockBombLevel;

		public int UnlockClearLevel;

		public int UnlockShakeLevel;

		public int FM_ShowRateUsForFruitLevel;

		public int FM_ShowRateUsForExpLevel;

		public int FM_ShowRateUsForPlayLevel;

		public int FM_SmartJumpGamesCount;

		public bool FM_ShowAdsBreak;

		public int FM_AdsBreakWaitingTime;

		public bool FM_ShowExpLevelUpDialog;

		public int FM_ContinueUseLimitCount;

		public int FM_ContinueLimitExpLevel;

		public bool EnableTask;

		public int FM_DefaultCleanCount;

		public int FM_DefaultBombCount;

		public int FM_DefaultUpgradeCount;

		public int FM_DefaultShakeCount;

		public int FM_BuyToolCoins;

		public string Weekly_Premium_Free_Trial_product_id;

		public float Weekly_Premium_Free_Trial_product_price;

		public string Yearly_Premium_product_id;

		public float Yearly_Premium_product_price;

		public float FM_SubscriptionTicketBuffRatio;

		public List<ScoreRange2TicketModel> FM_ScoreRange2Ticket;

		public List<ScoreRange2TicketModel> FM_ScoreRange2Coin;

		private Dictionary<string, JsonData> GetCurrentABTestConfig(CommonEnum.AB_MODE_TYPE ABType, Dictionary<string, JsonData>[] abTestKeys)
		{
			return null;
		}

		internal void UpdateConfigWithABTestConfig()
		{
		}

		public bool IsNewUserForABTest()
		{
			return false;
		}

		public string UpdateConfigWithMediaConfig(string mediaSource, string campaign)
		{
			return null;
		}
	}
}
