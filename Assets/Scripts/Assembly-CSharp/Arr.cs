using System;

public static class Arr
{
	public static T[] Merge<T>(params T[][] sources)
	{
		return null;
	}

	public static T[] Rand<T>(T[] source, int number = 1)
	{
		return null;
	}

	public static T[] Shuffle<T>(T[] source, int? seed = null)
	{
		return null;
	}

	public static T[] Splice<T>(ref T[] source, int start, int? length = null, T[] replSource = null)
	{
		return null;
	}

	public static T[][] Chunk<T>(T[] source, int size)
	{
		return null;
	}

	public static T[] Fill<T>(int start, int length, T value, T[] source = null)
	{
		return null;
	}

	public static T[] Filter<T>(T[] source, Predicate<T> predicate)
	{
		return null;
	}

	public static T[] Map<T>(T[] source, Func<T, T> callback)
	{
		return null;
	}

	public static T Pop<T>(ref T[] source)
	{
		return default;
	}

	public static int Push<T>(ref T[] source, params T[] elements)
	{
		return 0;
	}

	public static string Reduce<T>(T[] source, Func<object, T, string> callback, object initial = null)
	{
		return null;
	}

	public static T[] Slice<T>(T[] source, int start, int? length = null)
	{
		return null;
	}

	public static T Shift<T>(ref T[] source)
	{
		return default;
	}

	public static int Unshift<T>(ref T[] source, params T[] elements)
	{
		return 0;
	}

	public static T[] Reverse<T>(T[] source, int start = 0, int? length = null)
	{
		return null;
	}

	public static int IndexOf<T>(T[] source, params T[] match)
	{
		return 0;
	}
}
