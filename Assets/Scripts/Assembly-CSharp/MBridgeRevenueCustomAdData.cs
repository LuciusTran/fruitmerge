using System.Collections.Generic;

public class MBridgeRevenueCustomAdData
{
	public string AttributionPlatformName { get; set; }

	public string AttributionPlatformUserId { get; set; }

	public string MediationName { get; set; }

	public string MediationUnitId { get; set; }

	public string AdNetworkName { get; set; }

	public string Precision { get; set; }

	public string Currency { get; set; }

	public double? Revenue { get; set; }

	public Dictionary<string, object> AdNetworkUnitInfo { get; set; }

	public bool IsBidding { get; set; }

	public string AdType { get; set; }

	public string DspId { get; set; }

	public string DspName { get; set; }

	public Dictionary<string, object> AllInfo { get; set; }
}
