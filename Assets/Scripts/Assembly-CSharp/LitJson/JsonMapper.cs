using System;
using System.Collections.Generic;
using System.IO;
using System.Reflection;

namespace LitJson
{
	public class JsonMapper
	{
		private static readonly int max_nesting_depth;

		private static readonly IFormatProvider datetime_format;

		private static readonly IDictionary<Type, ExporterFunc> base_exporters_table;

		private static readonly IDictionary<Type, ExporterFunc> custom_exporters_table;

		private static readonly IDictionary<Type, IDictionary<Type, ImporterFunc>> base_importers_table;

		private static readonly IDictionary<Type, IDictionary<Type, ImporterFunc>> custom_importers_table;

		private static readonly IDictionary<Type, ArrayMetadata> array_metadata;

		private static readonly object array_metadata_lock;

		private static readonly IDictionary<Type, IDictionary<Type, MethodInfo>> conv_ops;

		private static readonly object conv_ops_lock;

		private static readonly IDictionary<Type, ObjectMetadata> object_metadata;

		private static readonly object object_metadata_lock;

		private static readonly IDictionary<Type, IList<PropertyMetadata>> type_properties;

		private static readonly object type_properties_lock;

		private static readonly JsonWriter static_writer;

		private static readonly object static_writer_lock;

		static JsonMapper()
		{
		}

		private static void AddArrayMetadata(Type type)
		{
		}

		private static void AddObjectMetadata(Type type)
		{
		}

		private static void AddTypeProperties(Type type)
		{
		}

		private static MethodInfo GetConvOp(Type t1, Type t2)
		{
			return null;
		}

		private static object ReadValue(Type inst_type, JsonReader reader)
		{
			return null;
		}

		private static IJsonWrapper ReadValue(WrapperFactory factory, JsonReader reader)
		{
			return null;
		}

		private static void ReadSkip(JsonReader reader)
		{
		}

		private static void RegisterBaseExporters()
		{
		}

		private static void RegisterBaseImporters()
		{
		}

		private static void RegisterImporter(IDictionary<Type, IDictionary<Type, ImporterFunc>> table, Type json_type, Type value_type, ImporterFunc importer)
		{
		}

		private static void WriteValue(object obj, JsonWriter writer, bool writer_is_private, int depth)
		{
		}

		public static string ToJson(object obj)
		{
			return null;
		}

		public static void ToJson(object obj, JsonWriter writer)
		{
		}

		public static JsonData ToObject(JsonReader reader)
		{
			return null;
		}

		public static JsonData ToObject(TextReader reader)
		{
			return null;
		}

		public static JsonData ToObject(string json)
		{
			return null;
		}

		public static T ToObject<T>(JsonReader reader)
		{
			return default;
		}

		public static T ToObject<T>(TextReader reader)
		{
			return default;
		}

		public static T ToObject<T>(string json)
		{
			return default;
		}

		public static object ToObject(string json, Type ConvertType)
		{
			return null;
		}

		public static IJsonWrapper ToWrapper(WrapperFactory factory, JsonReader reader)
		{
			return null;
		}

		public static IJsonWrapper ToWrapper(WrapperFactory factory, string json)
		{
			return null;
		}

		public static void RegisterExporter<T>(ExporterFunc<T> exporter)
		{
		}

		public static void RegisterImporter<TJson, TValue>(ImporterFunc<TJson, TValue> importer)
		{
		}

		public static void UnregisterExporters()
		{
		}

		public static void UnregisterImporters()
		{
		}
	}
}
