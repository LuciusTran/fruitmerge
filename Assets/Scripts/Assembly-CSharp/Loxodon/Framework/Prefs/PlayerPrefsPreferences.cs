using System;
using System.Collections.Generic;

namespace Loxodon.Framework.Prefs
{
	public class PlayerPrefsPreferences : Preferences
	{
		protected static readonly string KEYS;

		protected readonly ISerializer serializer;

		protected readonly IEncryptor encryptor;

		protected readonly List<string> keys;

		public PlayerPrefsPreferences(string name, ISerializer serializer, IEncryptor encryptor)
			: base(null)
		{
		}

		protected override void Load()
		{
		}

		protected string Key(string key)
		{
			return null;
		}

		protected virtual void LoadKeys()
		{
		}

		protected virtual void SaveKeys()
		{
		}

		public override object GetObject(string key, Type type, object defaultValue)
		{
			return null;
		}

		public override void SetObject(string key, object value)
		{
		}

		public override T GetObject<T>(string key, T defaultValue)
		{
			return default;
		}

		public override void SetObject<T>(string key, T value)
		{
		}

		public override object[] GetArray(string key, Type type, object[] defaultValue)
		{
			return null;
		}

		public override void SetArray(string key, object[] values)
		{
		}

		public override T[] GetArray<T>(string key, T[] defaultValue)
		{
			return null;
		}

		public override void SetArray<T>(string key, T[] values)
		{
		}

		public override bool ContainsKey(string key)
		{
			return false;
		}

		public override void Remove(string key)
		{
		}

		public override void RemoveAll()
		{
		}

		public override void Save()
		{
		}

		public override void Delete()
		{
		}
	}
}
