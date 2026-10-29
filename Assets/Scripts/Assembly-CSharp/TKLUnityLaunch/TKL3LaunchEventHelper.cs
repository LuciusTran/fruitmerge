namespace TKLUnityLaunch
{
	public class TKL3LaunchEventHelper : Singleton<TKL3LaunchEventHelper>
	{
		private const string APPSFLYER = "appsflyer";

		private const string USERPATH = "user_path";

		public LogLaunchEvent EventLogger;

		public void LogAppsflyerCategoryAndMediaSource(string category, string mediaSource)
		{
		}

		public void LogUserModeChange(string oldUserMode, string newUserMode)
		{
		}

		public void LogLoadingSceneShow()
		{
		}

		public void LogMainSceneShow()
		{
		}
	}
}
