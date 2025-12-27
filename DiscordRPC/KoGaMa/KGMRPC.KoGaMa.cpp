
#include "KGMRPC.KoGaMa.h"
#include <iostream>
using namespace Tools::Il2Cpp;
namespace KGMRPC::KoGaMa {
    void Init(::Tools::Il2Cpp::Metadata::MetadataInfo metadata) {
		auto klassData = metadata.klasses.Data;

        MVGameControllerBase::Init(klassData[0]);
GameSessionData::Init(klassData[1]);
Application::Init(klassData[2]);


        ::Tools::Il2Cpp::Metadata::Free(metadata);        
    }
    
    void MVGameControllerBase::Init(::Tools::Il2Cpp::Metadata::ClassDefinition& classdefinition) {
        #define getF(a,b) f_##a = klass.getField(#b)
#define getMi(a,i,token) m##i##_##a = klass.getMethodByToken( classdefinition.GetMethodToken(token))
#define getM(a,token) m_##a = klass.getMethodByToken(classdefinition.GetMethodToken(token))
klass = Il2CppClass("Assembly-CSharp.dll", "", "MVGameControllerBase");

if (klass.isNull()) {
return;
}
		klass.RuntimeInit();
getF(LevelingTestMode,LevelingTestMode);
getF(ClientShopInsideInventory,ClientShopInsideInventory);
getF(regionConfigManager,regionConfigManager);
getF(debugLogHandler,debugLogHandler);
getF(mainCameraManager,mainCameraManager);
getF(styles,styles);
getF(materialLoader,materialLoader);
getF(prefabPool,prefabPool);
getF(textureIntegrityChecker,textureIntegrityChecker);
getF(themeRepository,themeRepository);
getF(streamingAssetManager,streamingAssetManager);
getF(embeddedPlayerConfig,embeddedPlayerConfig);
getF(IsInitialized_k_BackingField,<IsInitialized>k__BackingField);
getF(DisconnectIsOk_k_BackingField,<DisconnectIsOk>k__BackingField);
getF(PlayModeUI_k_BackingField,<PlayModeUI>k__BackingField);
getF(EditModeUI_k_BackingField,<EditModeUI>k__BackingField);
getF(OnReceivedGameMsg,OnReceivedGameMsg);
getF(OnReceivedNotification,OnReceivedNotification);
getF(OnPostGameInit,OnPostGameInit);
getF(instance,instance);
getF(game,game);
getF(audioManager,audioManager);
getF(browserComm,browserComm);
getF(levelLoader,levelLoader);
getF(skinnedMeshOptimizeManager,skinnedMeshOptimizeManager);
getF(flagDebriefingControl,flagDebriefingControl);
getF(goldRewardManager,goldRewardManager);
getF(joystickControllerStack,joystickControllerStack);
getF(quitHasBeenCalled,quitHasBeenCalled);
getF(timeReward,timeReward);
getF(overrideMaterials,overrideMaterials);
getF(loadStats,loadStats);
getF(joinState,_joinState);
getF(firstFrameUpdateActorReady,firstFrameUpdateActorReady);
getF(reAuthTestTries,reAuthTestTries);
getF(modeController,modeController);
getF(WebPlayAsTouch_k_BackingField,<WebPlayAsTouch>k__BackingField);
getF(PortalUI_k_BackingField,<PortalUI>k__BackingField);
getF(ShuttingDown_k_BackingField,<ShuttingDown>k__BackingField);
getF(WebPlayAsTouchInitialized_k_BackingField,<WebPlayAsTouchInitialized>k__BackingField);
getF(GameSessionData_k_BackingField,<GameSessionData>k__BackingField);
getF(onJoinStateChanged,onJoinStateChanged);
getF(SeekAdConsent_k_BackingField,<SeekAdConsent>k__BackingField);
getF(audioBuild,audioBuild);
getF(waterPlaneManagerPrefab,waterPlaneManagerPrefab);
getF(waterPlaneManager,waterPlaneManager);
getF(skyboxManager,skyboxManager);
getF(subscriberCooldownsManager,subscriberCooldownsManager);
getF(Quitting_k_BackingField,<Quitting>k__BackingField);
getF(LeavingEditPlayMode_k_BackingField,<LeavingEditPlayMode>k__BackingField);

		getM(get_SpawnRoleDataMediatorLocal,0);
getM(get_LocalPlayer,1);
getM(get_GameEventManager,2);
getM(IsInCorrectInventory,3);
getM(get_IsInitialized,4);
getM(set_IsInitialized,5);
getM(get_DisconnectIsOk,6);
getM(set_DisconnectIsOk,7);
getM(get_PlayModeUI,8);
getM(set_PlayModeUI,9);
getM(get_EditModeUI,10);
getM(set_EditModeUI,11);
getM(get_IsAlive,12);
getM(get_Game,13);
getM(get_AudioManager,14);
getM(get_BrowserComm,15);
getM(get_LevelLoader,16);
getM(get_SkinnedMeshOptimizeManager,17);
getM(get_FlagDebriefingControl,18);
getM(get_GoldRewardManager,19);
getM(get_TextureIntegrityChecker,20);
getM(get_StreamingAssetManager,21);
getM(get_EmbeddedPlayerConfig,22);
getM(get_RegionConfig,23);
getM(get_StaticAssetsConfig,24);
getM(get_WebPlayAsTouch,25);
getM(set_WebPlayAsTouch,26);
getM(get_PortalUI,27);
getM(set_PortalUI,28);
getM(get_ShuttingDown,29);
getM(set_ShuttingDown,30);
getM(get_WebPlayAsTouchInitialized,31);
getM(set_WebPlayAsTouchInitialized,32);
getM(get_GameSessionData,33);
getM(set_GameSessionData,34);
getM(get_BuildTarget,35);
getM(get_OnFirstFrameUpdateActorReady,36);
getM(set_OnFirstFrameUpdateActorReady,37);
getM(get_OkToReAuth,38);
getM(get_ReAuthTries,39);
getM(get_UsingDevSessionData,40);
getM(get_OperationRequests,41);
getM(get_LoadStats,42);
getM(get_GameMode,43);
getM(get_WOCM,44);
getM(get_TimeReward,45);
getM(get_IsTouristSession,46);
getM(get_AdManager,47);
getM(get_GetAdManager,48);
getM(get_SeekAdConsent,49);
getM(set_SeekAdConsent,50);
getM(get_JoinState,51);
getM(set_JoinState,52);
getM(get_OnJoinStateChanged,53);
getM(set_OnJoinStateChanged,54);
getM(get_IsPlayingInternal,55);
getM(get_IsPlaying,56);
getM(get_MaterialLoader,57);
getM(get_MainCameraManager,58);
getM(get_WaterPlaneManager,59);
getM(get_SkyboxManager,60);
getM(get_SubscriberCooldownsManager,61);
getM(Awake,62);
getM(InitRegionDependent,63);
getM(Start,64);
getM(OnDestroy,65);
getM(UnregisterPlayModeController,66);
getM(Update,67);
getM(FixedUpdate,68);
getM(LateUpdate,69);
getM(OnDrawGizmos,70);
getM(OnRTGAppInitialize,71);
getM(RegisterPlayModeController,72);
getMi(PostGameMsg,0,73);
getMi(PostGameMsg,1,74);
getM(PostDestroyCleanup,75);
getM(UpdateControllerUpdate,76);
getM(RegisterJoystickControllerStack,77);
getM(PushJoystick,78);
getM(PopJoystick,79);
getM(SetGameSessionData,80);
getM(TryReauth,81);
getM(ApplicationQuit,82);
getM(RegisterOverrideMaterials,83);
getM(SetWindowPos,84);
getM(FindWindow,85);
getM(SetPosition,86);
getM(get_Quitting,87);
getM(set_Quitting,88);
getM(get_LeavingEditPlayMode,89);
getM(set_LeavingEditPlayMode,90);
getM(OnApplicationQuit,91);
getM(ShutDown,92);
getM(HandleApplicationQuit,93);
getM(CleanUp,94);
getM(CleanUpPortal,95);
getM(HandleQuitDisconnect,96);
getM(AlternatePortTest,97);
getM(StartGame,98);
getM(InitWebGL,99);
getM(InitStandAlone,100);
getM(OnReceivedReAuthWebParametersFromHttpRequest,101);
getM(OnReceivedSessionData,102);
getM(UpdateInternal,103);
getM(Initialize,104);
getM(HandleDebugShortCuts,105);
getM(StartGameWithSessionData,106);
getM(ReceivedLoadStatsCallback,107);
getM(UpdateGame,108);
getM(DeleteScreenPlayerPrefs,109);
getM(UpdateControllerLateUpdate,110);
getM(ForceEmbedSite,111);
getM(TogglePlayerIndicators,112);
getM(ctor,113);

#undef getF
#undef getM
#undef getMi
    }

    void GameSessionData::Init(::Tools::Il2Cpp::Metadata::ClassDefinition& classdefinition) {
        #define getF(a,b) f_##a = klass.getField(#b)
#define getMi(a,i,token) m##i##_##a = klass.getMethodByToken( classdefinition.GetMethodToken(token))
#define getM(a,token) m_##a = klass.getMethodByToken(classdefinition.GetMethodToken(token))
klass = Il2CppClass("Assembly-CSharp.dll", "", "GameSessionData");

if (klass.isNull()) {
return;
}
		klass.RuntimeInit();
getF(DataServerIP,DataServerIP);
getF(DataProfileID,DataProfileID);
getF(DataPlanetID,DataPlanetID);
getF(DataGameMode,DataGameMode);
getF(DataLanguage,DataLanguage);
getF(DataEmbedded,DataEmbedded);
getF(DataEmbeddedSite,DataEmbeddedSite);
getF(DataToken,DataToken);
getF(DataSessionToken,DataSessionToken);
getF(DataPlayButtonAdsEnabledDefault,DataPlayButtonAdsEnabledDefault);
getF(DataBoostersEnabledDefault,DataBoostersEnabledDefault);
getF(DataInterstitialsAdsEnabledDefault,DataInterstitialsAdsEnabledDefault);
getF(DataRewardedAdsEnabledDefault,DataRewardedAdsEnabledDefault);
getF(DataSessionID,DataSessionID);
getF(DataPlanetName,DataPlanetName);
getF(DataPlanetImageURL,DataPlanetImageURL);
getF(serverIP,serverIP);
getF(profileID,profileID);
getF(planetID,planetID);
getF(gameMode,gameMode);
getF(language,language);
getF(embedded,embedded);
getF(embeddedSite,embeddedSite);
getF(token,token);
getF(sessionToken,sessionToken);
getF(newPlanetName,newPlanetName);
getF(planetName,planetName);
getF(planetImageURL,planetImageURL);
getF(pingURL,pingURL);
getF(disconnectURL,disconnectURL);
getF(gameRewardURL,gameRewardURL);
getF(gamePublishedURL,gamePublishedURL);
getF(purchaseGoldURL,purchaseGoldURL);
getF(loginURL,loginURL);
getF(signupURL,signupURL);
getF(idleURL,idleURL);
getF(disconnectedURL,disconnectedURL);
getF(playerProfileURL,playerProfileURL);
getF(eliteUpgradeURL,eliteUpgradeURL);
getF(region,region);
getF(ezKey,ezKey);
getF(reauthURL,reauthURL);
getF(gameRewardDataURL,gameRewardDataURL);
getF(referrer,referrer);
getF(detailedStats,detailedStats);
getF(playButtonAdsEnabledDefault,playButtonAdsEnabledDefault);
getF(boostersEnabledDefault,boostersEnabledDefault);
getF(interstitialsAdsEnabledDefault,interstitialsAdsEnabledDefault);
getF(rewardedAdsEnabledDefault,rewardedAdsEnabledDefault);

		getMi(ctor,0,0);
getMi(ctor,1,1);
getM(GetIsRedirectAllowed,2);
getM(get_ConnectionProtocol,3);
getM(ToString,4);

#undef getF
#undef getM
#undef getMi
    }

    void Application::Init(::Tools::Il2Cpp::Metadata::ClassDefinition& classdefinition) {
        #define getF(a,b) f_##a = klass.getField(#b)
#define getMi(a,i,token) m##i##_##a = klass.getMethodByToken( classdefinition.GetMethodToken(token))
#define getM(a,token) m_##a = klass.getMethodByToken(classdefinition.GetMethodToken(token))
klass = Il2CppClass("UnityEngine.CoreModule.dll", "UnityEngine", "Application");

if (klass.isNull()) {
return;
}
		klass.RuntimeInit();
getF(lowMemory,lowMemory);
getF(memoryUsageChanged,memoryUsageChanged);
getF(s_LogCallbackHandler,s_LogCallbackHandler);
getF(s_LogCallbackHandlerThreaded,s_LogCallbackHandlerThreaded);
getF(focusChanged,focusChanged);
getF(deepLinkActivated,deepLinkActivated);
getF(wantsToQuit,wantsToQuit);
getF(quitting,quitting);
getF(unloading,unloading);
getF(s_currentCancellationTokenSource,s_currentCancellationTokenSource);

		getMi(Quit,0,0);
getMi(Quit,1,1);
getM(get_isPlaying,2);
getM(get_isFocused,3);
getM(set_runInBackground,4);
getM(get_isBatchMode,5);
getM(get_dataPath,6);
getM(get_version,7);
getM(OpenURL,8);
getM(set_targetFrameRate,9);
getM(SetLogCallbackDefined,10);
getM(get_platform,11);
getM(CallLowMemory,12);
getM(HasLogCallback,13);
getM(add_logMessageReceived,14);
getM(remove_logMessageReceived,15);
getM(CallLogCallback,16);
getM(add_focusChanged,17);
getM(remove_focusChanged,18);
getM(Internal_ApplicationWantsToQuit,19);
getM(Internal_InitializeExitCancellationToken,20);
getM(Internal_RaiseExitCancellationToken,21);
getM(Internal_ApplicationQuit,22);
getM(Internal_ApplicationUnload,23);
getM(InvokeOnBeforeRender,24);
getM(InvokeFocusChanged,25);
getM(InvokeDeepLinkActivated,26);
getM(get_isEditor,27);
getM(cctor,28);
getM(get_dataPath_Injected,29);
getM(get_version_Injected,30);
getM(OpenURL_Injected,31);

#undef getF
#undef getM
#undef getMi
    }


}

