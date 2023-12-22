// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SoundAtomCueSheet.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USoundAtomCue;
class USoundAtomCueSheet;
struct FAtomCueInfo;
#ifdef CRIWARERUNTIME_SoundAtomCueSheet_generated_h
#error "SoundAtomCueSheet.generated.h already included, missing '#pragma once' in SoundAtomCueSheet.h"
#endif
#define CRIWARERUNTIME_SoundAtomCueSheet_generated_h

#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_SoundAtomCueSheet_h_14_SPARSE_DATA
#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_SoundAtomCueSheet_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execApplyDspBusSnapshot); \
	DECLARE_FUNCTION(execAttachDspBusSetting); \
	DECLARE_FUNCTION(execBP_GetCueInfoFromId); \
	DECLARE_FUNCTION(execBP_GetCueInfoFromIndex); \
	DECLARE_FUNCTION(execBP_GetCueInfoFromName); \
	DECLARE_FUNCTION(execDetachDspBusSetting); \
	DECLARE_FUNCTION(execGetAtomCueById); \
	DECLARE_FUNCTION(execGetAtomCueByIndex); \
	DECLARE_FUNCTION(execGetAtomCueByName); \
	DECLARE_FUNCTION(execGetNumCues); \
	DECLARE_FUNCTION(execIsLoaded); \
	DECLARE_FUNCTION(execLoadAcb); \
	DECLARE_FUNCTION(execLoadAtomCueSheet); \
	DECLARE_FUNCTION(execReleaseAcb);


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_SoundAtomCueSheet_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execApplyDspBusSnapshot); \
	DECLARE_FUNCTION(execAttachDspBusSetting); \
	DECLARE_FUNCTION(execBP_GetCueInfoFromId); \
	DECLARE_FUNCTION(execBP_GetCueInfoFromIndex); \
	DECLARE_FUNCTION(execBP_GetCueInfoFromName); \
	DECLARE_FUNCTION(execDetachDspBusSetting); \
	DECLARE_FUNCTION(execGetAtomCueById); \
	DECLARE_FUNCTION(execGetAtomCueByIndex); \
	DECLARE_FUNCTION(execGetAtomCueByName); \
	DECLARE_FUNCTION(execGetNumCues); \
	DECLARE_FUNCTION(execIsLoaded); \
	DECLARE_FUNCTION(execLoadAcb); \
	DECLARE_FUNCTION(execLoadAtomCueSheet); \
	DECLARE_FUNCTION(execReleaseAcb);


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_SoundAtomCueSheet_h_14_ACCESSORS
#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_SoundAtomCueSheet_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSoundAtomCueSheet(); \
	friend struct Z_Construct_UClass_USoundAtomCueSheet_Statics; \
public: \
	DECLARE_CLASS(USoundAtomCueSheet, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CriWareRuntime"), NO_API) \
	DECLARE_SERIALIZER(USoundAtomCueSheet)


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_SoundAtomCueSheet_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUSoundAtomCueSheet(); \
	friend struct Z_Construct_UClass_USoundAtomCueSheet_Statics; \
public: \
	DECLARE_CLASS(USoundAtomCueSheet, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CriWareRuntime"), NO_API) \
	DECLARE_SERIALIZER(USoundAtomCueSheet)


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_SoundAtomCueSheet_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USoundAtomCueSheet(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundAtomCueSheet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoundAtomCueSheet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundAtomCueSheet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USoundAtomCueSheet(USoundAtomCueSheet&&); \
	NO_API USoundAtomCueSheet(const USoundAtomCueSheet&); \
public: \
	NO_API virtual ~USoundAtomCueSheet();


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_SoundAtomCueSheet_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USoundAtomCueSheet(USoundAtomCueSheet&&); \
	NO_API USoundAtomCueSheet(const USoundAtomCueSheet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoundAtomCueSheet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundAtomCueSheet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USoundAtomCueSheet) \
	NO_API virtual ~USoundAtomCueSheet();


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_SoundAtomCueSheet_h_12_PROLOG
#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_SoundAtomCueSheet_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_SoundAtomCueSheet_h_14_SPARSE_DATA \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_SoundAtomCueSheet_h_14_RPC_WRAPPERS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_SoundAtomCueSheet_h_14_ACCESSORS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_SoundAtomCueSheet_h_14_INCLASS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_SoundAtomCueSheet_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_SoundAtomCueSheet_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_SoundAtomCueSheet_h_14_SPARSE_DATA \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_SoundAtomCueSheet_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_SoundAtomCueSheet_h_14_ACCESSORS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_SoundAtomCueSheet_h_14_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_SoundAtomCueSheet_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CRIWARERUNTIME_API UClass* StaticClass<class USoundAtomCueSheet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_SoundAtomCueSheet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
