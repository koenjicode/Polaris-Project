// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SoundAtomCue.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAtomCueInfo;
#ifdef CRIWARERUNTIME_SoundAtomCue_generated_h
#error "SoundAtomCue.generated.h already included, missing '#pragma once' in SoundAtomCue.h"
#endif
#define CRIWARERUNTIME_SoundAtomCue_generated_h

#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_SoundAtomCue_h_15_SPARSE_DATA
#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_SoundAtomCue_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBP_GetCueInfo); \
	DECLARE_FUNCTION(execGetCullDistance); \
	DECLARE_FUNCTION(execGetCullDistanceMarginToApply); \
	DECLARE_FUNCTION(execGetCullingBoundaryDistanceToUse); \
	DECLARE_FUNCTION(execGetCullingMarginDistanceToUse); \
	DECLARE_FUNCTION(execGetEconomicTickBoundaryDistanceToUse); \
	DECLARE_FUNCTION(execGetEconomicTickDistance); \
	DECLARE_FUNCTION(execGetEconomicTickDistanceMarginToApply); \
	DECLARE_FUNCTION(execGetEconomicTickFrequencyToApply); \
	DECLARE_FUNCTION(execGetEconomicTickFrequencyToUse); \
	DECLARE_FUNCTION(execGetEconomicTickMarginDistanceToUse); \
	DECLARE_FUNCTION(execGetMaxAttenuationDistanceToApply); \
	DECLARE_FUNCTION(execGetMaxAttenuationDistanceToUse); \
	DECLARE_FUNCTION(execIsEconomicTickEnabled); \
	DECLARE_FUNCTION(execIsLooping); \
	DECLARE_FUNCTION(execValidate);


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_SoundAtomCue_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBP_GetCueInfo); \
	DECLARE_FUNCTION(execGetCullDistance); \
	DECLARE_FUNCTION(execGetCullDistanceMarginToApply); \
	DECLARE_FUNCTION(execGetCullingBoundaryDistanceToUse); \
	DECLARE_FUNCTION(execGetCullingMarginDistanceToUse); \
	DECLARE_FUNCTION(execGetEconomicTickBoundaryDistanceToUse); \
	DECLARE_FUNCTION(execGetEconomicTickDistance); \
	DECLARE_FUNCTION(execGetEconomicTickDistanceMarginToApply); \
	DECLARE_FUNCTION(execGetEconomicTickFrequencyToApply); \
	DECLARE_FUNCTION(execGetEconomicTickFrequencyToUse); \
	DECLARE_FUNCTION(execGetEconomicTickMarginDistanceToUse); \
	DECLARE_FUNCTION(execGetMaxAttenuationDistanceToApply); \
	DECLARE_FUNCTION(execGetMaxAttenuationDistanceToUse); \
	DECLARE_FUNCTION(execIsEconomicTickEnabled); \
	DECLARE_FUNCTION(execIsLooping); \
	DECLARE_FUNCTION(execValidate);


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_SoundAtomCue_h_15_ACCESSORS
#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_SoundAtomCue_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSoundAtomCue(); \
	friend struct Z_Construct_UClass_USoundAtomCue_Statics; \
public: \
	DECLARE_CLASS(USoundAtomCue, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CriWareRuntime"), NO_API) \
	DECLARE_SERIALIZER(USoundAtomCue)


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_SoundAtomCue_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUSoundAtomCue(); \
	friend struct Z_Construct_UClass_USoundAtomCue_Statics; \
public: \
	DECLARE_CLASS(USoundAtomCue, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CriWareRuntime"), NO_API) \
	DECLARE_SERIALIZER(USoundAtomCue)


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_SoundAtomCue_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USoundAtomCue(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundAtomCue) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoundAtomCue); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundAtomCue); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USoundAtomCue(USoundAtomCue&&); \
	NO_API USoundAtomCue(const USoundAtomCue&); \
public: \
	NO_API virtual ~USoundAtomCue();


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_SoundAtomCue_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USoundAtomCue(USoundAtomCue&&); \
	NO_API USoundAtomCue(const USoundAtomCue&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoundAtomCue); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundAtomCue); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USoundAtomCue) \
	NO_API virtual ~USoundAtomCue();


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_SoundAtomCue_h_13_PROLOG
#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_SoundAtomCue_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_SoundAtomCue_h_15_SPARSE_DATA \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_SoundAtomCue_h_15_RPC_WRAPPERS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_SoundAtomCue_h_15_ACCESSORS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_SoundAtomCue_h_15_INCLASS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_SoundAtomCue_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_SoundAtomCue_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_SoundAtomCue_h_15_SPARSE_DATA \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_SoundAtomCue_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_SoundAtomCue_h_15_ACCESSORS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_SoundAtomCue_h_15_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_SoundAtomCue_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CRIWARERUNTIME_API UClass* StaticClass<class USoundAtomCue>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_SoundAtomCue_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
