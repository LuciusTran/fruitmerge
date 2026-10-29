using System.Runtime.CompilerServices;
using UnityEngine;

namespace DebugUtil
{
	public class Debug
	{
		[MethodImpl(MethodImplOptions.AggressiveInlining)]
		public static void Log(object message)
		{
		}

		[MethodImpl(MethodImplOptions.AggressiveInlining)]
		public static void Log(object message, string colorName)
		{
		}

		[MethodImpl(MethodImplOptions.AggressiveInlining)]
		public static void Log(object message, Color color)
		{
		}

		[MethodImpl(MethodImplOptions.AggressiveInlining)]
		public static void LogWarning(object message)
		{
		}

		[MethodImpl(MethodImplOptions.AggressiveInlining)]
		public static void LogError(object message)
		{
		}
	}
}
