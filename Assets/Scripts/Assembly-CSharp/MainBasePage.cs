using UnityEngine;

public abstract class MainBasePage : MonoBehaviour
{
	protected CanvasGroup Group;

	private void Awake()
	{
	}

	internal abstract void Init();

	internal virtual void Show()
	{
	}

	internal virtual void Hide()
	{
	}
}
