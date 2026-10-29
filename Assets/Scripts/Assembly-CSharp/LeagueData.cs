using System;
using System.Collections.Generic;
using OPS.Obfuscator.Attribute;

[Serializable]
[DoNotObfuscateClass]
public class LeagueData
{
	public List<LeagueItemData> LeagueItems;
}
