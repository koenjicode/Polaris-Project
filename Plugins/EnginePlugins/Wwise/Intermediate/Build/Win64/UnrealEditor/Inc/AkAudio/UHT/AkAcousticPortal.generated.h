// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AkAcousticPortal.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class AkAcousticPortalState : uint8;
#ifdef AKAUDIO_AkAcousticPortal_generated_h
#error "AkAcousticPortal.generated.h already included, missing '#pragma once' in AkAcousticPortal.h"
#endif
#define AKAUDIO_AkAcousticPortal_generated_h

#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAcousticPortal_h_11_SPARSE_DATA
#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAcousticPortal_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execClosePortal); \
	DECLARE_FUNCTION(execGetCurrentState); \
	DECLARE_FUNCTION(execOpenPortal);


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAcousticPortal_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execClosePortal); \
	DECLARE_FUNCTION(execGetCurrentState); \
	DECLARE_FUNCTION(execOpenPortal);


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAcousticPortal_h_11_ACCESSORS
#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAcousticPortal_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAkAcousticPortal(); \
	friend struct Z_Construct_UClass_AAkAcousticPortal_Statics; \
public: \
	DECLARE_CLASS(AAkAcousticPortal, AVolume, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(AAkAcousticPortal)


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAcousticPortal_h_11_INCLASS \
private: \
	static void StaticRegisterNativesAAkAcousticPortal(); \
	friend struct Z_Construct_UClass_AAkAcousticPortal_Statics; \
public: \
	DECLARE_CLASS(AAkAcousticPortal, AVolume, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(AAkAcousticPortal)


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAcousticPortal_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAkAcousticPortal(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAkAcousticPortal) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAkAcousticPortal); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAkAcousticPortal); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAkAcousticPortal(AAkAcousticPortal&&); \
	NO_API AAkAcousticPortal(const AAkAcousticPortal&); \
public: \
	NO_API virtual ~AAkAcousticPortal();


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAcousticPortal_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAkAcousticPortal(AAkAcousticPortal&&); \
	NO_API AAkAcousticPortal(const AAkAcousticPortal&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAkAcousticPortal); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAkAcousticPortal); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAkAcousticPortal) \
	NO_API virtual ~AAkAcousticPortal();


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAcousticPortal_h_9_PROLOG
#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAcousticPortal_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAcousticPortal_h_11_SPARSE_DATA \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAcousticPortal_h_11_RPC_WRAPPERS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAcousticPortal_h_11_ACCESSORS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAcousticPortal_h_11_INCLASS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAcousticPortal_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAcousticPortal_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAcousticPortal_h_11_SPARSE_DATA \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAcousticPortal_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAcousticPortal_h_11_ACCESSORS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAcousticPortal_h_11_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAcousticPortal_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AKAUDIO_API UClass* StaticClass<class AAkAcousticPortal>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAcousticPortal_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
