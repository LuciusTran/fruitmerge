using System;
using System.Collections.Generic;
using OPS.Obfuscator.Attribute;

[Serializable]
[DoNotObfuscateClass]
public class SkinData
{
	public List<SkinItemData> SkinItems;
}
