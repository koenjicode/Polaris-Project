// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraSystemWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNiagaraSystem;
class UNiagaraUIComponent;
#ifdef NIAGARAUIRENDERER_NiagaraSystemWidget_generated_h
#error "NiagaraSystemWidget.generated.h already included, missing '#pragma once' in NiagaraSystemWidget.h"
#endif
#define NIAGARAUIRENDERER_NiagaraSystemWidget_generated_h

#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Marketplace_NiagaraUIRenderer_Source_NiagaraUIRenderer_Public_NiagaraSystemWidget_h_13_SPARSE_DATA
#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Marketplace_NiagaraUIRenderer_Source_NiagaraUIRenderer_Public_NiagaraSystemWidget_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execActivateSystem); \
	DECLARE_FUNCTION(execDeactivateSystem); \
	DECLARE_FUNCTION(execGetNiagaraComponent); \
	DECLARE_FUNCTION(execUpdateNiagaraSystemReference); \
	DECLARE_FUNCTION(execUpdateTickWhenPaused);


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Marketplace_NiagaraUIRenderer_Source_NiagaraUIRenderer_Public_NiagaraSystemWidget_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execActivateSystem); \
	DECLARE_FUNCTION(execDeactivateSystem); \
	DECLARE_FUNCTION(execGetNiagaraComponent); \
	DECLARE_FUNCTION(execUpdateNiagaraSystemReference); \
	DECLARE_FUNCTION(execUpdateTickWhenPaused);


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Marketplace_NiagaraUIRenderer_Source_NiagaraUIRenderer_Public_NiagaraSystemWidget_h_13_ACCESSORS
#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Marketplace_NiagaraUIRenderer_Source_NiagaraUIRenderer_Public_NiagaraSystemWidget_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraSystemWidget(); \
	friend struct Z_Construct_UClass_UNiagaraSystemWidget_Statics; \
public: \
	DECLARE_CLASS(UNiagaraSystemWidget, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NiagaraUIRenderer"), NO_API) \
	DECLARE_SERIALIZER(UNiagaraSystemWidget)


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Marketplace_NiagaraUIRenderer_Source_NiagaraUIRenderer_Public_NiagaraSystemWidget_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraSystemWidget(); \
	friend struct Z_Construct_UClass_UNiagaraSystemWidget_Statics; \
public: \
	DECLARE_CLASS(UNiagaraSystemWidget, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NiagaraUIRenderer"), NO_API) \
	DECLARE_SERIALIZER(UNiagaraSystemWidget)


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Marketplace_NiagaraUIRenderer_Source_NiagaraUIRenderer_Public_NiagaraSystemWidget_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraSystemWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraSystemWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraSystemWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraSystemWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNiagaraSystemWidget(UNiagaraSystemWidget&&); \
	NO_API UNiagaraSystemWidget(const UNiagaraSystemWidget&); \
public: \
	NO_API virtual ~UNiagaraSystemWidget();


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Marketplace_NiagaraUIRenderer_Source_NiagaraUIRenderer_Public_NiagaraSystemWidget_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNiagaraSystemWidget(UNiagaraSystemWidget&&); \
	NO_API UNiagaraSystemWidget(const UNiagaraSystemWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraSystemWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraSystemWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNiagaraSystemWidget) \
	NO_API virtual ~UNiagaraSystemWidget();


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Marketplace_NiagaraUIRenderer_Source_NiagaraUIRenderer_Public_NiagaraSystemWidget_h_11_PROLOG
#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Marketplace_NiagaraUIRenderer_Source_NiagaraUIRenderer_Public_NiagaraSystemWidget_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Marketplace_NiagaraUIRenderer_Source_NiagaraUIRenderer_Public_NiagaraSystemWidget_h_13_SPARSE_DATA \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Marketplace_NiagaraUIRenderer_Source_NiagaraUIRenderer_Public_NiagaraSystemWidget_h_13_RPC_WRAPPERS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Marketplace_NiagaraUIRenderer_Source_NiagaraUIRenderer_Public_NiagaraSystemWidget_h_13_ACCESSORS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Marketplace_NiagaraUIRenderer_Source_NiagaraUIRenderer_Public_NiagaraSystemWidget_h_13_INCLASS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Marketplace_NiagaraUIRenderer_Source_NiagaraUIRenderer_Public_NiagaraSystemWidget_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Marketplace_NiagaraUIRenderer_Source_NiagaraUIRenderer_Public_NiagaraSystemWidget_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Marketplace_NiagaraUIRenderer_Source_NiagaraUIRenderer_Public_NiagaraSystemWidget_h_13_SPARSE_DATA \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Marketplace_NiagaraUIRenderer_Source_NiagaraUIRenderer_Public_NiagaraSystemWidget_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Marketplace_NiagaraUIRenderer_Source_NiagaraUIRenderer_Public_NiagaraSystemWidget_h_13_ACCESSORS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Marketplace_NiagaraUIRenderer_Source_NiagaraUIRenderer_Public_NiagaraSystemWidget_h_13_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Marketplace_NiagaraUIRenderer_Source_NiagaraUIRenderer_Public_NiagaraSystemWidget_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARAUIRENDERER_API UClass* StaticClass<class UNiagaraSystemWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Marketplace_NiagaraUIRenderer_Source_NiagaraUIRenderer_Public_NiagaraSystemWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
