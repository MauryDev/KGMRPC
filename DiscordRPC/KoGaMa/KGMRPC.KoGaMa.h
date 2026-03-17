#pragma once

#include "Tools.Il2Cpp.Lib.h"
#include "Il2CppUtils.h"
#include "Il2CppMetadata.h"
#include <array>
namespace KGMRPC::KoGaMa {
void Init(::Tools::Il2Cpp::Metadata::MetadataRoot& metadataInfo);

struct MVGameControllerBase {
	inline static ::Tools::Il2Cpp::Il2CppClass klass;
    inline static ::Tools::Il2Cpp::Metadata::array_field<50> fields;
inline static auto /* System.Boolean */ &f_LevelingTestMode = fields.get<true>(0), /* System.Boolean */ &f_ClientShopInsideInventory = fields.get<true>(1), /* System.Boolean */ &f__IsInitialized_k__BackingField = fields.get<true>(12), /* System.Boolean */ &f__DisconnectIsOk_k__BackingField = fields.get<true>(13), /* IPlayModeUI */ &f__PlayModeUI_k__BackingField = fields.get<true>(14), /* IEditModeUI */ &f__EditModeUI_k__BackingField = fields.get<true>(15), /* MVGameControllerBase+OnReceivedGameMsgDelegate */ &f_OnReceivedGameMsg = fields.get<true>(16), /* MVGameControllerBase+OnReceivedNotificationEventDelegate */ &f_OnReceivedNotification = fields.get<true>(17), /* MVGameControllerBase+OnPostGameInitDelegate */ &f_OnPostGameInit = fields.get<true>(18), /* MVGameControllerBase */ &f_instance = fields.get<true>(19), /* System.Boolean */ &f__WebPlayAsTouch_k__BackingField = fields.get<true>(36), /* System.Boolean */ &f__PortalUI_k__BackingField = fields.get<true>(37), /* System.Boolean */ &f__WebPlayAsTouchInitialized_k__BackingField = fields.get<true>(39), /* GameSessionData */ &f__GameSessionData_k__BackingField = fields.get<true>(40), /* System.Boolean */ &f__SeekAdConsent_k__BackingField = fields.get<true>(42), /* System.Boolean */ &f__Quitting_k__BackingField = fields.get<true>(48), /* System.Boolean */ &f__LeavingEditPlayMode_k__BackingField = fields.get<true>(49);
inline static auto /* RegionConfigManager */ &f_regionConfigManager = fields.get<false>(2), /* DebugLogHandler */ &f_debugLogHandler = fields.get<false>(3), /* MainCameraManager */ &f_mainCameraManager = fields.get<false>(4), /* Styles */ &f_styles = fields.get<false>(5), /* MaterialLoader */ &f_materialLoader = fields.get<false>(6), /* PrefabPool */ &f_prefabPool = fields.get<false>(7), /* AntiHack.TextureIntegrityChecker */ &f_textureIntegrityChecker = fields.get<false>(8), /* ThemeRepository */ &f_themeRepository = fields.get<false>(9), /* StreamingAssetManager */ &f_streamingAssetManager = fields.get<false>(10), /* EmbeddedPlayerConfig */ &f_embeddedPlayerConfig = fields.get<false>(11), /* MVNetworkGame */ &f_game = fields.get<false>(20), /* AudioManager */ &f_audioManager = fields.get<false>(21), /* BrowserComm */ &f_browserComm = fields.get<false>(22), /* LevelLoader */ &f_levelLoader = fields.get<false>(23), /* SkinnedMeshOptimizeManager */ &f_skinnedMeshOptimizeManager = fields.get<false>(24), /* FlagDebriefingControl */ &f_flagDebriefingControl = fields.get<false>(25), /* GoldRewardManager */ &f_goldRewardManager = fields.get<false>(26), /* JoystickControllerStack */ &f_joystickControllerStack = fields.get<false>(27), /* System.Boolean */ &f_quitHasBeenCalled = fields.get<false>(28), /* TimeReward */ &f_timeReward = fields.get<false>(29), /* OverrideMaterials */ &f_overrideMaterials = fields.get<false>(30), /* LoadStats */ &f_loadStats = fields.get<false>(31), /* MVJoinState */ &f__joinState = fields.get<false>(32), /* FirstFrameUpdateActorReady */ &f_firstFrameUpdateActorReady = fields.get<false>(33), /* System.Int32 */ &f_reAuthTestTries = fields.get<false>(34), /* ModeControllerBase */ &f_modeController = fields.get<false>(35), /* System.Boolean */ &f__ShuttingDown_k__BackingField = fields.get<false>(38), /* System.Action`1<MVJoinState> */ &f_onJoinStateChanged = fields.get<false>(41), /* AudioBuild */ &f_audioBuild = fields.get<false>(43), /* WaterPlaneManager */ &f_waterPlaneManagerPrefab = fields.get<false>(44), /* WaterPlaneManager */ &f_waterPlaneManager = fields.get<false>(45), /* SkyboxManager */ &f_skyboxManager = fields.get<false>(46), /* Assets.Scripts.Subscription.SubscriberCooldownsManager */ &f_subscriberCooldownsManager = fields.get<false>(47);

    inline static ::Tools::Il2Cpp::Metadata::array_method<114> methods;
    /* Assets.Scripts.Network.Player.SpawnRoles.SpawnRoleData.Mediator.SpawnRoleDataMediator get_SpawnRoleDataMediatorLocal() */
    inline static auto& m_get_SpawnRoleDataMediatorLocal = methods.get<true, false>(0);
    /* MVLocalPlayer get_LocalPlayer() */
    inline static auto& m_get_LocalPlayer = methods.get<true, false>(1);
    /* GameEventManager get_GameEventManager() */
    inline static auto& m_get_GameEventManager = methods.get<true, false>(2);
    /* System.Boolean IsInCorrectInventory(System.Boolean insidePlayerInventory) */
    inline static auto& m_IsInCorrectInventory = methods.get<true, false>(3);
    /* System.Boolean get_IsInitialized() */
    inline static auto& m_get_IsInitialized = methods.get<true, false>(4);
    /* System.Void set_IsInitialized(System.Boolean value) */
    inline static auto& m_set_IsInitialized = methods.get<true, false>(5);
    /* System.Boolean get_DisconnectIsOk() */
    inline static auto& m_get_DisconnectIsOk = methods.get<true, false>(6);
    /* System.Void set_DisconnectIsOk(System.Boolean value) */
    inline static auto& m_set_DisconnectIsOk = methods.get<true, false>(7);
    /* IPlayModeUI get_PlayModeUI() */
    inline static auto& m_get_PlayModeUI = methods.get<true, false>(8);
    /* System.Void set_PlayModeUI(IPlayModeUI value) */
    inline static auto& m_set_PlayModeUI = methods.get<true, false>(9);
    /* IEditModeUI get_EditModeUI() */
    inline static auto& m_get_EditModeUI = methods.get<true, false>(10);
    /* System.Void set_EditModeUI(IEditModeUI value) */
    inline static auto& m_set_EditModeUI = methods.get<true, false>(11);
    /* System.Boolean get_IsAlive() */
    inline static auto& m_get_IsAlive = methods.get<true, false>(12);
    /* MVNetworkGame get_Game() */
    inline static auto& m_get_Game = methods.get<true, false>(13);
    /* AudioManager get_AudioManager() */
    inline static auto& m_get_AudioManager = methods.get<true, false>(14);
    /* BrowserComm get_BrowserComm() */
    inline static auto& m_get_BrowserComm = methods.get<true, false>(15);
    /* LevelLoader get_LevelLoader() */
    inline static auto& m_get_LevelLoader = methods.get<true, false>(16);
    /* SkinnedMeshOptimizeManager get_SkinnedMeshOptimizeManager() */
    inline static auto& m_get_SkinnedMeshOptimizeManager = methods.get<true, false>(17);
    /* FlagDebriefingControl get_FlagDebriefingControl() */
    inline static auto& m_get_FlagDebriefingControl = methods.get<true, false>(18);
    /* GoldRewardManager get_GoldRewardManager() */
    inline static auto& m_get_GoldRewardManager = methods.get<true, false>(19);
    /* AntiHack.TextureIntegrityChecker get_TextureIntegrityChecker() */
    inline static auto& m_get_TextureIntegrityChecker = methods.get<true, false>(20);
    /* StreamingAssetManager get_StreamingAssetManager() */
    inline static auto& m_get_StreamingAssetManager = methods.get<true, false>(21);
    /* EmbeddedPlayerConfig get_EmbeddedPlayerConfig() */
    inline static auto& m_get_EmbeddedPlayerConfig = methods.get<false, false>(22);
    /* RegionConfig get_RegionConfig() */
    inline static auto& m_get_RegionConfig = methods.get<false, false>(23);
    /* StaticAssetsConfig get_StaticAssetsConfig() */
    inline static auto& m_get_StaticAssetsConfig = methods.get<true, false>(24);
    /* System.Boolean get_WebPlayAsTouch() */
    inline static auto& m_get_WebPlayAsTouch = methods.get<true, false>(25);
    /* System.Void set_WebPlayAsTouch(System.Boolean value) */
    inline static auto& m_set_WebPlayAsTouch = methods.get<true, false>(26);
    /* System.Boolean get_PortalUI() */
    inline static auto& m_get_PortalUI = methods.get<true, false>(27);
    /* System.Void set_PortalUI(System.Boolean value) */
    inline static auto& m_set_PortalUI = methods.get<true, false>(28);
    /* System.Boolean get_ShuttingDown() */
    inline static auto& m_get_ShuttingDown = methods.get<false, false>(29);
    /* System.Void set_ShuttingDown(System.Boolean value) */
    inline static auto& m_set_ShuttingDown = methods.get<false, false>(30);
    /* System.Boolean get_WebPlayAsTouchInitialized() */
    inline static auto& m_get_WebPlayAsTouchInitialized = methods.get<true, false>(31);
    /* System.Void set_WebPlayAsTouchInitialized(System.Boolean value) */
    inline static auto& m_set_WebPlayAsTouchInitialized = methods.get<true, false>(32);
    /* GameSessionData get_GameSessionData() */
    inline static auto& m_get_GameSessionData = methods.get<true, false>(33);
    /* System.Void set_GameSessionData(GameSessionData value) */
    inline static auto& m_set_GameSessionData = methods.get<true, false>(34);
    /* MV.Common.BuildTarget get_BuildTarget() */
    inline static auto& m_get_BuildTarget = methods.get<true, false>(35);
    /* System.Action get_OnFirstFrameUpdateActorReady() */
    inline static auto& m_get_OnFirstFrameUpdateActorReady = methods.get<true, false>(36);
    /* System.Void set_OnFirstFrameUpdateActorReady(System.Action value) */
    inline static auto& m_set_OnFirstFrameUpdateActorReady = methods.get<true, false>(37);
    /* System.Boolean get_OkToReAuth() */
    inline static auto& m_get_OkToReAuth = methods.get<true, false>(38);
    /* System.Int32 get_ReAuthTries() */
    inline static auto& m_get_ReAuthTries = methods.get<true, false>(39);
    /* System.Boolean get_UsingDevSessionData() */
    inline static auto& m_get_UsingDevSessionData = methods.get<true, false>(40);
    /* MVNetworkGame+OperationRequests get_OperationRequests() */
    inline static auto& m_get_OperationRequests = methods.get<true, false>(41);
    /* LoadStats get_LoadStats() */
    inline static auto& m_get_LoadStats = methods.get<true, false>(42);
    /* MV.Common.MVGameMode get_GameMode() */
    inline static auto& m_get_GameMode = methods.get<true, false>(43);
    /* MVWorldObjectClientManager get_WOCM() */
    inline static auto& m_get_WOCM = methods.get<true, false>(44);
    /* TimeReward get_TimeReward() */
    inline static auto& m_get_TimeReward = methods.get<true, false>(45);
    /* System.Boolean get_IsTouristSession() */
    inline static auto& m_get_IsTouristSession = methods.get<true, false>(46);
    /* Assets.Scripts.AdIntegration.IAdManager get_AdManager() */
    inline static auto& m_get_AdManager = methods.get<true, false>(47);
    /* Assets.Scripts.AdIntegration.IAdManager get_GetAdManager() */
    inline static auto& m_get_GetAdManager = methods.get<false, true>(48);
    /* System.Boolean get_SeekAdConsent() */
    inline static auto& m_get_SeekAdConsent = methods.get<true, false>(49);
    /* System.Void set_SeekAdConsent(System.Boolean value) */
    inline static auto& m_set_SeekAdConsent = methods.get<true, false>(50);
    /* MVJoinState get_JoinState() */
    inline static auto& m_get_JoinState = methods.get<true, false>(51);
    /* System.Void set_JoinState(MVJoinState value) */
    inline static auto& m_set_JoinState = methods.get<true, false>(52);
    /* System.Action`1<MVJoinState> get_OnJoinStateChanged() */
    inline static auto& m_get_OnJoinStateChanged = methods.get<true, false>(53);
    /* System.Void set_OnJoinStateChanged(System.Action`1<MVJoinState> value) */
    inline static auto& m_set_OnJoinStateChanged = methods.get<true, false>(54);
    /* System.Boolean get_IsPlayingInternal() */
    inline static auto& m_get_IsPlayingInternal = methods.get<false, true>(55);
    /* System.Boolean get_IsPlaying() */
    inline static auto& m_get_IsPlaying = methods.get<true, false>(56);
    /* MaterialLoader get_MaterialLoader() */
    inline static auto& m_get_MaterialLoader = methods.get<true, false>(57);
    /* MainCameraManager get_MainCameraManager() */
    inline static auto& m_get_MainCameraManager = methods.get<true, false>(58);
    /* WaterPlaneManager get_WaterPlaneManager() */
    inline static auto& m_get_WaterPlaneManager = methods.get<true, false>(59);
    /* SkyboxManager get_SkyboxManager() */
    inline static auto& m_get_SkyboxManager = methods.get<true, false>(60);
    /* Assets.Scripts.Subscription.SubscriberCooldownsManager get_SubscriberCooldownsManager() */
    inline static auto& m_get_SubscriberCooldownsManager = methods.get<true, false>(61);
    /* System.Void Awake() */
    inline static auto& m_Awake = methods.get<false, true>(62);
    /* System.Collections.IEnumerator InitRegionDependent() */
    inline static auto& m_InitRegionDependent = methods.get<false, false>(63);
    /* System.Void Start() */
    inline static auto& m_Start = methods.get<false, true>(64);
    /* System.Void OnDestroy() */
    inline static auto& m_OnDestroy = methods.get<false, true>(65);
    /* System.Void UnregisterPlayModeController() */
    inline static auto& m_UnregisterPlayModeController = methods.get<true, false>(66);
    /* System.Void Update() */
    inline static auto& m_Update = methods.get<false, false>(67);
    /* System.Void FixedUpdate() */
    inline static auto& m_FixedUpdate = methods.get<false, false>(68);
    /* System.Void LateUpdate() */
    inline static auto& m_LateUpdate = methods.get<false, true>(69);
    /* System.Void OnDrawGizmos() */
    inline static auto& m_OnDrawGizmos = methods.get<false, false>(70);
    /* System.Void OnRTGAppInitialize() */
    inline static auto& m_OnRTGAppInitialize = methods.get<false, false>(71);
    /* System.Void RegisterPlayModeController(ModeControllerBase playModeController) */
    inline static auto& m_RegisterPlayModeController = methods.get<true, false>(72);
    /* System.Void PostGameMsg(MV.Common.MVGameMsgType gameMsgType, System.Collections.Generic.Dictionary`2<System.Object, System.Object> gameMsgData) */
    inline static auto& m0_PostGameMsg = methods.get<true, false>(73);
    /* System.Void PostGameMsg(MV.Common.MVGameMsgType gameMsgType, System.String message) */
    inline static auto& m1_PostGameMsg = methods.get<true, false>(74);
    /* System.Void PostDestroyCleanup() */
    inline static auto& m_PostDestroyCleanup = methods.get<true, false>(75);
    /* System.Void UpdateControllerUpdate() */
    inline static auto& m_UpdateControllerUpdate = methods.get<false, true>(76);
    /* System.Void RegisterJoystickControllerStack(JoystickControllerStack joystickControllerStack) */
    inline static auto& m_RegisterJoystickControllerStack = methods.get<true, false>(77);
    /* System.Void PushJoystick(ControlType joystickType) */
    inline static auto& m_PushJoystick = methods.get<true, false>(78);
    /* System.Void PopJoystick() */
    inline static auto& m_PopJoystick = methods.get<true, false>(79);
    /* System.Void SetGameSessionData(GameSessionData gameSessionData) */
    inline static auto& m_SetGameSessionData = methods.get<true, false>(80);
    /* System.Boolean TryReauth() */
    inline static auto& m_TryReauth = methods.get<true, false>(81);
    /* System.Void ApplicationQuit(QuitBaseCallback applicationQuitObject) */
    inline static auto& m_ApplicationQuit = methods.get<true, false>(82);
    /* System.Void RegisterOverrideMaterials() */
    inline static auto& m_RegisterOverrideMaterials = methods.get<true, false>(83);
    /* System.Boolean SetWindowPos(System.IntPtr hwnd, System.Int32 hWndInsertAfter, System.Int32 x, System.Int32 Y, System.Int32 cx, System.Int32 cy, System.Int32 wFlags) */
    inline static auto& m_SetWindowPos = methods.get<true, false>(84);
    /* System.IntPtr FindWindow(System.String className, System.String windowName) */
    inline static auto& m_FindWindow = methods.get<true, false>(85);
    /* System.Void SetPosition(System.Int32 x, System.Int32 y, System.Int32 resX = 0, System.Int32 resY = 0) */
    inline static auto& m_SetPosition = methods.get<true, false>(86);
    /* System.Boolean get_Quitting() */
    inline static auto& m_get_Quitting = methods.get<true, false>(87);
    /* System.Void set_Quitting(System.Boolean value) */
    inline static auto& m_set_Quitting = methods.get<true, false>(88);
    /* System.Boolean get_LeavingEditPlayMode() */
    inline static auto& m_get_LeavingEditPlayMode = methods.get<true, false>(89);
    /* System.Void set_LeavingEditPlayMode(System.Boolean value) */
    inline static auto& m_set_LeavingEditPlayMode = methods.get<true, false>(90);
    /* System.Void OnApplicationQuit() */
    inline static auto& m_OnApplicationQuit = methods.get<false, false>(91);
    /* System.Void ShutDown() */
    inline static auto& m_ShutDown = methods.get<false, false>(92);
    /* System.Void HandleApplicationQuit(QuitBaseCallback quitBaseCallback) */
    inline static auto& m_HandleApplicationQuit = methods.get<false, true>(93);
    /* System.Void CleanUp() */
    inline static auto& m_CleanUp = methods.get<false, true>(94);
    /* System.Void CleanUpPortal() */
    inline static auto& m_CleanUpPortal = methods.get<false, false>(95);
    /* System.Void HandleQuitDisconnect() */
    inline static auto& m_HandleQuitDisconnect = methods.get<false, false>(96);
    /* System.Void AlternatePortTest() */
    inline static auto& m_AlternatePortTest = methods.get<false, false>(97);
    /* System.Void StartGame() */
    inline static auto& m_StartGame = methods.get<false, true>(98);
    /* System.Void InitWebGL(System.Boolean developmentMode) */
    inline static auto& m_InitWebGL = methods.get<false, true>(99);
    /* System.Void InitStandAlone(System.Boolean developmentMode) */
    inline static auto& m_InitStandAlone = methods.get<false, true>(100);
    /* System.Void OnReceivedReAuthWebParametersFromHttpRequest(UnityEngine.Networking.UnityWebRequest www) */
    inline static auto& m_OnReceivedReAuthWebParametersFromHttpRequest = methods.get<false, false>(101);
    /* System.Void OnReceivedSessionData(UnityEngine.Networking.UnityWebRequest www) */
    inline static auto& m_OnReceivedSessionData = methods.get<false, false>(102);
    /* System.Void UpdateInternal() */
    inline static auto& m_UpdateInternal = methods.get<false, true>(103);
    /* System.Void Initialize() */
    inline static auto& m_Initialize = methods.get<false, false>(104);
    /* System.Void HandleDebugShortCuts() */
    inline static auto& m_HandleDebugShortCuts = methods.get<false, false>(105);
    /* System.Void StartGameWithSessionData(System.Boolean ok, System.String sessionDataJson) */
    inline static auto& m_StartGameWithSessionData = methods.get<false, false>(106);
    /* System.Void ReceivedLoadStatsCallback(System.Boolean ok, System.String data) */
    inline static auto& m_ReceivedLoadStatsCallback = methods.get<false, false>(107);
    /* System.Void UpdateGame() */
    inline static auto& m_UpdateGame = methods.get<false, false>(108);
    /* System.Void DeleteScreenPlayerPrefs() */
    inline static auto& m_DeleteScreenPlayerPrefs = methods.get<true, false>(109);
    /* System.Void UpdateControllerLateUpdate() */
    inline static auto& m_UpdateControllerLateUpdate = methods.get<false, false>(110);
    /* System.Void ForceEmbedSite(System.String url) */
    inline static auto& m_ForceEmbedSite = methods.get<true, false>(111);
    /* System.Void TogglePlayerIndicators() */
    inline static auto& m_TogglePlayerIndicators = methods.get<true, false>(112);
    /* System.Void .ctor() */
    inline static auto& m__ctor = methods.get<false, false>(113);

    static void Init(::Tools::Il2Cpp::Metadata::MetadataRoot& metadataInfo);


};


struct GameSessionData {
	inline static ::Tools::Il2Cpp::Il2CppClass klass;
    inline static ::Tools::Il2Cpp::Metadata::array_field<49> fields;
inline static auto /* System.String */ &f_DataServerIP = fields.get<true>(0), /* System.String */ &f_DataProfileID = fields.get<true>(1), /* System.String */ &f_DataPlanetID = fields.get<true>(2), /* System.String */ &f_DataGameMode = fields.get<true>(3), /* System.String */ &f_DataLanguage = fields.get<true>(4), /* System.String */ &f_DataEmbedded = fields.get<true>(5), /* System.String */ &f_DataEmbeddedSite = fields.get<true>(6), /* System.String */ &f_DataToken = fields.get<true>(7), /* System.String */ &f_DataSessionToken = fields.get<true>(8), /* System.String */ &f_DataPlayButtonAdsEnabledDefault = fields.get<true>(9), /* System.String */ &f_DataBoostersEnabledDefault = fields.get<true>(10), /* System.String */ &f_DataInterstitialsAdsEnabledDefault = fields.get<true>(11), /* System.String */ &f_DataRewardedAdsEnabledDefault = fields.get<true>(12), /* System.String */ &f_DataSessionID = fields.get<true>(13), /* System.String */ &f_DataPlanetName = fields.get<true>(14), /* System.String */ &f_DataPlanetImageURL = fields.get<true>(15);
inline static auto /* System.String */ &f_serverIP = fields.get<false>(16), /* System.Int32 */ &f_profileID = fields.get<false>(17), /* System.Int32 */ &f_planetID = fields.get<false>(18), /* MV.Common.MVGameMode */ &f_gameMode = fields.get<false>(19), /* System.String */ &f_language = fields.get<false>(20), /* System.Boolean */ &f_embedded = fields.get<false>(21), /* System.String */ &f_embeddedSite = fields.get<false>(22), /* System.String */ &f_token = fields.get<false>(23), /* System.String */ &f_sessionToken = fields.get<false>(24), /* System.String */ &f_newPlanetName = fields.get<false>(25), /* System.String */ &f_planetName = fields.get<false>(26), /* System.String */ &f_planetImageURL = fields.get<false>(27), /* System.String */ &f_pingURL = fields.get<false>(28), /* System.String */ &f_disconnectURL = fields.get<false>(29), /* System.String */ &f_gameRewardURL = fields.get<false>(30), /* System.String */ &f_gamePublishedURL = fields.get<false>(31), /* System.String */ &f_purchaseGoldURL = fields.get<false>(32), /* System.String */ &f_loginURL = fields.get<false>(33), /* System.String */ &f_signupURL = fields.get<false>(34), /* System.String */ &f_idleURL = fields.get<false>(35), /* System.String */ &f_disconnectedURL = fields.get<false>(36), /* System.String */ &f_playerProfileURL = fields.get<false>(37), /* System.String */ &f_eliteUpgradeURL = fields.get<false>(38), /* System.String */ &f_region = fields.get<false>(39), /* System.String */ &f_ezKey = fields.get<false>(40), /* System.String */ &f_reauthURL = fields.get<false>(41), /* System.String */ &f_gameRewardDataURL = fields.get<false>(42), /* System.String */ &f_referrer = fields.get<false>(43), /* System.Boolean */ &f_detailedStats = fields.get<false>(44), /* System.Boolean */ &f_playButtonAdsEnabledDefault = fields.get<false>(45), /* System.Boolean */ &f_boostersEnabledDefault = fields.get<false>(46), /* System.Boolean */ &f_interstitialsAdsEnabledDefault = fields.get<false>(47), /* System.Boolean */ &f_rewardedAdsEnabledDefault = fields.get<false>(48);

    inline static ::Tools::Il2Cpp::Metadata::array_method<5> methods;
    /* System.Void .ctor() */
    inline static auto& m0__ctor = methods.get<false, false>(0);
    /* System.Void .ctor(System.Collections.Generic.Dictionary`2<System.String, System.Object> gameSessionData) */
    inline static auto& m1__ctor = methods.get<false, false>(1);
    /* System.Boolean GetIsRedirectAllowed() */
    inline static auto& m_GetIsRedirectAllowed = methods.get<false, false>(2);
    /* ExitGames.Client.Photon.ConnectionProtocol get_ConnectionProtocol() */
    inline static auto& m_get_ConnectionProtocol = methods.get<false, false>(3);
    /* System.String ToString() */
    inline static auto& m_ToString = methods.get<false, true>(4);

    static void Init(::Tools::Il2Cpp::Metadata::MetadataRoot& metadataInfo);


};


struct Application {
	inline static ::Tools::Il2Cpp::Il2CppClass klass;
    inline static ::Tools::Il2Cpp::Metadata::array_field<10> fields;
inline static auto /* UnityEngine.Application+LowMemoryCallback */ &f_lowMemory = fields.get<true>(0), /* UnityEngine.Application+MemoryUsageChangedCallback */ &f_memoryUsageChanged = fields.get<true>(1), /* UnityEngine.Application+LogCallback */ &f_s_LogCallbackHandler = fields.get<true>(2), /* UnityEngine.Application+LogCallback */ &f_s_LogCallbackHandlerThreaded = fields.get<true>(3), /* System.Action`1<System.Boolean> */ &f_focusChanged = fields.get<true>(4), /* System.Action`1<System.String> */ &f_deepLinkActivated = fields.get<true>(5), /* System.Func`1<System.Boolean> */ &f_wantsToQuit = fields.get<true>(6), /* System.Action */ &f_quitting = fields.get<true>(7), /* System.Action */ &f_unloading = fields.get<true>(8), /* System.Threading.CancellationTokenSource */ &f_s_currentCancellationTokenSource = fields.get<true>(9);

    inline static ::Tools::Il2Cpp::Metadata::array_method<32> methods;
    /* System.Void Quit(System.Int32 exitCode) */
    inline static auto& m0_Quit = methods.get<true, false>(0);
    /* System.Void Quit() */
    inline static auto& m1_Quit = methods.get<true, false>(1);
    /* System.Boolean get_isPlaying() */
    inline static auto& m_get_isPlaying = methods.get<true, false>(2);
    /* System.Boolean get_isFocused() */
    inline static auto& m_get_isFocused = methods.get<true, false>(3);
    /* System.Void set_runInBackground(System.Boolean value) */
    inline static auto& m_set_runInBackground = methods.get<true, false>(4);
    /* System.Boolean get_isBatchMode() */
    inline static auto& m_get_isBatchMode = methods.get<true, false>(5);
    /* System.String get_dataPath() */
    inline static auto& m_get_dataPath = methods.get<true, false>(6);
    /* System.String get_version() */
    inline static auto& m_get_version = methods.get<true, false>(7);
    /* System.Void OpenURL(System.String url) */
    inline static auto& m_OpenURL = methods.get<true, false>(8);
    /* System.Void set_targetFrameRate(System.Int32 value) */
    inline static auto& m_set_targetFrameRate = methods.get<true, false>(9);
    /* System.Void SetLogCallbackDefined(System.Boolean defined) */
    inline static auto& m_SetLogCallbackDefined = methods.get<true, false>(10);
    /* UnityEngine.RuntimePlatform get_platform() */
    inline static auto& m_get_platform = methods.get<true, false>(11);
    /* System.Void CallLowMemory(UnityEngine.ApplicationMemoryUsage usage) */
    inline static auto& m_CallLowMemory = methods.get<true, false>(12);
    /* System.Boolean HasLogCallback() */
    inline static auto& m_HasLogCallback = methods.get<true, false>(13);
    /* System.Void add_logMessageReceived(UnityEngine.Application+LogCallback value) */
    inline static auto& m_add_logMessageReceived = methods.get<true, false>(14);
    /* System.Void remove_logMessageReceived(UnityEngine.Application+LogCallback value) */
    inline static auto& m_remove_logMessageReceived = methods.get<true, false>(15);
    /* System.Void CallLogCallback(System.String logString, System.String stackTrace, UnityEngine.LogType type, System.Boolean invokedOnMainThread) */
    inline static auto& m_CallLogCallback = methods.get<true, false>(16);
    /* System.Void add_focusChanged(System.Action`1<System.Boolean> value) */
    inline static auto& m_add_focusChanged = methods.get<true, false>(17);
    /* System.Void remove_focusChanged(System.Action`1<System.Boolean> value) */
    inline static auto& m_remove_focusChanged = methods.get<true, false>(18);
    /* System.Boolean Internal_ApplicationWantsToQuit() */
    inline static auto& m_Internal_ApplicationWantsToQuit = methods.get<true, false>(19);
    /* System.Void Internal_InitializeExitCancellationToken() */
    inline static auto& m_Internal_InitializeExitCancellationToken = methods.get<true, false>(20);
    /* System.Void Internal_RaiseExitCancellationToken() */
    inline static auto& m_Internal_RaiseExitCancellationToken = methods.get<true, false>(21);
    /* System.Void Internal_ApplicationQuit() */
    inline static auto& m_Internal_ApplicationQuit = methods.get<true, false>(22);
    /* System.Void Internal_ApplicationUnload() */
    inline static auto& m_Internal_ApplicationUnload = methods.get<true, false>(23);
    /* System.Void InvokeOnBeforeRender() */
    inline static auto& m_InvokeOnBeforeRender = methods.get<true, false>(24);
    /* System.Void InvokeFocusChanged(System.Boolean focus) */
    inline static auto& m_InvokeFocusChanged = methods.get<true, false>(25);
    /* System.Void InvokeDeepLinkActivated(System.String url) */
    inline static auto& m_InvokeDeepLinkActivated = methods.get<true, false>(26);
    /* System.Boolean get_isEditor() */
    inline static auto& m_get_isEditor = methods.get<true, false>(27);
    /* System.Void .cctor() */
    inline static auto& m__cctor = methods.get<true, false>(28);
    /* System.Void get_dataPath_Injected(out UnityEngine.Bindings.ManagedSpanWrapper ret) */
    inline static auto& m_get_dataPath_Injected = methods.get<true, false>(29);
    /* System.Void get_version_Injected(out UnityEngine.Bindings.ManagedSpanWrapper ret) */
    inline static auto& m_get_version_Injected = methods.get<true, false>(30);
    /* System.Void OpenURL_Injected(ref UnityEngine.Bindings.ManagedSpanWrapper url) */
    inline static auto& m_OpenURL_Injected = methods.get<true, false>(31);

    static void Init(::Tools::Il2Cpp::Metadata::MetadataRoot& metadataInfo);


};


}