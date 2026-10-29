using System;
using System.ComponentModel;
using System.Runtime.CompilerServices;
using OPS.Obfuscator.Attribute;
using SRDebugger;
using UnityEngine;

[DoNotObfuscateClass]
public class SROptions : INotifyPropertyChanged
{
	[AttributeUsage(AttributeTargets.Method | AttributeTargets.Property)]
	public sealed class DisplayNameAttribute : System.ComponentModel.DisplayNameAttribute
	{
		public DisplayNameAttribute(string displayName)
		{
		}
	}

	[AttributeUsage(AttributeTargets.Property)]
	public sealed class IncrementAttribute : SRDebugger.IncrementAttribute
	{
		public IncrementAttribute(double increment)
			: base(0.0)
		{
		}
	}

	[AttributeUsage(AttributeTargets.Property)]
	public sealed class NumberRangeAttribute : SRDebugger.NumberRangeAttribute
	{
		public NumberRangeAttribute(double min, double max)
			: base(0.0, 0.0)
		{
		}
	}

	[AttributeUsage(AttributeTargets.Method | AttributeTargets.Property)]
	public sealed class SortAttribute : SRDebugger.SortAttribute
	{
		public SortAttribute(int priority)
			: base(0)
		{
		}
	}

	private static readonly SROptions _current;

	[CompilerGenerated]
	private SROptionsPropertyChanged m_PropertyChanged;

	[CompilerGenerated]
	private PropertyChangedEventHandler m_InterfacePropertyChangedEventHandler;

	private bool _adUserBoolean;

	private bool _skipAdBoolean;

	private bool _iapTestBoolean;

	private bool _isZhCNBoolean;

	private int _vibrationValue;

	private int _amplitudeValue;

	private bool _OpenScreenShot;

	public static AndroidJavaClass unityPlayer;

	public static AndroidJavaObject currentActivity;

	public static AndroidJavaObject vibrator;

	public static AndroidJavaObject context;

	private int antiLevel;

	private int lightCount;

	private ShadowResolution shadowResolution;

	private ShadowQuality m_ShadowQuality;

	private float bias;

	private float normalbias;

	public static SROptions Current => null;

	[Category("TestSwitcher")]
	public bool AdUserBoolean
	{
		get
		{
			return false;
		}
		set
		{
		}
	}

	[Category("TestSwitcher")]
	public bool SkipAdBoolean
	{
		get
		{
			return false;
		}
		set
		{
		}
	}

	[Category("TestSwitcher")]
	public bool IapTestBoolean
	{
		get
		{
			return false;
		}
		set
		{
		}
	}

	[Category("TestSwitcher")]
	public bool IsZhCNBoolean
	{
		get
		{
			return false;
		}
		set
		{
		}
	}

	[Category("TestSwitcher")]
	public bool OpenScreenShot
	{
		get
		{
			return false;
		}
		set
		{
		}
	}

	[Category("Vibration")]
	public int VibrationValue
	{
		get
		{
			return 0;
		}
		set
		{
		}
	}

	[Category("Vibration")]
	[NumberRange(1.0, 255.0)]
	public int AmplitudeValue
	{
		get
		{
			return 0;
		}
		set
		{
		}
	}

	[Category("抗锯齿等级")]
	[NumberRange(0.0, 3.0)]
	public int AntiLevel
	{
		get
		{
			return 0;
		}
		set
		{
		}
	}

	[Category("顶点光照个数")]
	[NumberRange(0.0, 4.0)]
	public int LightCount
	{
		get
		{
			return 0;
		}
		set
		{
		}
	}

	[Category("阴影质量")]
	public ShadowResolution ShadowLevel
	{
		get
		{
			return ShadowResolution.Low;
		}
		set
		{
		}
	}

	[Category("全局阴影开关")]
	public ShadowQuality ShadowQuality
	{
		get
		{
			return ShadowQuality.Disable;
		}
		set
		{
		}
	}

	[Category("Bias")]
	[NumberRange(0.0, 2.0)]
	public float Bias
	{
		get
		{
			return 0f;
		}
		set
		{
		}
	}

	[Category("normalBias")]
	[NumberRange(0.0, 3.0)]
	public float NormalBias
	{
		get
		{
			return 0f;
		}
		set
		{
		}
	}

	[Category("ChangeDepth")]
	public int Depth
	{
		get
		{
			return 0;
		}
		set
		{
		}
	}

	[Category("ChangeRenderTexture")]
	public RenderTextureFormat Type
	{
		get
		{
			return RenderTextureFormat.ARGB32;
		}
		set
		{
		}
	}

	public event SROptionsPropertyChanged PropertyChanged
	{
		[CompilerGenerated]
		add
		{
		}
		[CompilerGenerated]
		remove
		{
		}
	}

	private event PropertyChangedEventHandler InterfacePropertyChangedEventHandler
	{
		[CompilerGenerated]
		add
		{
		}
		[CompilerGenerated]
		remove
		{
		}
	}

	event PropertyChangedEventHandler INotifyPropertyChanged.PropertyChanged
	{
		add
		{
		}
		remove
		{
		}
	}

	[RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.AfterSceneLoad)]
	public static void OnStartup()
	{
	}

	public void OnPropertyChanged(string propertyName)
	{
	}

	[Category("Vibration")]
	public void DEFAULT_AMPLITUDE()
	{
	}

	[Category("Vibration")]
	public void EFFECT_CLICK()
	{
	}

	[Category("Vibration")]
	public void EFFECT_DOUBLE_CLICK()
	{
	}

	[Category("Vibration")]
	public void EFFECT_HEAVY_CLICK()
	{
	}

	[Category("Vibration")]
	public void EFFECT_TICK()
	{
	}

	[Category("Vibration")]
	public void HandheldVibrate()
	{
	}

	[Category("Vibration")]
	public void Version()
	{
	}

	[Category("Vibration_Compose")]
	public void PRIMITIVE_CLICK()
	{
	}

	[Category("Vibration_Compose")]
	public void PRIMITIVE_NOOP()
	{
	}

	[Category("Vibration_Compose")]
	public void PRIMITIVE_QUICK_FALL()
	{
	}

	[Category("Vibration_Compose")]
	public void PRIMITIVE_QUICK_RISE()
	{
	}

	[Category("Vibration_Compose")]
	public void PRIMITIVE_SLOW_RISE()
	{
	}

	[Category("Vibration_Compose")]
	public void PRIMITIVE_SPIN()
	{
	}

	[Category("Vibration_Compose")]
	public void PRIMITIVE_THUD()
	{
	}

	[Category("Vibration_Compose")]
	public void PRIMITIVE_TICK()
	{
	}

	private void OnValueChanged(string n, object newValue)
	{
	}

	[Category("Clear UserData")]
	public void ClearUserData()
	{
	}

	[Category("CloseBGM")]
	public void CloseBGM()
	{
	}

	[Category("ActiveVIP")]
	public void ActiveVIP()
	{
	}
}
