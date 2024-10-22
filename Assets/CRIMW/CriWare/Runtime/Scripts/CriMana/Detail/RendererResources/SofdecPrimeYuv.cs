/****************************************************************************
 *
 * Copyright (c) 2015-2018 CRI Middleware Co., Ltd.
 *
 ****************************************************************************/

#if UNITY_EDITOR_WIN && CRI_MANA_USE_LEGACY_DECODER_PC || !UNITY_EDITOR && (UNITY_STANDALONE_WIN && CRI_MANA_USE_LEGACY_DECODER_PC || UNITY_PSP2 || UNITY_IOS || UNITY_TVOS || UNITY_WEBGL || UNITY_STANDALONE_LINUX || UNITY_STADIA)

using UnityEngine;
using UnityEngine.Scripting;
using System;

namespace CriWare {

namespace CriMana.Detail
{
	public static partial class AutoResisterRendererResourceFactories
	{
		[Preserve]
		[RendererResourceFactoryPriority(5000)]
		public class RendererResourceFactorySofdecPrimeYuv : RendererResourceFactory
		{
			public override RendererResource CreateRendererResource(int playerId, MovieInfo movieInfo, bool additive, Shader userShader)
			{
				bool isCodecSuitable = movieInfo.codecType == CodecType.SofdecPrime;
				#if UNITY_EDITOR || (!UNITY_SWITCH && !UNITY_IOS && !UNITY_TVOS)
				isCodecSuitable |= movieInfo.codecType == CodecType.VP9;
				#endif
				bool isSuitable      = isCodecSuitable;
				return isSuitable
				? new RendererResourceSofdecPrimeYuv(playerId, movieInfo, additive, userShader)
				: null;
			}

			protected override void OnDisposeManaged()
			{
			}

			protected override void OnDisposeUnmanaged()
			{
			}
		}
	}




	public class RendererResourceSofdecPrimeYuv : RendererResource
	{
		private int     width;
		private int     height;
		private bool    useUserShader;
		private CodecType   codecType;

		private Vector4     movieTextureST = Vector4.zero;
		private Vector4     movieChromaTextureST = Vector4.zero;

		private static Int32 NumTextureSets { 
			get {
			#if !UNITY_EDITOR && UNITY_IOS
				return 3;
			#else
				return 1;
			#endif
			}
		}

		private Texture2D[] textureY = new Texture2D[NumTextureSets];
		private Texture2D[] textureU = new Texture2D[NumTextureSets];
		private Texture2D[] textureV = new Texture2D[NumTextureSets];
		private Texture2D[] textureA = new Texture2D[NumTextureSets];
		private IntPtr[]  nativeTextures;
		private Int32[] frameNumbers = new Int32[NumTextureSets];
		private Int32 currentTextureSet = -1;
		private Int32 drawTextureSet = -1;
		private Int32 displayedTextureSet = -1;

		private Int32       playerID;
		private bool hasTextureUpdated = false;
		private bool hasRenderedNewFrame = false;
		private bool isStoppingForSeek = false;


		public RendererResourceSofdecPrimeYuv(int playerId, MovieInfo movieInfo, bool additive, Shader userShader)
		{
#if UNITY_EDITOR || UNITY_STANDALONE_WIN || UNITY_STANDALONE_OSX || UNITY_PSP2 || UNITY_PS4 || UNITY_WINRT || UNITY_WEBGL || UNITY_STANDALONE_LINUX || UNITY_SWITCH || UNITY_STADIA
			width = Ceiling256((int)movieInfo.width);
			height = Ceiling16((int)movieInfo.height);
#elif UNITY_IOS || UNITY_TVOS
			width  = NextPowerOfTwo(Ceiling64((int)movieInfo.width));
			height = NextPowerOfTwo(Ceiling16((int)movieInfo.height));
#else
#error unsupported platform
#endif
			this.additive   = additive;
			hasAlpha        = movieInfo.hasAlpha;
			useUserShader   = userShader != null;
			codecType       = movieInfo.codecType;

			if (useUserShader) {
				shader = userShader;
			} else {
				string shaderName = "CriMana/SofdecPrimeYuv";
				shader = Shader.Find(shaderName);
			}

			UpdateMovieTextureST(movieInfo.dispWidth, movieInfo.dispHeight);

			for (int i = 0; i < NumTextureSets; i++) {
				textureY[i] = new Texture2D(width, height, TextureFormat.Alpha8, false);
				textureY[i].wrapMode = TextureWrapMode.Clamp;
				textureU[i] = new Texture2D(width / 2, height / 2, TextureFormat.Alpha8, false);
				textureU[i].wrapMode = TextureWrapMode.Clamp;
				textureV[i] = new Texture2D(width / 2, height / 2, TextureFormat.Alpha8, false);
				textureV[i].wrapMode = TextureWrapMode.Clamp;
				if (hasAlpha) {
					textureA[i] = new Texture2D(width, height, TextureFormat.Alpha8, false);
					textureA[i].wrapMode = TextureWrapMode.Clamp;
				}
			}
			nativeTextures = new IntPtr[4];

			playerID = playerId;
		}


		protected override void OnDisposeManaged()
		{
		}

		static private bool IsEditor {
			get {
#if UNITY_EDITOR
				if (UnityEditor.EditorApplication.isPlaying == false) {
					return true;
				}
#endif
				return false;
			}
		}

		protected override void OnDisposeUnmanaged()
		{
			CRIWARE58525AB9(playerID, 0 ,null);

			for (int i = 0; i < NumTextureSets; i++) {
				if (textureY[i] != null) {
					if(IsEditor){
						Texture2D.DestroyImmediate(textureY[i]);
					} else{
						Texture2D.Destroy(textureY[i]);
					}
					textureY[i] = null;
				}
				if (textureU[i] != null) {
					if (IsEditor) {
						Texture2D.DestroyImmediate(textureU[i]);
					} else {
						Texture2D.Destroy(textureU[i]);
					}
					textureU[i] = null;
				}
				if (textureV[i] != null) {
					if (IsEditor) {
						Texture2D.DestroyImmediate(textureV[i]);
					} else {
						Texture2D.Destroy(textureV[i]);
					}
					textureV[i] = null;
				}
				if (textureA[i] != null) {
					if (IsEditor) {
						Texture2D.DestroyImmediate(textureA[i]);
					} else {
						Texture2D.Destroy(textureA[i]);
					}
					textureA[i] = null;
				}
			}
		}


		public override bool IsPrepared()
		{ return hasTextureUpdated; }


		public override bool ContinuePreparing()
		{ return true; }


		public override bool IsSuitable(int playerId, MovieInfo movieInfo, bool additive, Shader userShader)
		{
			bool isCodecSuitable    = movieInfo.codecType == codecType;
			bool isSizeSuitable     = (width >= (int)movieInfo.width) && (height >= (int)movieInfo.height);
			bool isAlphaSuitable    = hasAlpha == movieInfo.hasAlpha;
			bool isAdditiveSuitable = this.additive == additive;
			bool isShaderSuitable   = this.useUserShader ? (userShader == shader) : true;
			return isCodecSuitable && isSizeSuitable && isAlphaSuitable && isAdditiveSuitable && isShaderSuitable;
		}


		public override bool OnPlayerStopForSeek()
		{
			isStoppingForSeek = true;
			hasRenderedNewFrame = false;
			return true;
		}


		public override bool HasRenderedNewFrame()
		{
			return hasRenderedNewFrame;
		}


		public override int GetDisplayedFrameNo()
		{
			if (NumTextureSets > 1 && displayedTextureSet >= 0) {
				return frameNumbers[displayedTextureSet];
			} else {
				return -1;
			}
		}


		public override void AttachToPlayer(int playerId)
		{
			CRIWAREC1A9393E(playerID, 0, new IntPtr[1]);
			hasRenderedNewFrame = false;
			hasTextureUpdated = false;
			if (!isStoppingForSeek) {
				currentTextureSet = (NumTextureSets > 1) ? -1 : 0;
				drawTextureSet = currentTextureSet;
				displayedTextureSet = -1;
			}
			isStoppingForSeek = false;
		}


		public override bool UpdateFrame(int playerId, FrameInfo frameInfo, ref bool frameDrop)
		{
			bool isFrameUpdated = CRIWAREF86A01CB(playerId, 0, null, frameInfo, ref frameDrop);
			var nextTextureSet = currentTextureSet;
			if (isFrameUpdated && !frameDrop) {
				UpdateMovieTextureST(frameInfo.dispWidth, frameInfo.dispHeight);
				nextTextureSet = (currentTextureSet < 0 || hasTextureUpdated) ? (currentTextureSet + 1) % NumTextureSets : currentTextureSet;
				frameNumbers[nextTextureSet] = frameInfo.frameNo;
			}

			currentTextureSet = nextTextureSet;
			return isFrameUpdated;
		}


		public override bool UpdateMaterial(Material material)
		{
			bool isTextureReady = (drawTextureSet >= 0);
			if (!isTextureReady && NumTextureSets > 1)
				return false;

			if (currentMaterial != material) {
				currentMaterial = material;
				SetupStaticMaterialProperties();
			}

			if (material == null) {
				return false;
			}

			material.SetTexture("_TextureY", textureY[drawTextureSet]);
			material.SetTexture("_TextureU", textureU[drawTextureSet]);
			material.SetTexture("_TextureV", textureV[drawTextureSet]);
			material.SetVector("_MovieTexture_ST", movieTextureST);
			material.SetVector("_MovieChromaTexture_ST", movieChromaTextureST);
			if (hasAlpha) {
				material.SetTexture("_TextureA", textureA[drawTextureSet]);
				material.SetVector("_MovieAlphaTexture_ST", movieTextureST);
			}
			hasRenderedNewFrame = isTextureReady;
			displayedTextureSet = drawTextureSet;

			return true;
		}


		private void UpdateMovieTextureST(System.UInt32 dispWidth, System.UInt32 dispHeight)
		{
			float uScale = (dispWidth != width) ? (float)(dispWidth - 1) / width : 1.0f;
			float vScale = (dispHeight != height) ? (float)(dispHeight - 1) / height : 1.0f;
			movieTextureST.x = uScale;
			movieTextureST.y = -vScale;
			movieTextureST.z = 0.0f;
			movieTextureST.w = vScale;

			uScale = (dispWidth != width) ? (float)(dispWidth / 2 - 1) / width * 2 : 1.0f;
			vScale = (dispHeight != height) ? (float)(dispHeight / 2 - 1) / height * 2 : 1.0f;
			movieChromaTextureST.x = uScale;
			movieChromaTextureST.y = -vScale;
			movieChromaTextureST.z = 0.0f;
			movieChromaTextureST.w = vScale;
		}


		public override void UpdateTextures()
		{
			if (currentTextureSet < 0) {
				return;
			}

			int numTextures = 3;
			nativeTextures[0] = textureY[currentTextureSet].GetNativeTexturePtr();
			nativeTextures[1] = textureU[currentTextureSet].GetNativeTexturePtr();
			nativeTextures[2] = textureV[currentTextureSet].GetNativeTexturePtr();
			if (hasAlpha) {
				numTextures = 4;
				nativeTextures[3] = textureA[currentTextureSet].GetNativeTexturePtr();
			}

			var ret = CRIWAREF2D114CF(playerID, numTextures, nativeTextures);
			if (ret) {
				drawTextureSet = currentTextureSet;
				hasTextureUpdated = true;
			}
		}
	}
}

} //namespace CriWare

#endif