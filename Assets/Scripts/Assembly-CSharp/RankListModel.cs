using System;
using System.Collections.Generic;
using OPS.Obfuscator.Attribute;

[Serializable]
[DoNotObfuscateClass]
public class RankListModel
{
	public string user_id;

	public UserInfoModel user_info;

	public int rank;

	public List<RankModel> top_list;
}
