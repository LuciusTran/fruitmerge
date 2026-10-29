using System;
using OPS.Obfuscator.Attribute;

[Serializable]
[DoNotObfuscateClass]
public class ShopItemModel
{
	public string product_id;

	public bool removeAd;

	public int coin;

	public int cleanTool;

	public int bombTool;

	public int upgradeTool;

	public int shakeTool;
}
