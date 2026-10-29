using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using UnityEngine.Purchasing;
using UnityEngine.Purchasing.Security;

namespace TKLUnityIAP
{
	public class TKLIAPController : Singleton<TKLIAPController>, IStoreListener
	{
		private class GooglePurchaseData
		{
			[Serializable]
			private struct GooglePurchaseReceipt
			{
				public string Payload;
			}

			[Serializable]
			private struct GooglePurchasePayload
			{
				public string json;

				public string signature;
			}

			[Serializable]
			public struct GooglePurchaseJson
			{
				public string autoRenewing;

				public string orderId;

				public string packageName;

				public string productId;

				public string purchaseTime;

				public string purchaseState;

				public string developerPayload;

				public string purchaseToken;
			}

			public string inAppPurchaseData;

			public string inAppDataSignature;

			public GooglePurchaseJson json;

			public GooglePurchaseData(string receipt)
			{
			}
		}

		private const string SUBSCRIPTION_SAVE_STR = "ios_Receipt_subscribe";

		private const string kNonConsumableSaveKey = "TKLIAP_kNonConsumableSaveKey";

		private IStoreController m_StoreController;

		private CrossPlatformValidator validator;

		private IExtensionProvider m_ExtensionProvider;

		private ConfigurationBuilder m_ConfigurationBuilder;

		private IAppleExtensions m_AppleExtensions;

		private List<TKLUnityIAPConfigModel> m_IAPConfigModelList;

		private PurchaseResultHandler m_PurchaseHandler;

		private InitializeResultHandler m_InitializationHandler;

		private bool m_IsInRestore;

		private TKLIAPInitializeStatu m_InitializeStatu;

		[CompilerGenerated]
		private Action<TKLIAPInitializeStatu> m_InitializeStatuUpdateEvent;

		public TKLIAPInitializeStatu InitializeStatu
		{
			get
			{
				return TKLIAPInitializeStatu.NoneInitialize;
			}
			private set
			{
			}
		}

		public bool IsInitializeSuccess => false;

		public event Action<TKLIAPInitializeStatu> InitializeStatuUpdateEvent
		{
			[CompilerGenerated]
			add
			{
			}
			[CompilerGenerated]
			remove
			{
			}
		}

		public void StartInitialization(List<TKLUnityIAPConfigModel> configs, InitializeResultHandler initializationHandler)
		{
		}

		private void ConfigProductInfo()
		{
		}

		private void Initialize()
		{
		}

		public void OnInitialized(IStoreController controller, IExtensionProvider extensions)
		{
		}

		public void OnInitializeFailed(InitializationFailureReason error)
		{
		}

		public void OnInitializeFailed(InitializationFailureReason error, string message)
		{
		}

		public void PurchaseWithSKU(string sku, PurchaseResultHandler resultHandler)
		{
		}

		public void PurchaseWithProductId(string productId, PurchaseResultHandler resultHandler)
		{
		}

		public void RestorePurchases()
		{
		}

		public void RestorePurchases_new(RestoreResultHandler resultHandler)
		{
		}

		private void OnDeferred(Product item)
		{
		}

		private TKLIAPPurchaseErrorCode GetPurchaseErrorCodeWhenInitialzeNotSuccess()
		{
			return TKLIAPPurchaseErrorCode.PurchasingUnavailable;
		}

		public PurchaseProcessingResult ProcessPurchase(PurchaseEventArgs e)
		{
			return PurchaseProcessingResult.Complete;
		}

		private void HandlePurchaseResult(TKLIAPPurchaseResult result, Product product, PurchaseEventArgs e)
		{
		}

		public void OnPurchaseFailed(Product i, PurchaseFailureReason p)
		{
		}

		private bool ValidateReceiptIsSuccess(string receipt)
		{
			return false;
		}

		public bool ValidateAndAnalyzeAllReceiptIsSuccess()
		{
			return false;
		}

		public Product GetProductWithSKU(string sku)
		{
			return null;
		}

		public Product GetProductWithProductId(string productId)
		{
			return null;
		}

		public string GetProductId(string sku)
		{
			return null;
		}

		public bool IsSubscriptionActive(string specifiedProductID = null)
		{
			return false;
		}

		private bool IsAppleSubscriptionValid(AppleInAppPurchaseReceipt e)
		{
			return false;
		}

		private bool AnalyzeSigleProductPurchaseReceipt(Product item)
		{
			return false;
		}

		private bool AnalyzeProductPurchaseReceipt()
		{
			return false;
		}

		private bool checkIfProductIsAvailableForSubscriptionManager(string receipt)
		{
			return false;
		}

		public bool IsNonConsumableProductOwned(string productID)
		{
			return false;
		}

		private bool IsAppleNonConsumableProductValid(AppleInAppPurchaseReceipt e)
		{
			return false;
		}
	}
}
