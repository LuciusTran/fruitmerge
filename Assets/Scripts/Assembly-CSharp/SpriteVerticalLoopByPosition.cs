using UnityEngine;

public class SpriteVerticalLoopByPosition : MonoBehaviour
{
	[Tooltip("滚动速度（单位：米/秒）")]
	public float scrollSpeed;

	[Tooltip("单个精灵的高度（米）")]
	public float spriteHeight;

	[Tooltip("两个精灵对象")]
	public GameObject sprite1;

	public GameObject sprite2;

	private void Start()
	{
	}

	private void Update()
	{
	}
}
