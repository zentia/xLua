/****************************************************************************
 *
 * Copyright (c) 2015 - 2019 CRI Middleware Co., Ltd.
 *
 ****************************************************************************/

// Use old or new Low-level Native Plugin Interface (from unity 5.2)
#if (UNITY_4_0 || UNITY_4_0_1 || UNITY_4_1 || UNITY_4_2 || UNITY_4_3 || UNITY_4_5 || UNITY_4_6 || UNITY_4_7 || UNITY_5_0 || UNITY_5_1)
	#define CRIPLUGIN_USE_OLD_LOWLEVEL_INTERFACE
#endif

// Uncomment this for debug information.
//#define CRIMANA_STAT

using System;
using System.Runtime.InteropServices;
using UnityEngine;
#if CRIMANA_STAT
using System.Collections;
using UnityEngine.UI;
#endif

/**
 * \addtogroup CRIMANA_NATIVE_WRAPPER
 * @{
 */

namespace CriWare {

namespace CriMana
{

/**
 * <summary>A wrapper class for native player that controls the movie playback.</summary>
 * <remarks>
 * <para header='Description'><br/>
 * In general, it is used by extracting it from the CriManaMovieController or CriManaMovieControllerForUI component.
 * Use this class when you want to perform complicated playback control beyond stopping/pausing playback.
 * <br/>
 * If you want to control movie playback directly without using a component, you can directly generate this object and use it.
 * <br/></para>
 * <para header='Note'>If you directly create an object of this class from the application, be sure to discard it using the Player::Dispose function after completing playback.</para>
 * </remarks>
 */
	public class Player : CriDisposable
	{
		#region Data Types
		/**
		 * <summary>A value indicating the player status.</summary>
		 * <seealso cref='Player::status'/>
		 */
		public enum Status
		{
			Stop,           /**< Stopped */
			Dechead,        /**< The header is under analysis */
			WaitPrep,       /**< Buffering start stopped */
			Prep,           /**< Preparing for playback */
			Ready,          /**< Playback preparation completed */
			Playing,        /**< Playing */
			PlayEnd,        /**< Playback completed */
			Error,          /**< Error */
			StopProcessing, /**< Being stopped */

			ReadyForRendering,  /**< Rendering preparation completed */
		}


		/**
		 * <summary>A mode for setting files.</summary>
		 * <seealso cref='Player::SetFile'/>
		 * <seealso cref='Player::SetContentId'/>
		 * <seealso cref='Player::SetFileRange'/>
		 */
		public enum SetMode
		{
			New,                /**< Specifies the movie to use in the next playback */
			Append,             /**< Adds to the concatenated playback Cue */
			AppendRepeatedly    /**< Adds repeatedly until the next movie is enCued in the concatenated playback Cue */
		}

		/**
		 * <summary>Synchronization mode for movie events (Cue points, subtitles).</summary>
		 * <seealso cref='Player::SetMovieEventSyncMode'/>
		 */
		public enum MovieEventSyncMode
		{
			FrameTime,          /**< Synchronizes to the frame time */
			PlayBackTime        /**< Synchronizes to the playback time based on the timer type */
		}

		/**
		 * <summary>A mode when setting the audio track.</summary>
		 * <seealso cref='Player::SetAudioTrack'/>
		 * <seealso cref='Player::SetSubAudioTrack'/>
		 */
		public enum AudioTrack
		{
			Off,    /**< A value specifying the audio playback OFF */
			Auto,   /**< Default value for audio track */
		}

		/**
		 * <summary>Timer type.</summary>
		 * <seealso cref='Player::SetMasterTimerType'/>
		 */
		public enum TimerType : int {
			None    = 0,    /**< No time synchronization */
			System  = 1,    /**< System time */
			Audio   = 2,    /**< Audio time of the Main Audio Track */
			User    = 3,    /**< User-specific timer */
			Manual  = 4,    /**< Manual timer */
		}

		/**
		 * <summary>A Cue point callback delegate type.</summary>
		 * <param name='eventPoint'>Event point information</param>
		 * <remarks>
		 * <para header='Description'>A Cue point callback delegate type.<br/></para>
		 * <para header='Note'>Do not call functions that control movie playback in the Cue point callback.</para>
		 * </remarks>
		 * <seealso cref='Player::cuePointCallback'/>
		 */
		public delegate void CuePointCallback(ref EventPoint eventPoint);

		/**
		 * <summary>A delegate type for the callback when the player status changes.</summary>
		 * <param name='status'>Player state after change</param>
		 * <remarks>
		 * <para header='Description'>A delegate type for the callback when the player status changes.<br/></para>
		 * </remarks>
		 * <seealso cref='Player::statusChangeCallback'/>
		 */
		public delegate void StatusChangeCallback(Status status);

		/**
		 * <summary>Delegate type of subtitle information update callback</summary>
		 * <param name='subtitleBuffer'>Pointer to the subtitle string</param>
		 * <remarks>
		 * <para header='Description'>This is the delegate type for the subtitle information update callback.</para>
		 * </remarks>
		 * <seealso cref='Player::OnSubtitleChanged'/>
		 */
		public delegate void SubtitleChangeCallback(IntPtr subtitleBuffer);

		/**
		 * <summary>A shader selection delegate type.</summary>
		 * <param name='movieInfo'>Movie information</param>
		 * <param name='additiveMode'>Whether to do additive composition</param>
		 * <remarks>
		 * <para header='Description'>A shader selection delegate type.<br/></para>
		 * </remarks>
		 * <seealso cref='Player::SetShaderDispatchCallback'/>
		 */
		public delegate UnityEngine.Shader ShaderDispatchCallback(MovieInfo movieInfo, bool additiveMode);
		#endregion


		#region Constant Variables
		private const int  InvalidPlayerId = -1;
		#endregion


		#region Internal Variables
		static private Player       updatingPlayer          = null;

		private int                 playerId                = InvalidPlayerId;
		private bool                isDisposed              = false;
		private Status              internalrequiredStatus  = Status.Stop;
		private Status              _nativeStatus           = Status.Stop;
#if CRIWARE_ENABLE_HEADLESS_MODE
		#pragma warning disable 0414
#endif
		private Status?             lastNativeStatus        = null;
#if CRIWARE_ENABLE_HEADLESS_MODE
		#pragma warning restore 0414
#endif
		private Status?             lastPlayerStatus        = null;
		private bool                wasStopping             = false;
		private bool                isPreparingForRendering = false;
		private bool                isNativeStartInvoked    = false;
		private bool                isNativeInitialized     = false;
		private Detail.RendererResource rendererResource;
		private MovieInfo           _movieInfo              = new MovieInfo();
		private FrameInfo           _frameInfo              = new FrameInfo();
		private bool                isMovieInfoAvailable    = false;
		private bool                isFrameInfoAvailable    = false;
		private ShaderDispatchCallback  _shaderDispatchCallback = null;
		private bool                enableSubtitle          = false;
		private int                 subtitleBufferSize      = 0;
		private uint                droppedFrameCount       = 0;
		private CriAtomExPlayer     _atomExPlayer           = null;
		private CriAtomExPlayer     _subAtomExPlayer        = null;
		private CriAtomExPlayer     _extraAtomExPlayer      = null;
		private CriAtomEx3dSource   _atomEx3Dsource         = null;
		private TimerType           _timerType               = TimerType.Audio;
#if CRIWARE_ENABLE_HEADLESS_MODE
		#pragma warning disable 0414
#endif
		private bool                isStoppingForSeek       = false;
#if CRIWARE_ENABLE_HEADLESS_MODE
		#pragma warning restore 0414
#endif

		private Status requiredStatus {
			get { return internalrequiredStatus; }
			set {
				internalrequiredStatus = value;
				/* set temporary flags when requiredStatus changes */
				switch (value) {
					case Status.Stop:
						this.wasStopping = true;
						break;
					case Status.ReadyForRendering:
						this.isPreparingForRendering = true;
						break;
					default:
						break;
				}
				this.InvokePlayerStatusCheck();
			}
		}
		#endregion


		#region Properties
		/**
		 * <summary>A Cue point callback delegate.</summary>
		 * <remarks>
		 * <para header='Description'>A Cue point callback delegate.<br/></para>
		 * <para header='Note'>This must be set before the Player::Prepare and Player::Start functions.</para>
		 * </remarks>
		 * <seealso cref='Player::CuePointCallback'/>
		 */
		public CuePointCallback cuePointCallback;


		/**
		 * <summary>A delegate for the callback when the player status changes.</summary>
		 * <remarks>
		 * <para header='Description'>A delegate for the callback when the player status changes.<br/></para>
		 * </remarks>
		 * <seealso cref='Player::StatusChangeCallback'/>
		 */
		public StatusChangeCallback statusChangeCallback;

#if CRIWARE_ENABLE_HEADLESS_MODE
		#pragma warning disable 0067
#endif
		/**
		 * <summary>Callback function for subtitle information update</summary>
		 * <remarks>
		 * <para header='Description'>This is the subtitle information callback event.</para>
		 * <para header='Note'>The string data referenced by this pointer may not contain a terminating character.<br/>
		 * Please be sure to perform the conversion using a function that passes the buffer size along with the pointer.<br/></para>
		 * </remarks>
		 * <seealso cref='Player::SubtitleChangeCallback'/>
		 * <seealso cref='subtitleSize'/>
		 */
		public event SubtitleChangeCallback OnSubtitleChanged;
#if CRIWARE_ENABLE_HEADLESS_MODE
		#pragma warning restore 0067
#endif


		/**
		 * <summary>Sets the blend mode to additive composition mode.</summary>
		 * <remarks>
		 * <para header='Description'>This is an argument passed to the shader selection callback during playback.<br/></para>
		 * <para header='Note'>This must be set before the Player::Prepare and Player::Start functions.</para>
		 * </remarks>
		 * <seealso cref='Player::ShaderDispatchCallback'/>
		 */
		public bool additiveMode { get; set; }


		/**
		 * <summary>Sets the maximum number of frame drops.</summary>
		 * <remarks>
		 * <para header='Description'>Sets the maximum number of frames to be dropped in one update
		 * if the update of rendered frames is not keeping up with the playback.<br/>
		 * This allows  intended playback if the frame rate of the application is low
		 * or when the playback speed of the video is raised higher than the frame rate.</para>
		 * </remarks>
		 */
		public int maxFrameDrop { get; set; }


		/**
		 * <summary>Sets whether to apply the object transparency.</summary>
		 * <remarks>
		 * <para header='Description'>Sets whether to make the movie transparent depending on the transparency of the attached object.<br/></para>
		 * <para header='Note'>This must be set before the Player::Prepare and Player::Start functions.</para>
		 * </remarks>
		 */
		public bool applyTargetAlpha { get; set; }


		/**
		 * <summary>Specifies whether shader settings for UI components are applied.</summary>
		 * <remarks>
		 * <para header='Description'>Sets whether to apply the rendering settings for UI components to the shader
		 * that renders the movie. <br/>
		 * The default value is false.</para>
		 * <para header='Note'>This must be set before the Player::Prepare and Player::Start functions.</para>
		 * </remarks>
		 */
		public bool uiRenderMode { get; set; }


		/**
		 * <summary>Whether a valid frame is held</summary>
		 * <remarks>
		 * <para header='Description'>Returns whether a valid frame is maintained.<br/></para>
		 * <para header='Note'>When you render by yourself, switch the rendering using this flag.<br/></para>
		 * </remarks>
		 */
		public bool isFrameAvailable
		{
			get { return isFrameInfoAvailable; }
		}


		/**
		 * <summary>Gets the information on the movie being played.</summary>
		 * <param name='movieInfo'>Movie information</param>
		 * <remarks>
		 * <para header='Description'>The information on the header analysis result of the movie that was started.<br/>
		 * You can get information such as movie resolution and frame rate.<br/></para>
		 * <para header='Note'>Information can be acquired only when the player status is between Player.Status.WaitPrep and Player.Status.Playing.<br/>
		 * In other states, null is returned.</para>
		 * </remarks>
		 * <seealso cref='Player::Status'/>
		 */
		public MovieInfo movieInfo
		{
			get { return isMovieInfoAvailable ? _movieInfo : null; }
		}


		/**
		 * <summary>Gets the frame information of the movie being played.</summary>
		 * <param name='frameInfo'>Frame information</param>
		 * <remarks>
		 * <para header='Description'>You can get information about the frame currently being rendered.<br/></para>
		 * <para header='Note'>Information can be acquired only when the sound is being played. In other states, null is returned.<br/></para>
		 * </remarks>
		 */
		public FrameInfo frameInfo
		{
			get { return isFrameAvailable ? _frameInfo : null; }
		}


		/**
		 * <summary>Gets the player status.</summary>
		 * <returns>Status</returns>
		 * <remarks>
		 * <para header='Description'>Gets the player status.<br/></para>
		 * </remarks>
		 */
		public Status status
		{
			get {
				if (_nativeStatus == Status.Error) {
					return Status.Error;
				}
				if (wasStopping && _nativeStatus != Status.Stop) {
					return Status.StopProcessing;
				}
				if (requiredStatus == Status.ReadyForRendering) {
					if (_nativeStatus == Status.Playing) {
						return ((rendererResource != null) && (rendererResource.IsPrepared()))
							? Status.ReadyForRendering : Status.Prep;
					} else {
						return Status.Prep;
					}
				}
				if (_nativeStatus == Status.Ready) {
					return (rendererResource != null) ? Status.Ready : Status.Prep;
				} else {
					return _nativeStatus;
				}
			}
		}


		/**
		 * <summary>Gets the status of the internal handle.</summary>
		 * <returns>Status</returns>
		 * <remarks>
		 * <para header='Description'>Gets the status of the Mana player handle used internally by the plugin. <br/>
		 * It is used for detailed debugging or state management. <br/>
		 * If you want to check the playback status of the video in the application, please use Player::status . <br/></para>
		 * </remarks>
		 * <seealso cref='Player::status'/>
		 */
		public Status nativeStatus
		{
			get { return _nativeStatus; }
		}


		/**
		 * <summary>Gets the number of seamless playback entries.</summary>
		 * <remarks>
		 * <para header='Description'>Gets the number of seamless playback entries.<br/>
		 * The value obtained from this property is the number of entries that are not started loading.<br/>
		 * Loading the movie registered in the entry starts few frames before it is linked.<br/></para>
		 * </remarks>
		 */
		public System.Int32 numberOfEntries
		{
			get {
				return CRIWARE2F5865AB(playerId);
			}
		}


		/**
		 * <summary>Gets the pointer to the subtitle data buffer.</summary>
		 * <remarks>
		 * <para header='Description'>Gets a pointer to the subtitle data buffer.<br/>
		 * The subtitle data at the display time is stored.<br/></para>
		 * <para header='Note'>The character code of the subtitle data follows the subtitle file specified when encoding the video file. <br/>
		 * Please convert to a string with the character code corresponding to the subtitle file. <br/></para>
		 * <para header='Note'>As the string indicated by the pointer may not contain a terminating character, be sure to perform the conversion using a function that takes the buffer size along with the pointer.<br/></para>
		 * </remarks>
		 * <seealso cref='Player::SetSubtitleChannel'/>
		 * <seealso cref='Player::subtitleSize'/>
		 */
		public System.IntPtr subtitleBuffer { get; private set; }


		/**
		 * <summary>Gets the size of the subtitle data buffer.</summary>
		 * <remarks>
		 * <para header='Description'>Gets the size of the subtitle data buffer.<br/>
		 * Please use it when you get the subtitle data from Player::subtitleBuffer .<br/></para>
		 * </remarks>
		 * <seealso cref='Player::SetSubtitleChannel'/>
		 * <seealso cref='Player::subtitleBuffer'/>
		 */
		public int subtitleSize { get; private set; }


		/**
		 * <summary>Gets the CriAtomExPlayer handle.</summary>
		 * <remarks>
		 * <para header='Description'>Gets the CriAtomExPlayer handle used to play the audio data from the video.<br/>
		 * This property can only get a valid handle when Advanced Audio mode is enabled by CriManaMovieMaterial::advancedAudio.<br/></para>
		 * </remarks>
		 * <seealso cref='CriManaMovieMaterial::advancedAudio'/>
		 */
		public CriAtomExPlayer atomExPlayer
		{
			get
			{
				return _atomExPlayer;
			}
		}

		/**
		 * <summary>Get the CriAtomExPlayer handle (sub audio track)</summary>
		 * <remarks>
		 * <para header='Description'>Get the CriAtomExPlayer handle used to play the audio data from the video.<br/>
		 * The CriAtomExPlayer that is obtained via this property is used for sub audio tracks.<br/>
		 * A valid handle can only be retrieved<br/>
		 * when the Advanced Audio mode in CriManaMovieMaterial.advancedAudio is enabled.<br/></para>
		 * </remarks>
		 * <seealso cref='CriManaMovieMaterial.advancedAudio'/>
		 * <seealso cref='CriAtomExPlayer'/> 
		 * <seealso cref='SetSubAudioTrack'/>
		 */
		public CriAtomExPlayer subAtomExPlayer
		{
			get
			{
				return _subAtomExPlayer;
			}
		}

		/**
		 * <summary>Get the CriAtomExPlayer handle (extra track)</summary>
		 * <remarks>
		 * <para header='Description'>Get the CriAtomExPlayer handle used to play the audio data from the video.<br/>
		 * The CriAtomExPlayer that is obtained via this property is used for extra audio tracks. <br/>
		 * A valid handle can only be retrieved<br/>
		 * when the Advanced Audio mode in CriManaMovieMaterial.advancedAudio is enabled.<br/></para>
		 * </remarks>
		 * <seealso cref='CriManaMovieMaterial.advancedAudio'/>
		 * <seealso cref='CriAtomExPlayer'/> 
		 * <seealso cref='SetExtraAudioTrack'/>
		 */
		public CriAtomExPlayer extraAtomExPlayer
		{
			get
			{
				return _extraAtomExPlayer;
			}
		}

		public CriAtomEx3dSource atomEx3DsourceForAmbisonics
		{
			get
			{
				return _atomEx3Dsource;
			}
		}


		public TimerType timerType
		{
			get { return _timerType; }
		}


		/**
		 * <summary>Object to hold the player.</summary>
		 * <remarks>
		 * <para header='Description'>MonoBehaviour object that holds a valid CriWare.CriMana::Player until it is destroyed.
		 * It is used inside the plugin to perform coroutine by which
		 * unmanaged resources handled by GPU and rendering thread will be deleted.</para>
		 * </remarks>
		 */
		public CriManaMoviePlayerHolder playerHolder { get; set; }
		#endregion


		public Player()
		{
			if (!CriManaPlugin.IsLibraryInitialized()) {
				throw new Exception("CriManaPlugin is not initialized.");
			}
			playerId = CRIWAREB569B1EF();
			additiveMode = false;
			maxFrameDrop = 0;
			SetupPlayerHolder();
			CriDisposableObjectManager.Register(this, CriDisposableObjectManager.ModuleType.Mana);
		}


		public Player(bool advanced_audio_mode, bool ambisonics_mode, uint max_path_length) {
			if (!CriManaPlugin.IsLibraryInitialized()) {
				throw new Exception("CriManaPlugin is not initialized.");
			}
			#if !(UNITY_WEBGL && !UNITY_EDITOR)
			if (advanced_audio_mode || max_path_length > 0) {
				playerId = CRIWARE91A85730(advanced_audio_mode, max_path_length);
				if (advanced_audio_mode) {
					/* AtomExPlayer 作成 */
					_atomExPlayer = new CriAtomExPlayer(criManaUnityPlayer_GetAtomExPlayerByTrackId(playerId, 0));
					_subAtomExPlayer = new CriAtomExPlayer(criManaUnityPlayer_GetAtomExPlayerByTrackId(playerId, 1));
					_extraAtomExPlayer = new CriAtomExPlayer(criManaUnityPlayer_GetAtomExPlayerByTrackId(playerId, 2));
					if (ambisonics_mode) {
						_atomEx3Dsource = new CriAtomEx3dSource();
						_atomExPlayer.Set3dSource(_atomEx3Dsource);
						_atomExPlayer.SetPanType(CriAtomEx.PanType.Pos3d);
						_atomExPlayer.UpdateAll();
					}
				}
			} else {
				playerId = CRIWAREB569B1EF();
			}
			#else
			playerId = CRIWAREB569B1EF();
			#endif
			additiveMode = false;
			maxFrameDrop = 0;
			SetupPlayerHolder();
			CriDisposableObjectManager.Register(this, CriDisposableObjectManager.ModuleType.Mana);
		}

		~Player()
		{
			Dispose(false);
		}


		/**
		 * <summary>Discards the player object</summary>
		 * <remarks>
		 * <para header='Description'>Discards a player object.<br/>
		 * If you create your own CriMana::Player object, be sure to call the Dispose function.
		 * When this function is called, all the resources allocated when creating the player are released.<br/></para>
		 * </remarks>
		 */
		public override void Dispose()
		{
			this.Dispose(true);
			System.GC.SuppressFinalize(this);
		}


		/**
		 * <summary>Generates the resources required for movie rendering.</summary>
		 * <param name='width'>Movie width</param>
		 * <param name='height'>Movie height</param>
		 * <param name='alpha'>Whether it is an alpha movie</param>
		 * <remarks>
		 * <para header='Description'>Generates the resources required for movie rendering.<br/>
		 * Normally, the resources required for movie rendering are automatically generated inside the player,
		 * but you can generate them in advance by calling this function before calling Player::Prepare and Player::Start.<br/>
		 * However, if the resource created in advance using this function cannot be used for rendering movie to be played<br/>
		 * due to insufficient width or height, the resource is discarded and regenerated.</para>
		 * </remarks>
		 * <seealso cref='Player::DisposeRendererResource'/>
		 */
		public void CreateRendererResource(int width, int height, bool alpha)
		{
			MovieInfo dummyMovieInfo = new MovieInfo();
			dummyMovieInfo.hasAlpha         = alpha;
			dummyMovieInfo.width            = (System.UInt32)width;
			dummyMovieInfo.height           = (System.UInt32)height;
			dummyMovieInfo.dispWidth        = (System.UInt32)width;
			dummyMovieInfo.dispHeight       = (System.UInt32)height;
			dummyMovieInfo.codecType        = CodecType.SofdecPrime;
			dummyMovieInfo.alphaCodecType   = CodecType.SofdecPrime;

			UnityEngine.Shader userShader       = (_shaderDispatchCallback == null) ? null : _shaderDispatchCallback(movieInfo, additiveMode);
			if (rendererResource != null) {
				if (!rendererResource.IsSuitable(playerId, dummyMovieInfo, additiveMode, userShader)) {
					rendererResource.Dispose();
					rendererResource = null;
				}
			}
			if (rendererResource == null) {
				rendererResource = Detail.RendererResourceFactory.DispatchAndCreate(playerId, dummyMovieInfo, additiveMode, userShader);
			}
		}


		/**
		 * <summary>Discards the resources required for rendering movie.</summary>
		 * <remarks>
		 * <para header='Description'>Discards the resources required for rendering movie.<br/>
		 * Although the resource is discarded in Player::Dispose,
		 * it can be done explicitly using this function.<br/></para>
		 * </remarks>
		 * <seealso cref='Player::CreateRendererResource'/>
		 */
		public void DisposeRendererResource()
		{
			if (rendererResource != null) {
				rendererResource.Dispose();
				rendererResource = null;
			}
		}


		/**
		 * <summary>Prepares for playback.</summary>
		 * <remarks>
		 * <para header='Description'>This function does not start movie playback but only analyzes the header and prepares for playback (buffering).<br/>
		 * <br/>
		 * Call this function after specifying the movie to be played.
		 * When the playback is ready, the player's status changes to Player.Status.Ready.<br/>
		 * <br/>
		 * Call this function only when the status of the player is Player.Status.Stop or Player.Status.PlayEnd.</para>
		 * </remarks>
		 * <seealso cref='Player::Status'/>
		 */
		public void Prepare()
		{
			this.wasStopping = false;
			if ((_nativeStatus == Status.Stop) || (_nativeStatus == Status.PlayEnd)) {
				requiredStatus = Status.Ready;
				PrepareNativePlayer();
				UpdateNativePlayer();
			}
		}

		/**
		 * <summary>Prepares for playback.</summary>
		 * <remarks>
		 * <para header='Description'>This function does not start movie playback but only analyzes the header and prepares for playback (buffering and preparation of the first frame).<br/>
		 * Use this function when you want to align the beginning of movie playback.<br/>
		 * <br/>
		 * Call this function after specifying the movie to be played.
		 * When the playback is ready, the player's status becomes Player.Status.ReadyForRendering,
		 * and rendering starts immediately by CriMana.Player.Play.<br/>
		 * <br/>
		 * Call this function only when the status of the player is Player.Status.Stop,
		 * Player.Status.PlayEnd or Player.Status.Prepare.</para>
		 * </remarks>
		 * <seealso cref='Player::Status'/>
		 */
		public void PrepareForRendering()
		{
			if (requiredStatus == Status.Ready) {
				Pause(true);
				requiredStatus = Status.ReadyForRendering;
			} else if ((_nativeStatus == Status.Stop) || (_nativeStatus == Status.PlayEnd)) {
				Start();
				Pause(true);
				requiredStatus = Status.ReadyForRendering;
			}
		}

		/**
		 * <summary>Start playback.</summary>
		 * <remarks>
		 * <para header='Description'>Starts movie playback.<br/>
		 * When playback starts, the status changes to Player.Status.Playing.</para>
		 * <para header='Note'>After calling this function, it takes several frames before the rendering of movie actually starts.<br/>
		 * If you want to synchronize the movie playback, prepare for playback in advance using the Player.Prepare function.</para>
		 * </remarks>
		 * <seealso cref='Player::Stop'/>
		 * <seealso cref='Player::Status'/>
		 */
		public void Start()
		{
			this.wasStopping = false;
			if (requiredStatus == Status.ReadyForRendering) {
				requiredStatus = Status.Playing;
				Pause(false);
				UpdateNativePlayer();
			} else {
				requiredStatus = Status.Playing;
				if ((_nativeStatus == Status.Stop) || (_nativeStatus == Status.PlayEnd)) {
					PrepareNativePlayer();
					UpdateNativePlayer();
				}
			}
			if (rendererResource != null) {
				rendererResource.OnPlayerStart();
			}
			isStoppingForSeek = false;
		}


		/**
		 * <summary>Requests to stop movie playback.</summary>
		 * <remarks>
		 * <para header='Description'>Issues a request to stop movie playback. This function returns immediately.<br/>
		 * Playback does not stop immediately when this function is called.<br/></para>
		 * </remarks>
		 * <seealso cref='Player::Status'/>
		 */
		public void Stop()
		{
			isStoppingForSeek = false;
			requiredStatus = Status.Stop;
			if (rendererResource != null) {
				rendererResource.OnPlayerStop();
			}
			if (playerId != InvalidPlayerId) {
				CRIWARE062AF91F(playerId);
				UpdateNativePlayer();
			}
			DisableInfos();
		}


		/**
		 * <summary>Requests to stop movie playback.</summary>
		 * <remarks>
		 * <para header='Description'>Issues a request to stop movie playback. This function returns immediately.<br/>
		 * Playback does not stop immediately when this function is called.<br/>
		 * Playback is stopped internally, but the rendering status is kept.<br/>
		 * Use this when you need to stop the movie while keeping it be rendered, such as when performing a seek during playback.</para>
		 * </remarks>
		 * <seealso cref='Player::Start'/>
		 * <seealso cref='Player::Status'/>
		 */
		public void StopForSeek() {
			if (rendererResource != null) {
				if (!rendererResource.OnPlayerStopForSeek()) {
					UnityEngine.Debug.LogWarning("[CRIWARE] StopForSeek is not supported on this platform/codec.");
					Stop();
					return;
				}
			}
			requiredStatus = Status.Stop;
			if (playerId != InvalidPlayerId) {
				isStoppingForSeek = true;
				CRIWARE062AF91F(playerId);
				UpdateNativePlayer();
			}
			DisableInfos(true);
		}


		/**
		 * <summary>Pauses/unpauses the movie playback.</summary>
		 * <param name='sw'>Pause switch (true: pause, false: resume)</param>
		 * <remarks>
		 * <para header='Description'>Turns the pause on and off.<br/>
		 * Pauses the playback if the argument is true, resumes the playback if it is false. <br/>
		 * The pause state will be cleared when the Player::Stop function is called.<br/></para>
		 * </remarks>
		 * <seealso cref='Player::IsPaused'/>
		 */
		public void Pause(bool sw)
		{
			CRIWARE18D62384(playerId, (sw) ? 1 : 0);

			if (rendererResource != null) {
				rendererResource.OnPlayerPause(sw, false);
			}
		}


		/**
		 * <summary>Gets the pausing status of the movie playback.</summary>
		 * <returns>Pausing status</returns>
		 * <remarks>
		 * <para header='Description'>Gets the ON/OFF status of the pause.<br/></para>
		 * </remarks>
		 * <seealso cref='Player::Pause'/>
		 */
		public bool IsPaused()
		{
			return CRIWARE4965C380(playerId);
		}


		/**
		 * <summary>Sets the file path of the streaming playback.</summary>
		 * <param name='binder'>Binder with CPK file bound</param>
		 * <param name='moviePath'>Content path in a CPK file</param>
		 * <param name='setMode'>Movie addition mode</param>
		 * <returns>Whether the set was successful</returns>
		 * <remarks>
		 * <para header='Description'>Sets the file path for streaming playback.<br/>
		 * A movie from the CPK file can be played by passing the binder handle to which the CPK file is bound for the first argument.<br/>
		 * To stream directly from a file instead of a CPK, specify null for the "binder" argument.<br/>
		 * If Player::SetMode::Append is passed for the third argument "setMode", concatenated playback will be performed.
		 * In this case, the function may return false.<br/>
		 * Movie files for concatenated playback must meet the following conditions.<br/>
		 * - Video resolution, frame rate and codec must be identical
		 * - Presence or not of alpha information must be identical
		 * - Audio tracks configuration (track numbers and number of channels) and codec must be identical</para>
		 * <para header='When no binder is specified (null is specified)'>- Equivalent to setting the moviePath property.<br/>
		 * - If a relative path is specified, the file is loaded relative to StreamingAssets folder.
		 * - If an absolute path is specified, the file is loaded from the specified path.<br/></para>
		 * <para header='When a binder is specified'>If the moviePath property is set after setting the binder,
		 * the movie is played from the CPK file bound to the binder.<br/></para>
		 * <para header='Note'>You can also specify moviePath as URL.
		 * For example, by specifying a string such as "http://hoge-server/fuga-movie.usm",
		 * it is possible to stream playback the movie file on the HTTP server. However, this feature is not recommended.
		 * Also, only HTTP is supported as a communication protocol. HTTPS is not supported.</para>
		 * </remarks>
		 * <seealso cref='Player::SetContentId'/>
		 * <seealso cref='Player::SetFileRange'/>
		 * <seealso cref='Player::moviePath'/>
		 */
		public bool SetFile(CriFsBinder binder, string moviePath, SetMode setMode = SetMode.New)
		{
			System.IntPtr binderPtr = (binder == null) ? System.IntPtr.Zero : binder.nativeHandle;
			if ((binder == null) && CriWare.Common.IsStreamingAssetsPath(moviePath) ) {
				moviePath = System.IO.Path.Combine(CriWare.Common.streamingAssetsPath, moviePath);
			}
			if (setMode == SetMode.New) {
				CRIWAREE8F69B86(playerId, binderPtr, moviePath);
				return true;
			} else {
				return CRIWARE02F616D8(
					playerId, binderPtr, moviePath,
					(setMode == SetMode.AppendRepeatedly)
					);
			}
		}


		/**
		 * <summary>Sets the data for memory playback.</summary>
		 * <param name='data'>Movie data on the memory</param>
		 * <param name='dataSize'>Data size</param>
		 * <param name='setMode'>Movie addition mode</param>
		 * <returns>Whether the set was successful</returns>
		 * <remarks>
		 * <para header='Description'>Assigns the data settings for in-memory playback. <br/>
		 * The first and second arguments specify the address and size of the data.
		 * If Player::SetMode::Append is passed for the third argument "setMode", concatenated playback will be performed. 
		 * In this case, the function may return false. <br/>
		 * The conditions for the movie files that can be used for concatenated playback are the same than for the Player::SetFile function.<br/></para>
		 * <para header='Note'>The buffer address passed to SetData should be fixed beforehand by the application
		 * so that it is not moved by the garbage collector.<br/>
		 * In addition, release the memory lock after the playback is finished, the playback is stopped, or after the player object is discarded.<br/></para>
		 * </remarks>
		 * <seealso cref='Player::SetFile'/>
		 * <seealso cref='Player::SetContentId'/>
		 * <seealso cref='Player::SetFileRange'/>
		 * <seealso cref='Player::moviePath'/>
		 */
		public bool SetData(IntPtr data, System.Int64 dataSize, SetMode setMode = SetMode.New)
		{
			if (setMode == SetMode.New) {
				CRIWARE5E809C25(playerId, data, dataSize);
				return true;
			} else {
				return CRIWARE9DAAE010(
					playerId, data, dataSize,
					(setMode == SetMode.AppendRepeatedly)
					);
			}
		}

		/**
		* \deprecated
		* This is a deprecated API that will be removed.
		* Please consider using Player.SetData(IntPtr data, System.Int64 dataSize, SetMode setMode = SetMode.New) instead.
		*/
		[Obsolete("Use SetData(IntPtr, Int64, SetMode) instead")]
		public bool SetData(byte[] data, System.Int64 datasize, SetMode setMode = SetMode.New) {
			if (setMode == SetMode.New) {
				CRIWARE5E809C25(playerId, data, datasize);
				return true;
			} else {
				return CRIWARE9DAAE010(
					playerId, data, datasize,
					(setMode == SetMode.AppendRepeatedly)
					);
			}
		}


		/**
		 * <summary>Specifies the movie file in the CPK file. (Specify content ID)</summary>
		 * <param name='binder'>Binder with CPK file bound</param>
		 * <param name='contentId'>Content ID in the CPK file</param>
		 * <param name='setMode'>Movie addition mode</param>
		 * <returns>Whether the set was successful</returns>
		 * <remarks>
		 * <para header='Description'>Sets the content ID for streaming playback.<br/>
		 * By specifying a binder and a content ID as arguments, any movie data in the CPK file can be used as the data source.
		 * If Append is passed for the third argument "setMode", concatenated playback will be performed. In this case, the function may return false.<br/>
		 * Movie files for concatenated playback must meet the following conditions:<br/>
		 * - Video resolution, frame rate and codec must be identical
		 * - Presence or not of alpha information must be identical
		 * - Audio tracks configuration (track numbers and number of channels) and codec must be identical</para>
		 * </remarks>
		 * <seealso cref='Player::SetFile'/>
		 * <seealso cref='Player::SetFileRange'/>
		 * <seealso cref='Player::SetData'/>
		 */
		public bool SetContentId(CriFsBinder binder, int contentId, SetMode setMode = SetMode.New)
		{
			if (binder == null) {
				UnityEngine.Debug.LogError("[CRIWARE] CriFsBinder is null");
				return false;
			}
			if (setMode == SetMode.New) {
				CRIWARE577FD5EB(playerId, binder.nativeHandle, contentId);
				return true;
			}
			else {
				return CRIWAREAB8F4BE0(
					playerId, binder.nativeHandle, contentId,
					(setMode == SetMode.AppendRepeatedly)
					);
			}
		}


		/**
		 * <summary>Specifies the movie file in the pack file. (File range specified)</summary>
		 * <param name='filePath'>Path to the pack file</param>
		 * <param name='offset'>Data start position of movie file in the pack file</param>
		 * <param name='range'>Data range of the movie file in pack file</param>
		 * <param name='setMode'>Movie addition mode</param>
		 * <returns>Whether the set was successful</returns>
		 * <remarks>
		 * <para header='Description'>Specifies a packed file containing movies for streaming playback.<br/>
		 * By specifying the offset and the data range (length) as arguments, any movie data in the packed file can be used as the data source.
		 * If -1 is specified for the second argument "range," the data range will extend to the end of the packed file.
		 * If Player::SetMode.Append is passed for the 4th argument "setMode", concatenated playback will be performed. In this case, the function may return false.<br/>
		 * Movie files for concatenated playback must meet the following conditions:<br/>
		 * - Video resolution, frame rate and codec must be identical
		 * - Presence or not of alpha information must be identical
		 * - Audio tracks configuration (track numbers and number of channels) and codec must be identical</para>
		 * </remarks>
		 * <seealso cref='Player::SetFile'/>
		 * <seealso cref='Player::SetContentId'/>
		 * <seealso cref='Player::SetData'/>
		 * <seealso cref='Player::moviePath'/>
		 */
		public bool SetFileRange(string filePath, System.UInt64 offset, System.Int64 range, SetMode setMode = SetMode.New)
		{
			if (setMode == SetMode.New) {
				CRIWARE84BD19E3(playerId, filePath, offset, range);
				return true;
			}
			else {
				return CRIWAREC7912D73(
					playerId, filePath, offset, range,
					(setMode == SetMode.AppendRepeatedly)
					);
			}
		}


		/**
		 * <summary>Switching on/off the movie playback loop.</summary>
		 * <param name='sw'>Loop switch (True: loop mode, False: non-loop mode)</param>
		 * <remarks>
		 * <para header='Description'>Switches loop playback ON/OFF. By default, loop is OFF.<br/>
		 * When loop playback is turned ON, the playback does not end at the end of the movie,
		 * and the playback is repeated from the beginning.<br/></para>
		 * </remarks>
		 */
		public void Loop(bool sw)
		{
			CRIWARE34161DBB(playerId, sw ? 1 : 0);
		}

		/**
		 * <summary>Set the flag for the audio-based adjustment of the starting time when using concatenated playback.</summary>
		 * <param name='enabled'>Enable flag</param>
		 * <remarks>
		 * <para header='Description'>Specifies whether to perform audio-based concatenation adjustment on looped or concatenated playback.<br/>
		 * Please call this function before starting the playback. <br/>
		 * The audio-based concatenation adjustment is disabled by default. <br/>
		 * <br/>
		 * If looped or concatenated playback is performed while the audio/video lengths are different in the usm file, the inconsistency in timing will accumulate, possibly stopping the playback. <br/>
		 * By using this function, the runtime library will automatically adjust the timing based on the audio playback. <br/></para>
		 * </remarks>
		 */
		public void SetAudioBaseConcatenation(bool enabled)
		{
			CRIWAREC9D8F2E8(playerId, enabled);
		}

		/**
		 * <summary>Sets the master timer type.</summary>
		 * <param name='timerType'>Master timer type</param>
		 * <remarks>
		 * <para header='Description'>Sets the timer mode for video playback.<br/>
		 * The default is the system timer specified when creating the handle.<br/>
		 * If you want to synchronize the display timing of video frames with an arbitrary timer,
		 * specify the user timer.<br/>
		 * In that case, call CriWare.CriMana::Player::UpdateWithUserTime regularly.</para>
		 * </remarks>
		 * <seealso cref='Player::UpdateWithUserTime'/>
		 * <seealso cref='Player::SetManualTimerUnit'/>
		 * <seealso cref='Player::UpdateWithManualTimeAdvanced'/>
		 */
		public void SetMasterTimerType(TimerType timerType)
		{
			this._timerType = timerType;
			CRIWARE7ACC3A4F(playerId, timerType);
		}


		/**
		 * <summary>Sets the seek position.</summary>
		 * <param name='frameNumber'>Seek frame number</param>
		 * <remarks>
		 * <para header='Description'>Specifies the frame number to start seek playback.<br/>
		 * If this function is not called, or if frame number 0 is specified, playback starts from the beginning of the movie.
		 * If the specified frame number is greater than the total number of frames in the movie data or is a negative value, the movie is also played from the beginning.</para>
		 * </remarks>
		 */
		public void SetSeekPosition(int frameNumber)
		{
			CRIWARE7840A9CE(playerId, frameNumber);
		}

		/**
		 * <summary>Sets the sync mode for movie events (Cue points, subtitles).</summary>
		 * <param name='mode'>Movie event synchronization mode</param>
		 * <remarks>
		 * <para header='Description'>Sets the sync mode for movie events (Cue points, subtitles).<br/>
		 * By default, the event is triggered in sync with the frame time.<br/>
		 * If you want to synchronize with the movie playback time, specify MovieEventSyncMode::PlayBackTime.<br/></para>
		 * <para header='Note'>Call this function before starting playback.</para>
		 * </remarks>
		 */
		public void SetMovieEventSyncMode(MovieEventSyncMode mode)
		{
			CRIWAREE123820B(playerId, mode);
		}

		/**
		 * <summary>Adjusts the movie playback speed.</summary>
		 * <param name='speed'>Playback speed</param>
		 * <remarks>
		 * <para header='Description'>Specify the playback speed of the movie.<br/>
		 * A real number between 0.0f and 3.0f should be specified for the playback speed.<br/>
		 * If 1.0f is specified, the data will be played back at its original speed.<br/>
		 * If 2.0f is specified, the movie will be played at twice the frame rate of the movie data.<br/>
		 * The default value for playback speed is 1.0f.<br/>
		 * <br/> 
		 * When a Mana player has the Advanced Audio Mode enabled, calling this function will enable time-stretching for the movie's audio, 
		 * allowing you to play back at double speed without changing the pitch of the audio. 
		 * Playback speed of the audio with time stretching enabled can be specified between 0.5x and 2.0x.<br/>
		 * <br/></para>
		 * <para header='Note'>Changing the playback speed for movies that are being played is only supported when the movie has no sound.<br/>
		 * Changing the playback speed for the movie with sound during playback does not work correctly. For movies with sound,
		 * stop the playback, change the playback speed, and then perform seek playback from the target frame number.<br/>
		 * <br/></para>
		 * </remarks>
		 * <seealso cref='Player::SetTimeStretchQuality'/>
		 */
		public void SetSpeed(float speed)
		{
			CRIWARE3349ADC7(playerId, speed);
		}


		/**
		 * <summary>Specifies the maximum picture data size</summary>
		 * <param name='maxDataSize'>Maximum picture data size</param>
		 * <remarks>
		 * <para header='Description'>Sets the maximum picture data size. <br/>
		 * It is not required to use this function in normal playback. <br/>
		 * <br/>
		 * When doing linked playback on videos with codec other than Sofdec.Prime, 
		 * set the maximum picture data size with this function before starting playback. <br/>
		 * The data size to be set is the maximum "Maximum chunk size" of all USM files shown in the Wizz tool; <br/>
		 * or the maximum value of MovieInfo.maxChunkSize of all USM files scheduled for concatenated playback. <br/></para>
		 * </remarks>
		 */
		public void SetMaxPictureDataSize(System.UInt32 maxDataSize)
		{
			CRIWARE60BB2254(playerId, maxDataSize);
		}


		/**
		 * <summary>Specify the buffering time for the input data.</summary>
		 * <param name='sec'>Buffering time [sec]</param>
		 * <remarks>
		 * <para header='Description'>Specify the amount of input data to buffer for streaming playback, in seconds. <br/>
		 * The Mana player determines the size of the read buffer according to the buffering time and movie bitrate. <br/>
		 * The default buffering time is 1 second. <br/>
		 * If the buffering time is set to 0.0f, the default value of the library will be used. <br/></para>
		 * </remarks>
		 */
		public void SetBufferingTime(float sec)
		{
			CRIWAREEB302942(playerId, sec);
		}


		/**
		 * <summary>Specify the minimum buffer size.</summary>
		 * <param name='min_buffer_size'>Minimum buffer size [byte]</param>
		 * <remarks>
		 * <para header='Description'>Specify the minimum buffer size for movie data. <br/>
		 * When a minimum buffer size is specified, the Mana player has an input buffer larger than the specified value. <br/>
		 * This function is not neccessary for simple playback.
		 * However, for seamless concatenated playback of videos with great bitrate differences, calling the function may be requisite.<br/>
		 * If it is set to 0, the attributive value of the movie data will be used. (Default)<br/></para>
		 * </remarks>
		 */
		public void SetMinBufferSize(int min_buffer_size)
		{
			CRIWAREBD200751(playerId, min_buffer_size);
		}


		/**
		 * <summary>Sets the Main Audio Track number.</summary>
		 * <param name='track'>Track number</param>
		 * <remarks>
		 * <para header='Description'>Specifies the sound to be played if the movie has multiple sound tracks.<br/>
		 * If this function is not called, the audio track with the smallest number is played.<br/>
		 * If you specify a Track number that has no data, no audio is played.<br/>
		 * <br/>
		 * If you specify AudioTrack.Off as the Track number, no audio is played
		 * even if the movie contains audio.<br/>
		 * <br/>
		 * If you want to use the default settings (playing the sound of the smallest channel number),
		 * specify AudioTrack.Auto as the channel.<br/></para>
		 * <para header='Note'>Changing tracks during playback is not supported. Record the frame number before change and
		 * use the seek playback.</para>
		 * </remarks>
		 */
		public void SetAudioTrack(int track)
		{
			CRIWARE07A59400(playerId, track);
		}


		public void SetAudioTrack(AudioTrack track)
		{
			if (track == AudioTrack.Off) {
				CRIWARE07A59400(playerId, -1);
			} else if (track == AudioTrack.Auto) {
				CRIWARE07A59400(playerId, 100);
			}
		}


		/**
		 * <summary>Sets the sub audio track number.</summary>
		 * <param name='track'>Track number</param>
		 * <remarks>
		 * <para header='Description'>Specifies the sound to be played if the movie has multiple sound tracks.<br/>
		 * If you don't call this function (default setting), nothing is played from the sub-audio.
		 * If you specify a track number that has no data, nothing is played from the sub-audio,
		 * even if you specify the same track for the main audio as the sub-audio track.<br/></para>
		 * <para header='Note'>Changing tracks during playback is not supported. Record the frame number before change and
		 * use the seek playback.</para>
		 * </remarks>
		 */
		public void SetSubAudioTrack(int track)
		{
			CRIWARE348B7DCE(playerId, track);
		}


		public void SetSubAudioTrack(AudioTrack track)
		{
			if (track == AudioTrack.Off) {
				CRIWARE348B7DCE(playerId, -1);
			} else if (track == AudioTrack.Auto) {
				CRIWARE348B7DCE(playerId, 100);
			}
		}


		/**
		 * <summary>Sets the extra audio track number.</summary>
		 * <param name='track'>Track number</param>
		 * <remarks>
		 * <para header='Description'>Specifies the sound to be played if the movie has multiple sound tracks.<br/>
		 * If you don't call this function (default setting), nothing is played from the extra audio.
		 * If you specify a track number that has no data, nothing is played from the extra audio
		 * even if you specify the same track as the main audio as the extra audio track.<br/></para>
		 * <para header='Note'>Changing tracks during playback is not supported. Record the frame number before change and
		 * use the seek playback.</para>
		 * </remarks>
		 */
		public void SetExtraAudioTrack(int track)
		{
			CRIWARE1E8C2DD4(playerId, track);
		}


		public void SetExtraAudioTrack(AudioTrack track)
		{
			if (track == AudioTrack.Off) {
				CRIWARE1E8C2DD4(playerId, -1);
			} else if (track == AudioTrack.Auto) {
				CRIWARE1E8C2DD4(playerId, 100);
			}
		}


		/**
		 * <summary>Adjusts the sound volume for movie playback. (Main Audio Track)</summary>
		 * <param name='volume'>Volume</param>
		 * <remarks>
		 * <para header='Description'>Specifies the output sound volume of the movie's Main Audio Track.<br/>
		 * Specify a real value in the range of 0.0f to 1.0f for the volume value.<br/>
		 * The volume value is a scale factor for the amplitude of the sound data (the unit is not decibel).<br/>
		 * For example, if you specify 1.0f, the original sound is played at its unmodified volume.<br/>
		 * If you specify 0.0f, the sound is muted (silent).<br/>
		 * The default value for volume is 1.0f.<br/></para>
		 * <para header='Note'>If you specify a value outside the range of 0.0f to 1.0f, it is clipped to its minimum and maximum values.<br/></para>
		 * </remarks>
		 */
		public void SetVolume(float volume)
		{
			CRIWARE83DAAA8A(playerId, volume);
		}


		/**
		 * <summary>Gets the volume of the movie playback. (Main audio track)</summary>
		 * <remarks>
		 * <para header='Description'>Gets the output audio volume of the movie's main audio track.<br/>
		 * The range of the volume is [0.0f…1.0f].<br/></para>
		 * </remarks>
		 */
		public float GetVolume()
		{
			return CRIWARE8D9B47AB(playerId);
		}


		/**
		 * <summary>Adjusts the sound volume for movie playback. (sub audio)</summary>
		 * <param name='volume'>Volume</param>
		 * <remarks>
		 * <para header='Description'>Specifies the output volume of the movie's sub-audio track.<br/>
		 * Specify a real value in the range of 0.0f to 1.0f for the volume value.<br/>
		 * The volume value is a scale factor for the amplitude of the sound data (the unit is not decibel).<br/>
		 * For example, if you specify 1.0f, the original sound is played at its unmodified volume.<br/>
		 * If you specify 0.0f, the sound is muted (silent).<br/>
		 * The default value for volume is 1.0f.<br/></para>
		 * <para header='Note'>If you specify a value outside the range of 0.0f to 1.0f, it is clipped to its minimum and maximum values.<br/></para>
		 * </remarks>
		 */
		public void SetSubAudioVolume(float volume)
		{
			CRIWARE1FA5EACB(playerId, volume);
		}


		/**
		 * <summary>Gets the volume of the movie playback. (Sub-audio track)</summary>
		 * <remarks>
		 * <para header='Description'>Gets the output audio volume of the movie's sub-audio track.<br/>
		 * The range of the volume is [0.0f…1.0f].<br/></para>
		 * </remarks>
		 */
		public float GetSubAudioVolume()
		{
			return CRIWARE497D9D4F(playerId);
		}


		/**
		 * <summary>Adjusts the sound volume for movie playback. (extra audio)</summary>
		 * <param name='volume'>Volume</param>
		 * <remarks>
		 * <para header='Description'>Specifies the output volume of the movie's extra audio track.<br/>
		 * Specify a real value in the range of 0.0f to 1.0f for the volume value.<br/>
		 * The volume value is a scale factor for the amplitude of the sound data (the unit is not decibel).<br/>
		 * For example, if you specify 1.0f, the original sound is played at its unmodified volume.<br/>
		 * If you specify 0.0f, the sound is muted (silent).<br/>
		 * The default value for volume is 1.0f.<br/></para>
		 * <para header='Note'>If you specify a value outside the range of 0.0f to 1.0f, it is clipped to its minimum and maximum values.<br/></para>
		 * </remarks>
		 */
		public void SetExtraAudioVolume(float volume)
		{
			CRIWARE718646C6(playerId, volume);
		}


		/**
		 * <summary>Gets the volume of the movie playback. (Extra audio track)</summary>
		 * <remarks>
		 * <para header='Description'>Gets the output audio volume of the movie's extra audio track.<br/>
		 * The range of the volume is [0.0f…1.0f].<br/></para>
		 * </remarks>
		 */
		public float GetExtraAudioVolume()
		{
			return CRIWARE4145098F(playerId);
		}


		/**
		 * <summary>Adjusts the Bus Send Level of the Main Audio Track.</summary>
		 * <param name='bus_name'>Bus name</param>
		 * <param name='level'>Bus Send Level</param>
		 * <remarks>
		 * <para header='Description'>Specifies the Bus Send Level (amplitude level) of the movie Main Audio Track and the name of the send destination bus.<br/>
		 * Specify a real value in the range of 0.0f to 1.0f for the Bus Send Level value.<br/>
		 * The Bus Send Level value is a scale factor for the amplitude of sound data (in decibels).<br/>
		 * For example, if you specify 1.0f, the original sound is sent to the bus at its unmodified volume.<br/>
		 * If you specify 0.0f, silence is output to the bus.<br/></para>
		 * </remarks>
		 */
		public void SetBusSendLevel(string bus_name, float level)
		{
			CRIWAREE477730D(playerId, bus_name, level);
		}


		/**
		 * <summary>Adjusts the Bus Send Level of the sub audio track.</summary>
		 * <param name='bus_name'>Bus name</param>
		 * <param name='volume'>Bus Send Level</param>
		 * <remarks>
		 * <para header='Description'>Specifies the Bus Send Level (amplitude level) of the movie sub-audio track and the name of the send destination bus.<br/>
		 * The operation specification of this function is the same as SetBusSendLevel.</para>
		 * </remarks>
		 */
		public void SetSubAudioBusSendLevel(string bus_name, float volume)
		{
			CRIWARE9BEA00DA(playerId, bus_name, volume);
		}


		/**
		 * <summary>Adjusts the Bus Send Level of the extra audio track.</summary>
		 * <param name='bus_name'>Bus name</param>
		 * <param name='volume'>Bus Send Level</param>
		 * <remarks>
		 * <para header='Description'>Specifies the Bus Send Level (amplitude level) of the movie extra audio track and the name of the send destination bus.<br/>
		 * The operation specification of this function is the same as SetBusSendLevel.</para>
		 * </remarks>
		 */
		public void SetExtraAudioBusSendLevel(string bus_name, float volume)
		{
			CRIWARED819D517(playerId, bus_name, volume);
		}


		/**
		 * <summary>Sets the subtitle channel.</summary>
		 * <param name='channel'>Subtitle channel number</param>
		 * <remarks>
		 * <para header='Description'>Sets the subtitle channel to get. The default is no subtitle acquisition.<br/>
		 * If you want to use the default setting (no subtitle acquisition), specify -1 as the channel.<br/>
		 * It is also possible to switch the subtitle channel during movie playback. However, the is channel actually switched from the next subtitle
		 * immediately after the setting.<br/></para>
		 * </remarks>
		 * <seealso cref='Player::subtitleBuffer'/>
		 * <seealso cref='Player::subtitleBuffer'/>
		 */
		public void SetSubtitleChannel(int channel)
		{
			enableSubtitle = (channel != -1);
			if (enableSubtitle) {
				CRIWARE25EE7500(playerId, SubtitleCallbackFromNative);

				if (isMovieInfoAvailable) {
					AllocateSubtitleBuffer((int)movieInfo.maxSubtitleSize);
				}
			} else {
				DeallocateSubtitleBuffer();
				CRIWARE25EE7500(playerId, null);
			}
			CRIWAREB179B6EA(playerId, channel);
		}


		/**
		 * <summary>Sets the shader selection delegate.</summary>
		 * <param name='shaderDispatchCallback'>Shader selection delegate</param>
		 * <remarks>
		 * <para header='Description'>Sets the delegate that determines the user-defined shader<br/></para>
		 * <para header='Note'>This must be set before the Player::Prepare and Player::Start functions.</para>
		 * </remarks>
		 * <seealso cref='Player::ShaderDispatchCallback'/>
		 */
		public void SetShaderDispatchCallback(ShaderDispatchCallback shaderDispatchCallback)
		{
			_shaderDispatchCallback = shaderDispatchCallback;
		}


		/**
		 * <summary>Gets the playback time.</summary>
		 * <returns>Playback time (in microseconds)</returns>
		 * <remarks>
		 * <para header='Description'>Gets the playback time of the movie that is currently being played.<br/>
		 * Returns 0 before starting playback or after stopping playback.<br/>
		 * The unit is microseconds.</para>
		 * </remarks>
		 */
		public long GetTime()
		{
			return CRIWAREC379A2A7(this.playerId);
		}


		/**
		 * <summary>Gets the frame number being displayed.</summary>
		 * <returns>Frame number</returns>
		 * <remarks>
		 * <para header='Description'>Gets the frame number currently being displayed.<br/>
		 * Returns -1 before starting rendering or after stopping playback.<br/>
		 * Depending on the platform and codec, a number that is smaller than
		 * the frame information that can be obtained may be returned.<br/></para>
		 * </remarks>
		 */
		public int GetDisplayedFrameNo()
		{
			if (rendererResource != null) {
				var noByScript = rendererResource.GetDisplayedFrameNo();
				if (noByScript >= 0) {
					return noByScript;
				}
			}
			return CRIWARE89D9F2D4(this.playerId);
		}


		/**
		 * <summary>Checks whether a new frame was rendered.</summary>
		 * <returns>A flag whether the frame was rendered</returns>
		 * <remarks>
		 * <para header='Description'>Returns whether a new frame was rendered on the screen after the current call of the playback control.</para>
		 * </remarks>
		 */
		public bool HasRenderedNewFrame()
		{
			if (rendererResource == null) {
				return false;
			}
			return rendererResource.HasRenderedNewFrame();
		}


		/**
		 * <summary>Configures the ASR Rack.</summary>
		 * <param name='asrRackId'>ASR Rack ID</param>
		 * <remarks>
		 * <para header='Description'>Specifies the output ASR Rack ID of the sound to be played.<br/>
		 * The output ASR Rack ID setting is reflected on both the Main Audio Track and the sub audio track.<br/></para>
		 * <para header='Note'>It cannot be changed during playback. If this API is called during playback, the settings is reflected from the next movie playback.<br/></para>
		 * </remarks>
		 * <seealso cref='CriAtomExAsrRack::rackId'/>
		 */
		public void SetAsrRackId(int asrRackId)
		{
			CRIWARE3A1C8683(this.playerId, asrRackId);
		}

		/**
		 * <summary>Adjust the quality of the audio time-stretch.</summary>
		 * <param name='quality'>Quality</param>
		 * <remarks>
		 * <para header='Description'>Specify the quality of the time-stretching performed on the audio.<br/>
		 * The value must be between 0 and 10.<br/>
		 * The higher the number, the higher the audio quality, but the higher the CPU load.<br/>
		 * The default value is 2.<br/></para>
		 * </remarks>
		 * <seealso cref='Player::SetSpeed'/>
		 */
		public void SetTimeStretchQuality(float quality)
		{
			CRIWARE87BB141E(this.playerId, quality);
		}

/* @cond notpublic */
		/**
		 * <summary>Sets encryption key</summary>
		 * <param name='key'>Encryption key</param>
		 * <remarks>
		 * <para header='Description'>Set the encryption key for each player. <br/>
		 * This function can be sused to set different encryption keys for multiple players<br/>
		 * if the movies to be played at the same time are encrypted with different encryption keys.
		 * <br/>
		 * Information about the encryption key are kept in the player, independent of the global encryption key setting. <br/>
		 * If encryption keys are set both in the global settings and by this function,<br/>
		 * the one set by this function will be prioritized for the decryption process.<br/>
		 * <br/>
		 * Specify 0 for the key parameter if you want to clear the encryption key set by this function.<br/></para>
		 * <para header='Note'>Execute this function when the player is in the Stop or PlayEnd state. <br/>
		 * This function is not thread safe. <br/>
		 * For movies with sound, only ADX is supported as the audio codec. HCA is not supported by this function. <br/></para>
		 * </remarks>
		 * <seealso cref='CriWareDecrypter::Initialize'/>
		 */
		public void SetDecryptionKey(ulong key)
		{
			CRIWARE616A36FF(this.playerId, key);
		}
/* @endcond */


#if CRIMANA_STAT
		float stat_DeltaPlayerUpdateTime = 0.0f;
		float stat_PrevPlayerUpdateTime = 0.0f;
		float stat_DeltaUpdateFrameTime = 0.0f;
		float stat_PrevUpdateFrameTime = 0.0f;
		float stat_DeltaRenderFrameTime = 0.0f;
		float stat_PrevRenderFrameTime = 0.0f;
		float stat_StartTime = 0.0f;
		float stat_ElapsedTimeToFirstFrame = 0.0f;
		uint stat_SkippedFrames = 0;
		uint stat_DroppedFrames = 0;

		UnityEngine.UI.Text stat_UI_PlayerUpdate;
		UnityEngine.UI.Text stat_UI_FrameUpdate;
		UnityEngine.UI.Text stat_UI_RenderUpdate;
		UnityEngine.UI.Text stat_UI_Status;
		UnityEngine.UI.Text stat_UI_Elapased;
		UnityEngine.UI.Text stat_UI_Skipped;
		UnityEngine.UI.Text stat_UI_Dropped;

		bool stat_Init = false;
		GameObject UIStats;

		public void UIInit()
		{
			stat_Init = true;
			int layer = 30;

			var g = new GameObject("CriStat");
			g.layer = layer;
			var c = g.AddComponent<Canvas>();

			var UICam = new GameObject("StatCamera");
			UICam.layer = layer;
			UICam.transform.position = new Vector3(0, 0, -615);
			UICam.transform.parent = g.transform;
			var cam = UICam.AddComponent<Camera>();
			cam.orthographic = true;
			cam.cullingMask = 1 << layer;
			cam.clearFlags = CameraClearFlags.Depth;


			c.worldCamera = cam;
			c.renderMode = RenderMode.ScreenSpaceCamera;
			var cs = g.AddComponent<CanvasScaler>();
			cs.uiScaleMode = CanvasScaler.ScaleMode.ScaleWithScreenSize;

			g.AddComponent<GraphicRaycaster>();

			int w = 600, h = 400;
			int d = 15;
			var font = (Font)Resources.GetBuiltinResource(typeof(Font), "Arial.ttf");
			var color = Color.green;
			var size = new Vector2(w, d*2);
			var pivot = new Vector2(0, 0);
			var scale = new Vector3(1, 1, 1);

			UIStats = new GameObject("stat_UI_PlayerUpdate");
			UIStats.transform.parent = g.transform;
			UIStats.layer = layer;
			stat_UI_PlayerUpdate = UIStats.AddComponent<Text>();
			stat_UI_PlayerUpdate.fontSize = d;
			stat_UI_PlayerUpdate.font = font;
			stat_UI_PlayerUpdate.alignment = TextAnchor.UpperLeft;
			stat_UI_PlayerUpdate.color = color;
			stat_UI_PlayerUpdate.rectTransform.sizeDelta = size;
			stat_UI_PlayerUpdate.rectTransform.pivot = pivot;
			stat_UI_PlayerUpdate.rectTransform.localScale = scale;
			stat_UI_PlayerUpdate.rectTransform.localPosition = new Vector3(-w/2, h/2, 0);

			UIStats = new GameObject("stat_UI_FrameUpdate");
			UIStats.transform.parent = g.transform;
			UIStats.layer = layer;
			stat_UI_FrameUpdate = UIStats.AddComponent<Text>();
			stat_UI_FrameUpdate.fontSize = d;
			stat_UI_FrameUpdate.font = font;
			stat_UI_FrameUpdate.alignment = TextAnchor.UpperLeft;
			stat_UI_FrameUpdate.color = color;
			stat_UI_FrameUpdate.rectTransform.sizeDelta = size;
			stat_UI_FrameUpdate.rectTransform.pivot = pivot;
			stat_UI_FrameUpdate.rectTransform.localScale = scale;
			stat_UI_FrameUpdate.rectTransform.localPosition = new Vector3(-w/2, h/2 - d, 0);

			UIStats = new GameObject("stat_UI_RenderUpdate");
			UIStats.transform.parent = g.transform;
			UIStats.layer = layer;
			stat_UI_RenderUpdate = UIStats.AddComponent<Text>();
			stat_UI_RenderUpdate.fontSize = d;
			stat_UI_RenderUpdate.font = font;
			stat_UI_RenderUpdate.alignment = TextAnchor.UpperLeft;
			stat_UI_RenderUpdate.color = color;
			stat_UI_RenderUpdate.rectTransform.sizeDelta = size;
			stat_UI_RenderUpdate.rectTransform.pivot = pivot;
			stat_UI_RenderUpdate.rectTransform.localScale = scale;
			stat_UI_RenderUpdate.rectTransform.localPosition = new Vector3(-w/2, h/2 - d*2, 0);

			UIStats = new GameObject("stat_UI_Status");
			UIStats.transform.parent = g.transform;
			UIStats.layer = layer;
			stat_UI_Status = UIStats.AddComponent<Text>();
			stat_UI_Status.fontSize = d;
			stat_UI_Status.font = font;
			stat_UI_Status.alignment = TextAnchor.UpperLeft;
			stat_UI_Status.color = color;
			stat_UI_Status.rectTransform.sizeDelta = size;
			stat_UI_Status.rectTransform.pivot = pivot;
			stat_UI_Status.rectTransform.localScale = scale;
			stat_UI_Status.rectTransform.localPosition = new Vector3(-w/2, h/2 - d*3, 0);

			UIStats = new GameObject("stat_UI_Elapased");
			UIStats.transform.parent = g.transform;
			UIStats.layer = layer;
			stat_UI_Elapased = UIStats.AddComponent<Text>();
			stat_UI_Elapased.fontSize = d;
			stat_UI_Elapased.font = font;
			stat_UI_Elapased.alignment = TextAnchor.UpperLeft;
			stat_UI_Elapased.color = color;
			stat_UI_Elapased.rectTransform.sizeDelta = size;
			stat_UI_Elapased.rectTransform.pivot = pivot;
			stat_UI_Elapased.rectTransform.localScale = scale;
			stat_UI_Elapased.rectTransform.localPosition = new Vector3(-w/2, h/2 - d*4, 0);

			UIStats = new GameObject("stat_UI_Skipped");
			UIStats.transform.parent = g.transform;
			UIStats.layer = layer;
			stat_UI_Skipped = UIStats.AddComponent<Text>();
			stat_UI_Skipped.fontSize = d;
			stat_UI_Skipped.font = font;
			stat_UI_Skipped.alignment = TextAnchor.UpperLeft;
			stat_UI_Skipped.color = color;
			stat_UI_Skipped.rectTransform.sizeDelta = size;
			stat_UI_Skipped.rectTransform.pivot = pivot;
			stat_UI_Skipped.rectTransform.localScale = scale;
			stat_UI_Skipped.rectTransform.localPosition = new Vector3(-w/2, h/2 - d*5, 0);
		}

		public void UIUpdate()
		{
			float msec = stat_DeltaPlayerUpdateTime * 1000.0f;
			float fps = 1.0f / stat_DeltaPlayerUpdateTime;
			string text = string.Format("Mana Player Update: {0:0.0} ms ({1:0.} fps)", msec, fps);
			stat_UI_PlayerUpdate.text = text;

			msec = stat_DeltaUpdateFrameTime * 1000.0f;
			fps = 1.0f / stat_DeltaUpdateFrameTime;
			text = string.Format("Mana Update Frame: {0:0.0} ms ({1:0.} fps)", msec, fps);
			stat_UI_FrameUpdate.text = text;

			msec = stat_DeltaRenderFrameTime * 1000.0f;
			fps = 1.0f / stat_DeltaRenderFrameTime;
			text = string.Format("Mana Render Frame: {0:0.0} ms ({1:0.} fps)", msec, fps);
			stat_UI_RenderUpdate.text = text;

			text = string.Format("Mana Player Status: {0}", _nativeStatus.ToString());
			stat_UI_Status.text = text;

			float elapsed = 0.0f;
			if (stat_StartTime > float.Epsilon) {
				elapsed = Time.time - stat_StartTime;
			}
			float frames = 0.0f;
			if (movieInfo != null) {
				frames = elapsed * (movieInfo.framerateN / movieInfo.framerateD);
			}
			msec = stat_ElapsedTimeToFirstFrame * 1000.0f;
			text = string.Format("Mana Elapsed Time: {0:0.0} sec ({1:0.} frames) [Start Gap {2:0.0}ms]", elapsed, frames, msec);
			stat_UI_Elapased.text = text;

			uint skipped = stat_SkippedFrames;
			uint dropped = stat_DroppedFrames;
			text = string.Format("Mana Skipped Frames: {0} frames, Dropped Frames: {1} frames", skipped, dropped);
			stat_UI_Skipped.text = text;

			stat_DeltaPlayerUpdateTime = Time.time - stat_PrevPlayerUpdateTime;
			stat_PrevPlayerUpdateTime = Time.time;
			stat_DeltaUpdateFrameTime = 0.0f;
		}
#endif


		/**
		 * <summary>Updates the status by specifying the user time.</summary>
		 * <remarks>
		 * <para header='Description'>Updates the player status.<br/>
		 * If you have enabled the user timer using CriWare.CriMana::Player::SetMasterTimerType ,
		 * call this function periodically.</para>
		 * <para header='Note'>If the call to this function is delayed, the movie playback may hitch.<br/>
		 * If the user timer is advanced fast or slow, the accuracy of the master timer decreases,
		 * and it will be difficult to acquire the frame at the correct time.
		 * So, normally, use this function in normal speed playback.</para>
		 * </remarks>
		 * <seealso cref='Player::SetMasterTimerType'/>
		 */
		public void UpdateWithUserTime(ulong timeCount, ulong timeUnit)
		{
			if (_timerType != TimerType.User) {
				Debug.LogError("[CRIWARE] Timer type is invalid.");
			}

			CRIWARE6BEC2BB2(this.playerId, timeCount, timeUnit);
			InternalUpdate();
		}


		/**
		 * <summary>Sets the unit by which the time of the manual timer advances.</summary>
		 * <param name='timeUnitN'>Numerator of the unit in which time progresses</param>
		 * <param name='timeUnitD'>Denominator of the unit in which time progresses</param>
		 * <remarks>
		 * <para header='Description'>Set the unit by which the time of the manual timer advances in rational number format.<br/>
		 * If you enabled the manual timer using CriWare.CriMana::Player::SetMasterTimerType ,
		 * set the unit by which the time advances using this function.<br/>
		 * "Numerator (timer_manual_unit_n) / denominator (timer_manual_unit_d) = unit of time advancement (seconds)."<br/>
		 * For example, if you want to set to 29.97fps, specify 1001 and 30000.</para>
		 * </remarks>
		 * <seealso cref='Player::SetMasterTimerType'/>
		 * <seealso cref='Player::UpdateWithManualTimeAdvanced'/>
		 */
		public void SetManualTimerUnit(ulong timeUnitN, ulong timeUnitD)
		{
			if (_timerType != TimerType.Manual) {
				Debug.LogError("[CRIWARE] Timer type is invalid.");
			}

			CRIWARE5C4DE0D3(this.playerId, timeUnitN, timeUnitD);
		}


		/**
		 * <summary>Updates while advancing the time of the manual timer.</summary>
		 * <remarks>
		 * <para header='Description'>Advance the handle time using the manual timer to update the rendering.<br/>
		 * If you enabled the manual timer using CriWare.CriMana::Player::SetMasterTimerType ,
		 * it is necessary to call this function regularly.<br/>
		 * The time advances when the player status is PLAYING.<br/>
		 * Even if this function is called while the player is paused, and the time is reset to 0 when playback starts or stops.</para>
		 * </remarks>
		 * <seealso cref='Player::SetMasterTimerType'/>
		 * <seealso cref='Player::SetManualTimerUnit'/>
		 */
		public void UpdateWithManualTimeAdvanced()
		{
			if (_timerType != TimerType.Manual) {
				Debug.LogError("[CRIWARE] Timer type is invalid.");
			}

			CRIWAREE36F41AB(this.playerId);
			InternalUpdate();
		}


		/**
		 * <summary>Updates the status.</summary>
		 * <remarks>
		 * <para header='Description'>Updates the player status.<br/>
		 * The application has to call this function regularly.<br/></para>
		 * <para header='Note'>If the call to this function is delayed, the movie playback may hitch.</para>
		 * </remarks>
		 */
		public void Update()
		{
			if (_timerType == TimerType.User || _timerType == TimerType.Manual) {
				return;
			}

			InternalUpdate();
		}


		/**
		 * <summary>Synchronize the time to the master timer.</summary>
		 * <remarks>
		 * <para header='Description'>Synchronize the state of the player handle to the master timer.</para>
		 * <para header='Note'>This function will be executed within CriWare.CriMana::Player::Update, so there is no need for the user to periodically call it.<br/>
		 * It can be used when time-sensitive playback processing (e.g., for synchonization purposes) is required.</para>
		 * </remarks>
		 */
		public void SyncMasterTimer()
		{
			CRIWAREBF9C9711(this.playerId);
		}


		public void OnWillRenderObject(CriManaMovieMaterialBase sender)
		{
			if (rendererResource != null &&
				_nativeStatus == Status.Playing) {
				// on main thread
				// unfortunatly this is called on main thread before native render event occur on render thread!
				rendererResource.UpdateTextures();
				// Native update - on render thread
				IssuePluginEvent(CriManaUnityPlayer_RenderEventAction.RENDER);
#if CRIMANA_STAT
				stat_DeltaRenderFrameTime = Time.time - stat_PrevRenderFrameTime;
				stat_PrevRenderFrameTime = Time.time;
				if (stat_ElapsedTimeToFirstFrame == 0.0f && status == Status.Playing) {
					stat_ElapsedTimeToFirstFrame = Time.time - stat_StartTime;
				}
#endif
			}
		}

		/**
		 * <summary>Sets up the Material to display the current frame.</summary>
		 * <param name='material'>Material to be set</param>
		 * <returns>Whether the setting succeeded</returns>
		 * <remarks>
		 * <para header='Description'>Sets the shader and various parameters to display the current frame in the Material.<br/></para>
		 * </remarks>
		 */
		public bool UpdateMaterial(UnityEngine.Material material)
		{
			if ((rendererResource != null) && isFrameInfoAvailable) {
				bool result = rendererResource.UpdateMaterial(material);
				return result && (requiredStatus != Status.ReadyForRendering);
			}
			return false;
		}

		/**
		 * <summary>Assign pause status based on the changes in the application status.</summary>
		 * <param name='sw'>Pause switch (true: pause, false: resume)</param>
		 * <remarks>
		 * <para header='Description'>The pause can be switched between ON/OFF.<br/>
		 * Specify true for the argument to pause the playback. Specify false to resume the playback.<br/>
		 * This function is intended to be called to reflect the status of the application.<br/>
		 * In other cases, use the CriWare.CriMana::Player::Pause function instead.<br/></para>
		 * <para header='Note'>Other than the normal pause processing, this function will also trigger the related rendering processing. <br/>
		 * When using components such as CriWare.CriManaMovieMaterial provided by the plugin, it is not necessary to call this function as it will be called automatically internally. <br/>
		 * When simply playing with the CriWare.CriMana.Player function, call this function with MonoBehaviour.OnApplicationPause . <br/></para>
		 * <seealso cref='Player::Pause'/>
		 * </remarks>
		 */
		public void PauseOnApplicationPause(bool sw)
		{
			CRIWARE18D62384(playerId, (sw) ? 1 : 0);

			if (rendererResource != null) {
				rendererResource.OnPlayerPause(sw, true);
			}
		}

		public bool isAlive { get { return this.playerId != InvalidPlayerId; } }

		public void IssuePluginEvent(CriManaUnityPlayer_RenderEventAction renderEventAction)
		{
#if !CRIWARE_ENABLE_HEADLESS_MODE
			int eventID = CriManaPlugin.renderingEventOffset | (int)renderEventAction | this.playerId;
	#if CRIPLUGIN_USE_OLD_LOWLEVEL_INTERFACE
			UnityEngine.GL.IssuePluginEvent(eventID);
	#else
			UnityEngine.GL.IssuePluginEvent(criWareUnity_GetRenderEventFunc(), eventID);
	#endif
#endif
		}

		#region Private Methods
		private void Dispose(bool disposing)
		{
			if (isDisposed) { return; }
			isDisposed = true;

			CriDisposableObjectManager.Unregister(this);

			int numFrames = 0;

			if (rendererResource != null && playerId != InvalidPlayerId) {
				// signal to native plugin that it will be destroyed and begin to clean unmanaged resources.
				IssuePluginEvent(CriManaUnityPlayer_RenderEventAction.DESTROY);
				// get the number of frame to continue to send update events before unmamaged resoures destruction.
				numFrames = rendererResource.GetNumberOfFrameBeforeDestroy(playerId);
			}

			DisposeRendererResource();
			DeallocateSubtitleBuffer();

			if (playerId != InvalidPlayerId) {
				if (atomExPlayer != null) {
					_atomExPlayer.Dispose();
					_atomExPlayer = null;
				}
				if (subAtomExPlayer != null) {
					_subAtomExPlayer.Dispose();
					_subAtomExPlayer = null;
				}
				if (extraAtomExPlayer != null) {
					_extraAtomExPlayer.Dispose();
					_extraAtomExPlayer = null;
				}
				CRIWARE69B66A23(playerId);
				if (atomEx3DsourceForAmbisonics != null) {
					_atomEx3Dsource.Dispose();
					_atomEx3Dsource = null;
				}
			}

			// if unmamaged resource need some frames before be destroyed,
			// we signal here Unity frame update events to native plugin.
			if (playerHolder != null) {
				if (numFrames > 0) {
					playerHolder.StartCoroutine(IssuePluginUpdatesForFrames(numFrames, playerHolder, true, playerId));
				} else {
					// destroy holder
					UnityEngine.Object.Destroy(playerHolder.gameObject);
				}
			} else if (numFrames > 0) {
				Debug.LogError("[CRIWARE] Player couldn't destroy internal resources.");
			}

			playerId = InvalidPlayerId;

			cuePointCallback = null;
			OnSubtitleChanged = null;
		}

		private void InternalUpdate()
		{
#if CRIMANA_STAT
			if (!stat_Init) {
				UIInit();
			}
			UIUpdate();
#endif
			// signal unity frame update to plugin - always called once by unity update
			CRIWARE8A936991(playerId);

			if (requiredStatus == Status.Stop) {
				if (_nativeStatus != Status.Stop) {
					UpdateNativePlayer();
				}
				return;
			}

			switch (_nativeStatus) {
			case Status.Stop:
				break;
			case Status.Dechead:
#if CRIMANA_STAT
				stat_StartTime = Time.time;
				stat_ElapsedTimeToFirstFrame = 0.0f;
#endif
				UpdateNativePlayer();
				if (_nativeStatus == Status.WaitPrep) {
					goto case Status.WaitPrep;
				}
				break;
			case Status.WaitPrep:
			{
				CRIWAREB0EDABE6(playerId, _movieInfo);
				bool needRendererResourceDispatch = !isMovieInfoAvailable;
				if (needRendererResourceDispatch) {
					isMovieInfoAvailable = true;
					if (enableSubtitle) {
						AllocateSubtitleBuffer((int)movieInfo.maxSubtitleSize);
					}
					UnityEngine.Shader userShader   = (_shaderDispatchCallback == null) ? null : _shaderDispatchCallback(movieInfo, additiveMode);
					if (rendererResource != null) {
						if (!rendererResource.IsSuitable(playerId, _movieInfo, additiveMode, userShader)) {
							rendererResource.Dispose();
							rendererResource = null;
						}
					}
					if (rendererResource == null) {
						rendererResource = Detail.RendererResourceFactory.DispatchAndCreate(playerId, _movieInfo, additiveMode, userShader);
						if (rendererResource == null) {
							Stop();
							return;
						}
					}
					rendererResource.SetApplyTargetAlpha(applyTargetAlpha);
					rendererResource.SetUiRenderMode(uiRenderMode);
				}
				rendererResource.AttachToPlayer(playerId);

				if (requiredStatus == Status.Ready) {
					goto case Status.Prep;
				}

				if (requiredStatus == Status.Playing ||
					requiredStatus == Status.ReadyForRendering) {
					CRIWAREA7A307C6(playerId);
					isNativeStartInvoked = true;
					if (isNativeInitialized) {
						// Native destroy - on render thread
						IssuePluginEvent(CriManaUnityPlayer_RenderEventAction.DESTROY);
					}
					// Native initialize - on render thread - must be called after start (iOS)
					IssuePluginEvent(CriManaUnityPlayer_RenderEventAction.INITIALIZE);
					isNativeInitialized = true;
					goto case Status.Prep;
				}
			}
				break;
			case Status.Prep:
				UpdateNativePlayer();
				if (_nativeStatus == Status.Ready) {
					goto case Status.Ready;
				} else if (_nativeStatus == Status.Playing) {
					goto case Status.Playing;
				}
				break;
			case Status.Ready:
				if (requiredStatus == Status.Playing ||
					requiredStatus == Status.ReadyForRendering) {
					if (!isNativeStartInvoked) {
#if CRIMANA_STAT
						stat_StartTime = Time.time;
						stat_ElapsedTimeToFirstFrame = 0.0f;
#endif
						CRIWAREA7A307C6(playerId);
						isNativeStartInvoked = true;
						if (isNativeInitialized) {
							// Native destroy - on render thread
							IssuePluginEvent(CriManaUnityPlayer_RenderEventAction.DESTROY);
						}
						// Native initialize - on render thread - must be called after start (iOS)
						IssuePluginEvent(CriManaUnityPlayer_RenderEventAction.INITIALIZE);
						isNativeInitialized = true;
					}
					goto case Status.Playing;
				}
				break;
			case Status.Playing:
				UpdateNativePlayer();
				if (_nativeStatus == Status.Playing) {
					bool frameDrop = (maxFrameDrop < 0 || droppedFrameCount < maxFrameDrop); // enable frame dropping if requested
					bool updateNextFrame = true;
					bool isFrameInfoUpdated = false;

					while (updateNextFrame) {
						// FrameDrop refrence -> in (can drop frame?), out (is frame has been droped?)
						isFrameInfoUpdated = rendererResource.UpdateFrame(playerId, _frameInfo, ref frameDrop);

						if (isFrameInfoUpdated && frameDrop && (maxFrameDrop < 0 || droppedFrameCount < maxFrameDrop)) {
							// Frame was updated but not in-sync and dropped, try to get next decoded frame: continue
							droppedFrameCount++;

							if (maxFrameDrop > 0 && droppedFrameCount == maxFrameDrop) {
								frameDrop = false; // do not drop next frame.
							}
						} else if(isFrameInfoUpdated && frameDrop){
							// frame_drop not allowed but force droped by audio concatenation.
						} else {
							// Frame has not been updated or is in-sync: break.
							updateNextFrame = false;

							// Frame is drawable: reset the dropped frame counter.
							if (isFrameInfoUpdated) {
#if CRIMANA_STAT
								stat_DroppedFrames += droppedFrameCount;
#endif
								droppedFrameCount = 0;
							}
						}
					}

					// FrameInfo was updated?
					isFrameInfoAvailable |= isFrameInfoUpdated;

					// Native update - on render thread
					IssuePluginEvent(CriManaUnityPlayer_RenderEventAction.UPDATE);
#if CRIMANA_STAT
					stat_DeltaUpdateFrameTime = Time.time - stat_PrevUpdateFrameTime;
					stat_PrevUpdateFrameTime = Time.time;
					stat_SkippedFrames = frameInfo.cntSkippedFrames;
#endif
				} else if (_nativeStatus == Status.PlayEnd) {
					goto case Status.PlayEnd;
				}
				break;
			case Status.PlayEnd:
				break;
			case Status.Error:
				UpdateNativePlayer();
				break;
			}

			if (_nativeStatus == Status.Error) {
				DisableInfos();
			}
		}

		private System.Collections.IEnumerator IssuePluginUpdatesForFrames(int frameCount, MonoBehaviour playerHolder, bool destroy, int playerId)
		{
			while (frameCount > 0) {
				// issue plugin event
				IssuePluginEvent(CriManaUnityPlayer_RenderEventAction.UPDATE);
				// continue update synchronizatons
				CRIWARE8A936991(playerId);
				frameCount--;
				yield return null;
			}

			if (destroy) {
				// destroy holder
				UnityEngine.Object.Destroy(playerHolder.gameObject);
			}
		}

		private void DisableInfos(bool keepFrameInfo = false)
		{
			if (keepFrameInfo == false) {
				isFrameInfoAvailable = false;
				isMovieInfoAvailable = false;
			}
			isNativeStartInvoked = false;
			subtitleSize = 0;
		}

		private void PrepareNativePlayer()
		{
			if (cuePointCallback != null) {
				CRIWARE4FFB83A2(playerId, CuePointCallbackFromNative);
			}
			CRIWARE9614304C(playerId);
		}


		private void UpdateNativePlayer()
		{
#if !CRIWARE_ENABLE_HEADLESS_MODE
			updatingPlayer = this;
			uint subtitleSizeTmp = (uint)subtitleBufferSize;
			_nativeStatus = (Status)CRIWARE7A8D778B(playerId);
			if (this.lastNativeStatus.HasValue == false || this.lastNativeStatus != _nativeStatus || this.isPreparingForRendering) {
				this.lastNativeStatus = _nativeStatus;
				InvokePlayerStatusCheck();
			}
			subtitleSize = (int)subtitleSizeTmp;
			updatingPlayer = null;

			// check when status goes from any to stop
			if (isNativeInitialized && (
					_nativeStatus == Status.StopProcessing ||
					_nativeStatus == Status.Stop))
			{
				isNativeInitialized = false;
				// Native destroy - on render thread
				if (!isStoppingForSeek ||
					!(rendererResource != null && rendererResource.ShouldSkipDestroyOnStopForSeek())) {
					IssuePluginEvent(CriManaUnityPlayer_RenderEventAction.DESTROY);
				}
			}
#else
			if ((requiredStatus != Status.Stop) ||
				(_nativeStatus != requiredStatus)) {
				DummyProceedNativeState();
			}
#endif
		}

		private void InvokePlayerStatusCheck()
		{
			var playerStatus = this.status;
			if (this.lastPlayerStatus.HasValue == false || this.lastPlayerStatus != playerStatus) {
				this.lastPlayerStatus = playerStatus;
				if (statusChangeCallback != null) {
					statusChangeCallback.Invoke(playerStatus);
				}
				if (this.isPreparingForRendering && this.status != Status.Prep) { /* Finished preparing or unknown status */
					this.isPreparingForRendering = false;
				}
			}
		}

#if CRIWARE_ENABLE_HEADLESS_MODE
		private void DummyProceedNativeState()
		{
			if (_nativeStatus == requiredStatus) {
				if (_nativeStatus == Status.Playing &&
	                _nativeStatus == requiredStatus &&
					!_dummyLoop && !_dummyPaused) {
					_nativeStatus = Status.PlayEnd;
				}
			} else if (requiredStatus == Status.Playing ||
				requiredStatus == Status.Ready) {
				if (_dummyNativeStatus == _nativeStatus + 1 &&
					!(_dummyPaused && _dummyNativeStatus == Status.Playing)) {
					_nativeStatus = _dummyNativeStatus;
				} else {
					_dummyNativeStatus = _nativeStatus + 1;
				}
			} else if (requiredStatus == _dummyNativeStatus) {
				_nativeStatus = requiredStatus;
			} else {
				_dummyNativeStatus = requiredStatus;
			}
		}

#endif

		private void AllocateSubtitleBuffer(int size)
		{
			if (subtitleBufferSize < size) {
				DeallocateSubtitleBuffer();
				subtitleBuffer = Marshal.AllocHGlobal(size);
				subtitleBufferSize = size;
				subtitleSize = 0;
			}
			for (int i = 0; i < subtitleBufferSize; i++) {
				Marshal.WriteByte(subtitleBuffer, i, 0x00);
			}
		}

		private void DeallocateSubtitleBuffer()
		{
			if (subtitleBuffer != System.IntPtr.Zero) {
				Marshal.FreeHGlobal(subtitleBuffer);
				subtitleBuffer = System.IntPtr.Zero;
				subtitleBufferSize = 0;
				subtitleSize = 0;
			}
		}

		internal void SetupPlayerHolder()
		{
			if (!Application.isPlaying) {
				return;
			}
			GameObject go = new GameObject("CriManaMovieResources");
			playerHolder = go.AddComponent<CriManaMoviePlayerHolder>();
			playerHolder.player = this;
			this.playerHolder = playerHolder;
		}


		[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
		private delegate void CuePointCallbackFromNativeDelegate(System.IntPtr ptr1, System.IntPtr ptr2, [In] ref EventPoint eventPoint);


		[AOT.MonoPInvokeCallback(typeof(CuePointCallbackFromNativeDelegate))]
		private static void CuePointCallbackFromNative(System.IntPtr ptr1, System.IntPtr ptr2, [In] ref EventPoint eventPoint)
		{
			if (updatingPlayer.cuePointCallback != null) {
				updatingPlayer.cuePointCallback(ref eventPoint);
			}
		}

		[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
		private delegate void SubtitleCallbackFromNativeDelegate(System.IntPtr ptr1, System.IntPtr ptr2);


		[AOT.MonoPInvokeCallback(typeof(SubtitleCallbackFromNativeDelegate))]
		private static void SubtitleCallbackFromNative(System.IntPtr ptr1, System.IntPtr ptr2)
		{
			if (updatingPlayer.OnSubtitleChanged != null) {
				updatingPlayer.subtitleSize = CRIWAREEEC954D3(updatingPlayer.playerId, updatingPlayer.subtitleBuffer, updatingPlayer.subtitleBufferSize);
				updatingPlayer.OnSubtitleChanged(updatingPlayer.subtitleBuffer);
            }
		}
		#endregion

		#region DLL Import
#if !CRIWARE_ENABLE_HEADLESS_MODE
		[DllImport(CriWare.Common.pluginName, CallingConvention = CriWare.Common.pluginCallingConvention)]
		private static extern int CRIWAREB569B1EF();
		[DllImport(CriWare.Common.pluginName, CallingConvention = CriWare.Common.pluginCallingConvention)]
		private static extern int CRIWARE499ED516();
		[DllImport(CriWare.Common.pluginName, CallingConvention = CriWare.Common.pluginCallingConvention)]
		private static extern int CRIWARE91A85730(bool useAtomExPlayer, uint maxPathLength);
		[DllImport(CriWare.Common.pluginName, CallingConvention = CriWare.Common.pluginCallingConvention)]
		private static extern void CRIWARE69B66A23(int player_id);
		[DllImport(CriWare.Common.pluginName, CallingConvention = CriWare.Common.pluginCallingConvention)]
		private static extern void CRIWAREE8F69B86(int player_id, System.IntPtr binder, string path);
		[DllImport(CriWare.Common.pluginName, CallingConvention = CriWare.Common.pluginCallingConvention)]
		private static extern void CRIWARE577FD5EB(int player_id, System.IntPtr binder, int content_id);
		[DllImport(CriWare.Common.pluginName, CallingConvention = CriWare.Common.pluginCallingConvention)]
		private static extern void CRIWARE84BD19E3(int player_id, string path, System.UInt64 offset, System.Int64 range);
		[DllImport(CriWare.Common.pluginName, CallingConvention = CriWare.Common.pluginCallingConvention)]
		private static extern void CRIWARE5E809C25(int player_id, IntPtr data, System.Int64 datasize);
		[DllImport(CriWare.Common.pluginName, CallingConvention = CriWare.Common.pluginCallingConvention)]
		private static extern void CRIWARE5E809C25(int player_id, byte[] data, System.Int64 datasize);
		[DllImport(CriWare.Common.pluginName, CallingConvention = CriWare.Common.pluginCallingConvention)]
		private static extern bool CRIWARE02F616D8(int player_id, System.IntPtr binder, string path, bool repeat);
		[DllImport(CriWare.Common.pluginName, CallingConvention = CriWare.Common.pluginCallingConvention)]
		private static extern bool CRIWAREAB8F4BE0(int player_id, System.IntPtr binder, int content_id, bool repeat);
		[DllImport(CriWare.Common.pluginName, CallingConvention = CriWare.Common.pluginCallingConvention)]
		private static extern bool CRIWAREC7912D73(int player_id, string path, System.UInt64 offset, System.Int64 range, bool repeat);
		[DllImport(CriWare.Common.pluginName, CallingConvention = CriWare.Common.pluginCallingConvention)]
		private static extern bool CRIWARE9DAAE010(int player_id, IntPtr data, System.Int64 datasize, bool repeat);
		[DllImport(CriWare.Common.pluginName, CallingConvention = CriWare.Common.pluginCallingConvention)]
		private static extern bool CRIWARE9DAAE010(int player_id, byte[] data, System.Int64 datasize, bool repeat);
		[DllImport(CriWare.Common.pluginName, CallingConvention = CriWare.Common.pluginCallingConvention)]
		private static extern void CRIWAREFE59FBEB(int player_id);
		[DllImport(CriWare.Common.pluginName, CallingConvention = CriWare.Common.pluginCallingConvention)]
		private static extern System.Int32 CRIWARE2F5865AB(int player_id);
		[DllImport(CriWare.Common.pluginName, CallingConvention = CriWare.Common.pluginCallingConvention)]
		private static extern void CRIWARE4FFB83A2(
			int player_id,
			CuePointCallbackFromNativeDelegate cbfunc
		);
		[DllImport(CriWare.Common.pluginName, CallingConvention = CriWare.Common.pluginCallingConvention)]
		private static extern void CRIWARE25EE7500(
			int player_id,
			SubtitleCallbackFromNativeDelegate cbfunc
		);
		[DllImport(CriWare.Common.pluginName, CallingConvention = CriWare.Common.pluginCallingConvention)]
		private static extern void CRIWAREB0EDABE6(int player_id, [Out] MovieInfo movie_info);
		[DllImport(CriWare.Common.pluginName, CallingConvention = CriWare.Common.pluginCallingConvention)]
		private static extern int CRIWARE7A8D778B(int player_id);
		[DllImport(CriWare.Common.pluginName, CallingConvention = CriWare.Common.pluginCallingConvention)]
		private static extern void CRIWARE9614304C(int player_id);
		[DllImport(CriWare.Common.pluginName, CallingConvention = CriWare.Common.pluginCallingConvention)]
		private static extern void CRIWAREA7A307C6(int player_id);
		[DllImport(CriWare.Common.pluginName, CallingConvention = CriWare.Common.pluginCallingConvention)]
		private static extern void CRIWARE062AF91F(int player_id);
		[DllImport(CriWare.Common.pluginName, CallingConvention = CriWare.Common.pluginCallingConvention)]
		private static extern void CRIWARE7840A9CE(int player_id, int seek_frame_no);
		[DllImport(CriWare.Common.pluginName, CallingConvention = CriWare.Common.pluginCallingConvention)]
		private static extern void CRIWAREE123820B(int player_id, MovieEventSyncMode mode);
		[DllImport(CriWare.Common.pluginName, CallingConvention = CriWare.Common.pluginCallingConvention)]
		private static extern void CRIWARE18D62384(int player_id, int sw);
		[DllImport(CriWare.Common.pluginName, CallingConvention = CriWare.Common.pluginCallingConvention)]
		private static extern bool CRIWARE4965C380(int player_id);
		[DllImport(CriWare.Common.pluginName, CallingConvention = CriWare.Common.pluginCallingConvention)]
		private static extern void CRIWARE34161DBB(int player_id, int sw);
		[DllImport(CriWare.Common.pluginName, CallingConvention = CriWare.Common.pluginCallingConvention)]
		private static extern void CRIWAREC9D8F2E8(int player_id, bool flag);
		[DllImport(CriWare.Common.pluginName, CallingConvention = CriWare.Common.pluginCallingConvention)]
		private static extern long CRIWAREC379A2A7(int player_id);
		[DllImport(CriWare.Common.pluginName, CallingConvention = CriWare.Common.pluginCallingConvention)]
		private static extern int CRIWAREDA04611A(int player_id);
		[DllImport(CriWare.Common.pluginName, CallingConvention = CriWare.Common.pluginCallingConvention)]
		private static extern IntPtr criManaUnityPlayer_GetAtomExPlayerByTrackId(int player_id, uint track_id);
		[DllImport(CriWare.Common.pluginName, CallingConvention = CriWare.Common.pluginCallingConvention)]
		private static extern int CRIWARE89D9F2D4(int player_id);
		[DllImport(CriWare.Common.pluginName, CallingConvention = CriWare.Common.pluginCallingConvention)]
		private static extern void CRIWARE07A59400(int player_id, int track);
		[DllImport(CriWare.Common.pluginName, CallingConvention = CriWare.Common.pluginCallingConvention)]
		private static extern void CRIWARE83DAAA8A(int player_id, float vol);
		[DllImport(CriWare.Common.pluginName, CallingConvention = CriWare.Common.pluginCallingConvention)]
		private static extern float CRIWARE8D9B47AB(int player_id);
		[DllImport(CriWare.Common.pluginName, CallingConvention = CriWare.Common.pluginCallingConvention)]
		private static extern void CRIWARE348B7DCE(int player_id, int track);
		[DllImport(CriWare.Common.pluginName, CallingConvention = CriWare.Common.pluginCallingConvention)]
		private static extern void CRIWARE1FA5EACB(int player_id, float vol);
		[DllImport(CriWare.Common.pluginName, CallingConvention = CriWare.Common.pluginCallingConvention)]
		private static extern float CRIWARE497D9D4F(int player_id);
		[DllImport(CriWare.Common.pluginName, CallingConvention = CriWare.Common.pluginCallingConvention)]
		private static extern void CRIWARE1E8C2DD4(int player_id, int track);
		[DllImport(CriWare.Common.pluginName, CallingConvention = CriWare.Common.pluginCallingConvention)]
		private static extern void CRIWARE718646C6(int player_id, float vol);
		[DllImport(CriWare.Common.pluginName, CallingConvention = CriWare.Common.pluginCallingConvention)]
		private static extern float CRIWARE4145098F(int player_id);
		[DllImport(CriWare.Common.pluginName, CallingConvention = CriWare.Common.pluginCallingConvention)]
		private static extern void CRIWAREE477730D(int player_id, string bus_name, float level);
		[DllImport(CriWare.Common.pluginName, CallingConvention = CriWare.Common.pluginCallingConvention)]
		private static extern void CRIWARE9BEA00DA(int player_id, string bus_name, float level);
		[DllImport(CriWare.Common.pluginName, CallingConvention = CriWare.Common.pluginCallingConvention)]
		private static extern void CRIWARED819D517(int player_id, string bus_name, float level);
		[DllImport(CriWare.Common.pluginName, CallingConvention = CriWare.Common.pluginCallingConvention)]
		private static extern void CRIWAREB179B6EA(int player_id, int channel);
		[DllImport(CriWare.Common.pluginName, CallingConvention = CriWare.Common.pluginCallingConvention)]
		private static extern System.Int32 CRIWAREEEC954D3(int player_id, System.IntPtr subtitle_buffer, int subtitle_buffer_size);
		[DllImport(CriWare.Common.pluginName, CallingConvention = CriWare.Common.pluginCallingConvention)]
		private static extern void CRIWARE3349ADC7(int player_id, float speed);
		[DllImport(CriWare.Common.pluginName, CallingConvention = CriWare.Common.pluginCallingConvention)]
		private static extern void CRIWARE60BB2254(int player_id, System.UInt32 max_data_size);
		[DllImport(CriWare.Common.pluginName, CallingConvention = CriWare.Common.pluginCallingConvention)]
		public static extern void CRIWAREEB302942(int player_id, float sec);
		[DllImport(CriWare.Common.pluginName, CallingConvention = CriWare.Common.pluginCallingConvention)]
		public static extern void CRIWAREBD200751(int player_id, int min_buffer_size);
		[DllImport(CriWare.Common.pluginName, CallingConvention = CriWare.Common.pluginCallingConvention)]
		public static extern void CRIWARE3A1C8683(int player_id, int asr_rack_id);
		[DllImport(CriWare.Common.pluginName, CallingConvention = CriWare.Common.pluginCallingConvention)]
		public static extern void CRIWARE87BB141E(int player_id, float quality);
		[DllImport(CriWare.Common.pluginName, CallingConvention = CriWare.Common.pluginCallingConvention)]
		private static extern void CRIWARE8A936991(int player_id);
		[DllImport(CriWare.Common.pluginName, CallingConvention = CriWare.Common.pluginCallingConvention)]
		private static extern void CRIWARE7ACC3A4F(int player_id, TimerType timer_type);
		[DllImport(CriWare.Common.pluginName, CallingConvention = CriWare.Common.pluginCallingConvention)]
		private static extern void CRIWARE6BEC2BB2(int player_id, ulong user_count, ulong user_unit);
		[DllImport(CriWare.Common.pluginName, CallingConvention = CriWare.Common.pluginCallingConvention)]
		private static extern void CRIWARE5C4DE0D3(int player_id, ulong timer_unit_n, ulong timer_unit_d);
		[DllImport(CriWare.Common.pluginName, CallingConvention = CriWare.Common.pluginCallingConvention)]
		private static extern void CRIWAREE36F41AB(int player_id);
		[DllImport(CriWare.Common.pluginName, CallingConvention = CriWare.Common.pluginCallingConvention)]
		private static extern void CRIWAREBF9C9711(int player_id);
/* @cond notpublic */
		[DllImport(CriWare.Common.pluginName, CallingConvention = CriWare.Common.pluginCallingConvention)]
		private static extern void CRIWARE616A36FF(int player_id, UInt64 key);
/* @endcond */
#if !CRIPLUGIN_USE_OLD_LOWLEVEL_INTERFACE
		[DllImport(CriWare.Common.pluginName, CallingConvention = CriWare.Common.pluginCallingConvention)]
		private static extern IntPtr criWareUnity_GetRenderEventFunc();
#endif
#else
		private Status _dummyNativeStatus = Status.Error;
		private bool _dummyPaused = false;
		private bool _dummyLoop = false;
		private static int CRIWAREB569B1EF() { return 0; }
		private static int CRIWARE499ED516() { return 0; }
		private static int CRIWARE91A85730(bool useAtomExPlayer, uint maxPathLength) { return 0; }
		private static void CRIWARE69B66A23(int player_id) { }
		private static void CRIWAREE8F69B86(int player_id, System.IntPtr binder, string path) { }
		private static void CRIWARE577FD5EB(int player_id, System.IntPtr binder, int content_id) { }
		private static void CRIWARE84BD19E3(int player_id, string path, System.UInt64 offset, System.Int64 range) { }
		private static void CRIWARE5E809C25(int player_id, IntPtr data, System.Int64 datasize) { }
		private static void CRIWARE5E809C25(int player_id, byte[] data, System.Int64 datasize) { }
		private static bool CRIWARE02F616D8(int player_id, System.IntPtr binder, string path, bool repeat) { return true; }
		private static bool CRIWAREAB8F4BE0(int player_id, System.IntPtr binder, int content_id, bool repeat) { return true; }
		private static bool CRIWAREC7912D73(int player_id, string path, System.UInt64 offset, System.Int64 range, bool repeat) { return true; }
		private static bool CRIWARE9DAAE010(int player_id, IntPtr data, System.Int64 datasize, bool repeat) { return true; }
		private static bool CRIWARE9DAAE010(int player_id, byte[] data, System.Int64 datasize, bool repeat) { return true; }
		private static void CRIWAREFE59FBEB(int player_id) { }
		private static System.Int32 CRIWARE2F5865AB(int player_id) { return 0; }
		private static void CRIWARE4FFB83A2(int player_id, CuePointCallbackFromNativeDelegate cbfunc) { }
		private static void CRIWAREB0EDABE6(int player_id, [Out] MovieInfo movie_info) { movie_info = new MovieInfo(); }
		private static int CRIWARE7A8D778B(int player_id ) { return 0; }
		private void CRIWARE9614304C(int player_id) { _dummyPaused = false; _nativeStatus = Status.WaitPrep; }
		private void CRIWAREA7A307C6(int player_id) { _dummyPaused = false; _nativeStatus = Status.WaitPrep; }
		private void CRIWARE062AF91F(int player_id) { _nativeStatus = Status.Stop;  }
		private static void CRIWARE7840A9CE(int player_id, int seek_frame_no) { }
		private static void CRIWAREE123820B(int player_id, MovieEventSyncMode mode){}
		private void CRIWARE18D62384(int player_id, int sw) { _dummyPaused = (sw == 1); }
		private static bool CRIWARE4965C380(int player_id) { return false; }
		private void CRIWARE34161DBB(int player_id, int sw) { _dummyLoop = (sw == 1); }
		private static void CRIWAREC9D8F2E8(int player_id, bool flag) { }
		private static long CRIWAREC379A2A7(int player_id) { return 0; }
		private static int CRIWAREDA04611A(int player_id) { return 0; }
		private static IntPtr criManaUnityPlayer_GetAtomExPlayerByTrackId(int player_id, uint track_id) { return new IntPtr(1); }
		private static int CRIWARE89D9F2D4(int player_id) { return -1; }
		private static void CRIWARE07A59400(int player_id, int track) { }
		private static void CRIWARE83DAAA8A(int player_id, float vol) { }
		private static float CRIWARE8D9B47AB(int player_id){ return 0f; }
		private static void CRIWARE348B7DCE(int player_id, int track) { }
		private static void CRIWARE1FA5EACB(int player_id, float vol) { }
		private static float CRIWARE497D9D4F(int player_id){ return 0f; }
		private static void CRIWARE1E8C2DD4(int player_id, int track) { }
		private static void CRIWARE718646C6(int player_id, float vol) { }
		private static float CRIWARE4145098F(int player_id){ return 0f; }
		private static void CRIWAREE477730D(int player_id, string bus_name, float level) { }
		private static void CRIWARE9BEA00DA(int player_id, string bus_name, float level) { }
		private static void CRIWARED819D517(int player_id, string bus_name, float level) { }
		private static void CRIWAREB179B6EA(int player_id, int channel) { }
		private static void CRIWARE25EE7500(int player_id, SubtitleCallbackFromNativeDelegate cbfunc) { }
		private static System.Int32 CRIWAREEEC954D3(int player_id, System.IntPtr subtitle_buffer, int subtitle_buffer_size) { return 0; }
		private static void CRIWARE3349ADC7(int player_id, float speed) { }
		private static void CRIWARE60BB2254(int player_id, System.UInt32 max_data_size) { }
		public static void CRIWAREEB302942(int player_id, float sec) { }
		public static void CRIWAREBD200751(int player_id, int min_buffer_size) { }
		public static void CRIWARE3A1C8683(int player_id, int asr_rack_id) { }
		public static void CRIWARE87BB141E(int player_id, float quality) { }
		private static void CRIWARE8A936991(int player_id) { }
		private static void CRIWARE7ACC3A4F(int player_id, TimerType timer_type) { }
		private static void CRIWARE6BEC2BB2(int player_id, ulong user_count, ulong user_unit) { }
		private static void CRIWARE5C4DE0D3(int player_id, ulong timer_unit_n, ulong timer_unit_d) { }
		private static void CRIWAREE36F41AB(int player_id) { }
		private static void CRIWAREBF9C9711(int player_id) { }
/* @cond notpublic */
		private static void CRIWARE616A36FF(int player_id, UInt64 key){}
/* @endcond */
#endif

		public enum CriManaUnityPlayer_RenderEventAction {
			UPDATE = 0, // default action - always called at each loop
			INITIALIZE  = 1 << 8, // called only once at first
			RENDER = 2 << 8, // called each loop each camera before render if visible
			DESTROY = 3 << 8, // called only once at end
		};

		#endregion
	}
}

} //namespace CriWare
/**
 * @}
 */


/* end of file */
