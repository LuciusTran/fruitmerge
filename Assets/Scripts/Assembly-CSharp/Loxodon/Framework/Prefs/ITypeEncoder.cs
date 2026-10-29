using System;

namespace Loxodon.Framework.Prefs
{
	public interface ITypeEncoder
	{
		int Priority { get; set; }

		bool IsSupport(Type type);

		string Encode(object value);

		object Decode(Type type, string value);
	}
}
