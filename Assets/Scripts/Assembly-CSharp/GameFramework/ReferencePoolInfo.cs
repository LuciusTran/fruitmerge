using System;
using System.Runtime.InteropServices;

namespace GameFramework
{
	[StructLayout((LayoutKind)3)]
	public struct ReferencePoolInfo
	{
		private readonly Type m_Type;

		private readonly int m_UnusedReferenceCount;

		private readonly int m_UsingReferenceCount;

		private readonly int m_AcquireReferenceCount;

		private readonly int m_ReleaseReferenceCount;

		private readonly int m_AddReferenceCount;

		private readonly int m_RemoveReferenceCount;

		public Type Type => null;

		public int UnusedReferenceCount => 0;

		public int UsingReferenceCount => 0;

		public int AcquireReferenceCount => 0;

		public int ReleaseReferenceCount => 0;

		public int AddReferenceCount => 0;

		public int RemoveReferenceCount => 0;

		public ReferencePoolInfo(Type type, int unusedReferenceCount, int usingReferenceCount, int acquireReferenceCount, int releaseReferenceCount, int addReferenceCount, int removeReferenceCount)
		{
			m_Type = null;
			m_UnusedReferenceCount = 0;
			m_UsingReferenceCount = 0;
			m_AcquireReferenceCount = 0;
			m_ReleaseReferenceCount = 0;
			m_AddReferenceCount = 0;
			m_RemoveReferenceCount = 0;
		}
	}
}
