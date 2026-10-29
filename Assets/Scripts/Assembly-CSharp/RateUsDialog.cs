using Game.Controller;
using OPS.Obfuscator.Attribute;
using UnityEngine;
using UnityEngine.UI;

public class RateUsDialog : View
{
	[SerializeField]
	private Sprite[] m_StarSprites;

	[SerializeField]
	private Image[] m_img_Stars;

	[SerializeField]
	private Button m_SubmitButton;

	[SerializeField]
	private Transform m_SubmitDisableButton;

	private int selectStar;

	public override void Init(params object[] data)
	{
	}

	public override void Show()
	{
	}

	public override void Close()
	{
	}

	[DoNotRename]
	public void OnRateItNowClicked()
	{
	}

	[DoNotRename]
	public void OnNoThanksClicked()
	{
	}

	[DoNotRename]
	public void OnStarClicked(int star)
	{
	}

	[DoNotRename]
	public void OnSubmitClicked()
	{
	}
}
