using System;

namespace LitJson.Extensions
{
	[AttributeUsage(AttributeTargets.Property | AttributeTargets.Field, AllowMultiple = false)]
	public sealed class JsonIgnore : Attribute
	{
	}
}
