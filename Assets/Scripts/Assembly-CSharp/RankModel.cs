using System;
using OPS.Obfuscator.Attribute;

[Serializable]
[DoNotObfuscateClass]
public class RankModel
{
	public string user_id;

	public UserInfoModel user_info;

	public double score;

	public int rank;
}
