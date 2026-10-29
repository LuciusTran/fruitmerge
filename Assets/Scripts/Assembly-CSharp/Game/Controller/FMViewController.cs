using System.Collections.Generic;
using UnityEngine;

namespace Game.Controller
{
	public class FMViewController
	{
		private const string UI_ROOT_PATH = "Main/Prefabs/UI/View/";

		private const string UI_ROOT_NAME = "Views";

		private static bool isInit;

		private static Camera UICamera;

		private static List<View> viewPools;

		private static List<View> topViewPools;

		private static List<View> toastViewPools;

		private static Transform NormalRoot;

		private static Transform PopRoot;

		private static Transform ToastRoot;

		public static void Init()
		{
		}

		public static bool IsGameIsTop()
		{
			return false;
		}

		public static T GetView<T>(string ViewName) where T : View
		{
			return null;
		}

		public static T GetTopView<T>(string ViewName) where T : View
		{
			return null;
		}

		public static string PrefabPath(string ViewName)
		{
			return null;
		}

		private static GameObject loadRes(string ViewName)
		{
			return null;
		}

		internal static void EnableTouch(bool enabled)
		{
		}

		public static GameObject ShowBehindView(string ViewName, bool hideLast = false, params object[] data)
		{
			return null;
		}

		public static GameObject ShowView(string ViewName, bool hideLast = false, params object[] data)
		{
			return null;
		}

		public static GameObject ShowToastView(string ViewName, params object[] data)
		{
			return null;
		}

		public static void CloseToastView(GameObject View)
		{
		}

		public static T GetToastView<T>(string ViewName) where T : View
		{
			return null;
		}

		public static GameObject ShowTopView(string ViewName, int order, bool hideLast = false, params object[] data)
		{
			return null;
		}

		public static void CloseTopView(GameObject View)
		{
		}

		public static void CloseView(GameObject View, float fadeOutTime = 0f)
		{
		}

		public static void CloseView(string ViewName, float fadeOutTime = 0f)
		{
		}

		private static void closeView(View view, float fadeOutTime = 0f)
		{
		}

		public static void CloseAllView()
		{
		}
	}
}
