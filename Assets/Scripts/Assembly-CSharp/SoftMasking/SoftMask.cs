using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace SoftMasking
{
	[ExecuteInEditMode]
	[DisallowMultipleComponent]
	[AddComponentMenu("UI/Soft Mask", 14)]
	[RequireComponent(typeof(RectTransform))]
	[HelpURL("https://docs.google.com/document/d/1xFZQGn_odhTCokMFR0LyCPXWtqWXN-bBGVS9GETglx8")]
	public class SoftMask : UIBehaviour, ISoftMask, ICanvasRaycastFilter
	{
		[Serializable]
		public enum MaskSource
		{
			Graphic = 0,
			Sprite = 1,
			Texture = 2
		}

		[Serializable]
		public enum BorderMode
		{
			Simple = 0,
			Sliced = 1,
			Tiled = 2
		}

		[Serializable]
		[Flags]
		public enum Errors
		{
			NoError = 0,
			UnsupportedShaders = 1,
			NestedMasks = 2,
			TightPackedSprite = 4,
			AlphaSplitSprite = 8,
			UnsupportedImageType = 0x10,
			UnreadableTexture = 0x20,
			UnreadableRenderTexture = 0x40
		}

		private struct SourceParameters
		{
			public Image image;

			public Sprite sprite;

			public BorderMode spriteBorderMode;

			public float spritePixelsPerUnit;

			public Texture texture;

			public Rect textureUVRect;
		}

		private class MaterialReplacerImpl : IMaterialReplacer
		{
			private readonly SoftMask _owner;

			public int order => 0;

			public MaterialReplacerImpl(SoftMask owner)
			{
			}

			public Material Replace(Material original)
			{
				return null;
			}

			private static Material Replace(Material original, Shader defaultReplacementShader)
			{
				return null;
			}
		}

		private static class Mathr
		{
			public static Vector4 ToVector(Rect r)
			{
				return default;
			}

			public static Vector4 Div(Vector4 v, Vector2 s)
			{
				return default;
			}

			public static Vector2 Div(Vector2 v, Vector2 s)
			{
				return default;
			}

			public static Vector4 Mul(Vector4 v, Vector2 s)
			{
				return default;
			}

			public static Vector2 Size(Vector4 r)
			{
				return default;
			}

			public static Vector4 Move(Vector4 v, Vector2 o)
			{
				return default;
			}

			public static Vector4 BorderOf(Vector4 outer, Vector4 inner)
			{
				return default;
			}

			public static Vector4 ApplyBorder(Vector4 v, Vector4 b)
			{
				return default;
			}

			public static Vector2 Min(Vector4 r)
			{
				return default;
			}

			public static Vector2 Max(Vector4 r)
			{
				return default;
			}

			public static Vector2 Remap(Vector2 c, Vector4 from, Vector4 to)
			{
				return default;
			}

			public static bool Inside(Vector2 v, Vector4 r)
			{
				return false;
			}
		}

		private struct MaterialParameters
		{
			public enum SampleMaskResult
			{
				Success = 0,
				NonReadable = 1,
				NonTexture2D = 2
			}

			private static class Ids
			{
				public static readonly int SoftMask;

				public static readonly int SoftMask_Rect;

				public static readonly int SoftMask_UVRect;

				public static readonly int SoftMask_ChannelWeights;

				public static readonly int SoftMask_WorldToMask;

				public static readonly int SoftMask_BorderRect;

				public static readonly int SoftMask_UVBorderRect;

				public static readonly int SoftMask_TileRepeat;

				public static readonly int SoftMask_InvertMask;

				public static readonly int SoftMask_InvertOutsides;
			}

			public Vector4 maskRect;

			public Vector4 maskBorder;

			public Vector4 maskRectUV;

			public Vector4 maskBorderUV;

			public Vector2 tileRepeat;

			public Color maskChannelWeights;

			public Matrix4x4 worldToMask;

			public Texture texture;

			public BorderMode borderMode;

			public bool invertMask;

			public bool invertOutsides;

			public Texture activeTexture => null;

			public SampleMaskResult SampleMask(Vector2 localPos, out float mask)
			{
				mask = default;
				return SampleMaskResult.Success;
			}

			public void Apply(Material mat)
			{
			}

			private Vector2 XY2UV(Vector2 localPos)
			{
				return default;
			}

			private Vector2 MapSimple(Vector2 localPos)
			{
				return default;
			}

			private Vector2 MapBorder(Vector2 localPos, bool repeat)
			{
				return default;
			}

			private float Inset(float v, float x1, float x2, float u1, float u2, float repeat = 1f)
			{
				return 0f;
			}

			private float Inset(float v, float x1, float x2, float x3, float x4, float u1, float u2, float u3, float u4, float repeat = 1f)
			{
				return 0f;
			}

			private float Frac(float v)
			{
				return 0f;
			}

			private float MaskValue(Color mask)
			{
				return 0f;
			}
		}

		private struct Diagnostics
		{
			private SoftMask _softMask;

			private Image image => null;

			private Sprite sprite => null;

			private Texture texture => null;

			public Diagnostics(SoftMask softMask)
			{
				_softMask = null;
			}

			public Errors PollErrors()
			{
				return Errors.NoError;
			}

			public static Errors CheckSprite(Sprite sprite)
			{
				return Errors.NoError;
			}

			private bool ThereAreNestedMasks()
			{
				return false;
			}

			private Errors CheckImage()
			{
				return Errors.NoError;
			}

			private Errors CheckTexture()
			{
				return Errors.NoError;
			}

			private static bool AreCompeting(SoftMask softMask, SoftMask other)
			{
				return false;
			}

			private static T SelectChild<T>(T first, T second) where T : Component
			{
				return null;
			}

			private static bool IsReadable(Texture2D texture)
			{
				return false;
			}
		}

		private struct WarningReporter
		{
			private UnityEngine.Object _owner;

			private Texture _lastReadTexture;

			private Sprite _lastUsedSprite;

			private Sprite _lastUsedImageSprite;

			private Image.Type _lastUsedImageType;

			public WarningReporter(UnityEngine.Object owner)
			{
				_owner = null;
				_lastReadTexture = null;
				_lastUsedSprite = null;
				_lastUsedImageSprite = null;
				_lastUsedImageType = Image.Type.Simple;
			}

			public void TextureRead(Texture texture, MaterialParameters.SampleMaskResult sampleResult)
			{
			}

			public void SpriteUsed(Sprite sprite, Errors errors)
			{
			}

			public void ImageUsed(Image image)
			{
			}
		}

		[SerializeField]
		private Shader _defaultShader;

		[SerializeField]
		private Shader _defaultETC1Shader;

		[SerializeField]
		private MaskSource _source;

		[SerializeField]
		private RectTransform _separateMask;

		[SerializeField]
		private Sprite _sprite;

		[SerializeField]
		private BorderMode _spriteBorderMode;

		[SerializeField]
		private float _spritePixelsPerUnitMultiplier;

		[SerializeField]
		private Texture _texture;

		[SerializeField]
		private Rect _textureUVRect;

		[SerializeField]
		private Color _channelWeights;

		[SerializeField]
		private float _raycastThreshold;

		[SerializeField]
		private bool _invertMask;

		[SerializeField]
		private bool _invertOutsides;

		private MaterialReplacements _materials;

		private MaterialParameters _parameters;

		private WarningReporter _warningReporter;

		private Rect _lastMaskRect;

		private bool _maskingWasEnabled;

		private bool _destroyed;

		private bool _dirty;

		private RectTransform _maskTransform;

		private Graphic _graphic;

		private Canvas _canvas;

		private static readonly Rect DefaultUVRect;

		private const float DefaultPixelsPerUnit = 100f;

		private static readonly List<SoftMask> s_masks;

		private static readonly List<SoftMaskable> s_maskables;

		public Shader defaultShader
		{
			get
			{
				return null;
			}
			set
			{
			}
		}

		public Shader defaultETC1Shader
		{
			get
			{
				return null;
			}
			set
			{
			}
		}

		public MaskSource source
		{
			get
			{
				return MaskSource.Graphic;
			}
			set
			{
			}
		}

		public RectTransform separateMask
		{
			get
			{
				return null;
			}
			set
			{
			}
		}

		public Sprite sprite
		{
			get
			{
				return null;
			}
			set
			{
			}
		}

		public BorderMode spriteBorderMode
		{
			get
			{
				return BorderMode.Simple;
			}
			set
			{
			}
		}

		public float spritePixelsPerUnitMultiplier
		{
			get
			{
				return 0f;
			}
			set
			{
			}
		}

		public Texture2D texture
		{
			get
			{
				return null;
			}
			set
			{
			}
		}

		public RenderTexture renderTexture
		{
			get
			{
				return null;
			}
			set
			{
			}
		}

		public Rect textureUVRect
		{
			get
			{
				return default;
			}
			set
			{
			}
		}

		public Color channelWeights
		{
			get
			{
				return default;
			}
			set
			{
			}
		}

		public float raycastThreshold
		{
			get
			{
				return 0f;
			}
			set
			{
			}
		}

		public bool invertMask
		{
			get
			{
				return false;
			}
			set
			{
			}
		}

		public bool invertOutsides
		{
			get
			{
				return false;
			}
			set
			{
			}
		}

		public bool isUsingRaycastFiltering => false;

		public bool isMaskingEnabled => false;

		private RectTransform maskTransform => null;

		private Canvas canvas => null;

		private bool isBasedOnGraphic => false;

		bool ISoftMask.isAlive => false;

		public Errors PollErrors()
		{
			return Errors.NoError;
		}

		public bool IsRaycastLocationValid(Vector2 sp, Camera cam)
		{
			return false;
		}

		protected override void Start()
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

		protected virtual void LateUpdate()
		{
		}

		protected override void OnRectTransformDimensionsChange()
		{
		}

		protected override void OnDidApplyAnimationProperties()
		{
		}

		private static float ClampPixelsPerUnitMultiplier(float value)
		{
			return 0f;
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

		private void SubscribeOnWillRenderCanvases()
		{
		}

		private void UnsubscribeFromWillRenderCanvases()
		{
		}

		private void OnWillRenderCanvases()
		{
		}

		private static T Touch<T>(T obj)
		{
			return default;
		}

		Material ISoftMask.GetReplacement(Material original)
		{
			return null;
		}

		void ISoftMask.ReleaseReplacement(Material replacement)
		{
		}

		void ISoftMask.UpdateTransformChildren(Transform transform)
		{
		}

		private void OnGraphicDirty()
		{
		}

		private void FindGraphic()
		{
		}

		private Canvas NearestEnabledCanvas()
		{
			return null;
		}

		private void UpdateMaskParameters()
		{
		}

		private void SpawnMaskablesInChildren(Transform root)
		{
		}

		private void InvalidateChildren()
		{
		}

		private void NotifyChildrenThatMaskMightChanged()
		{
		}

		private void ForEachChildMaskable(Action<SoftMaskable> f)
		{
		}

		private void DestroyMaterials()
		{
		}

		private SourceParameters DeduceSourceParameters()
		{
			return default;
		}

		public static BorderMode ImageTypeToBorderMode(Image.Type type)
		{
			return BorderMode.Simple;
		}

		public static bool IsImageTypeSupported(Image.Type type)
		{
			return false;
		}

		private void CalculateMaskParameters()
		{
		}

		private void CalculateSpriteBased(Sprite sprite, BorderMode borderMode, float spritePixelsPerUnit)
		{
		}

		private static Vector4 AdjustBorders(Vector4 border, Vector4 rect)
		{
			return default;
		}

		private void CalculateTextureBased(Texture texture, Rect uvRect)
		{
		}

		private void CalculateSolidFill()
		{
		}

		private void FillCommonParameters()
		{
		}

		private float SpriteToCanvasScale(float spritePixelsPerUnit)
		{
			return 0f;
		}

		private Matrix4x4 WorldToMask()
		{
			return default;
		}

		private Vector4 LocalMaskRect(Vector4 border)
		{
			return default;
		}

		private Vector2 MaskRepeat(Sprite sprite, float spritePixelsPerUnit, Vector4 centralPart)
		{
			return default;
		}

		private void WarnIfDefaultShaderIsNotSet()
		{
		}

		private void Set<T>(ref T field, T value)
		{
		}

		private void SetShader(ref Shader field, Shader value, bool warnIfNotSet = true)
		{
		}
	}
}
