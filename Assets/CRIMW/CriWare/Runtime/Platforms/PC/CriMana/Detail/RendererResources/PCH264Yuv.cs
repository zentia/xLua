/****************************************************************************
 *
 * Copyright (c) 2018 CRI Middleware Co., Ltd.
 *
 ****************************************************************************/

#if UNITY_EDITOR_WIN || (!UNITY_EDITOR && UNITY_STANDALONE_WIN)

using UnityEngine;
using UnityEngine.Scripting;
using System;
using System.Runtime.InteropServices;

namespace CriWare {

namespace CriMana.Detail
{
	public static partial class AutoResisterRendererResourceFactories
	{
		[Preserve]
		[RendererResourceFactoryPriority(7050)]
		public class RendererResourceFactoryH264Yuv : RendererResourceFactory
		{
			public override RendererResource CreateRendererResource(int playerId, MovieInfo movieInfo, bool additive, Shader userShader)
			{
				bool isCodecSuitable = movieInfo.codecType == CodecType.H264;
				bool isSuitable      = isCodecSuitable;
				return isSuitable
					? new RendererResourceH264Yuv(playerId, movieInfo, additive, userShader)
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



#if CRI_MANA_USE_LEGACY_DECODER_PC
		public class RendererResourceH264Yuv : RendererResourceSofdecPrimeYuv
#else
		public class RendererResourceH264Yuv : RendererResourceSofdecPrimeYuvRawData
#endif
		{
			public RendererResourceH264Yuv(int playerId, MovieInfo movieInfo, bool additive, Shader userShader)
			: base(playerId, movieInfo, additive, userShader)
		{
		}
	}
}

} //namespace CriWare

#endif
