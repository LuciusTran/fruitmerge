using System;
using System.Collections.Generic;
using OPS.Obfuscator.Attribute;

[Serializable]
[DoNotObfuscateClass]
public class LeagueItemData
{
	public int TargetGrade;

	public double FakeAddRatio;

	public float FakerUserOffLineMaxScoreScale;

	public float FakerUserAOnlineScale;

	public float FakerUserBOnlineScale;

	public float FakerUserCOnlineScale;

	public float FakerUserAOffLineScale;

	public float FakerUserBOffLineScale;

	public float FakerUserCOffLineScale;

	public int FakeUserANum;

	public int FakeUserBNum;

	public int FakeUserCNum;

	public int FakerUserDefaultMinTargetNum;

	public int FakerUserDefaultMaxTargetNum;

	public List<RoomRewardModel> LeagueReward;
}
