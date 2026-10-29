using TKLClient;
using UnityEngine;

public sealed class Global
{
	public static bool IS_IPHONEX;

	public static bool IS_IPAD;

	public static bool waitForCheckPenetration;

	public static Vector2 ScaleSize;

	public static Vector3 CamerePosition;

	public static bool CdnAccessible;

	public static bool IsNewHistoryScore;

	public static int MergeNumber;

	public static int Merge2Number;

	public static int Merge3Number;

	public static int Merge4Number;

	public static int Merge5Number;

	public static int Merge6Number;

	public static int Merge7Number;

	public static int Merge8Number;

	public static int Merge9Number;

	public static int Merge10Number;

	public static int Merge11Number;

	public static int ComboNumber;

	public static int Combo2Number;

	public static int Combo3Number;

	public static int Combo4Number;

	public static int Combo5Number;

	public static int ComboxxNumber;

	public static int DotMax;

	public static int LevelUpCount;

	public static int IntVideoCount;

	public static int RewardVideoCount;

	public static int UseToolCount;

	public static int ClickNumber;

	public static int LeagueFruitNumber;

	public static bool IsFirstLaunch;

	public static bool IsSecondLaunch;

	private static bool isBannerActive;

	public static bool UseLogAndTest;

	public const string AssetListFileName = "assetList.txt";

	public const string AssetVersionFileName = "assetVersion.txt";

	public const string UNITY_KEY_REMOTE_CONFIG = "REMOTECONFIG";

	public const string UNITY_KEY_NOADS_ACTIVE = "NOADS_ACTIVE";

	public const string UNITY_KEY_STARTER_BUNDLE_ACTIVE = "STARTER_BUNDLE_ACTIVE";

	public const string UNITY_KEY_SUBSCRIPTION_ACTIVE = "SUBCACHESTATE";

	public const string UNITY_KEY_EDITOR_VIP = "UNITY_KEY_EDITOR_VIP";

	public static bool UNITY_IPHONE;

	public static bool IS_USESHA1_BUNDLES;

	public static bool UNITY_ANDROID;

	public static bool UNITY_EDITOR;

	public static bool IS_EDITOR;

	public const string UNITY_KEY_AB_MODE = "ABMODE";

	private static float bannerHeight;

	private static TKLSwitcherConfig remoteConfig;

	private static TKLSwitcherConfig localRemoteConfig;

	public static bool IsActiveBgm
	{
		get
		{
			return false;
		}
		set
		{
		}
	}

	public static bool IsActiveSound
	{
		get
		{
			return false;
		}
		set
		{
		}
	}

	public static bool IsActiveVibrate
	{
		get
		{
			return false;
		}
		set
		{
		}
	}

	public static bool SkipSubscription => false;

	public static string Base_Url => null;

	public static bool IsBannerActive
	{
		get
		{
			return false;
		}
		set
		{
		}
	}

	public static float BannerHeight => 0f;

	public static bool CloseAds
	{
		get
		{
			return false;
		}
		set
		{
		}
	}

	public static TKLSwitcherConfig RemoteConfig
	{
		get
		{
			return null;
		}
		set
		{
		}
	}

	public static string GetABModePrefix()
	{
		return null;
	}

	public static string GetABModeSuffix()
	{
		return null;
	}

	public static bool IsBottomBannerValid()
	{
		return false;
	}

	private static float getBannerHeight()
	{
		return 0f;
	}
}
