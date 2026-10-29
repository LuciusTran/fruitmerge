using System;
using OPS.Obfuscator.Attribute;

[Serializable]
[DoNotObfuscateClass]
public class SortingLayerMask
{
	public int sortingLayerID;

	public string sortingLayerName;

	public SortingLayerMask(int layerID, string layerName)
	{
	}
}
