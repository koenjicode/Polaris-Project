// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AkComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAkAudioEvent;
class UAkAuxBus;
class UAkComponent;
class UAkSwitchValue;
class UAkTrigger;
struct FLatentActionInfo;
#ifdef AKAUDIO_AkComponent_generated_h
#error "AkComponent.generated.h already included, missing '#pragma once' in AkComponent.h"
#endif
#define AKAUDIO_AkComponent_generated_h

#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkComponent_h_17_SPARSE_DATA
#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkComponent_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAttenuationRadius); \
	DECLARE_FUNCTION(execGetOcclusionCollisionChannel); \
	DECLARE_FUNCTION(execPostAkEventAndWaitForEnd); \
	DECLARE_FUNCTION(execPostAkEventAndWaitForEndAsync); \
	DECLARE_FUNCTION(execPostAssociatedAkEventAndWaitForEnd); \
	DECLARE_FUNCTION(execPostAssociatedAkEventAndWaitForEndAsync); \
	DECLARE_FUNCTION(execPostTrigger); \
	DECLARE_FUNCTION(execSetAttenuationScalingFactor); \
	DECLARE_FUNCTION(execSetDestroyAtUnregister); \
	DECLARE_FUNCTION(execSetEarlyReflectionsAuxBus); \
	DECLARE_FUNCTION(execSetEarlyReflectionsVolume); \
	DECLARE_FUNCTION(execSetEnableSpotReflectors); \
	DECLARE_FUNCTION(execSetGameObjectRadius); \
	DECLARE_FUNCTION(execSetListeners); \
	DECLARE_FUNCTION(execSetOutputBusVolume); \
	DECLARE_FUNCTION(execSetStopWhenOwnerDestroyed); \
	DECLARE_FUNCTION(execSetSwitch); \
	DECLARE_FUNCTION(execUseEarlyReflections); \
	DECLARE_FUNCTION(execUseReverbVolumes);


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAttenuationRadius); \
	DECLARE_FUNCTION(execGetOcclusionCollisionChannel); \
	DECLARE_FUNCTION(execPostAkEventAndWaitForEnd); \
	DECLARE_FUNCTION(execPostAkEventAndWaitForEndAsync); \
	DECLARE_FUNCTION(execPostAssociatedAkEventAndWaitForEnd); \
	DECLARE_FUNCTION(execPostAssociatedAkEventAndWaitForEndAsync); \
	DECLARE_FUNCTION(execPostTrigger); \
	DECLARE_FUNCTION(execSetAttenuationScalingFactor); \
	DECLARE_FUNCTION(execSetDestroyAtUnregister); \
	DECLARE_FUNCTION(execSetEarlyReflectionsAuxBus); \
	DECLARE_FUNCTION(execSetEarlyReflectionsVolume); \
	DECLARE_FUNCTION(execSetEnableSpotReflectors); \
	DECLARE_FUNCTION(execSetGameObjectRadius); \
	DECLARE_FUNCTION(execSetListeners); \
	DECLARE_FUNCTION(execSetOutputBusVolume); \
	DECLARE_FUNCTION(execSetStopWhenOwnerDestroyed); \
	DECLARE_FUNCTION(execSetSwitch); \
	DECLARE_FUNCTION(execUseEarlyReflections); \
	DECLARE_FUNCTION(execUseReverbVolumes);


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkComponent_h_17_ACCESSORS
#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkComponent(); \
	friend struct Z_Construct_UClass_UAkComponent_Statics; \
public: \
	DECLARE_CLASS(UAkComponent, UAkGameObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkComponent)


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkComponent_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUAkComponent(); \
	friend struct Z_Construct_UClass_UAkComponent_Statics; \
public: \
	DECLARE_CLASS(UAkComponent, UAkGameObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkComponent)


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkComponent_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkComponent(UAkComponent&&); \
	NO_API UAkComponent(const UAkComponent&); \
public: \
	NO_API virtual ~UAkComponent();


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkComponent(UAkComponent&&); \
	NO_API UAkComponent(const UAkComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkComponent) \
	NO_API virtual ~UAkComponent();


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkComponent_h_15_PROLOG
#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkComponent_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkComponent_h_17_SPARSE_DATA \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkComponent_h_17_RPC_WRAPPERS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkComponent_h_17_ACCESSORS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkComponent_h_17_INCLASS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkComponent_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkComponent_h_17_SPARSE_DATA \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkComponent_h_17_ACCESSORS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkComponent_h_17_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AKAUDIO_API UClass* StaticClass<class UAkComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
