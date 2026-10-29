using Loxodon.Log;

public sealed class Env
{
	private static readonly ILog log;

	private static CommonEnum.AB_MODE_TYPE? abMode;

	private static bool abTestEnabled;

	public static bool TestMode { get; set; }

	public static CommonEnum.AB_MODE_TYPE ABMode => CommonEnum.AB_MODE_TYPE.A;

	public static bool ABTestEnabled
	{
		get
		{
			return false;
		}
		set
		{
		}
	}

	public static string UpdataVersionUrl => null;

	public static string RemoteAssetsUrl => null;

	public static string APPDownloadUrl { get; set; }

	public static string AppContentPath => null;

	public static string StorePath => null;

	public static string LocalAssetVersionPath => null;

	public static string RemoteAssetVersionPath => null;

	public static string AppAssetVersionPath => null;

	public static string LocalAssetListPath => null;

	public static string AppAssetListPath => null;

	public static string RemoteAssetListPath => null;

	public static string GetPlatformName()
	{
		return null;
	}
}
