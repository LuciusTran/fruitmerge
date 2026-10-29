namespace TKCommon
{
	public class DotEvent
	{
		public enum Reason
		{
			BeginPainting = 0,
			FinishPainting = 1,
			BackHome = 2,
			UnlockTrigger = 3,
			UnlockBackground = 4,
			UnlockDominoSkin = 5,
			AddCoins = 6,
			UnlockPicture = 7
		}

		public enum Where
		{
			FirstLaunch = 0,
			SecondLaunch = 1,
			VipBanner = 2,
			VipPicture = 3,
			VipTrigger = 4
		}

		public enum PurchaseStopReason
		{
			user_cancel = 0,
			error = 1
		}

		public enum Result
		{
			success = 0,
			failure = 1
		}

		public static void PurchaseProductSuccess(string where, int day, string productId)
		{
		}

		public static void NormalPurchaseSuccess(string where, int day, int productId)
		{
		}

		public static void NormalNewPurchaseSuccess(string where, int day, int productId)
		{
		}

		public static void StrictPurchaseSuccess(string where, int day, int productId)
		{
		}

		public static void ADUserPurchaseSuccess(string where, int day, int productId)
		{
		}

		public static void ShowLaunchSubscription(string where)
		{
		}

		public static void ShowNormalLaunchSubscription(string where)
		{
		}

		public static void ShowNormalNewLaunchSubscription(string where)
		{
		}

		public static void ShowStrictLaunchSubscription(string where)
		{
		}

		public static void ShowADUserLaunchSubscription(string where)
		{
		}

		public static void PurchaseProductFailure(string reason, string message)
		{
		}

		public static void CloseSubscription()
		{
		}

		public static void FirstLaunchUserState(bool hasAFStatus, bool isAdUser, bool hasConfig, bool isRelease, string ipconfig, int waitTime)
		{
		}

		public static void ReceiveAFCallback(string media_source, string campaign_id, string site_id, string af_status, float time)
		{
		}

		public static void ReceiveAppConfig(float time, Result status, string message)
		{
		}

		public static void StartWatchVideo(string reason, bool is_reward, double adValue)
		{
		}

		public static void FinishWatchVideo(string reason, bool is_reward, double money)
		{
		}

		public static void StartIntVideo(string reason)
		{
		}

		public static void FinishIntVideo(string reason)
		{
		}

		public static void StartRewardVideo(string reason)
		{
		}

		public static void FinishRewardVideo(string reason)
		{
		}

		public static void IntVideoNotReady()
		{
		}

		public static void RewardVideoNotReady(string place)
		{
		}

		public static void ShowIDFARequest2()
		{
		}

		public static void IDFARequest2GoSetting()
		{
		}

		public static void AllowIDFA1()
		{
		}

		public static void AllowIDFA2()
		{
		}

		public static void GetItem(string itemId, string where)
		{
		}

		private static void logEvent(string eventName, string key, string value)
		{
		}

		private static void logEvent(string eventName, string key1, string value1, string key2, string value2)
		{
		}

		private static void logEvent(string eventName, string key1, string value1, string key2, string value2, string key3, string value3)
		{
		}

		private static void logEvent(string eventName, string key1, string value1, string key2, string value2, string key3, string value3, string key4, string value4)
		{
		}

		private static void logEvent(string eventName, string key1, string value1, string key2, string value2, string key3, string value3, string key4, string value4, string key5, string value5)
		{
		}

		private static void logEvent(string eventName, string key1, string value1, string key2, string value2, string key3, string value3, string key4, string value4, string key5, string value5, string key6, string value6)
		{
		}

		public static int GetLinerInt(float time)
		{
			return 0;
		}
	}
}
