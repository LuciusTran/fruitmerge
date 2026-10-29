using OPS.Obfuscator.Attribute;
using UnityEngine;

public class ComboEffect : MonoBehaviour
{
	[SerializeField]
	private Animator m_Animator;

	[SerializeField]
	private Sprite[] m_NumberSprites;

	[SerializeField]
	private SpriteRenderer m_NumberSpriteRenderer;

	public int mComboCount;

	private void Awake()
	{
	}

	public void PlayAnimation(int comboCount)
	{
	}

	[DoNotRename]
	public void AfterAnimation()
	{
	}
}
