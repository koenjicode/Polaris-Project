// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ManaPlayer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAtomComponent;
class UManaComponent;
class UManaMovie;
class UManaPlaylist;
class UManaSource;
class UManaTexture;
enum class EManaComponentStatus : uint8;
enum class EManaPlayerTrack : uint8;
enum class EManaSubtitlesEncoding : uint8;
struct FManaEventPointInfo;
struct FManaPlayerOptions;
struct FTimespan;
#ifdef CRIWARERUNTIME_ManaPlayer_generated_h
#error "ManaPlayer.generated.h already included, missing '#pragma once' in ManaPlayer.h"
#endif
#define CRIWARERUNTIME_ManaPlayer_generated_h

#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlayer_h_29_DELEGATE \
static void FOnFrameUpdatedDelegate_DelegateWrapper(const FScriptDelegate& OnFrameUpdatedDelegate, int32 FrameNumber);


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlayer_h_27_SPARSE_DATA
#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlayer_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBindOnFrameUpdated); \
	DECLARE_FUNCTION(execClose); \
	DECLARE_FUNCTION(execDisableTrack); \
	DECLARE_FUNCTION(execGetDuration); \
	DECLARE_FUNCTION(execGetFrames); \
	DECLARE_FUNCTION(execGetMovieFrames); \
	DECLARE_FUNCTION(execGetMovieSource); \
	DECLARE_FUNCTION(execGetMovieTime); \
	DECLARE_FUNCTION(execGetNumTrackFormats); \
	DECLARE_FUNCTION(execGetNumTracks); \
	DECLARE_FUNCTION(execGetPlaylistIndex); \
	DECLARE_FUNCTION(execGetRate); \
	DECLARE_FUNCTION(execGetSelectedTrack); \
	DECLARE_FUNCTION(execGetStatus); \
	DECLARE_FUNCTION(execGetSubtitleTrackEncoding); \
	DECLARE_FUNCTION(execGetTexture); \
	DECLARE_FUNCTION(execGetTime); \
	DECLARE_FUNCTION(execGetTimeSyncedSource); \
	DECLARE_FUNCTION(execGetTrackDisplayName); \
	DECLARE_FUNCTION(execGetTrackFormat); \
	DECLARE_FUNCTION(execGetTrackLanguage); \
	DECLARE_FUNCTION(execGetVolume); \
	DECLARE_FUNCTION(execHandleManaComponentEventPoint); \
	DECLARE_FUNCTION(execHandleManaComponentFrameOnTime); \
	DECLARE_FUNCTION(execHandleManaComponentMovieChanged); \
	DECLARE_FUNCTION(execHandleManaComponentPlayerDestroyed); \
	DECLARE_FUNCTION(execHandleManaComponentSeekCompleted); \
	DECLARE_FUNCTION(execHandleManaComponentStatusChanged); \
	DECLARE_FUNCTION(execHandleManaComponentSubtitleChanged); \
	DECLARE_FUNCTION(execHasError); \
	DECLARE_FUNCTION(execIsClosed); \
	DECLARE_FUNCTION(execIsLooping); \
	DECLARE_FUNCTION(execIsPaused); \
	DECLARE_FUNCTION(execIsPlaying); \
	DECLARE_FUNCTION(execIsPreparing); \
	DECLARE_FUNCTION(execIsReady); \
	DECLARE_FUNCTION(execIsSeeking); \
	DECLARE_FUNCTION(execNext); \
	DECLARE_FUNCTION(execOpenMovieSource); \
	DECLARE_FUNCTION(execOpenPlaylist); \
	DECLARE_FUNCTION(execOpenPlaylistIndex); \
	DECLARE_FUNCTION(execOpenSourceWithOptions); \
	DECLARE_FUNCTION(execPause); \
	DECLARE_FUNCTION(execPlay); \
	DECLARE_FUNCTION(execPlayAndSeek); \
	DECLARE_FUNCTION(execPrevious); \
	DECLARE_FUNCTION(execReopen); \
	DECLARE_FUNCTION(execRewind); \
	DECLARE_FUNCTION(execSeek); \
	DECLARE_FUNCTION(execSelectTrack); \
	DECLARE_FUNCTION(execSetLooping); \
	DECLARE_FUNCTION(execSetRate); \
	DECLARE_FUNCTION(execSetTexture); \
	DECLARE_FUNCTION(execSetTimeSyncedSource); \
	DECLARE_FUNCTION(execSetTrackFormat); \
	DECLARE_FUNCTION(execSetVolume);


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlayer_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBindOnFrameUpdated); \
	DECLARE_FUNCTION(execClose); \
	DECLARE_FUNCTION(execDisableTrack); \
	DECLARE_FUNCTION(execGetDuration); \
	DECLARE_FUNCTION(execGetFrames); \
	DECLARE_FUNCTION(execGetMovieFrames); \
	DECLARE_FUNCTION(execGetMovieSource); \
	DECLARE_FUNCTION(execGetMovieTime); \
	DECLARE_FUNCTION(execGetNumTrackFormats); \
	DECLARE_FUNCTION(execGetNumTracks); \
	DECLARE_FUNCTION(execGetPlaylistIndex); \
	DECLARE_FUNCTION(execGetRate); \
	DECLARE_FUNCTION(execGetSelectedTrack); \
	DECLARE_FUNCTION(execGetStatus); \
	DECLARE_FUNCTION(execGetSubtitleTrackEncoding); \
	DECLARE_FUNCTION(execGetTexture); \
	DECLARE_FUNCTION(execGetTime); \
	DECLARE_FUNCTION(execGetTimeSyncedSource); \
	DECLARE_FUNCTION(execGetTrackDisplayName); \
	DECLARE_FUNCTION(execGetTrackFormat); \
	DECLARE_FUNCTION(execGetTrackLanguage); \
	DECLARE_FUNCTION(execGetVolume); \
	DECLARE_FUNCTION(execHandleManaComponentEventPoint); \
	DECLARE_FUNCTION(execHandleManaComponentFrameOnTime); \
	DECLARE_FUNCTION(execHandleManaComponentMovieChanged); \
	DECLARE_FUNCTION(execHandleManaComponentPlayerDestroyed); \
	DECLARE_FUNCTION(execHandleManaComponentSeekCompleted); \
	DECLARE_FUNCTION(execHandleManaComponentStatusChanged); \
	DECLARE_FUNCTION(execHandleManaComponentSubtitleChanged); \
	DECLARE_FUNCTION(execHasError); \
	DECLARE_FUNCTION(execIsClosed); \
	DECLARE_FUNCTION(execIsLooping); \
	DECLARE_FUNCTION(execIsPaused); \
	DECLARE_FUNCTION(execIsPlaying); \
	DECLARE_FUNCTION(execIsPreparing); \
	DECLARE_FUNCTION(execIsReady); \
	DECLARE_FUNCTION(execIsSeeking); \
	DECLARE_FUNCTION(execNext); \
	DECLARE_FUNCTION(execOpenMovieSource); \
	DECLARE_FUNCTION(execOpenPlaylist); \
	DECLARE_FUNCTION(execOpenPlaylistIndex); \
	DECLARE_FUNCTION(execOpenSourceWithOptions); \
	DECLARE_FUNCTION(execPause); \
	DECLARE_FUNCTION(execPlay); \
	DECLARE_FUNCTION(execPlayAndSeek); \
	DECLARE_FUNCTION(execPrevious); \
	DECLARE_FUNCTION(execReopen); \
	DECLARE_FUNCTION(execRewind); \
	DECLARE_FUNCTION(execSeek); \
	DECLARE_FUNCTION(execSelectTrack); \
	DECLARE_FUNCTION(execSetLooping); \
	DECLARE_FUNCTION(execSetRate); \
	DECLARE_FUNCTION(execSetTexture); \
	DECLARE_FUNCTION(execSetTimeSyncedSource); \
	DECLARE_FUNCTION(execSetTrackFormat); \
	DECLARE_FUNCTION(execSetVolume);


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlayer_h_27_ACCESSORS
#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlayer_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUManaPlayer(); \
	friend struct Z_Construct_UClass_UManaPlayer_Statics; \
public: \
	DECLARE_CLASS(UManaPlayer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CriWareRuntime"), NO_API) \
	DECLARE_SERIALIZER(UManaPlayer)


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlayer_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUManaPlayer(); \
	friend struct Z_Construct_UClass_UManaPlayer_Statics; \
public: \
	DECLARE_CLASS(UManaPlayer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CriWareRuntime"), NO_API) \
	DECLARE_SERIALIZER(UManaPlayer)


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlayer_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UManaPlayer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UManaPlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UManaPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UManaPlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UManaPlayer(UManaPlayer&&); \
	NO_API UManaPlayer(const UManaPlayer&); \
public: \
	NO_API virtual ~UManaPlayer();


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlayer_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UManaPlayer(UManaPlayer&&); \
	NO_API UManaPlayer(const UManaPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UManaPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UManaPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UManaPlayer) \
	NO_API virtual ~UManaPlayer();


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlayer_h_25_PROLOG
#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlayer_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlayer_h_27_SPARSE_DATA \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlayer_h_27_RPC_WRAPPERS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlayer_h_27_ACCESSORS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlayer_h_27_INCLASS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlayer_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlayer_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlayer_h_27_SPARSE_DATA \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlayer_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlayer_h_27_ACCESSORS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlayer_h_27_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlayer_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CRIWARERUNTIME_API UClass* StaticClass<class UManaPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
