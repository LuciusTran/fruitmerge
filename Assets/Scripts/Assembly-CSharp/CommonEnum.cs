using UnityEngine;

public class CommonEnum : MonoBehaviour
{
	public enum AB_MODE_TYPE
	{
		A = 0,
		B = 1
	}

	public enum INTERSTITIAL_PLACE
	{
		Unknow = 0,
		AdsBreak = 1,
		Switch = 2,
		NextGame = 3
	}

	public enum REWARDED_PLACE
	{
		Unknown = 0,
		AdRemoveSmallest = 1,
		AdRemoveSpecific = 2,
		AdUpgrade = 3,
		AdShake = 4,
		Continue = 5,
		Double = 6
	}
}
