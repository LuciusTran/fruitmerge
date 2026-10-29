using UnityEngine;
using UnityEngine.UI;

public class ToolButton : MonoBehaviour
{
	[SerializeField]
	private ToolType m_ToolType;

	[SerializeField]
	private GameObject m_Add;

	[SerializeField]
	private GameObject m_Number;

	[SerializeField]
	private Text m_txt_Number;

	private void Awake()
	{
	}

	private void Start()
	{
	}

	private void OnDestroy()
	{
	}

	private void RefreshTools()
	{
	}
}
