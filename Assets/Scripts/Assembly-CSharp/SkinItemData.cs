using System;
using OPS.Obfuscator.Attribute;

[Serializable]
[DoNotObfuscateClass]
public class SkinItemData
{
	public string Name;

	public string Type;

	public int UnlockValue;
}
