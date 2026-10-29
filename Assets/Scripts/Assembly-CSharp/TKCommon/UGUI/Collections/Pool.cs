using System;
using System.Collections.Generic;

namespace TKCommon.UGUI.Collections
{
	internal class Pool<T> where T : new()
	{
		private readonly Stack<T> _stack;

		private readonly Action<T> _actionOnGet;

		private readonly Action<T> _actionOnRecycle;

		public int count { get; private set; }

		public int activeCount => 0;

		public int inactiveCount => 0;

		public Pool(Action<T> actionOnGet, Action<T> actionOnRecycle)
		{
		}

		public T Get()
		{
			return default;
		}

		public void Recycle(T element)
		{
		}

		public void Clear()
		{
		}
	}
}
