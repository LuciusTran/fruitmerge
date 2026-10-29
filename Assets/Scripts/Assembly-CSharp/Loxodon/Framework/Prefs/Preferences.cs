using System;
using System.Collections.Generic;

namespace Loxodon.Framework.Prefs
{
	public abstract class Preferences
	{
		protected static readonly string GLOBAL_NAME;

		protected const char ARRAY_SEPARATOR = '|';

		private static Dictionary<string, Preferences> cache;

		private static IFactory _defaultFactory;

		private static IFactory _factory;

		private string name;

		public string Name
		{
			get
			{
				return null;
			}
			protected set
			{
			}
		}

		static Preferences()
		{
		}

		protected static IFactory GetFactory()
		{
			return null;
		}

		public static Preferences GetGlobalPreferences()
		{
			return null;
		}

		public static Preferences GetPreferences(string name)
		{
			return null;
		}

		public static void Register(IFactory factory)
		{
		}

		public static void SaveAll()
		{
		}

		public static void DeleteAll()
		{
		}

		public Preferences(string name)
		{
		}

		protected abstract void Load();

		public string GetString(string key)
		{
			return null;
		}

		public string GetString(string key, string defaultValue)
		{
			return null;
		}

		public void SetString(string key, string value)
		{
		}

		public float GetFloat(string key)
		{
			return 0f;
		}

		public float GetFloat(string key, float defaultValue)
		{
			return 0f;
		}

		public void SetFloat(string key, float value)
		{
		}

		public double GetDouble(string key)
		{
			return 0.0;
		}

		public double GetDouble(string key, double defaultValue)
		{
			return 0.0;
		}

		public void SetDouble(string key, double value)
		{
		}

		public bool GetBool(string key)
		{
			return false;
		}

		public bool GetBool(string key, bool defaultValue)
		{
			return false;
		}

		public void SetBool(string key, bool value)
		{
		}

		public int GetInt(string key)
		{
			return 0;
		}

		public int GetInt(string key, int defaultValue)
		{
			return 0;
		}

		public void SetInt(string key, int value)
		{
		}

		public long GetLong(string key)
		{
			return 0L;
		}

		public long GetLong(string key, long defaultValue)
		{
			return 0L;
		}

		public void SetLong(string key, long value)
		{
		}

		public object GetObject(string key, Type type)
		{
			return null;
		}

		public abstract object GetObject(string key, Type type, object defaultValue);

		public abstract void SetObject(string key, object value);

		public T GetObject<T>(string key)
		{
			return default;
		}

		public abstract T GetObject<T>(string key, T defaultValue);

		public abstract void SetObject<T>(string key, T value);

		public object[] GetArray(string key, Type type)
		{
			return null;
		}

		public abstract object[] GetArray(string key, Type type, object[] defaultValue);

		public abstract void SetArray(string key, object[] values);

		public T[] GetArray<T>(string key)
		{
			return null;
		}

		public abstract T[] GetArray<T>(string key, T[] defaultValue);

		public abstract void SetArray<T>(string key, T[] values);

		public abstract bool ContainsKey(string key);

		public abstract void Remove(string key);

		public abstract void RemoveAll();

		public abstract void Save();

		public abstract void Delete();
	}
}
