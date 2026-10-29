using System;
using System.Collections.Generic;

namespace Loxodon.Framework.Prefs
{
	public class DefaultSerializer : ISerializer
	{
		private class ComparerImpl<T> : IComparer<T> where T : ITypeEncoder
		{
			public int Compare(T x, T y)
			{
				return 0;
			}
		}

		private readonly object _lock;

		private static readonly ComparerImpl<ITypeEncoder> comparer;

		private List<ITypeEncoder> encoders;

		public virtual void AddTypeEncoder(ITypeEncoder encoder)
		{
		}

		public virtual void RemoveTypeEncoder(ITypeEncoder encoder)
		{
		}

		public virtual object Deserialize(string input, Type type)
		{
			return null;
		}

		public virtual string Serialize(object value)
		{
			return null;
		}
	}
}
