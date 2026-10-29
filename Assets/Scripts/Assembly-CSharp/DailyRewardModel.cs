using System;
using OPS.Obfuscator.Attribute;

[Serializable]
[DoNotObfuscateClass]
public class DailyRewardModel
{
	public int day;

	public int coin;

	public int clean;

	public int bomb;

	public int upgrade;

	public int shake;

	public string skin;
}
