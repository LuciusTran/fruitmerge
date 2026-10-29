using System;
using System.Collections.Generic;
using System.Diagnostics;

public static class Guard
{
	[DebuggerNonUserCode]
	public static void Requires<TException>(bool condition) where TException : Exception, new()
	{
	}

	[DebuggerNonUserCode]
	public static void NotEmptyOrNull(string argumentValue, string argumentName)
	{
	}

	[DebuggerNonUserCode]
	public static void CountGreaterZero<T>(IList<T> argumentValue, string argumentName)
	{
	}

	[DebuggerNonUserCode]
	public static void ElementNotEmptyOrNull(IList<string> argumentValue, string argumentName)
	{
	}

	[DebuggerNonUserCode]
	public static void NotNull(object argumentValue, string argumentName)
	{
	}
}
