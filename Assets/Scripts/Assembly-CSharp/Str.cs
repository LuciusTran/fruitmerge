using System;

public static class Str
{
	public enum PadTypes
	{
		Both = 0,
		Left = 1,
		Right = 2
	}

	public static bool Is(string pattern, string value)
	{
		return false;
	}

	public static string AsteriskWildcard(string pattern)
	{
		return null;
	}

	public static string[] Split(string str, int length = 1)
	{
		return null;
	}

	public static string Repeat(string str, int num)
	{
		return null;
	}

	public static string Shuffle(string str, int? seed = null)
	{
		return null;
	}

	public static int SubstringCount(string str, string subStr, int start = 0, int? length = null, StringComparison comparison = StringComparison.CurrentCultureIgnoreCase)
	{
		return 0;
	}

	public static string Reverse(string str)
	{
		return null;
	}

	public static string Pad(string str, int length, string padStr = null, PadTypes type = PadTypes.Right)
	{
		return null;
	}

	public static string After(string str, string search)
	{
		return null;
	}

	public static bool Contains(string str, params string[] needles)
	{
		return false;
	}

	public static string Replace(string[] matches, string replace, string str)
	{
		return null;
	}

	public static string ReplaceFirst(string match, string replace, string str)
	{
		return null;
	}

	public static string ReplaceLast(string match, string replace, string str)
	{
		return null;
	}

	public static string Random(int length = 16, int? seed = null)
	{
		return null;
	}

	public static string Truncate(string str, int length, object separator = null, string mission = null)
	{
		return null;
	}
}
