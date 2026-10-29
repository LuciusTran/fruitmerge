using System;
using OPS.Obfuscator.Attribute;

[Serializable]
[DoNotObfuscateClass]
public class RoomItemModel
{
	public string ItemName;

	public int ItemTickets;
}
