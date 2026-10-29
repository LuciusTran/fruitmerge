using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using BM;
using ET;
using UnityEngine;

namespace Game.Manager
{
	public class ResManager : Singleton<ResManager>, IProgress
	{
		[StructLayout((LayoutKind)3)]
		[CompilerGenerated]
		private struct _003CDownLoad_003Ed__10 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public ETAsyncTaskMethodBuilder _003C_003Et__builder;

			public ResManager _003C_003E4__this;

			private object _003C_003Eu__1;

			private void MoveNext()
			{
			}

			void IAsyncStateMachine.MoveNext()
			{
				//ILSpy generated this explicit interface implementation from .override directive in MoveNext
				this.MoveNext();
			}

			[DebuggerHidden]
			private void SetStateMachine(IAsyncStateMachine stateMachine)
			{
			}

			void IAsyncStateMachine.SetStateMachine(IAsyncStateMachine stateMachine)
			{
				//ILSpy generated this explicit interface implementation from .override directive in SetStateMachine
				this.SetStateMachine(stateMachine);
			}
		}

		[StructLayout((LayoutKind)3)]
		[CompilerGenerated]
		private struct _003CInitializePackage_003Ed__11 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public ETAsyncTaskMethodBuilder _003C_003Et__builder;

			public ResManager _003C_003E4__this;

			private object _003C_003Eu__1;

			private void MoveNext()
			{
			}

			void IAsyncStateMachine.MoveNext()
			{
				//ILSpy generated this explicit interface implementation from .override directive in MoveNext
				this.MoveNext();
			}

			[DebuggerHidden]
			private void SetStateMachine(IAsyncStateMachine stateMachine)
			{
			}

			void IAsyncStateMachine.SetStateMachine(IAsyncStateMachine stateMachine)
			{
				//ILSpy generated this explicit interface implementation from .override directive in SetStateMachine
				this.SetStateMachine(stateMachine);
			}
		}

		[SerializeField]
		private float m_Progress;

		public bool BundleFinish;

		private UpdateBundleDataInfo updateBundleDataInfo;

		public override void Awake()
		{
		}

		public void Init()
		{
		}

		private void Start()
		{
		}

		private void Update()
		{
		}

		private void OnLowMemory()
		{
		}

		private void OnDestroy()
		{
		}

		private void Initialization()
		{
		}

		[AsyncStateMachine(typeof(_003CDownLoad_003Ed__10))]
		private ETTask DownLoad()
		{
			return null;
		}

		[AsyncStateMachine(typeof(_003CInitializePackage_003Ed__11))]
		private ETTask InitializePackage()
		{
			return null;
		}

		public float GetProgress()
		{
			return 0f;
		}

		public static T Load<T>(string path, string bundlePackageName = null) where T : UnityEngine.Object
		{
			return null;
		}

		public static T Load<T>(out LoadHandler handler, string path) where T : UnityEngine.Object
		{
			handler = null;
			return null;
		}

		public static UnityEngine.Object Load(string path, string bundlePackageName = null)
		{
			return null;
		}

		public static void Unload(string path)
		{
		}

		public static void LoadSync<T>(string path, Action<LoadHandler, T> onLoad) where T : UnityEngine.Object
		{
		}

		public static void LoadAsync<T>(string path, Action<LoadHandler, T> onLoad) where T : UnityEngine.Object
		{
		}

		public void ClearUnusedResources()
		{
		}

		internal static void UnloadHanler(LoadHandler item)
		{
		}

		internal static bool IsExist(string path)
		{
			return false;
		}
	}
}
