using System;
using System.Collections.Generic;
using OPS.Obfuscator.Attribute;

[Serializable]
[DoNotObfuscateClass]
public class ShopModel
{
	public List<ShopItemModel> RemoveAds;

	public ShopItemModel StartedBundle;

	public List<ShopItemModel> CoinsItem;
}
