// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AkCheckBox.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ECheckBoxState : uint8;
struct FGuid;
#ifdef AKAUDIO_AkCheckBox_generated_h
#error "AkCheckBox.generated.h already included, missing '#pragma once' in AkCheckBox.h"
#endif
#define AKAUDIO_AkCheckBox_generated_h

#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkCheckBox_h_18_SPARSE_DATA
#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkCheckBox_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAkItemId); \
	DECLARE_FUNCTION(execGetAkProperty); \
	DECLARE_FUNCTION(execGetCheckedState); \
	DECLARE_FUNCTION(execIsChecked); \
	DECLARE_FUNCTION(execIsPressed); \
	DECLARE_FUNCTION(execSetAkBoolProperty); \
	DECLARE_FUNCTION(execSetAkItemId); \
	DECLARE_FUNCTION(execSetCheckedState); \
	DECLARE_FUNCTION(execSetIsChecked);


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkCheckBox_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAkItemId); \
	DECLARE_FUNCTION(execGetAkProperty); \
	DECLARE_FUNCTION(execGetCheckedState); \
	DECLARE_FUNCTION(execIsChecked); \
	DECLARE_FUNCTION(execIsPressed); \
	DECLARE_FUNCTION(execSetAkBoolProperty); \
	DECLARE_FUNCTION(execSetAkItemId); \
	DECLARE_FUNCTION(execSetCheckedState); \
	DECLARE_FUNCTION(execSetIsChecked);


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkCheckBox_h_18_ACCESSORS
#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkCheckBox_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkCheckBox(); \
	friend struct Z_Construct_UClass_UAkCheckBox_Statics; \
public: \
	DECLARE_CLASS(UAkCheckBox, UContentWidget, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkCheckBox) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkCheckBox_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUAkCheckBox(); \
	friend struct Z_Construct_UClass_UAkCheckBox_Statics; \
public: \
	DECLARE_CLASS(UAkCheckBox, UContentWidget, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkCheckBox) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkCheckBox_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkCheckBox(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkCheckBox) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkCheckBox); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkCheckBox); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkCheckBox(UAkCheckBox&&); \
	NO_API UAkCheckBox(const UAkCheckBox&); \
public: \
	NO_API virtual ~UAkCheckBox();


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkCheckBox_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkCheckBox(UAkCheckBox&&); \
	NO_API UAkCheckBox(const UAkCheckBox&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkCheckBox); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkCheckBox); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAkCheckBox) \
	NO_API virtual ~UAkCheckBox();


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkCheckBox_h_16_PROLOG
#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkCheckBox_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkCheckBox_h_18_SPARSE_DATA \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkCheckBox_h_18_RPC_WRAPPERS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkCheckBox_h_18_ACCESSORS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkCheckBox_h_18_INCLASS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkCheckBox_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkCheckBox_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkCheckBox_h_18_SPARSE_DATA \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkCheckBox_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkCheckBox_h_18_ACCESSORS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkCheckBox_h_18_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkCheckBox_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AKAUDIO_API UClass* StaticClass<class UAkCheckBox>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkCheckBox_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
