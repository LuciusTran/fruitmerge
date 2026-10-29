using UnityEngine;

[ExecuteInEditMode]
public class WorldMaskController : MonoBehaviour
{
	[Tooltip("将使用该遮罩的材质拖到这里")]
	[SerializeField]
	private Material maskMaterial;

	[Tooltip("遮罩区域的宽度")]
	[SerializeField]
	private float width;

	[Tooltip("遮罩区域的高度")]
	[SerializeField]
	private float height;

	private static readonly int MaskAreaID;

	private float baseHeight;

	private Vector3 basePos;

	public float BaseHeight => 0f;

	private void Awake()
	{
	}

	private void Update()
	{
	}

	private void Refresh()
	{
	}

	private void OnDrawGizmos()
	{
	}

	public void SetHeight(float height)
	{
	}

	public void ResetBase()
	{
	}

	public void Clear()
	{
	}
}
