using System;
using System.Text;

public static class TextFormatter
{
	[ThreadStatic]
	private static StringBuilder s_CachedStringBuilder;

	public static StringBuilder GetStringBuilder()
	{
		return null;
	}

	public static string Format(string format, object arg0)
	{
		return null;
	}

	public static string Format(string format, object arg0, object arg1)
	{
		return null;
	}

	public static string Format(string format, object arg0, object arg1, object arg2)
	{
		return null;
	}

	public static string Format(string format, params object[] args)
	{
		return null;
	}

	private static void CheckCachedStringBuilder()
	{
	}
}
