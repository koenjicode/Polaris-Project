// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AkAudioEvent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UAkComponent;
class UAkGameObject;
class UObject;
enum class AkActionOnEventType : uint8;
enum class EAkCurveInterpolation : uint8;
struct FLatentActionInfo;
#ifdef AKAUDIO_AkAudioEvent_generated_h
#error "AkAudioEvent.generated.h already included, missing '#pragma once' in AkAudioEvent.h"
#endif
#define AKAUDIO_AkAudioEvent_generated_h

#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAudioEvent_h_21_SPARSE_DATA
#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAudioEvent_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execExecuteAction); \
	DECLARE_FUNCTION(execPostAtLocation); \
	DECLARE_FUNCTION(execPostOnActor); \
	DECLARE_FUNCTION(execPostOnActorAndWait); \
	DECLARE_FUNCTION(execPostOnComponent); \
	DECLARE_FUNCTION(execPostOnComponentAndWait); \
	DECLARE_FUNCTION(execPostOnGameObject); \
	DECLARE_FUNCTION(execPostOnGameObjectAndWait);


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAudioEvent_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execExecuteAction); \
	DECLARE_FUNCTION(execPostAtLocation); \
	DECLARE_FUNCTION(execPostOnActor); \
	DECLARE_FUNCTION(execPostOnActorAndWait); \
	DECLARE_FUNCTION(execPostOnComponent); \
	DECLARE_FUNCTION(execPostOnComponentAndWait); \
	DECLARE_FUNCTION(execPostOnGameObject); \
	DECLARE_FUNCTION(execPostOnGameObjectAndWait);


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAudioEvent_h_21_ACCESSORS
#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAudioEvent_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkAudioEvent(); \
	friend struct Z_Construct_UClass_UAkAudioEvent_Statics; \
public: \
	DECLARE_CLASS(UAkAudioEvent, UAkAudioType, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkAudioEvent)


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAudioEvent_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUAkAudioEvent(); \
	friend struct Z_Construct_UClass_UAkAudioEvent_Statics; \
public: \
	DECLARE_CLASS(UAkAudioEvent, UAkAudioType, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkAudioEvent)


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAudioEvent_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkAudioEvent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkAudioEvent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkAudioEvent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkAudioEvent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkAudioEvent(UAkAudioEvent&&); \
	NO_API UAkAudioEvent(const UAkAudioEvent&); \
public: \
	NO_API virtual ~UAkAudioEvent();


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAudioEvent_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkAudioEvent(UAkAudioEvent&&); \
	NO_API UAkAudioEvent(const UAkAudioEvent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkAudioEvent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkAudioEvent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAkAudioEvent) \
	NO_API virtual ~UAkAudioEvent();


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAudioEvent_h_19_PROLOG
#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAudioEvent_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAudioEvent_h_21_SPARSE_DATA \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAudioEvent_h_21_RPC_WRAPPERS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAudioEvent_h_21_ACCESSORS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAudioEvent_h_21_INCLASS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAudioEvent_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAudioEvent_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAudioEvent_h_21_SPARSE_DATA \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAudioEvent_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAudioEvent_h_21_ACCESSORS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAudioEvent_h_21_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAudioEvent_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AKAUDIO_API UClass* StaticClass<class UAkAudioEvent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAudioEvent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
