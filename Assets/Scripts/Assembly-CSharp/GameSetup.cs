using Loxodon.Log;
using TKLGameSetup;
using TKLUnityLaunch;

public class GameSetup
{
	private static readonly ILog Log;

	private static bool hasSetup;

	private static GameSetupConfig appConfigBackup;

	public static string AppName;

	private static bool waitAdInit;

	public static bool firebaseIsReady;

	public static bool? IsIOS14Test;

	private static bool? isIosHighVersion;

	private static bool? isIosHighVersionReleaseMode;

	private static bool? existNormalApp;

	public static bool InDebugMode => false;

	public static bool IsIosHighVersion => false;

	public static bool IsIosHighVersionReleaseMode => false;

	public static bool ExistNormalApp => false;

	public static GameSetupConfig appConfig => null;

	public static string iOSAppId => null;

	static GameSetup()
	{
	}

	public static void ResetSetup()
	{
	}

	public static void StartSetup()
	{
	}

	private static void setUp()
	{
	}

	private static void configDebugMode()
	{
	}

	public static bool hadRequestedIDFA()
	{
		return false;
	}

	public static void recordRequestIDFA()
	{
	}

	private static void configIDFA()
	{
	}

	private static bool isATTUserAuthorized()
	{
		return false;
	}

	private static void RequestAppTrackingCallback()
	{
	}

	private static void configClient()
	{
	}

	private static void configMainThreadDispatcher()
	{
	}

	private static void configMediationSDK()
	{
	}

	private static void configEventLoggers()
	{
	}

	public static void configAds()
	{
	}

	public static void releaseModePopupIDFA()
	{
	}

	private static void startUnityLaunchProcess()
	{
	}

	private static void initFacebook()
	{
	}

	private static IAppTracker buildAppTracker()
	{
		return null;
	}
}
