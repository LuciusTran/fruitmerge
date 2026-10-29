using UnityEngine;
using UnityEngine.UI;

public class SafeAreaManager : MonoBehaviour
{
	private static SafeAreaManager _instance;

	public static SafeAreaManager Instance => null;

	public float TopSafeAreaHeight => 0f;

	public float BottomSafeAreaHeight => 0f;

	public float LeftSafeAreaWidth => 0f;

	public float RightSafeAreaWidth => 0f;

	public bool HasTopNotch => false;

	public float TopSafeAreaNormalized => 0f;

	public Rect SafeArea => default;

	private void Awake()
	{
	}

	private void LogSafeAreaInfo()
	{
	}

	public void RefreshSafeArea()
	{
	}

	public void ApplySafeAreaToRectTransform(RectTransform rectTransform)
	{
	}

	public void ApplyTopSafeAreaToRectTransform(RectTransform rectTransform, float offset = 0f)
	{
	}

	public void ApplyTopSafeAreaToLayout(LayoutGroup layoutGroup, float extraMargin = 0f)
	{
	}

	public float GetPlatformTopOffset(float androidExtra = 5f, float iosExtra = 0f)
	{
		return 0f;
	}
}
