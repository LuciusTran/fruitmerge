using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

public class SoundMgr : MonoBehaviour
{
	public enum SoundName
	{
		none = 0,
		fruit_bgm = 1,
		fruit_complete = 2,
		fruit_floor1 = 3,
		fruit_floor2 = 4,
		fruit_floor3 = 5,
		fruit_floor4 = 6,
		fruit_merge = 7,
		great = 8,
		amazing = 9,
		excellent = 10,
		Unbelievable = 11,
		collect_coins = 12,
		fruit_getticket = 13,
		levelup = 14,
		fruit_uiselect = 15,
		fruit_build = 16,
		fruit_ticket = 17,
		fruit_room = 18,
		open_box = 19
	}

	[CompilerGenerated]
	private sealed class _003CDelayResetSoundName_003Ed__38 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public float time;

		public SoundMgr _003C_003E4__this;

		object IEnumerator<object>.Current
		{
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		object IEnumerator.Current
		{
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[DebuggerHidden]
		public _003CDelayResetSoundName_003Ed__38(int _003C_003E1__state)
		{
		}

		[DebuggerHidden]
		void IDisposable.Dispose()
		{
		}

		private bool MoveNext()
		{
			return false;
		}

		bool IEnumerator.MoveNext()
		{
			//ILSpy generated this explicit interface implementation from .override directive in MoveNext
			return this.MoveNext();
		}

		[DebuggerHidden]
		void IEnumerator.Reset()
		{
		}
	}

	[CompilerGenerated]
	private sealed class _003CWaitForSoundPlayOver_003Ed__50 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public float soundLength;

		public SoundMgr _003C_003E4__this;

		object IEnumerator<object>.Current
		{
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		object IEnumerator.Current
		{
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[DebuggerHidden]
		public _003CWaitForSoundPlayOver_003Ed__50(int _003C_003E1__state)
		{
		}

		[DebuggerHidden]
		void IDisposable.Dispose()
		{
		}

		private bool MoveNext()
		{
			return false;
		}

		bool IEnumerator.MoveNext()
		{
			//ILSpy generated this explicit interface implementation from .override directive in MoveNext
			return this.MoveNext();
		}

		[DebuggerHidden]
		void IEnumerator.Reset()
		{
		}
	}

	[CompilerGenerated]
	private sealed class _003CgradualStop_003Ed__44 : IEnumerator<object>, IEnumerator, IDisposable
	{
		private int _003C_003E1__state;

		private object _003C_003E2__current;

		public SoundMgr _003C_003E4__this;

		public Action callback;

		private float _003Cvolume_003E5__2;

		object IEnumerator<object>.Current
		{
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		object IEnumerator.Current
		{
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[DebuggerHidden]
		public _003CgradualStop_003Ed__44(int _003C_003E1__state)
		{
		}

		[DebuggerHidden]
		void IDisposable.Dispose()
		{
		}

		private bool MoveNext()
		{
			return false;
		}

		bool IEnumerator.MoveNext()
		{
			//ILSpy generated this explicit interface implementation from .override directive in MoveNext
			return this.MoveNext();
		}

		[DebuggerHidden]
		void IEnumerator.Reset()
		{
		}
	}

	public static SoundMgr Instance;

	private List<SoundName> m_TouchSounds;

	private List<SoundName> m_MatchSounds;

	private List<SoundName> m_ComboSounds;

	private int touchCount;

	private int matchCount;

	private float lastTouchSoundTime;

	private float lastMatchSoundTime;

	private float lastComboSoundTime;

	public AudioSource BGMPlayer;

	public AudioClip[] BGMs;

	public AudioSource SoundPlayer;

	public AudioSource LoopSoundPlayer;

	private SoundName currentSoundName;

	private SoundName currentLoopSoundName;

	private float _lastPushTime;

	private float _pushPlayPulse;

	private int _playCount;

	private Coroutine stopCoroutine;

	private Action _onPlayOver;

	private void Awake()
	{
	}

	private void Init()
	{
	}

	public void ResetCounts()
	{
	}

	public void PlayMaJiangTouchSound()
	{
	}

	public void PlayMaJiangMatchSound()
	{
	}

	public void RandomMaJiangMatchSound()
	{
	}

	public void PlayMaJiangComboSound(int index = 0)
	{
	}

	public void PlayMaJiangComboSound(SoundName soundName)
	{
	}

	public void ChangeBGMVolume(float v)
	{
	}

	internal void OpenBgm()
	{
	}

	internal void CloseBgm()
	{
	}

	internal void OpenSound()
	{
	}

	internal void CloseSound()
	{
	}

	public void PlayBGM()
	{
	}

	public void PlayLevelBGM(SoundName soundName)
	{
	}

	public void PauseBGM()
	{
	}

	public void StopTicketSound()
	{
	}

	public void PlaySound(SoundName soundName, bool loop, float playSpeed = 1f, bool playNewSound = false)
	{
	}

	public void PlaySoundAndWait(SoundName soundName, float waitTime, float playSpeed = 1f)
	{
	}

	[IteratorStateMachine(typeof(_003CDelayResetSoundName_003Ed__38))]
	private IEnumerator DelayResetSoundName(float time)
	{
		return null;
	}

	public void StopSound()
	{
	}

	public void StopLoopSound()
	{
	}

	public void StopSoundPlayer()
	{
	}

	public void StopSoundGradual()
	{
	}

	[IteratorStateMachine(typeof(_003CgradualStop_003Ed__44))]
	private IEnumerator gradualStop(Action callback)
	{
		return null;
	}

	private void onChangeBGM(int id, float volume)
	{
	}

	public void SetOnPlayOver(Action onPlayOver)
	{
	}

	public void ClearOnPlayOver()
	{
	}

	private void playClip(AudioClip clip, float playSpeed = 1f)
	{
	}

	[IteratorStateMachine(typeof(_003CWaitForSoundPlayOver_003Ed__50))]
	private IEnumerator WaitForSoundPlayOver(float soundLength)
	{
		return null;
	}
}
