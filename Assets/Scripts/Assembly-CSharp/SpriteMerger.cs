using System.Collections.Generic;
using UnityEngine;

public class SpriteMerger : MonoBehaviour
{
	[Header("合并设置")]
	[Tooltip("在合并后的图像周围留出一些透明边距（像素）")]
	public int padding;

	private Camera bakingCamera;

	private Material spriteMaterial;

	private void Awake()
	{
	}

	public Sprite MergeToSprite(List<GameObject> objectsToMerge, string fileName)
	{
		return null;
	}

	private void OnDestroy()
	{
	}
}
