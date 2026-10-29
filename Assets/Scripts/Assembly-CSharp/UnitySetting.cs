public static class UnitySetting
{
	public static void Save()
	{
	}

	public static bool Has(string key)
	{
		return false;
	}

	public static void Remove(string key)
	{
	}

	public static bool GetBool(string key, bool defaultValue = false)
	{
		return false;
	}

	public static void SetBool(string key, bool val)
	{
	}

	public static int GetInt(string key, int defaultValue = 0)
	{
		return 0;
	}

	public static void SetInt(string key, int val)
	{
	}

	public static float GetFloat(string key, float defaultValue = 0f)
	{
		return 0f;
	}

	public static void SetFloat(string key, float val)
	{
	}

	public static string GetString(string key, string defaultValue = null)
	{
		return null;
	}

	public static void SetString(string key, string val)
	{
	}

	public static T GetObject<T>(string key, T defaultValue = default(T))
	{
		return default;
	}

	public static void SetObject<T>(string key, T obj)
	{
	}
}
