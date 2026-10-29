using System;
using UnityEngine;

public class ShakeWithRigidbody2D : MonoBehaviour
{
	[Header("Shake Settings")]
	public float shakeIntensity;

	public float shakeFrequency;

	public float shakeDuration;

	public float accelerationMultiplier;

	public float activationThreshold;

	[Header("Horizontal Shake")]
	public float horizontalShakeIntensity;

	private Rigidbody2D rb;

	private float shakeTimer;

	private float initialRotation;

	private Vector2 initialPosition;

	private bool startShake;

	private Action ShakeStartAction;

	private Action FinishAction;

	private Vector3 currentAcceleration;

	private void Start()
	{
	}

	private void Update()
	{
	}

	public void TriggerShake(Action shakeStartAction, Action finishAction)
	{
	}

	private void ResetShakeState()
	{
	}

	public void CancelShake()
	{
	}
}
