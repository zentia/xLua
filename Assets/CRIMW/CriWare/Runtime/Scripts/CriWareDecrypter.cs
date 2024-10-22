/****************************************************************************
 *
 * Copyright (c) 2018 CRI Middleware Co., Ltd.
 *
 ****************************************************************************/

using System;
using System.Runtime.InteropServices;

/**
 * \addtogroup CRIWARE_COMMON_CLASS
 * @{
 */

namespace CriWare {

/**
 * <summary>A class which provides the function for setting encrypted data playback.</summary>
 * <remarks>
 * <para header='Description'>Provides the function to set the decryption when playing encrypted data.<br/>
 * The decryption function can be initialized by calling the functions provided by this class.</para>
 * </remarks>
 */
public static class CriWareDecrypter {

	/**
	 * <summary>CRI Ware Decrypter initialization parameters</summary>
	 */
	[System.Serializable]
	public class Config {
		/** Encryption key */
		public string key = "";
		/** Whether to enable decryption in CRI Atom */
		public bool enableAtomDecryption = true;
		/** Whether to enable decryption in CRI Mana */
		public bool enableManaDecryption = true;
	}

	/**
	 * <summary>Initialization (config specified)</summary>
	 * <param name='config'>Initialization config</param>
	 * <returns>Whether the initialization succeeded</returns>
	 * <remarks>
	 * <para header='Description'>Initializes the Decrytper.<br/>
	 * This function is called automatically when CriWareInitializer is set.<br/></para>
	 * <para header='Note'>Call this function after initializing the FileSystem library.</para>
	 * </remarks>
	 */
	public static bool Initialize(Config config) {
		return Initialize(config.key,
							config.enableAtomDecryption, config.enableManaDecryption);
	}

	/**
	 * <summary>Initialization (parameter specified)</summary>
	 * <param name='key'>Encryption key</param>
	 * <param name='enableAtomDecryption'>Whether to decode the sound data</param>
	 * <param name='enableManaDecryption'>Whether to decrypt the movie data</param>
	 * <returns>Whether the initialization succeeded</returns>
	 * <remarks>
	 * <para header='Description'>Initializes the Decrytper.<br/>
	 * This function is called automatically when CriWareInitializer is set.<br/></para>
	 * <para header='Note'>Call this function after initializing the FileSystem library.</para>
	 * </remarks>
	 */
	public static bool Initialize(string key, bool enableAtomDecryption, bool enableManaDecryption) {
		if (!CriFsPlugin.IsLibraryInitialized()) {
			return false;
		}

		/* バージョン番号が不正なライブラリには暗号キーを伝えない */
		/* 備考）不正に差し替えられたsoファイルを使用している可能性あり。 */
		bool isCorrectVersion = CriWare.Common.CheckBinaryVersionCompatibility();
		if (isCorrectVersion == false) {
			return false;
		}

		ulong decryptionKey = (key.Length == 0) ? 0 : System.Convert.ToUInt64(key);

		temporalStorage = decryptionKey ^ 0x00D47EB533AEF7E5UL;
		CRIWAREEFBCCA24(enableAtomDecryption, enableManaDecryption, CallbackFromNative, IntPtr.Zero);
		temporalStorage = 0;

		return true;
	}

	/* 変数の一時的な格納場所 */
	private static ulong temporalStorage = 0;

	#region Private Methods
	[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
	public delegate ulong CallbackFromNativeDelegate(System.IntPtr ptr1);

	[AOT.MonoPInvokeCallback(typeof(CallbackFromNativeDelegate))]
	private static ulong CallbackFromNative(System.IntPtr ptr1)
	{
		return temporalStorage;
	}
	#endregion

	#region DLL Import
	#if !CRIWARE_ENABLE_HEADLESS_MODE
	[DllImport(CriWare.Common.pluginName, CallingConvention = CriWare.Common.pluginCallingConvention)]
	public static extern int CRIWAREEFBCCA24(
		bool enable_atom_decryption, bool enable_mana_decryption, CallbackFromNativeDelegate func, IntPtr obj
	);
	#else
	public static int CRIWAREEFBCCA24(
		bool enable_atom_decryption, bool enable_mana_decryption, CallbackFromNativeDelegate func, IntPtr obj
		) { return 0; }
	#endif
	#endregion
} // end of class

} //namespace CriWare
/** @} */

/* --- end of file --- */
