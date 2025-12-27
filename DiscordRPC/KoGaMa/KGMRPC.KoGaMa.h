
#pragma once

#include "Tools.Il2Cpp.Lib.h"
#include "Il2CppUtils.h"
#include "Il2CppMetadata.h"
using namespace Tools::Il2Cpp;
namespace KGMRPC::KoGaMa {
void Init(::Tools::Il2Cpp::Metadata::MetadataInfo metadata);
struct MVGameControllerBase {
	inline static Il2CppClass klass;
    inline static Utils::FieldInfo<true> /* System.Boolean */ f_LevelingTestMode,/* System.Boolean */ f_ClientShopInsideInventory,/* System.Boolean */ f_IsInitialized_k_BackingField,/* System.Boolean */ f_DisconnectIsOk_k_BackingField,/* IPlayModeUI */ f_PlayModeUI_k_BackingField,/* IEditModeUI */ f_EditModeUI_k_BackingField,/* MVGameControllerBase+OnReceivedGameMsgDelegate */ f_OnReceivedGameMsg,/* MVGameControllerBase+OnReceivedNotificationEventDelegate */ f_OnReceivedNotification,/* MVGameControllerBase+OnPostGameInitDelegate */ f_OnPostGameInit,/* MVGameControllerBase */ f_instance,/* System.Boolean */ f_WebPlayAsTouch_k_BackingField,/* System.Boolean */ f_PortalUI_k_BackingField,/* System.Boolean */ f_WebPlayAsTouchInitialized_k_BackingField,/* GameSessionData */ f_GameSessionData_k_BackingField,/* System.Boolean */ f_SeekAdConsent_k_BackingField,/* System.Boolean */ f_Quitting_k_BackingField,/* System.Boolean */ f_LeavingEditPlayMode_k_BackingField;
inline static Utils::FieldInfo<false> /* RegionConfigManager */  f_regionConfigManager,/* DebugLogHandler */  f_debugLogHandler,/* MainCameraManager */  f_mainCameraManager,/* Styles */  f_styles,/* MaterialLoader */  f_materialLoader,/* PrefabPool */  f_prefabPool,/* AntiHack.TextureIntegrityChecker */  f_textureIntegrityChecker,/* ThemeRepository */  f_themeRepository,/* StreamingAssetManager */  f_streamingAssetManager,/* EmbeddedPlayerConfig */  f_embeddedPlayerConfig,/* MVNetworkGame */  f_game,/* AudioManager */  f_audioManager,/* BrowserComm */  f_browserComm,/* LevelLoader */  f_levelLoader,/* SkinnedMeshOptimizeManager */  f_skinnedMeshOptimizeManager,/* FlagDebriefingControl */  f_flagDebriefingControl,/* GoldRewardManager */  f_goldRewardManager,/* JoystickControllerStack */  f_joystickControllerStack,/* System.Boolean */  f_quitHasBeenCalled,/* TimeReward */  f_timeReward,/* OverrideMaterials */  f_overrideMaterials,/* LoadStats */  f_loadStats,/* MVJoinState */  f_joinState,/* FirstFrameUpdateActorReady */  f_firstFrameUpdateActorReady,/* System.Int32 */  f_reAuthTestTries,/* ModeControllerBase */  f_modeController,/* System.Boolean */  f_ShuttingDown_k_BackingField,/* System.Action`1<MVJoinState> */  f_onJoinStateChanged,/* AudioBuild */  f_audioBuild,/* WaterPlaneManager */  f_waterPlaneManagerPrefab,/* WaterPlaneManager */  f_waterPlaneManager,/* SkyboxManager */  f_skyboxManager,/* Assets.Scripts.Subscription.SubscriberCooldownsManager */  f_subscriberCooldownsManager;

	/*Assets.Scripts.Network.Player.SpawnRoles.SpawnRoleData.Mediator.SpawnRoleDataMediator get_SpawnRoleDataMediatorLocal()*/ inline static Utils::MethodInfo<true,false> m_get_SpawnRoleDataMediatorLocal;
/*MVLocalPlayer get_LocalPlayer()*/ inline static Utils::MethodInfo<true,false> m_get_LocalPlayer;
/*GameEventManager get_GameEventManager()*/ inline static Utils::MethodInfo<true,false> m_get_GameEventManager;
/*System.Boolean IsInCorrectInventory(System.Boolean insidePlayerInventory)*/ inline static Utils::MethodInfo<true,false> m_IsInCorrectInventory;
/*System.Boolean get_IsInitialized()*/ inline static Utils::MethodInfo<true,false> m_get_IsInitialized;
/*System.Void set_IsInitialized(System.Boolean value)*/ inline static Utils::MethodInfo<true,false> m_set_IsInitialized;
/*System.Boolean get_DisconnectIsOk()*/ inline static Utils::MethodInfo<true,false> m_get_DisconnectIsOk;
/*System.Void set_DisconnectIsOk(System.Boolean value)*/ inline static Utils::MethodInfo<true,false> m_set_DisconnectIsOk;
/*IPlayModeUI get_PlayModeUI()*/ inline static Utils::MethodInfo<true,false> m_get_PlayModeUI;
/*System.Void set_PlayModeUI(IPlayModeUI value)*/ inline static Utils::MethodInfo<true,false> m_set_PlayModeUI;
/*IEditModeUI get_EditModeUI()*/ inline static Utils::MethodInfo<true,false> m_get_EditModeUI;
/*System.Void set_EditModeUI(IEditModeUI value)*/ inline static Utils::MethodInfo<true,false> m_set_EditModeUI;
/*System.Boolean get_IsAlive()*/ inline static Utils::MethodInfo<true,false> m_get_IsAlive;
/*MVNetworkGame get_Game()*/ inline static Utils::MethodInfo<true,false> m_get_Game;
/*AudioManager get_AudioManager()*/ inline static Utils::MethodInfo<true,false> m_get_AudioManager;
/*BrowserComm get_BrowserComm()*/ inline static Utils::MethodInfo<true,false> m_get_BrowserComm;
/*LevelLoader get_LevelLoader()*/ inline static Utils::MethodInfo<true,false> m_get_LevelLoader;
/*SkinnedMeshOptimizeManager get_SkinnedMeshOptimizeManager()*/ inline static Utils::MethodInfo<true,false> m_get_SkinnedMeshOptimizeManager;
/*FlagDebriefingControl get_FlagDebriefingControl()*/ inline static Utils::MethodInfo<true,false> m_get_FlagDebriefingControl;
/*GoldRewardManager get_GoldRewardManager()*/ inline static Utils::MethodInfo<true,false> m_get_GoldRewardManager;
/*AntiHack.TextureIntegrityChecker get_TextureIntegrityChecker()*/ inline static Utils::MethodInfo<true,false> m_get_TextureIntegrityChecker;
/*StreamingAssetManager get_StreamingAssetManager()*/ inline static Utils::MethodInfo<true,false> m_get_StreamingAssetManager;
/*EmbeddedPlayerConfig get_EmbeddedPlayerConfig()*/ inline static Utils::MethodInfo<false,false> m_get_EmbeddedPlayerConfig;
/*RegionConfig get_RegionConfig()*/ inline static Utils::MethodInfo<false,false> m_get_RegionConfig;
/*StaticAssetsConfig get_StaticAssetsConfig()*/ inline static Utils::MethodInfo<true,false> m_get_StaticAssetsConfig;
/*System.Boolean get_WebPlayAsTouch()*/ inline static Utils::MethodInfo<true,false> m_get_WebPlayAsTouch;
/*System.Void set_WebPlayAsTouch(System.Boolean value)*/ inline static Utils::MethodInfo<true,false> m_set_WebPlayAsTouch;
/*System.Boolean get_PortalUI()*/ inline static Utils::MethodInfo<true,false> m_get_PortalUI;
/*System.Void set_PortalUI(System.Boolean value)*/ inline static Utils::MethodInfo<true,false> m_set_PortalUI;
/*System.Boolean get_ShuttingDown()*/ inline static Utils::MethodInfo<false,false> m_get_ShuttingDown;
/*System.Void set_ShuttingDown(System.Boolean value)*/ inline static Utils::MethodInfo<false,false> m_set_ShuttingDown;
/*System.Boolean get_WebPlayAsTouchInitialized()*/ inline static Utils::MethodInfo<true,false> m_get_WebPlayAsTouchInitialized;
/*System.Void set_WebPlayAsTouchInitialized(System.Boolean value)*/ inline static Utils::MethodInfo<true,false> m_set_WebPlayAsTouchInitialized;
/*GameSessionData get_GameSessionData()*/ inline static Utils::MethodInfo<true,false> m_get_GameSessionData;
/*System.Void set_GameSessionData(GameSessionData value)*/ inline static Utils::MethodInfo<true,false> m_set_GameSessionData;
/*MV.Common.BuildTarget get_BuildTarget()*/ inline static Utils::MethodInfo<true,false> m_get_BuildTarget;
/*System.Action get_OnFirstFrameUpdateActorReady()*/ inline static Utils::MethodInfo<true,false> m_get_OnFirstFrameUpdateActorReady;
/*System.Void set_OnFirstFrameUpdateActorReady(System.Action value)*/ inline static Utils::MethodInfo<true,false> m_set_OnFirstFrameUpdateActorReady;
/*System.Boolean get_OkToReAuth()*/ inline static Utils::MethodInfo<true,false> m_get_OkToReAuth;
/*System.Int32 get_ReAuthTries()*/ inline static Utils::MethodInfo<true,false> m_get_ReAuthTries;
/*System.Boolean get_UsingDevSessionData()*/ inline static Utils::MethodInfo<true,false> m_get_UsingDevSessionData;
/*MVNetworkGame+OperationRequests get_OperationRequests()*/ inline static Utils::MethodInfo<true,false> m_get_OperationRequests;
/*LoadStats get_LoadStats()*/ inline static Utils::MethodInfo<true,false> m_get_LoadStats;
/*MV.Common.MVGameMode get_GameMode()*/ inline static Utils::MethodInfo<true,false> m_get_GameMode;
/*MVWorldObjectClientManager get_WOCM()*/ inline static Utils::MethodInfo<true,false> m_get_WOCM;
/*TimeReward get_TimeReward()*/ inline static Utils::MethodInfo<true,false> m_get_TimeReward;
/*System.Boolean get_IsTouristSession()*/ inline static Utils::MethodInfo<true,false> m_get_IsTouristSession;
/*Assets.Scripts.AdIntegration.IAdManager get_AdManager()*/ inline static Utils::MethodInfo<true,false> m_get_AdManager;
/*Assets.Scripts.AdIntegration.IAdManager get_GetAdManager()*/ inline static Utils::MethodInfo<false,true> m_get_GetAdManager;
/*System.Boolean get_SeekAdConsent()*/ inline static Utils::MethodInfo<true,false> m_get_SeekAdConsent;
/*System.Void set_SeekAdConsent(System.Boolean value)*/ inline static Utils::MethodInfo<true,false> m_set_SeekAdConsent;
/*MVJoinState get_JoinState()*/ inline static Utils::MethodInfo<true,false> m_get_JoinState;
/*System.Void set_JoinState(MVJoinState value)*/ inline static Utils::MethodInfo<true,false> m_set_JoinState;
/*System.Action`1<MVJoinState> get_OnJoinStateChanged()*/ inline static Utils::MethodInfo<true,false> m_get_OnJoinStateChanged;
/*System.Void set_OnJoinStateChanged(System.Action`1<MVJoinState> value)*/ inline static Utils::MethodInfo<true,false> m_set_OnJoinStateChanged;
/*System.Boolean get_IsPlayingInternal()*/ inline static Utils::MethodInfo<false,true> m_get_IsPlayingInternal;
/*System.Boolean get_IsPlaying()*/ inline static Utils::MethodInfo<true,false> m_get_IsPlaying;
/*MaterialLoader get_MaterialLoader()*/ inline static Utils::MethodInfo<true,false> m_get_MaterialLoader;
/*MainCameraManager get_MainCameraManager()*/ inline static Utils::MethodInfo<true,false> m_get_MainCameraManager;
/*WaterPlaneManager get_WaterPlaneManager()*/ inline static Utils::MethodInfo<true,false> m_get_WaterPlaneManager;
/*SkyboxManager get_SkyboxManager()*/ inline static Utils::MethodInfo<true,false> m_get_SkyboxManager;
/*Assets.Scripts.Subscription.SubscriberCooldownsManager get_SubscriberCooldownsManager()*/ inline static Utils::MethodInfo<true,false> m_get_SubscriberCooldownsManager;
/*System.Void Awake()*/ inline static Utils::MethodInfo<false,true> m_Awake;
/*System.Collections.IEnumerator InitRegionDependent()*/ inline static Utils::MethodInfo<false,false> m_InitRegionDependent;
/*System.Void Start()*/ inline static Utils::MethodInfo<false,true> m_Start;
/*System.Void OnDestroy()*/ inline static Utils::MethodInfo<false,true> m_OnDestroy;
/*System.Void UnregisterPlayModeController()*/ inline static Utils::MethodInfo<true,false> m_UnregisterPlayModeController;
/*System.Void Update()*/ inline static Utils::MethodInfo<false,false> m_Update;
/*System.Void FixedUpdate()*/ inline static Utils::MethodInfo<false,false> m_FixedUpdate;
/*System.Void LateUpdate()*/ inline static Utils::MethodInfo<false,true> m_LateUpdate;
/*System.Void OnDrawGizmos()*/ inline static Utils::MethodInfo<false,false> m_OnDrawGizmos;
/*System.Void OnRTGAppInitialize()*/ inline static Utils::MethodInfo<false,false> m_OnRTGAppInitialize;
/*System.Void RegisterPlayModeController(ModeControllerBase playModeController)*/ inline static Utils::MethodInfo<true,false> m_RegisterPlayModeController;
/*System.Void PostGameMsg(MV.Common.MVGameMsgType gameMsgType, System.Collections.Generic.Dictionary`2<System.Object, System.Object> gameMsgData)*/ inline static Utils::MethodInfo<true,false> m0_PostGameMsg;
/*System.Void PostGameMsg(MV.Common.MVGameMsgType gameMsgType, System.String message)*/ inline static Utils::MethodInfo<true,false> m1_PostGameMsg;
/*System.Void PostDestroyCleanup()*/ inline static Utils::MethodInfo<true,false> m_PostDestroyCleanup;
/*System.Void UpdateControllerUpdate()*/ inline static Utils::MethodInfo<false,true> m_UpdateControllerUpdate;
/*System.Void RegisterJoystickControllerStack(JoystickControllerStack joystickControllerStack)*/ inline static Utils::MethodInfo<true,false> m_RegisterJoystickControllerStack;
/*System.Void PushJoystick(ControlType joystickType)*/ inline static Utils::MethodInfo<true,false> m_PushJoystick;
/*System.Void PopJoystick()*/ inline static Utils::MethodInfo<true,false> m_PopJoystick;
/*System.Void SetGameSessionData(GameSessionData gameSessionData)*/ inline static Utils::MethodInfo<true,false> m_SetGameSessionData;
/*System.Boolean TryReauth()*/ inline static Utils::MethodInfo<true,false> m_TryReauth;
/*System.Void ApplicationQuit(QuitBaseCallback applicationQuitObject)*/ inline static Utils::MethodInfo<true,false> m_ApplicationQuit;
/*System.Void RegisterOverrideMaterials()*/ inline static Utils::MethodInfo<true,false> m_RegisterOverrideMaterials;
/*System.Boolean SetWindowPos(System.IntPtr hwnd, System.Int32 hWndInsertAfter, System.Int32 x, System.Int32 Y, System.Int32 cx, System.Int32 cy, System.Int32 wFlags)*/ inline static Utils::MethodInfo<true,false> m_SetWindowPos;
/*System.IntPtr FindWindow(System.String className, System.String windowName)*/ inline static Utils::MethodInfo<true,false> m_FindWindow;
/*System.Void SetPosition(System.Int32 x, System.Int32 y, System.Int32 resX = 0, System.Int32 resY = 0)*/ inline static Utils::MethodInfo<true,false> m_SetPosition;
/*System.Boolean get_Quitting()*/ inline static Utils::MethodInfo<true,false> m_get_Quitting;
/*System.Void set_Quitting(System.Boolean value)*/ inline static Utils::MethodInfo<true,false> m_set_Quitting;
/*System.Boolean get_LeavingEditPlayMode()*/ inline static Utils::MethodInfo<true,false> m_get_LeavingEditPlayMode;
/*System.Void set_LeavingEditPlayMode(System.Boolean value)*/ inline static Utils::MethodInfo<true,false> m_set_LeavingEditPlayMode;
/*System.Void OnApplicationQuit()*/ inline static Utils::MethodInfo<false,false> m_OnApplicationQuit;
/*System.Void ShutDown()*/ inline static Utils::MethodInfo<false,false> m_ShutDown;
/*System.Void HandleApplicationQuit(QuitBaseCallback quitBaseCallback)*/ inline static Utils::MethodInfo<false,true> m_HandleApplicationQuit;
/*System.Void CleanUp()*/ inline static Utils::MethodInfo<false,true> m_CleanUp;
/*System.Void CleanUpPortal()*/ inline static Utils::MethodInfo<false,false> m_CleanUpPortal;
/*System.Void HandleQuitDisconnect()*/ inline static Utils::MethodInfo<false,false> m_HandleQuitDisconnect;
/*System.Void AlternatePortTest()*/ inline static Utils::MethodInfo<false,false> m_AlternatePortTest;
/*System.Void StartGame()*/ inline static Utils::MethodInfo<false,true> m_StartGame;
/*System.Void InitWebGL(System.Boolean developmentMode)*/ inline static Utils::MethodInfo<false,true> m_InitWebGL;
/*System.Void InitStandAlone(System.Boolean developmentMode)*/ inline static Utils::MethodInfo<false,true> m_InitStandAlone;
/*System.Void OnReceivedReAuthWebParametersFromHttpRequest(UnityEngine.Networking.UnityWebRequest www)*/ inline static Utils::MethodInfo<false,false> m_OnReceivedReAuthWebParametersFromHttpRequest;
/*System.Void OnReceivedSessionData(UnityEngine.Networking.UnityWebRequest www)*/ inline static Utils::MethodInfo<false,false> m_OnReceivedSessionData;
/*System.Void UpdateInternal()*/ inline static Utils::MethodInfo<false,true> m_UpdateInternal;
/*System.Void Initialize()*/ inline static Utils::MethodInfo<false,false> m_Initialize;
/*System.Void HandleDebugShortCuts()*/ inline static Utils::MethodInfo<false,false> m_HandleDebugShortCuts;
/*System.Void StartGameWithSessionData(System.Boolean ok, System.String sessionDataJson)*/ inline static Utils::MethodInfo<false,false> m_StartGameWithSessionData;
/*System.Void ReceivedLoadStatsCallback(System.Boolean ok, System.String data)*/ inline static Utils::MethodInfo<false,false> m_ReceivedLoadStatsCallback;
/*System.Void UpdateGame()*/ inline static Utils::MethodInfo<false,false> m_UpdateGame;
/*System.Void DeleteScreenPlayerPrefs()*/ inline static Utils::MethodInfo<true,false> m_DeleteScreenPlayerPrefs;
/*System.Void UpdateControllerLateUpdate()*/ inline static Utils::MethodInfo<false,false> m_UpdateControllerLateUpdate;
/*System.Void ForceEmbedSite(System.String url)*/ inline static Utils::MethodInfo<true,false> m_ForceEmbedSite;
/*System.Void TogglePlayerIndicators()*/ inline static Utils::MethodInfo<true,false> m_TogglePlayerIndicators;
/*System.Void .ctor()*/ inline static Utils::MethodInfo<false,false> m_ctor;

    static void Init(::Tools::Il2Cpp::Metadata::ClassDefinition& classdefinition);
    
};
struct GameSessionData {
	inline static Il2CppClass klass;
    inline static Utils::FieldInfo<true> /* System.String */ f_DataServerIP,/* System.String */ f_DataProfileID,/* System.String */ f_DataPlanetID,/* System.String */ f_DataGameMode,/* System.String */ f_DataLanguage,/* System.String */ f_DataEmbedded,/* System.String */ f_DataEmbeddedSite,/* System.String */ f_DataToken,/* System.String */ f_DataSessionToken,/* System.String */ f_DataPlayButtonAdsEnabledDefault,/* System.String */ f_DataBoostersEnabledDefault,/* System.String */ f_DataInterstitialsAdsEnabledDefault,/* System.String */ f_DataRewardedAdsEnabledDefault,/* System.String */ f_DataSessionID,/* System.String */ f_DataPlanetName,/* System.String */ f_DataPlanetImageURL;
inline static Utils::FieldInfo<false> /* System.String */  f_serverIP,/* System.Int32 */  f_profileID,/* System.Int32 */  f_planetID,/* MV.Common.MVGameMode */  f_gameMode,/* System.String */  f_language,/* System.Boolean */  f_embedded,/* System.String */  f_embeddedSite,/* System.String */  f_token,/* System.String */  f_sessionToken,/* System.String */  f_newPlanetName,/* System.String */  f_planetName,/* System.String */  f_planetImageURL,/* System.String */  f_pingURL,/* System.String */  f_disconnectURL,/* System.String */  f_gameRewardURL,/* System.String */  f_gamePublishedURL,/* System.String */  f_purchaseGoldURL,/* System.String */  f_loginURL,/* System.String */  f_signupURL,/* System.String */  f_idleURL,/* System.String */  f_disconnectedURL,/* System.String */  f_playerProfileURL,/* System.String */  f_eliteUpgradeURL,/* System.String */  f_region,/* System.String */  f_ezKey,/* System.String */  f_reauthURL,/* System.String */  f_gameRewardDataURL,/* System.String */  f_referrer,/* System.Boolean */  f_detailedStats,/* System.Boolean */  f_playButtonAdsEnabledDefault,/* System.Boolean */  f_boostersEnabledDefault,/* System.Boolean */  f_interstitialsAdsEnabledDefault,/* System.Boolean */  f_rewardedAdsEnabledDefault;

	/*System.Void .ctor()*/ inline static Utils::MethodInfo<false,false> m0_ctor;
/*System.Void .ctor(System.Collections.Generic.Dictionary`2<System.String, System.Object> gameSessionData)*/ inline static Utils::MethodInfo<false,false> m1_ctor;
/*System.Boolean GetIsRedirectAllowed()*/ inline static Utils::MethodInfo<false,false> m_GetIsRedirectAllowed;
/*ExitGames.Client.Photon.ConnectionProtocol get_ConnectionProtocol()*/ inline static Utils::MethodInfo<false,false> m_get_ConnectionProtocol;
/*System.String ToString()*/ inline static Utils::MethodInfo<false,true> m_ToString;

    static void Init(::Tools::Il2Cpp::Metadata::ClassDefinition& classdefinition);
    
};
struct Application {
	inline static Il2CppClass klass;
    inline static Utils::FieldInfo<true> /* UnityEngine.Application+LowMemoryCallback */ f_lowMemory,/* UnityEngine.Application+MemoryUsageChangedCallback */ f_memoryUsageChanged,/* UnityEngine.Application+LogCallback */ f_s_LogCallbackHandler,/* UnityEngine.Application+LogCallback */ f_s_LogCallbackHandlerThreaded,/* System.Action`1<System.Boolean> */ f_focusChanged,/* System.Action`1<System.String> */ f_deepLinkActivated,/* System.Func`1<System.Boolean> */ f_wantsToQuit,/* System.Action */ f_quitting,/* System.Action */ f_unloading,/* System.Threading.CancellationTokenSource */ f_s_currentCancellationTokenSource;

	/*System.Void Quit(System.Int32 exitCode)*/ inline static Utils::MethodInfo<true,false> m0_Quit;
/*System.Void Quit()*/ inline static Utils::MethodInfo<true,false> m1_Quit;
/*System.Boolean get_isPlaying()*/ inline static Utils::MethodInfo<true,false> m_get_isPlaying;
/*System.Boolean get_isFocused()*/ inline static Utils::MethodInfo<true,false> m_get_isFocused;
/*System.Void set_runInBackground(System.Boolean value)*/ inline static Utils::MethodInfo<true,false> m_set_runInBackground;
/*System.Boolean get_isBatchMode()*/ inline static Utils::MethodInfo<true,false> m_get_isBatchMode;
/*System.String get_dataPath()*/ inline static Utils::MethodInfo<true,false> m_get_dataPath;
/*System.String get_version()*/ inline static Utils::MethodInfo<true,false> m_get_version;
/*System.Void OpenURL(System.String url)*/ inline static Utils::MethodInfo<true,false> m_OpenURL;
/*System.Void set_targetFrameRate(System.Int32 value)*/ inline static Utils::MethodInfo<true,false> m_set_targetFrameRate;
/*System.Void SetLogCallbackDefined(System.Boolean defined)*/ inline static Utils::MethodInfo<true,false> m_SetLogCallbackDefined;
/*UnityEngine.RuntimePlatform get_platform()*/ inline static Utils::MethodInfo<true,false> m_get_platform;
/*System.Void CallLowMemory(UnityEngine.ApplicationMemoryUsage usage)*/ inline static Utils::MethodInfo<true,false> m_CallLowMemory;
/*System.Boolean HasLogCallback()*/ inline static Utils::MethodInfo<true,false> m_HasLogCallback;
/*System.Void add_logMessageReceived(UnityEngine.Application+LogCallback value)*/ inline static Utils::MethodInfo<true,false> m_add_logMessageReceived;
/*System.Void remove_logMessageReceived(UnityEngine.Application+LogCallback value)*/ inline static Utils::MethodInfo<true,false> m_remove_logMessageReceived;
/*System.Void CallLogCallback(System.String logString, System.String stackTrace, UnityEngine.LogType type, System.Boolean invokedOnMainThread)*/ inline static Utils::MethodInfo<true,false> m_CallLogCallback;
/*System.Void add_focusChanged(System.Action`1<System.Boolean> value)*/ inline static Utils::MethodInfo<true,false> m_add_focusChanged;
/*System.Void remove_focusChanged(System.Action`1<System.Boolean> value)*/ inline static Utils::MethodInfo<true,false> m_remove_focusChanged;
/*System.Boolean Internal_ApplicationWantsToQuit()*/ inline static Utils::MethodInfo<true,false> m_Internal_ApplicationWantsToQuit;
/*System.Void Internal_InitializeExitCancellationToken()*/ inline static Utils::MethodInfo<true,false> m_Internal_InitializeExitCancellationToken;
/*System.Void Internal_RaiseExitCancellationToken()*/ inline static Utils::MethodInfo<true,false> m_Internal_RaiseExitCancellationToken;
/*System.Void Internal_ApplicationQuit()*/ inline static Utils::MethodInfo<true,false> m_Internal_ApplicationQuit;
/*System.Void Internal_ApplicationUnload()*/ inline static Utils::MethodInfo<true,false> m_Internal_ApplicationUnload;
/*System.Void InvokeOnBeforeRender()*/ inline static Utils::MethodInfo<true,false> m_InvokeOnBeforeRender;
/*System.Void InvokeFocusChanged(System.Boolean focus)*/ inline static Utils::MethodInfo<true,false> m_InvokeFocusChanged;
/*System.Void InvokeDeepLinkActivated(System.String url)*/ inline static Utils::MethodInfo<true,false> m_InvokeDeepLinkActivated;
/*System.Boolean get_isEditor()*/ inline static Utils::MethodInfo<true,false> m_get_isEditor;
/*System.Void .cctor()*/ inline static Utils::MethodInfo<true,false> m_cctor;
/*System.Void get_dataPath_Injected(out UnityEngine.Bindings.ManagedSpanWrapper ret)*/ inline static Utils::MethodInfo<true,false> m_get_dataPath_Injected;
/*System.Void get_version_Injected(out UnityEngine.Bindings.ManagedSpanWrapper ret)*/ inline static Utils::MethodInfo<true,false> m_get_version_Injected;
/*System.Void OpenURL_Injected(ref UnityEngine.Bindings.ManagedSpanWrapper url)*/ inline static Utils::MethodInfo<true,false> m_OpenURL_Injected;

    static void Init(::Tools::Il2Cpp::Metadata::ClassDefinition& classdefinition);
    
};

}
