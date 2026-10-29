using UnityEngine;

[RequireComponent(typeof(RectTransform))]
public class LimitSize : MonoBehaviour
{
	[SerializeField]
	private float maxWidth;

	[SerializeField]
	private float maxHight;

	private RectTransform _rt;

	private float _lastWidth;

	private float _lastHeight;

	private void Awake()
	{
	}

	private void Start()
	{
	}

	private void Update()
	{
	}

	private void UpdateSize()
	{
	}
}
