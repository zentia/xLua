/****************************************************************************
 *
 * Copyright (c) 2011 CRI Middleware Co., Ltd.
 *
 ****************************************************************************/

#if !UNITY_EDITOR && (UNITY_SWITCH || UNITY_PS5)
#define CRIMANA_VP9_NATIVELY_SUPPORTED
#endif

using UnityEngine;
using System;
using System.Runtime.InteropServices;
using System.IO;
#if !UNITY_EDITOR && (UNITY_WINRT && !ENABLE_IL2CPP)
using System.Reflection;
#endif

namespace CriWare {

namespace CriMana
{
	/**
	 * <summary>A value indicating the type of movie codec.</summary>
	 */
	public enum CodecType
	{
		Unknown         = 0,
		SofdecPrime     = 1,
		H264            = 5,
		VP9             = 9,
	}


	/**
	 * <summary>A value indicating the movie composition mode.</summary>
	 */
	public enum AlphaType
	{
		CompoOpaq       = 0,    /**< Opaque, no alpha information */
		CompoAlphaFull  = 1,    /**< Full Alpha synthesis (alpha data is 8 bits) */
		CompoAlpha3Step = 2,    /**< Ternary alpha */
		CompoAlpha32Bit = 3,    /**< Full Alpha, (32 bits with color and alpha data) */
	}


	/**
	 * <summary>The audio analysis information in the movie file.</summary>
	 */
	[StructLayout(LayoutKind.Sequential, CharSet = CharSet.Ansi)]
	public struct AudioInfo
	{
		public UInt32   samplingRate;   /**< Sampling frequency */
		public UInt32   numChannels;    /**< The number of audio channels */
		public UInt32   totalSamples;   /**< Total number of samples */
	}


	/**
	 * <summary>The header analysis information for movie files.</summary>
	 */
	[StructLayout(LayoutKind.Sequential, CharSet = CharSet.Ansi), Serializable]
	public class MovieInfo
	{
		private UInt32  _reserved1;
		public UInt32   numAlphaStreams;    /**< Number of alpha tracks (0 or 1) */
		public UInt32   width;              /**< Maximum movie width (a multiple of 8) */
		public UInt32   height;             /**< Maximum movie height (a multiple of 8) */
		public UInt32   dispWidth;          /**< The number of horizontal pixels of the image to be displayed (from the left edge) */
		public UInt32   dispHeight;         /**< The number of vertical pixels of the image to be displayed (from the top edge) */
		public UInt32   framerateN;         /**< Rational format frame rate (numerator) framerate [x1000] = framerateN / framerateD */
		public UInt32   framerateD;         /**< Rational format frame rate (denominator) framerate [x1000] = framerateN / framerateD */
		public UInt32   totalFrames;        /**< Total number of frames */
		public CodecType codecType;                 /**< Codec type (information to be used inside the plug-in) */
		public CodecType alphaCodecType;            /**< Alpha codec type (information to be used inside the plug-in) */
		public UInt32   numAudioStreams;            /**< The number of audio streams */
		[MarshalAs(UnmanagedType.ByValArray, SizeConst = 32)]
		public AudioInfo[]  audioPrm;               /**< Audio parameters */
		public UInt32       numSubtitleChannels;    /**< The number of subtitle channels */
		public UInt32       maxSubtitleSize;        /**< Maximum size of the subtitle data */
		public UInt32       maxChunkSize;           /**< Maximum USF chunk size */

		public bool         hasAlpha { get { return numAlphaStreams != 0; } internal set { numAlphaStreams = value ? 1u : 0u; } }                    /**< Whether it is an alpha movie */
	}


	/**
	 * <summary>Video frame information.</summary>
	 */
	[StructLayout(LayoutKind.Sequential, CharSet = CharSet.Ansi)]
	public class FrameInfo
	{
		public Int32    frameNo;                /**< Frame identification number (serial number from 0) */
		public Int32    frameNoPerFile;         /**< Frame identification number (identification number specific to movie files) */
		public UInt32   width;                  /**< Movie width [pixel] (a multiple of 8) */
		public UInt32   height;                 /**< Movie height [pixel] (a multiple of 8) */
		public UInt32   dispWidth;              /**< The number of horizontal pixels of the image to be displayed (from the left edge) */
		public UInt32   dispHeight;             /**< The number of vertical pixels of the image to be displayed (from the top edge) */
		public UInt32   numImages;              /**< The number of images included in the frame */
		public UInt32   framerateN;             /**< Rational format frame rate (numerator) framerate [x1000] = framerateN / framerateD */
		public UInt32   framerateD;             /**< Rational format frame rate (numerator) framerate [x1000] = framerateN / framerateD */
		private UInt32  _reserved1;             /**< For manual range adjustment */
		public UInt64   time;                   /**< Time. Seconds are represented by time/tunit. Continuously added during loop playback or linked playback. */
		public UInt64   tunit;                  /**< Time unit */
		public UInt32   cntConcatenatedMovie;   /**< The number of movie concatenation */
		AlphaType       alphaType;              /**< Alpha composition mode */
		public UInt32   cntSkippedFrames;       /**< The number of frames skipped in decoding */
		public UInt32   totalFramesPerFile;     /**< Total number of frames (specific to movie files) */
	}


	/**
	 * <summary>Event point information.</summary>
	 * <remarks>
	 * <para header='Description'>Individual event point information embedded in the movie data using the Cue point feature.<br/></para>
	 * </remarks>
	 */
	[StructLayout(LayoutKind.Sequential, CharSet = CharSet.Ansi)]
	public struct EventPoint
	{
		/**
		 * <summary>Pointer to the name of the event point</summary>
		 * <remarks>
		 * <para header='Description'>String pointer to the event point name.<br/>
		 * Character encoding depends on the setting of the Cue Point information text.<br/>
		 * Please use the appropriate function to convert it to a string.<br/></para>
		 * <para header='Note'>As the string indicated by the pointer may not contain a terminating character, be sure to perform the conversion using a function that takes the buffer size along with the pointer.<br/></para>
		 * </remarks>
		 * <seealso cref='System.Text.Encoding.GetString(byte*, int)'/>
		 * <seealso cref='Marshal.PtrToStringAnsi(IntPtr, int)'/>
		 */
		public IntPtr   cueName;
		/**
		 * <summary>Data size of the event point name</summary>
		 * <para header='Description'>The length of the string representing the event point name.<br/>
		 * Be sure to use this when converting <see cref='cueName'/> into a string.</para>
		 */
		public UInt32   cueNameSize;        /**<  */
		public UInt64   time;               /**< Timer count */
		public UInt64   tunit;              /**< Timer count value per second. count ÷ unit gives the time in seconds. */
		public Int32    type;               /**< Event point type */
		/**
		 * <summary>Pointer to user parameter string</summary>
		 * <remarks>
		 * <para header='Description'>A pointer to the user parameter string.<br/>
		 * The text encoding is determined by the Cue Point information text.<br/>
		 * Please use the appropriate function to convert it to a string.<br/></para>
		 * <para header='Note'>As the string indicated by the pointer may not contain a terminating character, be sure to perform the conversion using a function that takes the buffer size along with the pointer.<br/></para>
		 * </remarks>
		 * <seealso cref='System.Text.Encoding.GetString(byte*, int)'/>
		 * <seealso cref='Marshal.PtrToStringAnsi(IntPtr, int)'/>
		 */
		public IntPtr   paramString;
		/**
		 * <summary>Data size of the user parameter string</summary>
		 * <para header='Description'>Data size of the user parameter string.<br/>
		 * Be sure to use it when converting <see cref='paramString'/> to a string.<br/></para>
		 */
		public UInt32   paramStringSize;
		public UInt32   cntCallback;        /**< Cue point callback call counter */
	}

	public static class Settings
	{

		public static void SetDecodeSkippingEnabled(bool enabled)
		{
			CriManaPlugin.CRIWAREF668402D(enabled);
		}

	}
}

/*==========================================================================
 *      CRI Mana Unity Integration
 *=========================================================================*/

/**
 * \addtogroup CRIMANA_UNITY_INTEGRATION
 * @{
 */

/**
 * <summary>Global class for the CRI Mana library.</summary>
 * <remarks>
 * <para header='Description'>Class that contains the initialization functions of the CRI Mana library and the definitions of the types used within the library. <br/></para>
 * </remarks>
 */
public class CriManaPlugin
{
#if (UNITY_4_0 || UNITY_4_0_1 || UNITY_4_1 || UNITY_4_2 || UNITY_4_3 || UNITY_4_5 || UNITY_4_6 || UNITY_4_7 || UNITY_5_0)
	private enum GraphicsApi
	{
		Unknown         = -1, // Unknown (from unity cpp)
		OpenGLES_2_0    = 8,  // UnityEngine.Rendering.GraphicsDeviceType.OpenGLES2;
		OpenGLES_3_0    = 11, // UnityEngine.Rendering.GraphicsDeviceType.OpenGLES3;
		Metal           = 16, // UnityEngine.Rendering.GraphicsDeviceType.Metal;
	};
#endif


	/* 初期化カウンタ */
	private static int initializationCount = 0;
	public static bool isInitialized { get { return initializationCount > 0; } }

	private static bool isConfigured = false;

	private static bool enabledMultithreadedRendering = false;
	public static bool isMultithreadedRenderingEnabled { get { return enabledMultithreadedRendering; } }

	public static int renderingEventOffset = 0x43570000; // => 'CW\0\0'

	public static void SetConfigParameters(bool graphicsMultiThreaded, int num_decoders, int max_num_of_entries)
	{
#if (UNITY_4_0 || UNITY_4_0_1 || UNITY_4_1 || UNITY_4_2 || UNITY_4_3 || UNITY_4_5 || UNITY_4_6 || UNITY_4_7 || UNITY_5_0)
		int graphicsApi = (int)GraphicsApi.Unknown;
	#if !UNITY_EDITOR && (UNITY_IOS || UNITY_TVOS)
		if (SystemInfo.graphicsDeviceVersion.IndexOf("OpenGL ES 2.") > -1) {
			graphicsApi = (int)GraphicsApi.OpenGLES_2_0;
		} else if (SystemInfo.graphicsDeviceVersion.IndexOf("OpenGL ES 3.") > -1) {
			graphicsApi = (int)GraphicsApi.OpenGLES_3_0;
		} else if (SystemInfo.graphicsDeviceVersion.IndexOf("Metal") > -1) {
			graphicsApi = (int)GraphicsApi.Metal;
		}
	#endif
#else
		int graphicsApi = (int)SystemInfo.graphicsDeviceType;
#endif

		enabledMultithreadedRendering = graphicsMultiThreaded;
		CriWare.Common.criWareUnity_SetRenderingEventOffsetForMana(renderingEventOffset);

		CriManaPlugin.CRIWARE6BF669C3((int)graphicsApi, enabledMultithreadedRendering, num_decoders, max_num_of_entries);

		CriManaPlugin.isConfigured = true;
	}

	/* VP9の設定 */
	private static void SetupVp9() {
#if CRIMANA_VP9_NATIVELY_SUPPORTED
		return;
#else
		Type type = GetVp9ExpansionClass();
		if (type == null) {
			/* Plugin not found */
			return;
		}

		if (IsVp9CodecSupported() == false) {
			Debug.Log("[CRIWARE] VP9 video playback is not supported on the current platform.");
			return;
		}

		/* Call the setup function for VP9 decoder */
#if !UNITY_EDITOR && (UNITY_WINRT && !ENABLE_IL2CPP)
		System.Reflection.MethodInfo method_setup_vp9_decoder = type.GetTypeInfo().GetDeclaredMethod("SetupVp9Decoder");
#else
		System.Reflection.MethodInfo method_setup_vp9_decoder = type.GetMethod("SetupVp9Decoder");
#endif
		if (method_setup_vp9_decoder == null) {
			Debug.LogError("[CRIWARE] ERROR: CriManaVp9.SetupVp9Decoder method is not found.");
			return;
		}

		method_setup_vp9_decoder.Invoke(null, null);
#endif
	}

	/**
	 * \deprecated
	 * This is a deprecated API that will be removed.
	*/
	[System.Obsolete("Use CriWareVITA.EnableH264Playback and CriWareVITA.SetH264DecoderMaxSize instead.")]
	public static void SetConfigAdditonalParameters_VITA(bool use_h264_playback, int width, int height)
	{
#if !UNITY_EDITOR && UNITY_PSP2
		CriManaPlugin.CRIWARE5E3E94D1(use_h264_playback, (UInt32)width, (UInt32)height);
#endif
	}

	public static void SetConfigAdditonalParameters_PC(bool use_h264_playback)
	{
#if UNITY_EDITOR_WIN || (!UNITY_EDITOR && UNITY_STANDALONE_WIN)
		CriManaPlugin.CRIWAREBAE987C0(use_h264_playback);
#endif
	}

	public static void UseLegacyDecoder_PC(bool useLegacyDecoder)
	{
#if UNITY_EDITOR_WIN || (!UNITY_EDITOR && UNITY_STANDALONE_WIN)
		CriManaPlugin.criManaUnity_UseLegacyDecoder_PC(useLegacyDecoder);
#endif
	}

	public static bool IsLegacyDecoderUsed_PC()
	{
#if UNITY_EDITOR_WIN || (!UNITY_EDITOR && UNITY_STANDALONE_WIN)
			return CriManaPlugin.criManaUnity_IsLegacyDecoderUsed_PC();
#else
			return false;
#endif
	}

	public static void SetConfigAdditonalParameters_ANDROID(bool enable_buffer_output_for_h264,
															bool enable_buffer_output_for_vp9)
	{
#if !UNITY_EDITOR && UNITY_ANDROID
		using (var version = new AndroidJavaClass("android.os.Build$VERSION")) {
			if (version.GetStatic<int>("SDK_INT") >= 16) {
				// CRI H264 Decoder exists over API-16.
				CriManaPlugin.criManaUnity_SetConfigAdditionalParameters_ANDROID(enable_buffer_output_for_h264, enable_buffer_output_for_vp9);
			}
		}
#endif
	}


	public static void SetConfigAdditonalParameters_WEBGL(string webworkerPath, uint heapSize)
	{
#if !UNITY_EDITOR && UNITY_WEBGL
		CriManaPlugin.CRIWAREF7C5E570(webworkerPath,heapSize);
#endif
	}

	public static void InitializeLibrary()
	{
		/* 初期化カウンタの更新 */
		CriManaPlugin.initializationCount++;
		if (CriManaPlugin.initializationCount != 1) {
			return;
		}

		/* シーン実行前に初期化済みの場合は終了させる */
		if (CriManaPlugin.IsLibraryInitialized() == true) {
			CriManaPlugin.FinalizeLibrary();
			CriManaPlugin.initializationCount = 1;
		}

		/* 初期化パラメータが設定済みかどうかを確認 */
		if (CriManaPlugin.isConfigured == false) {
			Debug.Log("[CRIWARE] Mana initialization parameters are not configured. "
				+ "Initializes Mana by default parameters.");
		}

		/* 依存ライブラリの初期化 */
		CriFsPlugin.InitializeLibrary();
		CriAtomPlugin.InitializeLibrary();

		/* VP9の設定 */
		CriManaPlugin.SetupVp9();

		/* ライブラリの初期化 */
		CriManaPlugin.CRIWARED8816548();

		/* RendererResource の自動登録を実行 */
		CriMana.Detail.AutoResisterRendererResourceFactories.InvokeAutoRegister();
	}

	public static bool IsLibraryInitialized()
	{
		/* ライブラリが初期化済みかチェック */
		return CRIWARE682C0CB5();
	}

	public static void FinalizeLibrary()
	{
		/* 初期化カウンタの更新 */
		CriManaPlugin.initializationCount--;
		if (CriManaPlugin.initializationCount < 0) {
			CriManaPlugin.initializationCount = 0;
			if (CriManaPlugin.IsLibraryInitialized() == false) {
				return;
			}
		}
		if (CriManaPlugin.initializationCount != 0) {
			return;
		}

		/* 未破棄のDisposableを破棄 */
		CriDisposableObjectManager.CallOnModuleFinalization(CriDisposableObjectManager.ModuleType.Mana);

		/* ライブラリの終了 */
		CriManaPlugin.CRIWARE26497F82();

		/* RendererResourceFactoryのインスタンスを破棄 */
		CriMana.Detail.RendererResourceFactory.DisposeAllFactories();

		/* 依存ライブラリの終了 */
		CriAtomPlugin.FinalizeLibrary();
		CriFsPlugin.FinalizeLibrary();
	}

	/**
	 * <summary>Whether playback with the specified video codec is supported</summary>
	 * <param name='codecType'>Video codec type</param>
	 * <remarks>
	 * <para header='Description'>Determines whether the current platform supports playback with the specified video codec. <br/>
	 * If this function returns false, an error will occur when playing a video file that uses the corresponding codec.
	 * The playback and rendering will not be performed correctly. <br/>
	 * On some platforms, rendering may not be possible depending on the environment,
	 * even if the application has the same settings. <br/>
	 * Use this function to determine whether to play videos on the specific device.</para>
	 * </remarks>
	 */
	public static bool IsCodecSupported(CriMana.CodecType codecType)
	{
		switch (codecType) {
			case CriMana.CodecType.SofdecPrime:
				return true;
			case CriMana.CodecType.VP9:
				return IsVp9CodecSupported();
			case CriMana.CodecType.H264:
				return IsH264CodecSupported();
			case CriMana.CodecType.Unknown:
			default:
				Debug.LogError("[CRIWARE] Invalid format " + codecType + " is specified to CriManaPlugin.IsCodecSupported.");
				return false;
		}
	}

	private static Type GetVp9ExpansionClass() {
		Type type = Type.GetType("CriManaVp9");
		if (type == null) {
			type = Type.GetType("CriWare.CriManaVp9, CriMw.CriWare.Vp9.Runtime");
		}
		return type;
	}

	private static bool IsVp9CodecSupported()
	{
#if CRIMANA_VP9_NATIVELY_SUPPORTED
		return true;
#else
		Type type = GetVp9ExpansionClass();
		if (type == null) {
			/* Plugin not found */
			return false;
		}

		/* Check if the current platform supports VP9 by expansion */
#if !UNITY_EDITOR && (UNITY_WINRT && !ENABLE_IL2CPP)
		System.Reflection.MethodInfo method_support_current_platform = type.GetTypeInfo().GetDeclaredMethod("SupportCurrentPlatform");
#else
		System.Reflection.MethodInfo method_support_current_platform = type.GetMethod("SupportCurrentPlatform");
#endif
		if (method_support_current_platform == null) {
			Debug.Log("function not found");
			return false;
			}

		bool current_platform_supports_vp9 = (bool)method_support_current_platform.Invoke(null, null);
		return current_platform_supports_vp9;
#endif
	}

	private static bool IsH264CodecSupported()
	{
#if UNITY_EDITOR || UNITY_STANDALONE_WIN || UNITY_STANDALONE_OSX || UNITY_IOS || UNITY_TVOS || UNITY_SWITCH || UNITY_PS4 || UNITY_PS5 || UNITY_XBOXONE
		return true;
#elif UNITY_ANDROID
#if CRI_DISABLE_MANA_OUTPUT_BUFFER_FOR_OPENGLES3
		if (SystemInfo.graphicsDeviceType == UnityEngine.Rendering.GraphicsDeviceType.Vulkan) {
#else
		if (SystemInfo.graphicsDeviceType != UnityEngine.Rendering.GraphicsDeviceType.OpenGLES2) {
#endif //CRI_DISABLE_MANA_OUTPUT_BUFFER_FOR_OPENGLES3
			return true;
		} else {
			return CriMana.Detail.RendererResourceAndroidH264Rgb.IsSupported();
		}
#else
		return false;
#endif
	}

	public static void SetDecodeThreadPriorityAndroidExperimental(int prio)
	{
		/*
		 * <summary>
		 * デコードマスタースレッドのプライオリティを変更します。
		 * </summary>
		 * <param name="prio">スレッドプライオリティ</param>
		 * <remarks name="呼び出し条件:">
		 * Manaライブラリが初期化された後に本メソッドを呼び出してください。
		 * </remarks>
		 * <remarks name="説明:">
		 * デコード処理を行うスレッドのプライオリティを変更します。
		 * デフォルトでは、デコードスレッドのプライオリティはメインスレッドよりも低く設定されています。
		 * </remarks>
		 * <attention>
		 * 本メソッドはExperimentalです。今後のアップデートで削除、または仕様変更される可能性があります。
		 * </attention>
		 */
#if !UNITY_EDITOR && UNITY_ANDROID
		criManaUnity_SetDecodeThreadPriority_ANDROID(prio);
#endif
	}

#if UNITY_2017_1_OR_NEWER
	public static bool ShouldSampleRed(UnityEngine.Rendering.GraphicsDeviceType type, IntPtr tex_ptr)
	{
#if !UNITY_EDITOR && UNITY_ANDROID
		if (type == UnityEngine.Rendering.GraphicsDeviceType.OpenGLES3) {
			return criManaUnity_ShouldSwitchTextureSampleColorToRedGLES30_ANDROID(tex_ptr);
		}
#endif
		return false;
	}
#endif

	/**
	* <summary>Set the flag indicating whether to use the streaming management module</summary>
	* <param name='flag'>Control flag (True: use, False: do not use)</param>
	* <remarks>
	* <para header='Call condition'>Can be called even after initializing the library. However, it should be called while no video is being played.</para>
	* <para header='Description'>Set the flag indicating whether to use the streaming management module (which may also be used by ADX).<br/>
	* The module is not used by default.<br/></para>
	* </remarks>
	*/
	public static void UseStreamerManager(bool flag)
	{
		CriManaPlugin.criMana_UseStreamerManager(flag);
	}

	/**
	* <summary>Getting the flag indicating whether to use the streaming management module</summary>
	* <remarks>
	* <para header='Returned value'>Control flag (True: use, False: do not use)</para>
	* <para header='Description'>Get the flag indicating whether the streaming management module is used.<br/></para>
	* </remarks>
	*/
	public static bool IsStreamerManagerUsed()
	{
		return CriManaPlugin.criMana_IsStreamerManagerUsed();
	}

	public static void Lock()
	{
		CriManaPlugin.CRIWARE2510D08D();
	}

	public static void Unlock()
	{
		CriManaPlugin.CRIWARE48C80EC2();
	}

	public static UInt32 GetPrimeBufferAlignmentSize()
	{
		return CRIWAREFBC5C358();
	}

	/**
	 * <summary>Synchronous parsing of movie information</summary>
	 * <param name='data'>A pointer to the movie data.</param>
	 * <param name='movieInfo'>Acquired movie information</param>
	 * <returns>Whether the information was successfully obtained</returns>
	 * <remarks>
	 * <para header='Description'>Parses the header of the movie data and gets the movie information. <br/>
	 * Returns true if the information in <paramref name='movieInfo'/> is valid.<br/></para>
	 * </remarks>
	 * <seealso cref='CriWare.CriMana.MovieInfo'/>
	 */
	public static bool AnalyzeMovieHeader(IntPtr data, out CriMana.MovieInfo movieInfo)
	{
		movieInfo = new CriMana.MovieInfo();
		return CriManaPlugin.criManaUnity_AnalyzeMovieHeader(data, movieInfo);
	}

#region DLL Import
#if !CRIWARE_ENABLE_HEADLESS_MODE
	[DllImport(CriWare.Common.pluginName, CallingConvention = CriWare.Common.pluginCallingConvention)]
	private static extern void CRIWARE6BF669C3(int graphics_api, bool graphics_multi_threaded, int num_decoders, int num_of_max_entries);

	[DllImport(CriWare.Common.pluginName, CallingConvention = CriWare.Common.pluginCallingConvention)]
	private static extern void CRIWARED8816548();

	[DllImport(CriWare.Common.pluginName, CallingConvention = CriWare.Common.pluginCallingConvention)]
	public static extern bool CRIWARE682C0CB5();

	[DllImport(CriWare.Common.pluginName, CallingConvention = CriWare.Common.pluginCallingConvention)]
	private static extern void CRIWARE26497F82();

	[DllImport(CriWare.Common.pluginName, CallingConvention = CriWare.Common.pluginCallingConvention)]
	public static extern void CRIWAREF668402D(bool flag);

	[DllImport(CriWare.Common.pluginName, CallingConvention = CriWare.Common.pluginCallingConvention)]
	public static extern void CRIWARE2510D08D();

	[DllImport(CriWare.Common.pluginName, CallingConvention = CriWare.Common.pluginCallingConvention)]
	public static extern void CRIWARE48C80EC2();

	[DllImport(CriWare.Common.pluginName, CallingConvention = CriWare.Common.pluginCallingConvention)]
	private static extern UInt32 CRIWAREFBC5C358();

	[DllImport(CriWare.Common.pluginName, CallingConvention = CriWare.Common.pluginCallingConvention)]
	public static extern void criMana_UseStreamerManager(bool flag);

	[DllImport(CriWare.Common.pluginName, CallingConvention = CriWare.Common.pluginCallingConvention)]
	public static extern bool criMana_IsStreamerManagerUsed();
	[DllImport(CriWare.Common.pluginName, CallingConvention = CriWare.Common.pluginCallingConvention)]
	public static extern bool criManaUnity_AnalyzeMovieHeader(IntPtr movie_header_ptr, [Out] CriMana.MovieInfo mvinf);

#if !UNITY_EDITOR && UNITY_WEBGL
#else
	[DllImport(CriWare.Common.pluginName, CallingConvention = CriWare.Common.pluginCallingConvention)]
	public static extern uint CRIWAREFE29B2F9();
#endif

#if UNITY_EDITOR_WIN || (!UNITY_EDITOR && UNITY_STANDALONE_WIN)
	[DllImport(CriWare.Common.pluginName, CallingConvention = CriWare.Common.pluginCallingConvention)]
	public static extern void criManaUnity_UseLegacyDecoder_PC(bool enable);

	[DllImport(CriWare.Common.pluginName, CallingConvention = CriWare.Common.pluginCallingConvention)]
	public static extern bool criManaUnity_IsLegacyDecoderUsed_PC();

	[DllImport(CriWare.Common.pluginName, CallingConvention = CriWare.Common.pluginCallingConvention)]
	public static extern void CRIWAREBAE987C0(bool enable);
#endif

#if !UNITY_EDITOR && UNITY_ANDROID
	[DllImport(CriWare.Common.pluginName, CallingConvention = CriWare.Common.pluginCallingConvention)]
	public static extern void criManaUnity_SetDecodeThreadPriority_ANDROID(int prio);

	[DllImport(CriWare.Common.pluginName, CallingConvention = CriWare.Common.pluginCallingConvention)]
	private static extern void criManaUnity_SetConfigAdditionalParameters_ANDROID(bool buffer_h264, bool buffer_vp9);

	[DllImport(CriWare.Common.pluginName, CallingConvention = CriWare.Common.pluginCallingConvention)]
	public static extern bool criManaUnity_IsBufferOutputForH264Enabled_ANDROID();
#if UNITY_2017_1_OR_NEWER
	[DllImport(CriWare.Common.pluginName, CallingConvention = CriWare.Common.pluginCallingConvention)]
	public static extern void criManaUnity_EnableSwitchTextureSampleColorGLES30_ANDROID();

	[DllImport(CriWare.Common.pluginName, CallingConvention = CriWare.Common.pluginCallingConvention)]
	private static extern bool criManaUnity_ShouldSwitchTextureSampleColorToRedGLES30_ANDROID(System.IntPtr tex_ptr);
#endif
#elif !UNITY_EDITOR && UNITY_PSP2
	[DllImport(CriWare.Common.pluginName, CallingConvention = CriWare.Common.pluginCallingConvention)]
	public static extern void CRIWARE5E3E94D1(bool use_h264_playback, UInt32 width, UInt32 height);
#elif !UNITY_EDITOR && UNITY_WEBGL
	[DllImport(CriWare.Common.pluginName, CallingConvention = CriWare.Common.pluginCallingConvention)]
	public static extern void CRIWAREF7C5E570(string webworkerPath, uint heapSize);
#endif
#else
	private static bool _dummyInitialized = false;
	private static void CRIWARE6BF669C3(int graphics_api, bool graphics_multi_threaded, int num_decoders, int num_of_max_entries) { }
	private static void CRIWARED8816548() { _dummyInitialized = true; }
	public static bool CRIWARE682C0CB5() { return _dummyInitialized; }
	private static void CRIWARE26497F82() { _dummyInitialized = false; }
	public static void CRIWAREF668402D(bool flag) { }
	public static void CRIWARE2510D08D() { }
	public static void CRIWARE48C80EC2() { }
	private static UInt32 CRIWAREFBC5C358() { return 32u; }
	public static void criMana_UseStreamerManager(bool flag) { }
	public static bool criMana_IsStreamerManagerUsed() { return false; }
	public static bool criManaUnity_AnalyzeMovieHeader(IntPtr movie_header_ptr, [Out] CriMana.MovieInfo mvinf){ return true; }
#if !UNITY_EDITOR && UNITY_WEBGL
#else
	public static uint CRIWAREFE29B2F9() { return 0u; }
#endif
#if UNITY_EDITOR_WIN || (!UNITY_EDITOR && UNITY_STANDALONE_WIN)
	public static void criManaUnity_UseLegacyDecoder_PC(bool enable) { }
	public static bool criManaUnity_IsLegacyDecoderUsed_PC() { return false; }
	public static void CRIWAREBAE987C0(bool enable) { }
#endif
#if !UNITY_EDITOR && UNITY_ANDROID
	public static void criManaUnity_SetDecodeThreadPriority_ANDROID(int prio) { }
	private static void criManaUnity_SetConfigAdditionalParameters_ANDROID(bool buffer_h264, bool buffer_vp9) { }
	public static bool criManaUnity_IsBufferOutputForH264Enabled_ANDROID() { return false; }
#if UNITY_2017_1_OR_NEWER
	public static void criManaUnity_EnableSwitchTextureSampleColorGLES30_ANDROID() { }
	private static bool criManaUnity_ShouldSwitchTextureSampleColorToRedGLES30_ANDROID(System.IntPtr tex_ptr) { return false; }
#endif
#elif !UNITY_EDITOR && UNITY_PSP2
	public static void CRIWARE5E3E94D1(bool use_h264_playback, UInt32 width, UInt32 height) { }
#elif !UNITY_EDITOR && UNITY_WEBGL
	public static void CRIWAREF7C5E570(string webworkerPath, uint heapSize) { }
#endif
#endif
#endregion
}

} //namespace CriWare

/**
 * @}
 */

/* end of file */
