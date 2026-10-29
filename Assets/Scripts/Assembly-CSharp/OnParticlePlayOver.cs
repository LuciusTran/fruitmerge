using UnityEngine;
using UnityEngine.Events;

public class OnParticlePlayOver : MonoBehaviour
{
	[SerializeField]
	private UnityEvent _onPlayOver;

	private void Start()
	{
	}

	public void ClearPlayOverListener()
	{
	}

	private void OnParticleSystemStopped()
	{
	}
}
