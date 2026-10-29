using System;
using System.Collections.Generic;
using GoogleMobileAds.Ump.Api;

public class UMPConsent
{
	public static DebugGeography debugGeography { get; set; }

	public static List<string> testDeviceIds { get; set; }

	public static bool tagForUnderAgeOfConsent { get; set; }

	public static void GatherConsent(Action<FormError> onComplete)
	{
	}

	public static void ShowPrivacyOptionsForm(Action<FormError> onComplete)
	{
	}
}
