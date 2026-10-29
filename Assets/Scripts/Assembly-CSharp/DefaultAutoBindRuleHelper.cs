using System.Collections.Generic;
using UnityEngine;

public class DefaultAutoBindRuleHelper : IAutoBindRuleHelper
{
	private Dictionary<string, string> m_PrefixesDict;

	public bool IsValidBind(Transform target, List<string> filedNames, List<string> componentTypeNames)
	{
		return false;
	}

	public bool IsValidBindAllowUnderline(Transform target, List<string> filedNames, List<string> componentTypeNames)
	{
		return false;
	}
}
