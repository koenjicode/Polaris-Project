// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WwiseAudioLinkComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USoundBase;
#ifdef WWISE_WwiseAudioLinkComponent_generated_h
#error "WwiseAudioLinkComponent.generated.h already included, missing '#pragma once' in WwiseAudioLinkComponent.h"
#endif
#define WWISE_WwiseAudioLinkComponent_generated_h

#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_Wwise_Public_WwiseAudioLinkComponent_h_13_SPARSE_DATA
#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_Wwise_Public_WwiseAudioLinkComponent_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsLinkPlaying); \
	DECLARE_FUNCTION(execPlayLink); \
	DECLARE_FUNCTION(execSetLinkSound); \
	DECLARE_FUNCTION(execStopLink);


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_Wwise_Public_WwiseAudioLinkComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsLinkPlaying); \
	DECLARE_FUNCTION(execPlayLink); \
	DECLARE_FUNCTION(execSetLinkSound); \
	DECLARE_FUNCTION(execStopLink);


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_Wwise_Public_WwiseAudioLinkComponent_h_13_ACCESSORS
#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_Wwise_Public_WwiseAudioLinkComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWwiseAudioLinkComponent(); \
	friend struct Z_Construct_UClass_UWwiseAudioLinkComponent_Statics; \
public: \
	DECLARE_CLASS(UWwiseAudioLinkComponent, UAkComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Wwise"), NO_API) \
	DECLARE_SERIALIZER(UWwiseAudioLinkComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UWwiseAudioLinkComponent*>(this); }


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_Wwise_Public_WwiseAudioLinkComponent_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUWwiseAudioLinkComponent(); \
	friend struct Z_Construct_UClass_UWwiseAudioLinkComponent_Statics; \
public: \
	DECLARE_CLASS(UWwiseAudioLinkComponent, UAkComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Wwise"), NO_API) \
	DECLARE_SERIALIZER(UWwiseAudioLinkComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UWwiseAudioLinkComponent*>(this); }


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_Wwise_Public_WwiseAudioLinkComponent_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWwiseAudioLinkComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWwiseAudioLinkComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWwiseAudioLinkComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWwiseAudioLinkComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWwiseAudioLinkComponent(UWwiseAudioLinkComponent&&); \
	NO_API UWwiseAudioLinkComponent(const UWwiseAudioLinkComponent&); \
public: \
	NO_API virtual ~UWwiseAudioLinkComponent();


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_Wwise_Public_WwiseAudioLinkComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWwiseAudioLinkComponent(UWwiseAudioLinkComponent&&); \
	NO_API UWwiseAudioLinkComponent(const UWwiseAudioLinkComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWwiseAudioLinkComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWwiseAudioLinkComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWwiseAudioLinkComponent) \
	NO_API virtual ~UWwiseAudioLinkComponent();


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_Wwise_Public_WwiseAudioLinkComponent_h_11_PROLOG
#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_Wwise_Public_WwiseAudioLinkComponent_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_Wwise_Public_WwiseAudioLinkComponent_h_13_SPARSE_DATA \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_Wwise_Public_WwiseAudioLinkComponent_h_13_RPC_WRAPPERS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_Wwise_Public_WwiseAudioLinkComponent_h_13_ACCESSORS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_Wwise_Public_WwiseAudioLinkComponent_h_13_INCLASS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_Wwise_Public_WwiseAudioLinkComponent_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_Wwise_Public_WwiseAudioLinkComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_Wwise_Public_WwiseAudioLinkComponent_h_13_SPARSE_DATA \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_Wwise_Public_WwiseAudioLinkComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_Wwise_Public_WwiseAudioLinkComponent_h_13_ACCESSORS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_Wwise_Public_WwiseAudioLinkComponent_h_13_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_Wwise_Public_WwiseAudioLinkComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WWISE_API UClass* StaticClass<class UWwiseAudioLinkComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_Wwise_Public_WwiseAudioLinkComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
