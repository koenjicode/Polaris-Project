// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AkSlider.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGuid;
struct FLinearColor;
#ifdef AKAUDIO_AkSlider_generated_h
#error "AkSlider.generated.h already included, missing '#pragma once' in AkSlider.h"
#endif
#define AKAUDIO_AkSlider_generated_h

#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkSlider_h_17_SPARSE_DATA
#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkSlider_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAkSliderItemId); \
	DECLARE_FUNCTION(execGetAkSliderItemProperty); \
	DECLARE_FUNCTION(execGetValue); \
	DECLARE_FUNCTION(execSetAkSliderItemId); \
	DECLARE_FUNCTION(execSetAkSliderItemProperty); \
	DECLARE_FUNCTION(execSetIndentHandle); \
	DECLARE_FUNCTION(execSetLocked); \
	DECLARE_FUNCTION(execSetSliderBarColor); \
	DECLARE_FUNCTION(execSetSliderHandleColor); \
	DECLARE_FUNCTION(execSetStepSize); \
	DECLARE_FUNCTION(execSetValue);


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkSlider_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAkSliderItemId); \
	DECLARE_FUNCTION(execGetAkSliderItemProperty); \
	DECLARE_FUNCTION(execGetValue); \
	DECLARE_FUNCTION(execSetAkSliderItemId); \
	DECLARE_FUNCTION(execSetAkSliderItemProperty); \
	DECLARE_FUNCTION(execSetIndentHandle); \
	DECLARE_FUNCTION(execSetLocked); \
	DECLARE_FUNCTION(execSetSliderBarColor); \
	DECLARE_FUNCTION(execSetSliderHandleColor); \
	DECLARE_FUNCTION(execSetStepSize); \
	DECLARE_FUNCTION(execSetValue);


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkSlider_h_17_ACCESSORS
#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkSlider_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkSlider(); \
	friend struct Z_Construct_UClass_UAkSlider_Statics; \
public: \
	DECLARE_CLASS(UAkSlider, UWidget, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkSlider) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkSlider_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUAkSlider(); \
	friend struct Z_Construct_UClass_UAkSlider_Statics; \
public: \
	DECLARE_CLASS(UAkSlider, UWidget, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkSlider) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkSlider_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkSlider(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkSlider) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkSlider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkSlider); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkSlider(UAkSlider&&); \
	NO_API UAkSlider(const UAkSlider&); \
public: \
	NO_API virtual ~UAkSlider();


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkSlider_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkSlider(UAkSlider&&); \
	NO_API UAkSlider(const UAkSlider&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkSlider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkSlider); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAkSlider) \
	NO_API virtual ~UAkSlider();


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkSlider_h_15_PROLOG
#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkSlider_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkSlider_h_17_SPARSE_DATA \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkSlider_h_17_RPC_WRAPPERS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkSlider_h_17_ACCESSORS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkSlider_h_17_INCLASS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkSlider_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkSlider_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkSlider_h_17_SPARSE_DATA \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkSlider_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkSlider_h_17_ACCESSORS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkSlider_h_17_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkSlider_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AKAUDIO_API UClass* StaticClass<class UAkSlider>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkSlider_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
