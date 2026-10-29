using System.Collections.Generic;
using UnityEngine;

public interface IAutoBindRuleHelper
{
	bool IsValidBind(Transform target, List<string> filedNames, List<string> componentTypeNames);

	bool IsValidBindAllowUnderline(Transform target, List<string> filedNames, List<string> componentTypeNames);
}
