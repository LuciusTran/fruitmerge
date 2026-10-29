using UnityEngine;

public abstract class Singleton<T> : MonoBehaviour where T : MonoBehaviour
{
	private static T instance;

	public static T Instance => null;

	public virtual void Awake()
	{
	}
}
