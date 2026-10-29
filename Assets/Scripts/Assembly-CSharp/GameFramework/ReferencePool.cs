using System;
using System.Collections.Generic;

namespace GameFramework
{
	public static class ReferencePool
	{
		private sealed class ReferenceCollection
		{
			private readonly Queue<IReference> m_References;

			private readonly Type m_ReferenceType;

			private int m_UsingReferenceCount;

			private int m_AcquireReferenceCount;

			private int m_ReleaseReferenceCount;

			private int m_AddReferenceCount;

			private int m_RemoveReferenceCount;

			public Type ReferenceType => null;

			public int UnusedReferenceCount => 0;

			public int UsingReferenceCount => 0;

			public int AcquireReferenceCount => 0;

			public int ReleaseReferenceCount => 0;

			public int AddReferenceCount => 0;

			public int RemoveReferenceCount => 0;

			public ReferenceCollection(Type referenceType)
			{
			}

			public T Acquire<T>() where T : class, IReference, new()
			{
				return null;
			}

			public IReference Acquire()
			{
				return null;
			}

			public void Release(IReference reference)
			{
			}

			public void Add<T>(int count) where T : class, IReference, new()
			{
			}

			public void Add(int count)
			{
			}

			public void Remove(int count)
			{
			}

			public void RemoveAll()
			{
			}
		}

		private static readonly Dictionary<Type, ReferenceCollection> s_ReferenceCollections;

		private static bool m_EnableStrictCheck;

		public static bool EnableStrictCheck
		{
			get
			{
				return false;
			}
			set
			{
			}
		}

		public static int Count => 0;

		public static ReferencePoolInfo[] GetAllReferencePoolInfos()
		{
			return null;
		}

		public static void ClearAll()
		{
		}

		public static T Acquire<T>() where T : class, IReference, new()
		{
			return null;
		}

		public static IReference Acquire(Type referenceType)
		{
			return null;
		}

		public static void Release(IReference reference)
		{
		}

		public static void Add<T>(int count) where T : class, IReference, new()
		{
		}

		public static void Add(Type referenceType, int count)
		{
		}

		public static void Remove<T>(int count) where T : class, IReference
		{
		}

		public static void Remove(Type referenceType, int count)
		{
		}

		public static void RemoveAll<T>() where T : class, IReference
		{
		}

		public static void RemoveAll(Type referenceType)
		{
		}

		private static void InternalCheckReferenceType(Type referenceType)
		{
		}

		private static ReferenceCollection GetReferenceCollection(Type referenceType)
		{
			return null;
		}
	}
}
