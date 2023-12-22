// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CriWareFunctionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USoundAtomCue;
class USoundAtomCueSheet;
enum class ECriWareSpeakerSystem : uint8;
#ifdef CRIWARERUNTIME_CriWareFunctionLibrary_generated_h
#error "CriWareFunctionLibrary.generated.h already included, missing '#pragma once' in CriWareFunctionLibrary.h"
#endif
#define CRIWARERUNTIME_CriWareFunctionLibrary_generated_h

#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriWareFunctionLibrary_h_12_SPARSE_DATA
#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriWareFunctionLibrary_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSearchAtomCuesInAssetRegistry); \
	DECLARE_FUNCTION(execSetGameVariableByName); \
	DECLARE_FUNCTION(execSetGlobalLabelToSelectorByName); \
	DECLARE_FUNCTION(execSetSpeakerAngleArray);


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriWareFunctionLibrary_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSearchAtomCuesInAssetRegistry); \
	DECLARE_FUNCTION(execSetGameVariableByName); \
	DECLARE_FUNCTION(execSetGlobalLabelToSelectorByName); \
	DECLARE_FUNCTION(execSetSpeakerAngleArray);


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriWareFunctionLibrary_h_12_ACCESSORS
#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriWareFunctionLibrary_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCriWareFunctionLibrary(); \
	friend struct Z_Construct_UClass_UCriWareFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UCriWareFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CriWareRuntime"), NO_API) \
	DECLARE_SERIALIZER(UCriWareFunctionLibrary)


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriWareFunctionLibrary_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUCriWareFunctionLibrary(); \
	friend struct Z_Construct_UClass_UCriWareFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UCriWareFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CriWareRuntime"), NO_API) \
	DECLARE_SERIALIZER(UCriWareFunctionLibrary)


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriWareFunctionLibrary_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCriWareFunctionLibrary(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCriWareFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCriWareFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCriWareFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCriWareFunctionLibrary(UCriWareFunctionLibrary&&); \
	NO_API UCriWareFunctionLibrary(const UCriWareFunctionLibrary&); \
public: \
	NO_API virtual ~UCriWareFunctionLibrary();


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriWareFunctionLibrary_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCriWareFunctionLibrary(UCriWareFunctionLibrary&&); \
	NO_API UCriWareFunctionLibrary(const UCriWareFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCriWareFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCriWareFunctionLibrary); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCriWareFunctionLibrary) \
	NO_API virtual ~UCriWareFunctionLibrary();


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriWareFunctionLibrary_h_10_PROLOG
#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriWareFunctionLibrary_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriWareFunctionLibrary_h_12_SPARSE_DATA \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriWareFunctionLibrary_h_12_RPC_WRAPPERS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriWareFunctionLibrary_h_12_ACCESSORS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriWareFunctionLibrary_h_12_INCLASS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriWareFunctionLibrary_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriWareFunctionLibrary_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriWareFunctionLibrary_h_12_SPARSE_DATA \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriWareFunctionLibrary_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriWareFunctionLibrary_h_12_ACCESSORS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriWareFunctionLibrary_h_12_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriWareFunctionLibrary_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CRIWARERUNTIME_API UClass* StaticClass<class UCriWareFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriWareFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
