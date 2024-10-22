Shader "CriMana/SofdecPrimeRgb"
{
	Properties
	{
		_MainTex ("Texture", 2D) = "white" {}
		[HideInInspector] _MovieTexture_ST ("MovieTexture_ST", Vector) = (1.0, 1.0, 0, 0)
		[HideInInspector] _TextureRGBA ("TextureRGBA", 2D) = "white" {}
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
			#if defined(SHADER_API_PSP2) || defined(SHADER_API_PS3)
			// seems that ARB_precision_hint_fastest is not supported on these platforms.
			#else
			#pragma fragmentoption ARB_precision_hint_fastest
			#endif

			#include "UnityCG.cginc"

			#pragma multi_compile _ CRI_LINEAR_COLORSPACE
			#pragma multi_compile _ CRI_APPLY_TARGET_ALPHA
			#pragma multi_compile _ CRI_SWITCH
			#pragma multi_compile_local _ UNITY_UI_CLIP_RECT

			struct appdata
			{
				float4 vertex   : POSITION;
				half2  texcoord : TEXCOORD0;
#ifdef CRI_APPLY_TARGET_ALPHA
				float4 color    : COLOR;
#endif
				UNITY_VERTEX_INPUT_INSTANCE_ID
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
				UNITY_VERTEX_OUTPUT_STEREO
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
				UNITY_SETUP_INSTANCE_ID(v);
				UNITY_INITIALIZE_VERTEX_OUTPUT_STEREO(o);
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

			sampler2D _TextureRGBA;
			fixed _Transparency;

			fixed4 frag(v2f i) : COLOR
			{
				fixed4 color = tex2D(_TextureRGBA, i.uv);
#ifdef CRI_LINEAR_COLORSPACE
				color.rgb = pow(max(color.rgb, 0), 2.2);
#endif
#ifdef CRI_SWITCH
				//Temporary fix for Switch
				color.rgb = fixed3(color.b, color.g, color.r);
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
