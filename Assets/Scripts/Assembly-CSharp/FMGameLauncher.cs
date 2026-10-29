using UnityEngine;

public partial class FMGameLauncher : MonoBehaviour
{
	private void Awake()
	{
		// Recovery adapter; see RECOVERY.md.
		Application.targetFrameRate = 60; Time.timeScale = 1f;
	}

	private void AppConfig()
	{
	}

	private void ResolutionConfig()
	{
	}

	private bool IsTablet()
	{
		return false;
	}

	private void Start()
	{
		// Recovery adapter; see RECOVERY.md.
		if (!FindFirstObjectByType<RecoveredGameFlow>()) gameObject.AddComponent<RecoveredGameFlow>();
	}
}
