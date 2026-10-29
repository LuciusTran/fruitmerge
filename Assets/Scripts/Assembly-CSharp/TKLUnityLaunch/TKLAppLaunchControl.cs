using System;

namespace TKLUnityLaunch
{
	public class TKLAppLaunchControl : Singleton<TKLAppLaunchControl>
	{
		public Action ReLoginSuccessOnChannelChanged;

		public Action LoginSuccess;

		public Action<string> LoginFailed;

		public void StartLaunch(IAppTracker tracker = null)
		{
		}

		private void AppFlyerCategoryDidConfirmed(bool changed)
		{
		}

		private void login()
		{
		}

		private void loginSucceed()
		{
		}

		private void loginFailed(string error)
		{
		}

		private void relogin()
		{
		}

		private void RefreshConfig(LoginAPOutput loginAPOutput)
		{
		}

		private void InitIAP()
		{
		}
	}
}
