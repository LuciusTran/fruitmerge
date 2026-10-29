using System.Collections.Generic;

namespace TKCommon.UGUI.Collections
{
	public static class ListPool<T>
	{
		private static readonly Pool<List<T>> _listPool;

		public static List<T> Get()
		{
			return null;
		}

		public static void Recycle(List<T> element)
		{
		}
	}
}
