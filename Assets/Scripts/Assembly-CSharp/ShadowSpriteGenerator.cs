using System.Collections.Generic;
using UnityEngine;

public class ShadowSpriteGenerator : MonoBehaviour
{
	[Header("源对象")]
	public List<GameObject> sourceObjects;

	[Header("最终输出")]
	[Tooltip("将最终生成的阴影Sprite应用到这个SpriteRenderer上")]
	public SpriteRenderer targetShadowRenderer;

	[Header("依赖组件")]
	[Tooltip("负责合并Sprite的转换器")]
	public SpriteMerger merger;

	[Header("样式")]
	[Tooltip("用于最终阴影Sprite的材质 (例如你的描边Shader材质)")]
	public Material shadowMaterial;

	public void ChangeSourceObjects(List<GameObject> sourceObjects, string fileName)
	{
	}

	public void CleanShadow()
	{
	}

	public void GenerateShadowSprite(string fileName)
	{
	}

	private void Clean()
	{
	}

	public static Vector3 CalculateBoundsCenter(List<GameObject> sourceObjects)
	{
		return default;
	}

	private static Bounds CalculateBounds(List<GameObject> objects)
	{
		return default;
	}
}
