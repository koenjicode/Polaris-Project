// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AkPortalComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
enum class AkAcousticPortalState : uint8;
#ifdef AKAUDIO_AkPortalComponent_generated_h
#error "AkPortalComponent.generated.h already included, missing '#pragma once' in AkPortalComponent.h"
#endif
#define AKAUDIO_AkPortalComponent_generated_h

#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkPortalComponent_h_12_SPARSE_DATA
#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkPortalComponent_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execClosePortal); \
	DECLARE_FUNCTION(execGetCurrentState); \
	DECLARE_FUNCTION(execGetPrimitiveParent); \
	DECLARE_FUNCTION(execOpenPortal); \
	DECLARE_FUNCTION(execPortalPlacementValid);


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkPortalComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execClosePortal); \
	DECLARE_FUNCTION(execGetCurrentState); \
	DECLARE_FUNCTION(execGetPrimitiveParent); \
	DECLARE_FUNCTION(execOpenPortal); \
	DECLARE_FUNCTION(execPortalPlacementValid);


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkPortalComponent_h_12_ACCESSORS
#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkPortalComponent_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkPortalComponent(); \
	friend struct Z_Construct_UClass_UAkPortalComponent_Statics; \
public: \
	DECLARE_CLASS(UAkPortalComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkPortalComponent)


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkPortalComponent_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUAkPortalComponent(); \
	friend struct Z_Construct_UClass_UAkPortalComponent_Statics; \
public: \
	DECLARE_CLASS(UAkPortalComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkPortalComponent)


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkPortalComponent_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkPortalComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkPortalComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkPortalComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkPortalComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkPortalComponent(UAkPortalComponent&&); \
	NO_API UAkPortalComponent(const UAkPortalComponent&); \
public: \
	NO_API virtual ~UAkPortalComponent();


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkPortalComponent_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkPortalComponent(UAkPortalComponent&&); \
	NO_API UAkPortalComponent(const UAkPortalComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkPortalComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkPortalComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkPortalComponent) \
	NO_API virtual ~UAkPortalComponent();


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkPortalComponent_h_10_PROLOG
#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkPortalComponent_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkPortalComponent_h_12_SPARSE_DATA \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkPortalComponent_h_12_RPC_WRAPPERS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkPortalComponent_h_12_ACCESSORS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkPortalComponent_h_12_INCLASS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkPortalComponent_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkPortalComponent_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkPortalComponent_h_12_SPARSE_DATA \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkPortalComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkPortalComponent_h_12_ACCESSORS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkPortalComponent_h_12_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkPortalComponent_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AKAUDIO_API UClass* StaticClass<class UAkPortalComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkPortalComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
