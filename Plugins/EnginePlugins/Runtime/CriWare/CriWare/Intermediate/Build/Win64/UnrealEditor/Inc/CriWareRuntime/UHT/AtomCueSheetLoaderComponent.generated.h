// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AtomCueSheetLoaderComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class USoundAtomCueSheet;
enum class EAtomCueSheetLoaderComponentStatus : uint8;
struct FLatentActionInfo;
#ifdef CRIWARERUNTIME_AtomCueSheetLoaderComponent_generated_h
#error "AtomCueSheetLoaderComponent.generated.h already included, missing '#pragma once' in AtomCueSheetLoaderComponent.h"
#endif
#define CRIWARERUNTIME_AtomCueSheetLoaderComponent_generated_h

#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCueSheetLoaderComponent_h_17_DELEGATE \
static void FOnLoadError_DelegateWrapper(const FMulticastScriptDelegate& OnLoadError);


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCueSheetLoaderComponent_h_18_DELEGATE \
static void FOnLoadCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnLoadCompleted);


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCueSheetLoaderComponent_h_19_DELEGATE \
static void FOnAtomCueSheetLoaded_DelegateWrapper(const FScriptDelegate& OnAtomCueSheetLoaded, USoundAtomCueSheet* Loaded);


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCueSheetLoaderComponent_h_15_SPARSE_DATA
#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCueSheetLoaderComponent_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAtomCueSheet); \
	DECLARE_FUNCTION(execGetStatus); \
	DECLARE_FUNCTION(execLoad); \
	DECLARE_FUNCTION(execLoadAtomCueSheet);


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCueSheetLoaderComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAtomCueSheet); \
	DECLARE_FUNCTION(execGetStatus); \
	DECLARE_FUNCTION(execLoad); \
	DECLARE_FUNCTION(execLoadAtomCueSheet);


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCueSheetLoaderComponent_h_15_ACCESSORS
#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCueSheetLoaderComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAtomCueSheetLoaderComponent(); \
	friend struct Z_Construct_UClass_UAtomCueSheetLoaderComponent_Statics; \
public: \
	DECLARE_CLASS(UAtomCueSheetLoaderComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CriWareRuntime"), NO_API) \
	DECLARE_SERIALIZER(UAtomCueSheetLoaderComponent)


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCueSheetLoaderComponent_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUAtomCueSheetLoaderComponent(); \
	friend struct Z_Construct_UClass_UAtomCueSheetLoaderComponent_Statics; \
public: \
	DECLARE_CLASS(UAtomCueSheetLoaderComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CriWareRuntime"), NO_API) \
	DECLARE_SERIALIZER(UAtomCueSheetLoaderComponent)


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCueSheetLoaderComponent_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAtomCueSheetLoaderComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAtomCueSheetLoaderComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAtomCueSheetLoaderComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtomCueSheetLoaderComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAtomCueSheetLoaderComponent(UAtomCueSheetLoaderComponent&&); \
	NO_API UAtomCueSheetLoaderComponent(const UAtomCueSheetLoaderComponent&); \
public: \
	NO_API virtual ~UAtomCueSheetLoaderComponent();


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCueSheetLoaderComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAtomCueSheetLoaderComponent(UAtomCueSheetLoaderComponent&&); \
	NO_API UAtomCueSheetLoaderComponent(const UAtomCueSheetLoaderComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAtomCueSheetLoaderComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtomCueSheetLoaderComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAtomCueSheetLoaderComponent) \
	NO_API virtual ~UAtomCueSheetLoaderComponent();


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCueSheetLoaderComponent_h_13_PROLOG
#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCueSheetLoaderComponent_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCueSheetLoaderComponent_h_15_SPARSE_DATA \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCueSheetLoaderComponent_h_15_RPC_WRAPPERS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCueSheetLoaderComponent_h_15_ACCESSORS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCueSheetLoaderComponent_h_15_INCLASS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCueSheetLoaderComponent_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCueSheetLoaderComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCueSheetLoaderComponent_h_15_SPARSE_DATA \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCueSheetLoaderComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCueSheetLoaderComponent_h_15_ACCESSORS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCueSheetLoaderComponent_h_15_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCueSheetLoaderComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CRIWARERUNTIME_API UClass* StaticClass<class UAtomCueSheetLoaderComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCueSheetLoaderComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
