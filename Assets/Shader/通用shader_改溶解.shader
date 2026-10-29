Shader "QM/通用Shader_溶解改" {
	Properties {
		[Enum(UnityEngine.Rendering.BlendMode)] _src ("渲染目标", Float) = 1
		_MainPower ("对比度Power", Float) = 1
		_OpacityPower ("透明度Power", Float) = 1
		[HDR] _Color ("颜色", Vector) = (1,1,1,1)
		_Indensity ("曝光", Float) = 1
		_Opacity ("透明度", Float) = 1
		[Main(z1,_KEYWORD,off,off)] _Group1 ("主帖图", Float) = 0
		[Sub(z1)] _MainTex ("主帖图", 2D) = "white" {}
		[Sub(z1)] radiansMaintex ("旋转角度", Range(0, 360)) = 0
		[Sub(z1)] _MainU ("流动U", Float) = 0
		[Sub(z1)] _MainV ("流动V", Float) = 0
		[SubToggle(z1,_POLAR_ON)] _Polar ("极坐标", Float) = 0
		[Sub(z1)] _PolarTileU ("顶点平铺U", Float) = 1
		[Sub(z1)] _PolarTileV ("顶点平铺V", Float) = 1
		[Sub(z1)] _PolarOffsetU ("顶点偏移U", Float) = 0
		[Sub(z1)] _PolarOffsetV ("顶点偏移V", Float) = 0
		[Sub(z1)] _PolarU ("流动U", Float) = 0
		[Sub(z1)] _PolarV ("流动V", Float) = 0
		[Sub(z1)] _Twist ("Twist", Float) = 0
		[Sub(z1)] _Power ("Power", Float) = 1
		[Main(z2,_KEYWORD,off,off)] _Group2 ("追加贴图", Float) = 0
		[Sub(z2)] _AlphaTex ("透明贴图1", 2D) = "white" {}
		[Sub(z2)] radiansAlpha ("旋转角度", Range(0, 360)) = 0
		[Sub(z2)] _AlphaU ("流动U", Float) = 0
		[Sub(z2)] _AlphaV ("流动V", Float) = 0
		[Sub(z2)] _AlphaTex2 ("透明贴图2", 2D) = "white" {}
		[Sub(z2)] radiansAlpha2 ("旋转角度", Range(0, 360)) = 0
		[Sub(z2)] _Alpha2U ("流动U", Float) = 0
		[Sub(z2)] _Alpha2V ("流动V", Float) = 0
		[Sub(z2)] _AlphaTex3 ("透明贴图3", 2D) = "white" {}
		[Sub(z2)] radiansAlpha3 ("旋转角度", Range(0, 360)) = 0
		[Sub(z2)] _Alpha3U ("流动U", Float) = 0
		[Sub(z2)] _Alpha3V ("流动V", Float) = 0
		[Sub(z2)] _AlphaTex4 ("A_透明贴图4", 2D) = "white" {}
		[Sub(z2)] radiansAlpha4 ("旋转角度", Range(0, 360)) = 0
		[Sub(z2)] _Alpha4U ("流动U", Float) = 0
		[Sub(z2)] _Alpha4V ("流动V", Float) = 0
		[Sub(z2)] _AlphaTex5 ("A_透明贴图5", 2D) = "white" {}
		[Sub(z2)] radiansAlpha5 ("旋转角度", Range(0, 360)) = 0
		[Sub(z2)] _Alpha5U ("流动U", Float) = 0
		[Sub(z2)] _Alpha5V ("流动V", Float) = 0
		[Main(z4,_KEYWORD,off,off)] _Group4 ("扭曲", Float) = 0
		[Sub(z4)] _DistortionTex ("扭曲贴图", 2D) = "white" {}
		[Sub(z4)] radiansDistortionTex ("旋转角度", Range(0, 360)) = 0
		[Sub(z4)] _DistortionU ("流动U", Float) = 0
		[Sub(z4)] _DistortionV ("流动V", Float) = 0
		[Sub(z4)] _DistortionIndensity ("扭曲强度", Float) = 0
		[Main(z3,_KEYWORD,off,off)] _Group3 ("溶解", Float) = 0
		[Sub(z3)] diss_tex ("溶解贴图", 2D) = "white" {}
		[Sub(z3)] [SubToggle(z3,_DISS_REVERSE_ON)] _Diss_Reverse ("贴图反向", Float) = 0
		[Sub(z3)] radiansAlpha6 ("旋转角度", Range(0, 360)) = 0
		[Sub(z3)] _Alpha4U1 ("流动U", Float) = 0
		[Sub(z3)] _Alpha4V1 ("流动V", Float) = 0
		[Sub(z3)] _Alpha ("溶解透明度", Float) = 1
		[Sub(z3)] _Diss_value ("溶解强度", Float) = 1
		[Sub(z3)] _Soft_value ("边缘软化", Float) = 0
		[Main(z6,_KEYWORD,off,off)] _Group6 ("颜色叠加", Float) = 0
		[Sub(z6)] _GradientTex ("颜色叠加贴图", 2D) = "white" {}
		[Sub(z6)] _GradientTexU ("流动U", Float) = 0
		[Sub(z6)] _GradientTexV ("流动V", Float) = 0
		[Main(z5,_KEYWORD,off,off)] _Group5 ("顶点偏移", Float) = 0
		[Sub(z5)] _VertexOffsetTex ("顶点偏移贴图", 2D) = "white" {}
		[Sub(z5)] _VertexOffsetTexU ("流动U", Float) = 0
		[Sub(z5)] _VertexOffsetTexV ("流动V", Float) = 0
		[Sub(z5)] _VertexOffsetIndensity ("偏移强度", Float) = 0
		[HideInInspector] _texcoord ("", 2D) = "white" {}
		[HideInInspector] __dirty ("", Float) = 1
	}
	//DummyShaderTextExporter
	SubShader{
		Tags { "RenderType"="Opaque" }
		LOD 200

		Pass
		{
			HLSLPROGRAM
			#pragma vertex vert
			#pragma fragment frag

			float4x4 unity_ObjectToWorld;
			float4x4 unity_MatrixVP;
			float4 _MainTex_ST;

			struct Vertex_Stage_Input
			{
				float4 pos : POSITION;
				float2 uv : TEXCOORD0;
			};

			struct Vertex_Stage_Output
			{
				float2 uv : TEXCOORD0;
				float4 pos : SV_POSITION;
			};

			Vertex_Stage_Output vert(Vertex_Stage_Input input)
			{
				Vertex_Stage_Output output;
				output.uv = (input.uv.xy * _MainTex_ST.xy) + _MainTex_ST.zw;
				output.pos = mul(unity_MatrixVP, mul(unity_ObjectToWorld, input.pos));
				return output;
			}

			Texture2D<float4> _MainTex;
			SamplerState sampler_MainTex;
			float4 _Color;

			struct Fragment_Stage_Input
			{
				float2 uv : TEXCOORD0;
			};

			float4 frag(Fragment_Stage_Input input) : SV_TARGET
			{
				return _MainTex.Sample(sampler_MainTex, input.uv.xy) * _Color;
			}

			ENDHLSL
		}
	}
	Fallback "Diffuse"
	//CustomEditor "LWGUI.LWGUI"
}