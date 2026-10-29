using System;
using System.Collections.Generic;
using OPS.Obfuscator.Attribute;

[Serializable]
[DoNotObfuscateClass]
public class RoomModel
{
	public string RoomName;

	public string DisplayName;

	public List<RoomItemModel> ItemList;

	public List<RoomRewardModel> RoomReward;
}
