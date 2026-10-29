using System;
using OPS.Obfuscator.Attribute;

[Serializable]
[DoNotObfuscateClass]
public class UserInfoModel
{
	public string user_name;

	public string picture_url;

	public double score;
}
