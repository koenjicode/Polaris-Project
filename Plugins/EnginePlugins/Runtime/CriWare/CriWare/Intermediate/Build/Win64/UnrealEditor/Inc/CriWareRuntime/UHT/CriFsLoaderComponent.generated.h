// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CriFsLoaderComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ECriFsLoaderStatus : uint8;
#ifdef CRIWARERUNTIME_CriFsLoaderComponent_generated_h
#error "CriFsLoaderComponent.generated.h already included, missing '#pragma once' in CriFsLoaderComponent.h"
#endif
#define CRIWARERUNTIME_CriFsLoaderComponent_generated_h

#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriFsLoaderComponent_h_11_DELEGATE \
static void FOnLoadError_DelegateWrapper(const FMulticastScriptDelegate& OnLoadError);


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriFsLoaderComponent_h_12_DELEGATE \
static void FOnLoadCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnLoadCompleted);


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriFsLoaderComponent_h_9_SPARSE_DATA
#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriFsLoaderComponent_h_9_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetDataArray); \
	DECLARE_FUNCTION(execGetStatus); \
	DECLARE_FUNCTION(execLoad);


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriFsLoaderComponent_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetDataArray); \
	DECLARE_FUNCTION(execGetStatus); \
	DECLARE_FUNCTION(execLoad);


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriFsLoaderComponent_h_9_ACCESSORS
#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriFsLoaderComponent_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCriFsLoaderComponent(); \
	friend struct Z_Construct_UClass_UCriFsLoaderComponent_Statics; \
public: \
	DECLARE_CLASS(UCriFsLoaderComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CriWareRuntime"), NO_API) \
	DECLARE_SERIALIZER(UCriFsLoaderComponent)


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriFsLoaderComponent_h_9_INCLASS \
private: \
	static void StaticRegisterNativesUCriFsLoaderComponent(); \
	friend struct Z_Construct_UClass_UCriFsLoaderComponent_Statics; \
public: \
	DECLARE_CLASS(UCriFsLoaderComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CriWareRuntime"), NO_API) \
	DECLARE_SERIALIZER(UCriFsLoaderComponent)


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriFsLoaderComponent_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCriFsLoaderComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCriFsLoaderComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCriFsLoaderComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCriFsLoaderComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCriFsLoaderComponent(UCriFsLoaderComponent&&); \
	NO_API UCriFsLoaderComponent(const UCriFsLoaderComponent&); \
public: \
	NO_API virtual ~UCriFsLoaderComponent();


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriFsLoaderComponent_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCriFsLoaderComponent(UCriFsLoaderComponent&&); \
	NO_API UCriFsLoaderComponent(const UCriFsLoaderComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCriFsLoaderComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCriFsLoaderComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCriFsLoaderComponent) \
	NO_API virtual ~UCriFsLoaderComponent();


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriFsLoaderComponent_h_7_PROLOG
#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriFsLoaderComponent_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriFsLoaderComponent_h_9_SPARSE_DATA \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriFsLoaderComponent_h_9_RPC_WRAPPERS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriFsLoaderComponent_h_9_ACCESSORS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriFsLoaderComponent_h_9_INCLASS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriFsLoaderComponent_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriFsLoaderComponent_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriFsLoaderComponent_h_9_SPARSE_DATA \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriFsLoaderComponent_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriFsLoaderComponent_h_9_ACCESSORS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriFsLoaderComponent_h_9_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriFsLoaderComponent_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CRIWARERUNTIME_API UClass* StaticClass<class UCriFsLoaderComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriFsLoaderComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
