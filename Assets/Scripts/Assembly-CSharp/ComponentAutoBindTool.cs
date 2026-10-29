using System.Collections.Generic;
using UnityEngine;

public class ComponentAutoBindTool : MonoBehaviour
{
	[SerializeField]
	public List<Component> m_BindComs;

	public T GetBindComponent<T>(int index) where T : Component
	{
		return null;
	}
}
