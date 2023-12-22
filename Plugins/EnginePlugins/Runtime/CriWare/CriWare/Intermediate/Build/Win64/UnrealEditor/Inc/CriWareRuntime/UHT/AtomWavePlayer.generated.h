// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AtomWavePlayer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USoundAtomCue;
enum class EAtomWavePlayState : uint8;
struct FAtomWaveInfo;
struct FTimespan;
#ifdef CRIWARERUNTIME_AtomWavePlayer_generated_h
#error "AtomWavePlayer.generated.h already included, missing '#pragma once' in AtomWavePlayer.h"
#endif
#define CRIWARERUNTIME_AtomWavePlayer_generated_h

#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomWavePlayer_h_15_SPARSE_DATA
#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomWavePlayer_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAdjustVolume); \
	DECLARE_FUNCTION(execGetCue); \
	DECLARE_FUNCTION(execGetPlayState); \
	DECLARE_FUNCTION(execGetTime); \
	DECLARE_FUNCTION(execGetWaveInfo); \
	DECLARE_FUNCTION(execHasError); \
	DECLARE_FUNCTION(execIsLooping); \
	DECLARE_FUNCTION(execIsPaused); \
	DECLARE_FUNCTION(execIsPlaying); \
	DECLARE_FUNCTION(execPlay); \
	DECLARE_FUNCTION(execSetLooping); \
	DECLARE_FUNCTION(execSetPaused); \
	DECLARE_FUNCTION(execSetWave); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execStopDelayed);


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomWavePlayer_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAdjustVolume); \
	DECLARE_FUNCTION(execGetCue); \
	DECLARE_FUNCTION(execGetPlayState); \
	DECLARE_FUNCTION(execGetTime); \
	DECLARE_FUNCTION(execGetWaveInfo); \
	DECLARE_FUNCTION(execHasError); \
	DECLARE_FUNCTION(execIsLooping); \
	DECLARE_FUNCTION(execIsPaused); \
	DECLARE_FUNCTION(execIsPlaying); \
	DECLARE_FUNCTION(execPlay); \
	DECLARE_FUNCTION(execSetLooping); \
	DECLARE_FUNCTION(execSetPaused); \
	DECLARE_FUNCTION(execSetWave); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execStopDelayed);


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomWavePlayer_h_15_ACCESSORS
#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomWavePlayer_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAtomWavePlayer(); \
	friend struct Z_Construct_UClass_UAtomWavePlayer_Statics; \
public: \
	DECLARE_CLASS(UAtomWavePlayer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CriWareRuntime"), NO_API) \
	DECLARE_SERIALIZER(UAtomWavePlayer)


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomWavePlayer_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUAtomWavePlayer(); \
	friend struct Z_Construct_UClass_UAtomWavePlayer_Statics; \
public: \
	DECLARE_CLASS(UAtomWavePlayer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CriWareRuntime"), NO_API) \
	DECLARE_SERIALIZER(UAtomWavePlayer)


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomWavePlayer_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAtomWavePlayer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAtomWavePlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAtomWavePlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtomWavePlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAtomWavePlayer(UAtomWavePlayer&&); \
	NO_API UAtomWavePlayer(const UAtomWavePlayer&); \
public: \
	NO_API virtual ~UAtomWavePlayer();


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomWavePlayer_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAtomWavePlayer(UAtomWavePlayer&&); \
	NO_API UAtomWavePlayer(const UAtomWavePlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAtomWavePlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtomWavePlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAtomWavePlayer) \
	NO_API virtual ~UAtomWavePlayer();


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomWavePlayer_h_13_PROLOG
#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomWavePlayer_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomWavePlayer_h_15_SPARSE_DATA \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomWavePlayer_h_15_RPC_WRAPPERS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomWavePlayer_h_15_ACCESSORS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomWavePlayer_h_15_INCLASS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomWavePlayer_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomWavePlayer_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomWavePlayer_h_15_SPARSE_DATA \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomWavePlayer_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomWavePlayer_h_15_ACCESSORS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomWavePlayer_h_15_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomWavePlayer_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CRIWARERUNTIME_API UClass* StaticClass<class UAtomWavePlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomWavePlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
