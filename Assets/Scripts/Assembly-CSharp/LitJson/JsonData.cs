using System;
using System.Collections;
using System.Collections.Generic;
using System.Collections.Specialized;

namespace LitJson
{
	public class JsonData : IJsonWrapper, IList, ICollection, IEnumerable, IOrderedDictionary, IDictionary, IEquatable<JsonData>
	{
		private IList<JsonData> inst_array;

		private bool inst_boolean;

		private double inst_double;

		private int inst_int;

		private long inst_long;

		private IDictionary<string, JsonData> inst_object;

		private string inst_string;

		private string json;

		private JsonType type;

		private IList<KeyValuePair<string, JsonData>> object_list;

		public int Count => 0;

		public bool IsArray => false;

		public bool IsBoolean => false;

		public bool IsDouble => false;

		public bool IsInt => false;

		public bool IsLong => false;

		public bool IsObject => false;

		public bool IsString => false;

		public ICollection<string> Keys => null;

		int ICollection.Count => 0;

		bool ICollection.IsSynchronized => false;

		object ICollection.SyncRoot => null;

		bool IDictionary.IsFixedSize => false;

		bool IDictionary.IsReadOnly => false;

		ICollection IDictionary.Keys => null;

		ICollection IDictionary.Values => null;

		bool IJsonWrapper.IsArray => false;

		bool IJsonWrapper.IsBoolean => false;

		bool IJsonWrapper.IsDouble => false;

		bool IJsonWrapper.IsInt => false;

		bool IJsonWrapper.IsLong => false;

		bool IJsonWrapper.IsObject => false;

		bool IJsonWrapper.IsString => false;

		bool IList.IsFixedSize => false;

		bool IList.IsReadOnly => false;

		object IDictionary.this[object key]
		{
			get
			{
				return null;
			}
			set
			{
			}
		}

		object IOrderedDictionary.this[int idx]
		{
			get
			{
				return null;
			}
			set
			{
			}
		}

		object IList.this[int index]
		{
			get
			{
				return null;
			}
			set
			{
			}
		}

		public JsonData this[string prop_name]
		{
			get
			{
				return null;
			}
			set
			{
			}
		}

		public JsonData this[int index]
		{
			get
			{
				return null;
			}
			set
			{
			}
		}

		public bool ContainsKey(string key)
		{
			return false;
		}

		public JsonData()
		{
		}

		public JsonData(bool boolean)
		{
		}

		public JsonData(double number)
		{
		}

		public JsonData(int number)
		{
		}

		public JsonData(long number)
		{
		}

		public JsonData(object obj)
		{
		}

		public JsonData(string str)
		{
		}

		public static implicit operator JsonData(bool data)
		{
			return null;
		}

		public static implicit operator JsonData(double data)
		{
			return null;
		}

		public static implicit operator JsonData(int data)
		{
			return null;
		}

		public static implicit operator JsonData(long data)
		{
			return null;
		}

		public static implicit operator JsonData(string data)
		{
			return null;
		}

		public static explicit operator bool(JsonData data)
		{
			return false;
		}

		public static explicit operator double(JsonData data)
		{
			return 0.0;
		}

		public static explicit operator int(JsonData data)
		{
			return 0;
		}

		public static explicit operator long(JsonData data)
		{
			return 0L;
		}

		public static explicit operator string(JsonData data)
		{
			return null;
		}

		void ICollection.CopyTo(Array array, int index)
		{
		}

		void IDictionary.Add(object key, object value)
		{
		}

		void IDictionary.Clear()
		{
		}

		bool IDictionary.Contains(object key)
		{
			return false;
		}

		IDictionaryEnumerator IDictionary.GetEnumerator()
		{
			return null;
		}

		void IDictionary.Remove(object key)
		{
		}

		IEnumerator IEnumerable.GetEnumerator()
		{
			return null;
		}

		bool IJsonWrapper.GetBoolean()
		{
			return false;
		}

		double IJsonWrapper.GetDouble()
		{
			return 0.0;
		}

		int IJsonWrapper.GetInt()
		{
			return 0;
		}

		long IJsonWrapper.GetLong()
		{
			return 0L;
		}

		string IJsonWrapper.GetString()
		{
			return null;
		}

		void IJsonWrapper.SetBoolean(bool val)
		{
		}

		void IJsonWrapper.SetDouble(double val)
		{
		}

		void IJsonWrapper.SetInt(int val)
		{
		}

		void IJsonWrapper.SetLong(long val)
		{
		}

		void IJsonWrapper.SetString(string val)
		{
		}

		string IJsonWrapper.ToJson()
		{
			return null;
		}

		void IJsonWrapper.ToJson(JsonWriter writer)
		{
		}

		int IList.Add(object value)
		{
			return 0;
		}

		void IList.Clear()
		{
		}

		bool IList.Contains(object value)
		{
			return false;
		}

		int IList.IndexOf(object value)
		{
			return 0;
		}

		void IList.Insert(int index, object value)
		{
		}

		void IList.Remove(object value)
		{
		}

		void IList.RemoveAt(int index)
		{
		}

		IDictionaryEnumerator IOrderedDictionary.GetEnumerator()
		{
			return null;
		}

		void IOrderedDictionary.Insert(int idx, object key, object value)
		{
		}

		void IOrderedDictionary.RemoveAt(int idx)
		{
		}

		private ICollection EnsureCollection()
		{
			return null;
		}

		private IDictionary EnsureDictionary()
		{
			return null;
		}

		private IList EnsureList()
		{
			return null;
		}

		private JsonData ToJsonData(object obj)
		{
			return null;
		}

		private static void WriteJson(IJsonWrapper obj, JsonWriter writer)
		{
		}

		public int Add(object value)
		{
			return 0;
		}

		public bool Remove(object obj)
		{
			return false;
		}

		public void Clear()
		{
		}

		public bool Equals(JsonData x)
		{
			return false;
		}

		public JsonType GetJsonType()
		{
			return JsonType.None;
		}

		public void SetJsonType(JsonType type)
		{
		}

		public string ToJson()
		{
			return null;
		}

		public void ToJson(JsonWriter writer)
		{
		}

		public override string ToString()
		{
			return null;
		}
	}
}
