using UnityEngine;

public static class MonoExtensions
{
	public static T Must<T>(this GameObject go) where T : Component
	{
		return null;
	}

	public static T Must<T>(this RectTransform rect) where T : Component
	{
		return null;
	}

	public static T Must<T>(this Transform trans) where T : Component
	{
		return null;
	}

	public static void RemoveComponent<T>(this Transform trans, bool allowDestroyingAssets = false) where T : Component
	{
	}

	public static void RemoveComponent<T>(this GameObject go, bool allowDestroyingAssets = false) where T : Component
	{
	}
}
