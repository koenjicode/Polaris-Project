// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ManaComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UManaComponent;
class UManaMovie;
class UManaTexture;
enum class EAtomSpeakerID : uint8;
enum class EManaComponentStatus : uint8;
enum class EManaFrameAction : uint8;
enum class EManaMaxFrameDrop : uint8;
enum class EManaPlaybackTimer : uint8;
enum class EManaSubtitlesEncoding : uint8;
struct FManaEventPointInfo;
struct FTimespan;
#ifdef CRIWARERUNTIME_ManaComponent_generated_h
#error "ManaComponent.generated.h already included, missing '#pragma once' in ManaComponent.h"
#endif
#define CRIWARERUNTIME_ManaComponent_generated_h

#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaComponent_h_23_DELEGATE \
static void FOnTrackChanged_DelegateWrapper(const FMulticastScriptDelegate& OnTrackChanged, int32 TrackNumber, UManaComponent* ManaComponent);


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaComponent_h_24_DELEGATE \
static void FOnSubtitleChanged_DelegateWrapper(const FMulticastScriptDelegate& OnSubtitleChanged, const FText& Subtitle);


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaComponent_h_25_DELEGATE \
static void FOnStatusChanged_DelegateWrapper(const FMulticastScriptDelegate& OnStatusChanged, EManaComponentStatus Status, UManaComponent* ManaComponent);


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaComponent_h_26_DELEGATE \
static void FOnSeekCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnSeekCompleted, int32 FrameNumber, UManaComponent* ManaComponent);


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaComponent_h_27_DELEGATE \
static void FOnRequestData_DelegateWrapper(const FScriptDelegate& OnRequestData, UManaComponent* ManaComponent);


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaComponent_h_28_DELEGATE \
static void FOnPlayerDestroyed_DelegateWrapper(const FMulticastScriptDelegate& OnPlayerDestroyed, UManaComponent* ManaComponent);


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaComponent_h_29_DELEGATE \
static void FOnMovieChanged_DelegateWrapper(const FMulticastScriptDelegate& OnMovieChanged, UManaMovie* Movie, UManaComponent* ManaComponent);


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaComponent_h_30_DELEGATE \
static void FOnFrameOnTime_DelegateWrapper(const FMulticastScriptDelegate& OnFrameOnTime, int32 FrameNumber, UManaComponent* ManaComponent);


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaComponent_h_31_DELEGATE \
static void FOnEventPoint_DelegateWrapper(const FMulticastScriptDelegate& OnEventPoint, FManaEventPointInfo EventPointInfo);


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaComponent_h_21_SPARSE_DATA
#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaComponent_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAdvanceTime); \
	DECLARE_FUNCTION(execChangeSubtitlesChannel); \
	DECLARE_FUNCTION(execChangeSubtitlesEncoding); \
	DECLARE_FUNCTION(execEnableSeamless); \
	DECLARE_FUNCTION(execEnableSubtitles); \
	DECLARE_FUNCTION(execGetExtraVolume); \
	DECLARE_FUNCTION(execGetFrameNumber); \
	DECLARE_FUNCTION(execGetMovieTime); \
	DECLARE_FUNCTION(execGetPosition); \
	DECLARE_FUNCTION(execGetSource); \
	DECLARE_FUNCTION(execGetStatus); \
	DECLARE_FUNCTION(execGetSubVolume); \
	DECLARE_FUNCTION(execGetTexture); \
	DECLARE_FUNCTION(execGetTime); \
	DECLARE_FUNCTION(execGetVolume); \
	DECLARE_FUNCTION(execIsLooping); \
	DECLARE_FUNCTION(execIsPaused); \
	DECLARE_FUNCTION(execIsPlaying); \
	DECLARE_FUNCTION(execIsPreparing); \
	DECLARE_FUNCTION(execIsReady); \
	DECLARE_FUNCTION(execLoop); \
	DECLARE_FUNCTION(execNext); \
	DECLARE_FUNCTION(execPause); \
	DECLARE_FUNCTION(execPlay); \
	DECLARE_FUNCTION(execPrepare); \
	DECLARE_FUNCTION(execPreparePlaylistIndex); \
	DECLARE_FUNCTION(execPrevious); \
	DECLARE_FUNCTION(execRemoveAudioCategory); \
	DECLARE_FUNCTION(execRemoveExtraAudioCategory); \
	DECLARE_FUNCTION(execRemoveSubAudioCategory); \
	DECLARE_FUNCTION(execSeek); \
	DECLARE_FUNCTION(execSeekToPosition); \
	DECLARE_FUNCTION(execSetAlphaTrack); \
	DECLARE_FUNCTION(execSetAudioCategory); \
	DECLARE_FUNCTION(execSetAudioTrack); \
	DECLARE_FUNCTION(execSetEndFrameAction); \
	DECLARE_FUNCTION(execSetExtraAudioCategory); \
	DECLARE_FUNCTION(execSetExtraAudioTrack); \
	DECLARE_FUNCTION(execSetExtraVolume); \
	DECLARE_FUNCTION(execSetFile); \
	DECLARE_FUNCTION(execSetMaxDropFrames); \
	DECLARE_FUNCTION(execSetMovie); \
	DECLARE_FUNCTION(execSetPlaybackTimer); \
	DECLARE_FUNCTION(execSetSubAudioCategory); \
	DECLARE_FUNCTION(execSetSubAudioSendLevel); \
	DECLARE_FUNCTION(execSetSubAudioTrack); \
	DECLARE_FUNCTION(execSetSubVolume); \
	DECLARE_FUNCTION(execSetTexture); \
	DECLARE_FUNCTION(execSetVolume); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execToIndex);


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaComponent_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAdvanceTime); \
	DECLARE_FUNCTION(execChangeSubtitlesChannel); \
	DECLARE_FUNCTION(execChangeSubtitlesEncoding); \
	DECLARE_FUNCTION(execEnableSeamless); \
	DECLARE_FUNCTION(execEnableSubtitles); \
	DECLARE_FUNCTION(execGetExtraVolume); \
	DECLARE_FUNCTION(execGetFrameNumber); \
	DECLARE_FUNCTION(execGetMovieTime); \
	DECLARE_FUNCTION(execGetPosition); \
	DECLARE_FUNCTION(execGetSource); \
	DECLARE_FUNCTION(execGetStatus); \
	DECLARE_FUNCTION(execGetSubVolume); \
	DECLARE_FUNCTION(execGetTexture); \
	DECLARE_FUNCTION(execGetTime); \
	DECLARE_FUNCTION(execGetVolume); \
	DECLARE_FUNCTION(execIsLooping); \
	DECLARE_FUNCTION(execIsPaused); \
	DECLARE_FUNCTION(execIsPlaying); \
	DECLARE_FUNCTION(execIsPreparing); \
	DECLARE_FUNCTION(execIsReady); \
	DECLARE_FUNCTION(execLoop); \
	DECLARE_FUNCTION(execNext); \
	DECLARE_FUNCTION(execPause); \
	DECLARE_FUNCTION(execPlay); \
	DECLARE_FUNCTION(execPrepare); \
	DECLARE_FUNCTION(execPreparePlaylistIndex); \
	DECLARE_FUNCTION(execPrevious); \
	DECLARE_FUNCTION(execRemoveAudioCategory); \
	DECLARE_FUNCTION(execRemoveExtraAudioCategory); \
	DECLARE_FUNCTION(execRemoveSubAudioCategory); \
	DECLARE_FUNCTION(execSeek); \
	DECLARE_FUNCTION(execSeekToPosition); \
	DECLARE_FUNCTION(execSetAlphaTrack); \
	DECLARE_FUNCTION(execSetAudioCategory); \
	DECLARE_FUNCTION(execSetAudioTrack); \
	DECLARE_FUNCTION(execSetEndFrameAction); \
	DECLARE_FUNCTION(execSetExtraAudioCategory); \
	DECLARE_FUNCTION(execSetExtraAudioTrack); \
	DECLARE_FUNCTION(execSetExtraVolume); \
	DECLARE_FUNCTION(execSetFile); \
	DECLARE_FUNCTION(execSetMaxDropFrames); \
	DECLARE_FUNCTION(execSetMovie); \
	DECLARE_FUNCTION(execSetPlaybackTimer); \
	DECLARE_FUNCTION(execSetSubAudioCategory); \
	DECLARE_FUNCTION(execSetSubAudioSendLevel); \
	DECLARE_FUNCTION(execSetSubAudioTrack); \
	DECLARE_FUNCTION(execSetSubVolume); \
	DECLARE_FUNCTION(execSetTexture); \
	DECLARE_FUNCTION(execSetVolume); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execToIndex);


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaComponent_h_21_ACCESSORS
#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaComponent_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUManaComponent(); \
	friend struct Z_Construct_UClass_UManaComponent_Statics; \
public: \
	DECLARE_CLASS(UManaComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CriWareRuntime"), NO_API) \
	DECLARE_SERIALIZER(UManaComponent)


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaComponent_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUManaComponent(); \
	friend struct Z_Construct_UClass_UManaComponent_Statics; \
public: \
	DECLARE_CLASS(UManaComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CriWareRuntime"), NO_API) \
	DECLARE_SERIALIZER(UManaComponent)


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaComponent_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UManaComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UManaComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UManaComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UManaComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UManaComponent(UManaComponent&&); \
	NO_API UManaComponent(const UManaComponent&); \
public: \
	NO_API virtual ~UManaComponent();


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaComponent_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UManaComponent(UManaComponent&&); \
	NO_API UManaComponent(const UManaComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UManaComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UManaComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UManaComponent) \
	NO_API virtual ~UManaComponent();


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaComponent_h_19_PROLOG
#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaComponent_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaComponent_h_21_SPARSE_DATA \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaComponent_h_21_RPC_WRAPPERS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaComponent_h_21_ACCESSORS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaComponent_h_21_INCLASS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaComponent_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaComponent_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaComponent_h_21_SPARSE_DATA \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaComponent_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaComponent_h_21_ACCESSORS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaComponent_h_21_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaComponent_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CRIWARERUNTIME_API UClass* StaticClass<class UManaComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
