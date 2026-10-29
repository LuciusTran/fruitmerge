using System;
using System.Collections.Generic;
using OPS.Obfuscator.Attribute;

[Serializable]
[DoNotObfuscateClass]
public class TaskData
{
	public List<TaskItemData> TaskItems;
}
