using System.Collections.Generic;
using UnityEngine;

public class ItemScript : MonoBehaviour
{
	[ColoredHeader("是否有阴影提示", 1f, 1f, 1f, 14, FontStyle.Bold, TextAnchor.MiddleLeft)]
	public bool IsRemindShadow;

	[ColoredHeader("分组  0代表不分组 如果多个物品分为一组，可设置相同的数字", 1f, 1f, 1f, 14, FontStyle.Bold, TextAnchor.MiddleLeft)]
	public int ItemGroupNum;

	[ColoredHeader("依赖的物体(可以依赖多个) 拖到这里来", 1f, 1f, 1f, 14, FontStyle.Bold, TextAnchor.MiddleLeft)]
	public List<GameObject> DependObjects;

	[ColoredHeader("放下后 粒子效果列表", 0f, 1f, 1f, 14, FontStyle.Bold, TextAnchor.MiddleLeft)]
	public List<ParticleSystem> PutDownParticleSystem;

	[ColoredHeader("放下后 动画列表", 0f, 1f, 1f, 14, FontStyle.Bold, TextAnchor.MiddleLeft)]
	public List<Animator> PutDownAnimators;

	[ColoredHeader("主动触发 音效名称—放在正确位置上后触发", 1f, 1f, 0f, 14, FontStyle.Bold, TextAnchor.MiddleLeft)]
	public string SoundNameWhenPutDown;

	[ColoredHeader("被动触发 音效名称—其他某个物品放下后触发", 1f, 1f, 0f, 14, FontStyle.Bold, TextAnchor.MiddleLeft)]
	public string SoundNameWhenBeTriggered;

	[ColoredHeader("结束触发 音效名称—全部摆放结束后的音效", 1f, 1f, 0f, 14, FontStyle.Bold, TextAnchor.MiddleLeft)]
	public string SoundNameWhenAllPutDownFinish;

	[ColoredHeader("主动触发 动画名称—放在正确位置上后触发", 0f, 1f, 1f, 14, FontStyle.Bold, TextAnchor.MiddleLeft)]
	public string AniNameWhenPutDown;

	[ColoredHeader("主动触发 放在正确位置上后触发的动画是否循环播放", 0f, 1f, 1f, 14, FontStyle.Bold, TextAnchor.MiddleLeft)]
	public bool AniIsLoopWhenPutDown;

	[ColoredHeader("主动触发 动画名称—放下物品后播完动画再继续循环播放待机动画", 0f, 1f, 1f, 14, FontStyle.Bold, TextAnchor.MiddleLeft)]
	public string AniNameAfterPutDownAnimation;

	[ColoredHeader("被动触发 动画名称—其他某个物品放下后触发", 1f, 0.5f, 1f, 14, FontStyle.Bold, TextAnchor.MiddleLeft)]
	public string AniNameWhenBeTriggered;

	[ColoredHeader("被动触发 其他某个物品放下后触发的动画是否循环播放", 1f, 0.5f, 1f, 14, FontStyle.Bold, TextAnchor.MiddleLeft)]
	public bool AniIsLoopWhenBeTriggered;

	[ColoredHeader("触发其他物品的动画 把其他物品拖到此处", 1f, 0.5f, 1f, 14, FontStyle.Bold, TextAnchor.MiddleLeft)]
	public List<GameObject> TriggeredObjectList;

	[ColoredHeader("结束触发 动画名称—全部摆放结束后的动画", 1f, 0.5f, 0f, 14, FontStyle.Bold, TextAnchor.MiddleLeft)]
	public string AniNameWhenAllPutDownFinish;

	[ColoredHeader("子物体点击相关 比如开关门", 0f, 1f, 1f, 14, FontStyle.Bold, TextAnchor.MiddleCenter)]
	public GameObject DefaultObj;

	public GameObject SelectedObj;

	[ColoredHeader("关门时 需要隐藏的物品", 0f, 1f, 1f, 14, FontStyle.Bold, TextAnchor.MiddleLeft)]
	public List<GameObject> NeedHideObjList;

	private Vector3 originLocalPos;

	private Vector3 originLocalScale;

	private int originSortOrder;

	private int defaultOriginSortOrder;

	private int remindShadowType;

	private int tryCount;

	private bool canTap;

	private bool isClosed;

	private bool isFinishedPutDown;

	private bool isHaveItemCurrentPosition;

	private int starCount;

	private float itemDistance;

	private int _itemAppearPosIndex;

	private ItemScript _parentItemScript;

	public bool IsFinishPutDown
	{
		get
		{
			return false;
		}
		set
		{
		}
	}

	public bool IsHaveItemCurrentPosition
	{
		get
		{
			return false;
		}
		set
		{
		}
	}

	public int StarCount => 0;

	public float ItemDistance => 0f;

	public int ItemAppearPosIndex
	{
		get
		{
			return 0;
		}
		set
		{
		}
	}

	public bool IsClosed => false;

	public ItemScript ParentItemScript
	{
		get
		{
			return null;
		}
		set
		{
		}
	}

	public Vector3 GetOriginLocalPos()
	{
		return default;
	}

	public Vector3 GetOriginLocalScale()
	{
		return default;
	}

	public int GetOriginSortOrder()
	{
		return 0;
	}

	public int GetDefaultObjOriginSortOrder()
	{
		return 0;
	}

	public int GetRemindShadowType()
	{
		return 0;
	}

	public int GetTryCount()
	{
		return 0;
	}

	public void OpenOrCloseAction()
	{
	}

	public void CheckNeedAutoClose()
	{
	}
}
