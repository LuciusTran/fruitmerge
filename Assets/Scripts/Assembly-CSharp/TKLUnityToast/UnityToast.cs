namespace TKLUnityToast
{
	public class UnityToast
	{
		private IUnityToastBridge bridge;

		private static object _lock;

		private static UnityToast _instance;

		public static UnityToast Instance => null;

		public void ShowToast(string message, double duration = 2.0)
		{
		}

		public void ShowToast(string message, double duration, UnityToastPosition position = UnityToastPosition.Center)
		{
		}

		public void ShowToastActivity(UnityToastPosition position = UnityToastPosition.Center)
		{
		}

		public void HideToastActivity()
		{
		}
	}
}
