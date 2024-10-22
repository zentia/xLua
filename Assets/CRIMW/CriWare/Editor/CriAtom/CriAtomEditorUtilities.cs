/****************************************************************************
 *
 * Copyright (c) 2021 CRI Middleware Co., Ltd.
 *
 ****************************************************************************/

/*---------------------------
 * Force Load Data with Async Method Defines
 *---------------------------*/
#if UNITY_WEBGL
#define CRIWARE_FORCE_LOAD_ASYNC
#endif

using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
using System;

/**
 * \addtogroup CRIWARE_EDITOR_UTILITY
 * @{
 */

/**
 * <summary>CriWare.Editor namespace</summary>
 * <remarks>
 * <para header='Description'>This is a namespace which includes a collection of classes that can be used in the Unity Editor environment.</para>
 * </remarks>
 */
namespace CriWare.Editor {

/**
 * <summary>Class for the editor-only features of CRI Atom</summary>
 * <remarks>
 * <para header='Description'>Class that contains the editor-specific functions of CRI Atom.</para>
 * <para header='Note'>When using this class with the Assembly Definition version plug-in,<br/>
 * it is necessary to reference the following assembly definitions:<br/>
 * - CriMw.CriWare.Editor<br/>
 * - CriMw.CriWare.Runtime<br/></para>
 * </remarks>
 */
public class CriAtomEditorUtilities
{
	private static BuildTarget lastBuildTarget = BuildTarget.NoTarget;

	/**
	 * <summary>Initialize the CRI Atom library in the editor</summary>
	 * <returns>Whether the initialization process was executed</returns>
	 * <remarks>
	 * <para header='Description'>This method is used to initialize the CRI Atom library dedicated to the Edit mode. <br/>
	 * The Atom library will be initialized according to the Atom editor settings in the project settings. <br/>
	 * Depending on the project settings, it is also possible to initialize
	 * using the settings of the CriWareInitializer component in the currently loaded scene.</para>
	 * </remarks>
	 */
	public static bool InitializeLibrary() {
		bool settingChanged = CriAtomEditorSettings.Instance.GetChangeStatusOnce();
		settingChanged = settingChanged || lastBuildTarget != EditorUserBuildSettings.activeBuildTarget;
		if (CriAtomPlugin.IsLibraryInitialized() && settingChanged == false) {
			return false;
		}
		if (settingChanged) { 
			CriAtomPlugin.FinalizeLibrary();
		}
		
		CriFsConfig fsConfigEditor = new CriFsConfig();
		CriAtomConfig atomConfigEditor = CriAtomEditorSettings.Instance.AtomConfig;
		if (CriAtomEditorSettings.Instance.TrySceneSettings == true) {
			CriWareInitializer criInitializer = GameObject.FindObjectOfType<CriWareInitializer>();
			if (criInitializer != null) {
				fsConfigEditor = criInitializer.fileSystemConfig;
				atomConfigEditor = criInitializer.atomConfig;
			} else {
				Debug.Log("[CRIWARE] Atom Preview: No CriWareInitializer component found in current scene. " +
					"Using project settings instead.");
			}
		}

#if UNITY_EDITOR && UNITY_WEBGL
		CriFsPlugin.SetConfigAdditionalParameters_EDITOR(atomConfigEditor.webglWebAudioVoicePoolConfig.voices);
#endif
		CriWareInitializer.InitializeFileSystem(fsConfigEditor);
		bool initRes = CriWareInitializer.InitializeAtom(atomConfigEditor);

		if (initRes) {
			lastBuildTarget = EditorUserBuildSettings.activeBuildTarget;
		}

		return initRes;
	}

	/**
	 * <summary>ACB loading method for audio preview in the editor</summary>
	 * <returns>Instance of the ACB data loaded</returns>
	 * <remarks>
	 * <para header='Description'>This is a method to load ACB files which is limited to Edit mode only. <br/> 
	 * It is used for preview playback in the AtomBrowser, the CriAtomSource inspector, etc. <br/> 
	 * Use this method when loading ACB data in a Unity editor extension.</para>
	 * </remarks>
	 */
	public static CriAtomExAcb LoadAcbFile(CriFsBinder binder, string acbPath, string awbPath) {
		if (CriWare.Common.IsStreamingAssetsPath(acbPath)) {
			acbPath = System.IO.Path.Combine(CriWare.Common.streamingAssetsPath, acbPath);
		}

		awbPath = string.IsNullOrEmpty(awbPath) ? null : awbPath;
		if (awbPath != null && CriWare.Common.IsStreamingAssetsPath(awbPath)) {
			awbPath = System.IO.Path.Combine(CriWare.Common.streamingAssetsPath, awbPath);
		}

#if CRIWARE_FORCE_LOAD_ASYNC
		bool loadAwbOnMemory = false;
#if UNITY_WEBGL
		loadAwbOnMemory = true;
#endif
		using (var asyncLoader = CriAtomExAcbLoader.LoadAcbFileAsync(binder, acbPath, awbPath, loadAwbOnMemory)) {
			if (asyncLoader == null) {
				return null;
			}

			// forced synchronization of asynchronous process in Edit Mode
			int loopBreakingLimit = 2000, curLoopCnt = 0;
			while (curLoopCnt < loopBreakingLimit) {
				var status = asyncLoader.GetStatus();
				if (status == CriAtomExAcbLoader.Status.Complete) {
					return asyncLoader.MoveAcb();
				} else if (status == CriAtomExAcbLoader.Status.Error) {
					return null;
				}
				System.Threading.Thread.Sleep(1);
				curLoopCnt++;
			}

			Debug.LogWarning("[CRIWARE] Timed out loading AWB for previewing. The AWB file might be too large. AWB file path: " + awbPath);

			return null;
		}
#else
		return CriAtomExAcb.LoadAcbFile(binder, acbPath, awbPath);
#endif
	}

	/**
	 * <summary>Audio player dedicated to previewing in the editor</summary>
	 * <remarks>
	 * <para header='Description'>This class is used to preview the playback of ADX audio in the Edit mode. <br/>
	 * The loading of the relevant ACB data must be managed externally.</para>
	 * </remarks>
	 */
	public class PreviewPlayer : CriDisposable {
		public CriAtomExPlayer player { get; private set; }
		private bool finalizeSuppressed = false;
		private bool isPlayerReady = false;

		private void Initialize() {
			CriAtomEditorUtilities.InitializeLibrary();
			if (CriAtomPlugin.IsLibraryInitialized() == false) { return; }

			player = new CriAtomExPlayer();
			if (player == null) { return; }

			player.SetPanType(CriAtomEx.PanType.Pan3d);
			player.UpdateAll();

			isPlayerReady = true;

			CriDisposableObjectManager.Register(this, CriDisposableObjectManager.ModuleType.Atom);

			if (finalizeSuppressed) {
				GC.ReRegisterForFinalize(this);
			}
		}

		/**
		 * <summary>Initialization of the player</summary>
		 */
		public PreviewPlayer() {
			Initialize();
		}

		/**
		 * <summary>Destroying the player</summary>
		 */
		public override void Dispose() {
			this.dispose();
			GC.SuppressFinalize(this);
			finalizeSuppressed = true;
		}

		private void dispose() {
			CriDisposableObjectManager.Unregister(this);
			if (player != null) {
				player.Dispose();
				player = null;
			}
			this.isPlayerReady = false;
		}

		~PreviewPlayer() {
			this.dispose();
		}
		
		/**
		 * <summary>Set the audio data and play</summary>
		 * <param name='acb'>ACB data</param>
		 * <param name='cueName'>Cue name</param>
		 * <remarks>
		 * <para header='Description'>Specify the ACB data and Cue name and then play.</para>
		 * </remarks>
		 */
		public void Play(CriAtomExAcb acb, string cueName) {
			if (isPlayerReady == false) {
				this.Initialize();
			}

			if (acb != null) {
				if (player != null) {
					player.SetCue(acb, cueName);
					player.Start();
				} else {
					Debug.LogWarning("[CRIWARE] Player is not ready. Please try reloading the inspector / editor window");
				}
			} else {
				Debug.LogWarning("[CRIWARE] ACB data is not set for previewing playback");
			}
		}

		/**
		 * <summary>Stops the playback</summary>
		 * <param name='withoutRelease'>Whether to stop without release time</param>
		 * <remarks>
		 * <para header='Description'>Stops all audio playback.</para>
		 * </remarks>
		 */
		public void Stop(bool withoutRelease = false) {
			if (player != null) {
				if (withoutRelease) {
					player.StopWithoutReleaseTime();
				} else {
					player.Stop();
				}
			}
		}

		/**
		 * <summary>Resets the parameters of the player</summary>
		 */
		public void ResetPlayer() {
			player.SetVolume(1f);
			player.SetPitch(0);
			player.Loop(false);
		}
	}

} // end of class

} //namespace CriWare.Editor

/**
 * @}
 */

/* end of file */