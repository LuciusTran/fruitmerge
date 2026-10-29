using System;
using System.Collections.Generic;
using System.Text;
using Loxodon.Log;

namespace Loxodon.Framework.Prefs
{
	public class BinaryFilePreferences : Preferences
	{
		private static readonly ILog log;

		private string root;

		protected readonly Dictionary<string, string> dict;

		protected readonly ISerializer serializer;

		protected readonly IEncryptor encryptor;

		public BinaryFilePreferences(string name, ISerializer serializer, IEncryptor encryptor)
			: base(null)
		{
		}

		public virtual StringBuilder GetDirectory()
		{
			return null;
		}

		public virtual StringBuilder GetFullFileName()
		{
			return null;
		}

		protected override void Load()
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
