using Game.Manager;
using UnityEngine;

public class PreloadManager : Singleton<PreloadManager>, IProgress
{
	[SerializeField]
	private float m_Progress;

	private bool m_IsBundleReady;

	private bool m_IsConfigReady;

	private int proloadCount;

	private int countPerframe;

	public float GetProgress()
	{
		return 0f;
	}

	public override void Awake()
	{
	}

	private void Start()
	{
	}

	private void OnBundleUpdateFinish()
	{
	}

	private void OnDownloadConfigFinish()
	{
	}

	private void StartPreload()
	{
	}

	private void LoadSound(float v)
	{
	}

	private void StartMainPrefab(float v)
	{
	}

	private void OnLoadFinish(float v)
	{
	}
}
