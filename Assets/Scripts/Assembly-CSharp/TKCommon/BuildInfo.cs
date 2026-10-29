namespace TKCommon
{
	public class BuildInfo
	{
		public bool IsDebug { get; set; }

		public bool ForceShowDebugger { get; set; }

		public string Market { get; set; }

		public string AppVersion { get; set; }

		public int AppCodeVersion { get; set; }

		public string BundleId { get; set; }

		public string BuildTime { get; set; }

		public string NotifyType { get; set; }
	}
}
