using OPS.Obfuscator.Attribute;
using UnityEngine;
using UnityEngine.UI;

public class TabBarView : MonoBehaviour
{
	[SerializeField]
	private LayoutElement[] _tabElements;

	[SerializeField]
	private TabBarItem[] _tabs;

	[SerializeField]
	private MainBasePage[] _pages;

	public int _selectedIndex;

	private void Start()
	{
	}

	private void SetTabLayout(bool animate = true)
	{
	}

	[DoNotRename]
	public void OnButtonClick(int index)
	{
	}

	private void LogSwitchTab()
	{
	}

	private void SelectedPageHide()
	{
	}

	private void SelectedPageShow()
	{
	}
}
