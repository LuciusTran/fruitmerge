using Game.Manager;
using Loxodon.Log;
using UnityEngine;

public class SDKManager : Singleton<SDKManager>, IProgress
{
	[SerializeField]
	private float m_Progress;

	private bool IsReleaseCheckComplete;

	private bool IsAppflyerComplete;

	private bool IsLoginSuccess;

	private bool IsLoginComplete;

	public long splashStartTime;

	private float m_TimeOut;

	private float m_Time;

	private bool m_IsAllFinish;

	protected static readonly ILog log;

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

	private void Update()
	{
	}

	private void AppFlyerCategoryDidConfirmed(bool changed)
	{
	}

	private void AppLaunchLoginCompleteHandler()
	{
	}

	private void AppLaunchLoginFailedCompleteHandler(string errorMsg)
	{
	}

	private void RecordEnableTask()
	{
	}

	private void CheckEnterGameCondition()
	{
	}

	private void FinishCheck()
	{
	}

	public bool GetAppflyerComplete()
	{
		return false;
	}

	public bool GetTkSuccess()
	{
		return false;
	}
}
