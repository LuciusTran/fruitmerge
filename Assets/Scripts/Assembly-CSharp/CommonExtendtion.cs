using System;
using System.Collections.Generic;

public static class CommonExtendtion
{
	public static void Foreach<T, V>(this Dictionary<T, V> dic, Action<T, V> action)
	{
	}

	public static V GetValue<T, V>(this Dictionary<T, V> dic, T key)
	{
		return default;
	}

	public static List<V> GetValues<T, V>(this Dictionary<T, V> dic)
	{
		return null;
	}

	public static void SetValue<T, V>(this Dictionary<T, V> dic, T key, V value)
	{
	}
}
