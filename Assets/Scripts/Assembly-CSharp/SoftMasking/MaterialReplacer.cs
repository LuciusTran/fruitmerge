using System;
using System.Collections.Generic;
using System.Reflection;

namespace SoftMasking
{
	public static class MaterialReplacer
	{
		private static List<IMaterialReplacer> _globalReplacers;

		public static IEnumerable<IMaterialReplacer> globalReplacers => null;

		private static IEnumerable<IMaterialReplacer> CollectGlobalReplacers()
		{
			return null;
		}

		private static bool IsMaterialReplacerType(Type t)
		{
			return false;
		}

		private static IMaterialReplacer TryCreateInstance(Type t)
		{
			return null;
		}

		private static IEnumerable<Type> GetTypesSafe(this Assembly asm)
		{
			return null;
		}
	}
}
