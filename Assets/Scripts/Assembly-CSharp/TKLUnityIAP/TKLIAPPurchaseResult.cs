namespace TKLUnityIAP
{
	public struct TKLIAPPurchaseResult
	{
		public bool Result;

		public TKLIAPPurchaseErrorCode ErrorCode;

		public string ErrorMessage;

		public TKLIAPPurchaseResult(bool result, TKLIAPPurchaseErrorCode code, string msg)
		{
			Result = false;
			ErrorCode = TKLIAPPurchaseErrorCode.PurchasingUnavailable;
			ErrorMessage = null;
		}

		public static TKLIAPPurchaseResult OKResult()
		{
			return default;
		}

		public new string ToString()
		{
			return null;
		}
	}
}
