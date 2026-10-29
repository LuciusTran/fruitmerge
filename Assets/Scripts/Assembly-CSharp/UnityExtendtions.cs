using UnityEngine;

public static class UnityExtendtions
{
	public static Transform AddEmptyChild(this Transform trans, string name = "newChild")
	{
		return null;
	}

	public static void AddChild(this Transform parent, RectTransform child)
	{
	}

	public static void ResetTransform(this Transform trans)
	{
	}

	public static Transform GetLastChild(this Transform trans)
	{
		return null;
	}

	public static Transform FindChildIf(this Transform trans, string name)
	{
		return null;
	}

	public static T FindChildComponentIf<T>(this Transform trans, string childName) where T : Component
	{
		return null;
	}

	public static Component GetComponentIf(this GameObject obj, Component comp)
	{
		return null;
	}

	public static T GetComponentIf<T>(this GameObject obj) where T : Component
	{
		return null;
	}
}
