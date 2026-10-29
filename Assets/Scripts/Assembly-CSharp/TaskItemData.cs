using System;
using OPS.Obfuscator.Attribute;

[Serializable]
[DoNotObfuscateClass]
public class TaskItemData
{
	public int TargetGrade;

	public int TargetNum;

	public int RewardCoin;

	public int RewardSkinProgress;
}
