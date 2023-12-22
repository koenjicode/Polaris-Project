// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AtomStatics.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AAtomAudioVolume;
class UAtom3dRegion;
class UAtomComponent;
class UObject;
class USceneComponent;
class USoundAtomConfig;
class USoundAtomCue;
class USoundAtomCueSheet;
class USoundAttenuation;
class USoundConcurrency;
enum class EAtomAudioVolumeType : uint8;
struct FAtomComponentParams;
struct FAtomListenerFocusPointInfo;
#ifdef CRIWARERUNTIME_AtomStatics_generated_h
#error "AtomStatics.generated.h already included, missing '#pragma once' in AtomStatics.h"
#endif
#define CRIWARERUNTIME_AtomStatics_generated_h

#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomStatics_h_26_SPARSE_DATA
#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomStatics_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddToAtomComponentIds); \
	DECLARE_FUNCTION(execCreateRootedAtomComponent); \
	DECLARE_FUNCTION(execGetAtomGameVariable); \
	DECLARE_FUNCTION(execGetAudioVolumeAffectingListener); \
	DECLARE_FUNCTION(execGetListenerFocusPointInfo); \
	DECLARE_FUNCTION(execGetListenerRegion); \
	DECLARE_FUNCTION(execGetListeningPoint); \
	DECLARE_FUNCTION(execLoadAtomConfig); \
	DECLARE_FUNCTION(execPauseAudioOutput); \
	DECLARE_FUNCTION(execPlayAtomSoundAtLocation); \
	DECLARE_FUNCTION(execPlayAtomSoundAtLocationByName); \
	DECLARE_FUNCTION(execPlayAtomSoundForAnimNotify); \
	DECLARE_FUNCTION(execPlaySoundAtLocation); \
	DECLARE_FUNCTION(execPlaySoundAttached); \
	DECLARE_FUNCTION(execPlaySoundForAnimNotify); \
	DECLARE_FUNCTION(execSetAtomGameVariable); \
	DECLARE_FUNCTION(execSetListenerFocusPointDirectionLevel); \
	DECLARE_FUNCTION(execSetListenerFocusPointDistanceLevel); \
	DECLARE_FUNCTION(execSetListenerFocusPointInfo); \
	DECLARE_FUNCTION(execSetListenerFocusPointTargetActor); \
	DECLARE_FUNCTION(execSetListenerFocusPointTargetComponent); \
	DECLARE_FUNCTION(execSetListenerRegion); \
	DECLARE_FUNCTION(execSpawnAtomSound2D); \
	DECLARE_FUNCTION(execSpawnAtomSound2DByName); \
	DECLARE_FUNCTION(execSpawnAtomSoundAtLocation); \
	DECLARE_FUNCTION(execSpawnAtomSoundAtLocationByName); \
	DECLARE_FUNCTION(execSpawnAtomSoundAttached); \
	DECLARE_FUNCTION(execSpawnAtomSoundAttachedByName); \
	DECLARE_FUNCTION(execSpawnSound2D); \
	DECLARE_FUNCTION(execSpawnSoundAtLocation); \
	DECLARE_FUNCTION(execSpawnSoundAttached); \
	DECLARE_FUNCTION(execStopAllSounds); \
	DECLARE_FUNCTION(execStopAllSoundsForKeyFromAtomComponentIds); \
	DECLARE_FUNCTION(execUpdateDistanceFactorForAllSounds);


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomStatics_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddToAtomComponentIds); \
	DECLARE_FUNCTION(execCreateRootedAtomComponent); \
	DECLARE_FUNCTION(execGetAtomGameVariable); \
	DECLARE_FUNCTION(execGetAudioVolumeAffectingListener); \
	DECLARE_FUNCTION(execGetListenerFocusPointInfo); \
	DECLARE_FUNCTION(execGetListenerRegion); \
	DECLARE_FUNCTION(execGetListeningPoint); \
	DECLARE_FUNCTION(execLoadAtomConfig); \
	DECLARE_FUNCTION(execPauseAudioOutput); \
	DECLARE_FUNCTION(execPlayAtomSoundAtLocation); \
	DECLARE_FUNCTION(execPlayAtomSoundAtLocationByName); \
	DECLARE_FUNCTION(execPlayAtomSoundForAnimNotify); \
	DECLARE_FUNCTION(execPlaySoundAtLocation); \
	DECLARE_FUNCTION(execPlaySoundAttached); \
	DECLARE_FUNCTION(execPlaySoundForAnimNotify); \
	DECLARE_FUNCTION(execSetAtomGameVariable); \
	DECLARE_FUNCTION(execSetListenerFocusPointDirectionLevel); \
	DECLARE_FUNCTION(execSetListenerFocusPointDistanceLevel); \
	DECLARE_FUNCTION(execSetListenerFocusPointInfo); \
	DECLARE_FUNCTION(execSetListenerFocusPointTargetActor); \
	DECLARE_FUNCTION(execSetListenerFocusPointTargetComponent); \
	DECLARE_FUNCTION(execSetListenerRegion); \
	DECLARE_FUNCTION(execSpawnAtomSound2D); \
	DECLARE_FUNCTION(execSpawnAtomSound2DByName); \
	DECLARE_FUNCTION(execSpawnAtomSoundAtLocation); \
	DECLARE_FUNCTION(execSpawnAtomSoundAtLocationByName); \
	DECLARE_FUNCTION(execSpawnAtomSoundAttached); \
	DECLARE_FUNCTION(execSpawnAtomSoundAttachedByName); \
	DECLARE_FUNCTION(execSpawnSound2D); \
	DECLARE_FUNCTION(execSpawnSoundAtLocation); \
	DECLARE_FUNCTION(execSpawnSoundAttached); \
	DECLARE_FUNCTION(execStopAllSounds); \
	DECLARE_FUNCTION(execStopAllSoundsForKeyFromAtomComponentIds); \
	DECLARE_FUNCTION(execUpdateDistanceFactorForAllSounds);


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomStatics_h_26_ACCESSORS
#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomStatics_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAtomStatics(); \
	friend struct Z_Construct_UClass_UAtomStatics_Statics; \
public: \
	DECLARE_CLASS(UAtomStatics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CriWareRuntime"), NO_API) \
	DECLARE_SERIALIZER(UAtomStatics)


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomStatics_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUAtomStatics(); \
	friend struct Z_Construct_UClass_UAtomStatics_Statics; \
public: \
	DECLARE_CLASS(UAtomStatics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CriWareRuntime"), NO_API) \
	DECLARE_SERIALIZER(UAtomStatics)


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomStatics_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAtomStatics(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAtomStatics) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAtomStatics); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtomStatics); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAtomStatics(UAtomStatics&&); \
	NO_API UAtomStatics(const UAtomStatics&); \
public: \
	NO_API virtual ~UAtomStatics();


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomStatics_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAtomStatics(UAtomStatics&&); \
	NO_API UAtomStatics(const UAtomStatics&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAtomStatics); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtomStatics); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAtomStatics) \
	NO_API virtual ~UAtomStatics();


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomStatics_h_24_PROLOG
#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomStatics_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomStatics_h_26_SPARSE_DATA \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomStatics_h_26_RPC_WRAPPERS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomStatics_h_26_ACCESSORS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomStatics_h_26_INCLASS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomStatics_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomStatics_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomStatics_h_26_SPARSE_DATA \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomStatics_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomStatics_h_26_ACCESSORS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomStatics_h_26_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomStatics_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CRIWARERUNTIME_API UClass* StaticClass<class UAtomStatics>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomStatics_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
