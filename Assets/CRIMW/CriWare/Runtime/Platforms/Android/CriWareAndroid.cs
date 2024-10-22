/****************************************************************************
 *
 * Copyright (c) CRI Middleware Co., Ltd.
 *
 ****************************************************************************/

#if !UNITY_EDITOR && UNITY_ANDROID
	#define ENABLE_CRIATOMEXASRRACK_ANDROID
#endif

using System.Runtime.InteropServices;

namespace CriWare {
	public partial class CriAtomExAsrRack {
		/**
		 * <summary>Stream Type ID</summary>
		 * <remarks>
		 * <para header='Description'>This value set the streaming type of the audio output destination. <br/></para>
		 * </remarks>
		 * <seealso cref='CriWare.CriAtomExAsrRack.PlatformConfigAndroid.streamType'/>
		*/
		public enum StreamType : System.Int32 {
			Music = 0,
			Alarm,
			Dtmf,
			Notification,
			Ring,
			System,
			VoiceCall,
		}

		/**
		 * <summary>Android-specific configuration structure used to create an ASR Rack</summary>
		 * <remarks>
		 * <para header='Description'>This structure is used to configure an CriAtomExAsrRack.<br/>
		 * Pass this structure as an argument when creating a module (CriWare.CriAtomExAsrRack::CriAtomExAsrRack function).<br/>
		 * For details, refer to the manual for each platform.<br/></para>
		 * <code>CriAtomExAsrRack CreateAsrRack() {
		 * 	var asrConfig = CriAtomExAsrRack.Config.Default();
		 * 	var androidConfig = CriAtomExAsrRack.PlatformConfigAndroid.Default();
		 * 
		 * 	// Change StreamType
		 * 	androidConfig.streamType = CriAtomExAsrRack.StreamType.Alarm;
		 * 
		 * 	if (androidConfig.IsSupportedPlatform()) {
		 * 		return new CriAtomExAsrRack(asrConfig, androidConfig);
		 * 	}
		 * 	return null;
		 * }</code>
		 * </remarks>
		 * <seealso cref='CriWare.CriAtomExAsrRack.IPlatformConfig'/>
		*/
		[StructLayout(LayoutKind.Sequential, CharSet = CharSet.Ansi)]
		public struct PlatformConfigAndroid : IPlatformConfig {

			/**
			 * <summary>Output audio stream type</summary>
			 * <remarks>
			 * <para header='Description'>Specify the Output Audio Stream Type for Android OS. <br/></para>
			 * <para header='Note'>Valid only if the ASR Rack output destination sound renderer type <see cref='CriWare.CriAtomExAsrRack.Config.soundRendererType'/><br/>
			 * is <see cref='CriWare.CriAtomEx.SoundRendererType.Native'/> (default value).</para>
			 * </remarks>
			 * <seealso cref='CriWare.CriAtomExAsrRack.PlatformConfigAndroid.streamType'/>
			*/
			public StreamType streamType;

			/**
			 * <summary>Spatial audio enabled flag</summary>
			 * <remarks>
			 * <para header='Description'>Specify the use of spatial audio. <br/></para>
			 * <para header='Note'>If the device does not support spatial audio, the downmixed result will be output. <br/></para>
			 * </remarks>
			*/
			public bool enableSpatialAudio;

			public bool IsSupportedPlatform() {
#if ENABLE_CRIATOMEXASRRACK_ANDROID
				return true;
#else
				return false;
#endif
			}

			/**
			 * <summary>Get the configuration structure with default values</summary>
			 * <returns>Configuration structure with default values</returns>
			 * <remarks>
			 * <para header='Description'>Get the default configuration structure to initialize <see cref='CriWare.CriAtomExAsrRack.CriAtomExAsrRack'/> .</para>
			 * </remarks>
			 */
			public static PlatformConfigAndroid Default() {
				var config = new PlatformConfigAndroid();
				SetDefaultConfig_ANDROID(ref config);
				return config;
			}

		}

		/**
		 * <summary>Set the default parameters</summary>
		 * <param name='platformConfig'>Platform-specific initialization configuration structure</param>
		 * <remarks>
		 * <para header='Description'>Assign the default parameters to the platform-specific initialization configuration structure used by <see cref='CriWare.CriAtomExAsrRack.CriAtomExAsrRack'/> .</para>
		 * </remarks>
		 */
		public static void SetDefaultConfig_ANDROID(ref PlatformConfigAndroid platformConfig) {
			NativeMethods.criAtomExAsrRack_SetDefaultConfig_ANDROID_Macro(ref platformConfig);
		}

		protected partial class NativeMethods {

#if ENABLE_CRIATOMEXASRRACK_ANDROID && !CRIWARE_ENABLE_HEADLESS_MODE
			[DllImport(CriWare.Common.pluginName, CallingConvention = CriWare.Common.pluginCallingConvention)]
			internal static extern void criAtomExAsrRack_SetDefaultConfig_ANDROID_Macro(ref PlatformConfigAndroid config);
#else
			internal static void criAtomExAsrRack_SetDefaultConfig_ANDROID_Macro(ref PlatformConfigAndroid config) { }
#endif
		}
	}
} //namespace CriWare