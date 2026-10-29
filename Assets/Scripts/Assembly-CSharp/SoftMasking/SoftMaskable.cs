using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace SoftMasking
{
	[ExecuteInEditMode]
	[DisallowMultipleComponent]
	[AddComponentMenu(null)]
	public class SoftMaskable : UIBehaviour, IMaterialModifier
	{
		private ISoftMask _mask;

		private Graphic _graphic;

		private Material _replacement;

		private bool _affectedByMask;

		private bool _destroyed;

		private static List<ISoftMask> s_softMasks;

		private static List<Canvas> s_canvases;

		public bool shaderIsNotSupported { get; private set; }

		public bool isMaskingEnabled => false;

		public ISoftMask mask
		{
			get
			{
				return null;
			}
			private set
			{
			}
		}

		private Graphic graphic => null;

		private Material replacement
		{
			get
			{
				return null;
			}
			set
			{
			}
		}

		public Material GetModifiedMaterial(Material baseMaterial)
		{
			return null;
		}

		public void Invalidate()
		{
		}

		public void MaskMightChanged()
		{
		}

		protected override void Awake()
		{
		}

		protected override void OnEnable()
		{
		}

		protected override void OnDisable()
		{
		}

		protected override void OnDestroy()
		{
		}

		protected override void OnTransformParentChanged()
		{
		}

		protected override void OnCanvasHierarchyChanged()
		{
		}

		private void OnTransformChildrenChanged()
		{
		}

		private void RequestChildTransformUpdate()
		{
		}

		private bool FindMaskOrDie()
		{
			return false;
		}

		private static ISoftMask NearestMask(Transform transform, out bool processedByThisMask, bool enabledOnly = true)
		{
			processedByThisMask = default;
			return null;
		}

		private static ISoftMask GetISoftMask(Transform current, bool shouldBeEnabled = true)
		{
			return null;
		}

		private static bool IsOverridingSortingCanvas(Transform transform)
		{
			return false;
		}

		private static T GetComponent<T>(Component component, List<T> cachedList) where T : class
		{
			return null;
		}

		private void SetShaderNotSupported(Material material)
		{
		}
	}
}
