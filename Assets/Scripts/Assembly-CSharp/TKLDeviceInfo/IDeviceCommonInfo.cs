namespace TKLDeviceInfo
{
	public interface IDeviceCommonInfo
	{
		void StartFetch(TKLDeviceFetchResult resultHanlder);

		string CountryCode();

		int TimeZone();

		string DeviceId();

		string AdvertiseId();

		string OriginalDeviceId();

		string OriginalAdvertiseId();

		string LocalizedModel();

		string DeviceModel();

		string OSTypeVersion();

		bool IsDeviceOutOfControl();

		string Platform();

		string NewtworkConfig();

		string Carrier();

		string DeviceSavedUserName();

		string LocalLanguageCode();

		void DeleteUserFromDevice();

		string IsVPN();

		string MCCMNC();

		string IDFA();
	}
}
