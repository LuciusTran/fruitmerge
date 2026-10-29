public class SingletonClass<T> where T : new()
{
	private static readonly object _lock;

	private static T _instance;

	public static T Instance => default;
}
