using Game.Controller;
using OPS.Obfuscator.Attribute;
using UnityEngine;
using UnityEngine.UI;

public class ShowRoomView : View
{
	[SerializeField]
	private Image m_RoomPreview;

	[SerializeField]
	private Text m_RoomTitle;

	private string mRoomName;

	public override void Init(params object[] data)
	{
	}

	[DoNotRename]
	public void OnTapContinueButton()
	{
	}
}
