using OPS.Obfuscator.Attribute;

[DoNotObfuscateClass]
public class MBridgeRevenueParamsEntity
{
	public const string ATTRIBUTION_PLATFORM_APPSFLYER = "AppsFlyer";

	public const string ATTRIBUTION_PLATFORM_ADJUST = "Adjust";

	public const string ATTRIBUTION_PLATFORM_TENJIN = "Tenjin";

	public const string ATTRIBUTION_PLATFORM_SINGULAR = "Singular";

	public const string ATTRIBUTION_PLATFORM_KOCHAVA = "Kochava";

	public const string ATTRIBUTION_PLATFORM_BRANCH = "Branch";

	public const string ATTRIBUTION_PLATFORM_REYUN = "Reyun";

	public const string ATTRIBUTION_PLATFORM_SOLAR_ENGINE = "SolarEngine";

	public const string ATTRIBUTION_PLATFORM_APP_METRICA = "AppMetrica";

	public const string ATTRIBUTION_PLATFORM_MY_TRACKER = "MyTracker";

	public const string ATTRIBUTION_PLATFORM_ADBRIX = "Adbrix";

	public const string ATTRIBUTION_PLATFORM_APSALAR = "Apsalar";

	public const string ATTRIBUTION_PLATFORM_DATA_EYE = "DataEye";

	public const string ATTRIBUTION_PLATFORM_FOX = "Fox";

	public const string ATTRIBUTION_PLATFORM_TALKING_DATA = "TalkingData";

	public const string ATTRIBUTION_PLATFORM_UMENG = "Umeng";

	public const string ATTRIBUTION_PLATFORM_AIRVRIDGE = "Airbridge";

	public const string ATTRIBUTION_PLATFORM_JUST_TRACK = "JustTrack";

	public string attributionPlatformName;

	public string attributionPlatformUserId;

	public MaxSdkBase.AdInfo AdInfo;

	public void SetMaxAdInfo(MaxSdkBase.AdInfo adInfo)
	{
	}

	public MBridgeRevenueParamsEntity(string attributionPlatformName, string attributionPlatformUserId)
	{
	}
}
