using UnityEngine;

public class TabBarItem : MonoBehaviour
{
	[SerializeField]
	private GameObject _selectedObj;

	[SerializeField]
	private GameObject _normalObj;

	private bool _selected;

	private Transform _root;

	private float _selectedScale;

	private float _duration;

	private void Awake()
	{
	}

	private void OnDestroy()
	{
	}

	public void SetSelected(bool selected, bool animate = true)
	{
	}
}
