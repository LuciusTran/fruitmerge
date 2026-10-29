namespace TKLClient.Utils
{
	public class Singleton<T> where T : new()
	{
		private static object _lock;

		private static T _instance;

		public static T Instance => default;

		public virtual void OnStart()
		{
		}
	}
}
