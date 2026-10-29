using System;

namespace Loxodon.Framework.Prefs
{
	public class JsonTypeEncoder : ITypeEncoder
	{
		private int priority;

		public int Priority
		{
			get
			{
				return 0;
			}
			set
			{
			}
		}

		public bool IsSupport(Type type)
		{
			return false;
		}

		public string Encode(object value)
		{
			return null;
		}

		public object Decode(Type type, string value)
		{
			return null;
		}
	}
}
