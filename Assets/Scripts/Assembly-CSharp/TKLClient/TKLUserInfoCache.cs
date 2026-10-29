using System;

namespace TKLClient
{
	public class TKLUserInfoCache : SingletonClass<TKLUserInfoCache>
	{
		private const string TKLMessageSetUser = "set_user";

		private const string TKLMessageUserCardClaimed = "user_card_claimed";

		private const string UNITY_LOCAL_SAVED_USER_INFO_KEY = "unity_local_user_info";

		private Action userFirstLoadedObservers;

		private Action userReLoadedObservers;

		private Action coinsChangedObservers;

		private Action userClaimCardObservers;

		private TKLUser currentUser;

		public long ServerTimeUponFirstLogin;

		public TKLUser CurrentUser => null;

		public bool is_login => false;

		public void AddUserFirstLoadedObserver(Action observer)
		{
		}

		public void RemoveUserFirstLoadedObserver(Action observer)
		{
		}

		public void AddUserReLoadedObservers(Action observer)
		{
		}

		public void RemoveUserReLoadedObservers(Action observer)
		{
		}

		public void AddUserClaimCardObservers(Action observer)
		{
		}

		public void RemoveUserClaimCardObservers(Action observer)
		{
		}

		public void AddCoinsChangedObserver(Action observer)
		{
		}

		public void RemoveCoinsChangedObserver(Action observer)
		{
		}

		public void ReloadUser(TKLUser user, long serverTime = -1L)
		{
		}

		public void UpdateCoinsInfo(TKLUser user)
		{
		}

		public void DeleteUserFromDevice()
		{
		}

		private TKLUser findLocalUser()
		{
			return null;
		}

		private void saveUserInfo(TKLUser user)
		{
		}

		private TKLUser fetchLocalSavedUser()
		{
			return null;
		}

		private string setUser(string userJson)
		{
			return null;
		}

		private string userCardClaimed(string userJson)
		{
			return null;
		}
	}
}
