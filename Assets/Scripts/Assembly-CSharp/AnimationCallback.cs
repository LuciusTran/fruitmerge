using System;
using OPS.Obfuscator.Attribute;
using UnityEngine;

public class AnimationCallback : MonoBehaviour
{
	public Action EndAction;

	[DoNotRename]
	public void OnAnimationEnd()
	{
	}
}
