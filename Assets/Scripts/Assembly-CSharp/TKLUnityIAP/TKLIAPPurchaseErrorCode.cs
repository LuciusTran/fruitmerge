namespace TKLUnityIAP
{
	public enum TKLIAPPurchaseErrorCode
	{
		PurchasingUnavailable = 0,
		ExistingPurchasePending = 1,
		ProductUnavailable = 2,
		SignatureInvalid = 3,
		UserCancelled = 4,
		PaymentDeclined = 5,
		DuplicateTransaction = 6,
		Unknown = 7,
		IAPNotInitialize = 100,
		IAPIsInitializing = 101,
		IAPInitializeFail = 102,
		SKUIsEmpty = 103,
		ProductIDIsEmpty = 104,
		ProductIDNotExist = 105,
		InvalidReceipt = 106,
		SubInfoError = 107,
		PurchaseSuccess = 1000
	}
}
