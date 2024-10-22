Shader "CriMana/IOSH264Yuv"
{
	Properties
	{
		_MainTex ("Texture", 2D) = "white" {}
		[HideInInspector] _MovieTexture_ST ("MovieTexture_ST", Vector) = (1.0, 1.0, 0, 0)
		[HideInInspector] _TextureY ("TextureY", 2D) = "white" {}
		[HideInInspector] _TextureUV ("TextureUV", 2D) = "white" {}
		[HideInInspector] _TextureA("TextureA", 2D) = "white" {}
		[HideInInspector] _SrcBlendMode("SrcBlendMode", Int) = 0
		[HideInInspector] _DstBlendMode("DstBlendMode", Int) = 0
		[HideInInspector] _CullMode("CullMode", Int) = 2
		[HideInInspector] _ZWriteMode("ZWriteMode", Int) = 1
	}

	SubShader
	{
		Tags
		{
			"Queue" = "Transparent"
			"PreviewType"="Plane"
		}

		Pass
		{
			Blend [_SrcBlendMode] [_DstBlendMode]
			Cull [_CullMode]
			ZWrite [_ZWriteMode]
			ZTest [unity_GUIZTestMode]

			CGPROGRAM
			#pragma vertex vert
			#pragma fragment frag
			#pragma fragmentoption ARB_precision_hint_fastest

			#include "UnityCG.cginc"

			#pragma multi_compile _ CRI_ALPHA_MOVIE
			#pragma multi_compile _ CRI_APPLY_TARGET_ALPHA
			#pragma multi_compile _ CRI_LINEAR_COLORSPACE
			#pragma multi_compile_local _ UNITY_UI_CLIP_RECT


            struct appdata
			{
				float4 vertex   : POSITION;
				half2  texcoord : TEXCOORD0;
#ifdef CRI_APPLY_TARGET_ALPHA
				float4 color    : COLOR;
#endif
			};

			struct v2f
			{
				float4   pos : SV_POSITION;
				half2     uv : TEXCOORD0;
#ifdef CRI_APPLY_TARGET_ALPHA
				float4 color : COLOR;
#endif
#ifdef UNITY_UI_CLIP_RECT
				half4  mask : TEXCOORD3;
#endif
			};

#ifdef UNITY_UI_CLIP_RECT
			float4 _ClipRect;
			float _UIMaskSoftnessX;
			float _UIMaskSoftnessY;
#endif

			float4 _MainTex_ST;
			float4 _MovieTexture_ST;

			v2f vert(appdata v)
			{
				v2f o;
				o.pos = UnityObjectToClipPos(v.vertex);
				o.uv  = (TRANSFORM_TEX(v.texcoord, _MainTex) * _MovieTexture_ST.xy) + _MovieTexture_ST.zw;
#ifdef CRI_APPLY_TARGET_ALPHA
				o.color = v.color;
#endif
#ifdef UNITY_UI_CLIP_RECT
				o.mask = half4(v.vertex.xy * 2 - _ClipRect.xy - _ClipRect.zw,
					0.25 / (0.25 * half2(_UIMaskSoftnessX, _UIMaskSoftnessY) + abs(o.pos.ww / abs(mul((float2x2)UNITY_MATRIX_P, _ScreenParams.xy)))));
#endif
				return o;
			}

			static const fixed3x3 yuv_to_rgb = {
				{1.16438,      0.0,  1.59603},
				{1.16438, -0.39176, -0.81297},
				{1.16438,  2.01723,      0.0}
				};

			sampler2D _TextureY;
			sampler2D _TextureUV;
#ifdef CRI_ALPHA_MOVIE
			sampler2D _TextureA;
#endif
			fixed _Transparency;

			fixed4 frag(v2f i) : COLOR
			{
				fixed3 yuv = {
					(tex2D(_TextureY, i.uv).r - 0.06275),
					(tex2D(_TextureUV, i.uv).rg - 0.50196)
					};
				fixed4 color;
				color.rgb = mul(yuv_to_rgb, yuv);
#ifdef CRI_LINEAR_COLORSPACE
				color.rgb = pow(max(color.rgb, 0), 2.2);
#endif
#ifdef CRI_ALPHA_MOVIE
				color.a = tex2D(_TextureA, i.uv).r; 
#else
				color.a = 1.0;
#endif
#ifdef CRI_APPLY_TARGET_ALPHA
				color.a = color.a * i.color.a;
#endif
				color.a *= 1 - _Transparency;
#ifdef UNITY_UI_CLIP_RECT
				half2 m = saturate((_ClipRect.zw - _ClipRect.xy - abs(i.mask.xy)) * i.mask.zw);
				color.a *= m.x * m.y;
#endif
				return color;
			}
			ENDCG
		}
	}
}
