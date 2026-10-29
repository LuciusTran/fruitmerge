using Game.Controller;
using UnityEngine;

public class BannerView : View
{
	[SerializeField]
	private RectTransform m_rect_banner;

	[SerializeField]
	private CanvasGroup m_group_banner;

	private float bannerHeight;

	private bool showBanner;

	public override void Init(params object[] data)
	{
	}

	public override void Show()
	{
	}

	public override void Close()
	{
	}

	protected void RegisterEvent()
	{
	}

	private void OnBannerLoaded(bool a)
	{
	}

	private void RefreshBannerHeight(float height)
	{
	}

	public void ShowBanner()
	{
	}

	public void HideBanner()
	{
	}

	private void onBannerLoaded(bool isBannerActive)
	{
	}

	protected void RemoveEvent()
	{
	}

	private void xOnGUI()
	{
	}
}
