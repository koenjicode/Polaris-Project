// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HoudiniPointCache.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;
struct FPointIndexes;
#ifdef HOUDININIAGARA_HoudiniPointCache_generated_h
#error "HoudiniPointCache.generated.h already included, missing '#pragma once' in HoudiniPointCache.h"
#endif
#define HOUDININIAGARA_HoudiniPointCache_generated_h

#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_FX_HoudiniNiagara_Source_HoudiniNiagara_Public_HoudiniPointCache_h_14_SPARSE_DATA
#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_FX_HoudiniNiagara_Source_HoudiniNiagara_Public_HoudiniPointCache_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAttributeIndexFromString); \
	DECLARE_FUNCTION(execGetAttributeIndexInArrayFromString); \
	DECLARE_FUNCTION(execGetColorValue); \
	DECLARE_FUNCTION(execGetFloatSampleData); \
	DECLARE_FUNCTION(execGetFloatValue); \
	DECLARE_FUNCTION(execGetFloatValueForString); \
	DECLARE_FUNCTION(execGetImpulseValue); \
	DECLARE_FUNCTION(execGetLastPointIDToSpawnAtTime); \
	DECLARE_FUNCTION(execGetLastSampleIndexAtTime); \
	DECLARE_FUNCTION(execGetLifeValues); \
	DECLARE_FUNCTION(execGetNormalValue); \
	DECLARE_FUNCTION(execGetNumberOfAttributes); \
	DECLARE_FUNCTION(execGetNumberOfPoints); \
	DECLARE_FUNCTION(execGetNumberOfSamples); \
	DECLARE_FUNCTION(execGetPointFloatValueAtTime); \
	DECLARE_FUNCTION(execGetPointIDsToSpawnAtTime); \
	DECLARE_FUNCTION(execGetPointInt32ValueAtTime); \
	DECLARE_FUNCTION(execGetPointLife); \
	DECLARE_FUNCTION(execGetPointLifeAtTime); \
	DECLARE_FUNCTION(execGetPointPositionAtTime); \
	DECLARE_FUNCTION(execGetPointQuatValueAtTime); \
	DECLARE_FUNCTION(execGetPointQuatValueAtTimeForString); \
	DECLARE_FUNCTION(execGetPointType); \
	DECLARE_FUNCTION(execGetPointTypes); \
	DECLARE_FUNCTION(execGetPointValueAtTime); \
	DECLARE_FUNCTION(execGetPointValueAtTimeForString); \
	DECLARE_FUNCTION(execGetPointValueIndexes); \
	DECLARE_FUNCTION(execGetPointVector4ValueAtTime); \
	DECLARE_FUNCTION(execGetPointVector4ValueAtTimeForString); \
	DECLARE_FUNCTION(execGetPointVectorValueAtTime); \
	DECLARE_FUNCTION(execGetPointVectorValueAtTimeForString); \
	DECLARE_FUNCTION(execGetPositionValue); \
	DECLARE_FUNCTION(execGetQuatValue); \
	DECLARE_FUNCTION(execGetQuatValueForString); \
	DECLARE_FUNCTION(execGetSampleIndexesForPointAtTime); \
	DECLARE_FUNCTION(execGetSpawnTimes); \
	DECLARE_FUNCTION(execGetSpecialAttributeIndexes); \
	DECLARE_FUNCTION(execGetTimeValue); \
	DECLARE_FUNCTION(execGetUseCustomCSVTitleRow); \
	DECLARE_FUNCTION(execGetVector4Value); \
	DECLARE_FUNCTION(execGetVector4ValueForString); \
	DECLARE_FUNCTION(execGetVectorValue); \
	DECLARE_FUNCTION(execGetVectorValueForString); \
	DECLARE_FUNCTION(execGetVelocityValue); \
	DECLARE_FUNCTION(execSetUseCustomCSVTitleRow);


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_FX_HoudiniNiagara_Source_HoudiniNiagara_Public_HoudiniPointCache_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAttributeIndexFromString); \
	DECLARE_FUNCTION(execGetAttributeIndexInArrayFromString); \
	DECLARE_FUNCTION(execGetColorValue); \
	DECLARE_FUNCTION(execGetFloatSampleData); \
	DECLARE_FUNCTION(execGetFloatValue); \
	DECLARE_FUNCTION(execGetFloatValueForString); \
	DECLARE_FUNCTION(execGetImpulseValue); \
	DECLARE_FUNCTION(execGetLastPointIDToSpawnAtTime); \
	DECLARE_FUNCTION(execGetLastSampleIndexAtTime); \
	DECLARE_FUNCTION(execGetLifeValues); \
	DECLARE_FUNCTION(execGetNormalValue); \
	DECLARE_FUNCTION(execGetNumberOfAttributes); \
	DECLARE_FUNCTION(execGetNumberOfPoints); \
	DECLARE_FUNCTION(execGetNumberOfSamples); \
	DECLARE_FUNCTION(execGetPointFloatValueAtTime); \
	DECLARE_FUNCTION(execGetPointIDsToSpawnAtTime); \
	DECLARE_FUNCTION(execGetPointInt32ValueAtTime); \
	DECLARE_FUNCTION(execGetPointLife); \
	DECLARE_FUNCTION(execGetPointLifeAtTime); \
	DECLARE_FUNCTION(execGetPointPositionAtTime); \
	DECLARE_FUNCTION(execGetPointQuatValueAtTime); \
	DECLARE_FUNCTION(execGetPointQuatValueAtTimeForString); \
	DECLARE_FUNCTION(execGetPointType); \
	DECLARE_FUNCTION(execGetPointTypes); \
	DECLARE_FUNCTION(execGetPointValueAtTime); \
	DECLARE_FUNCTION(execGetPointValueAtTimeForString); \
	DECLARE_FUNCTION(execGetPointValueIndexes); \
	DECLARE_FUNCTION(execGetPointVector4ValueAtTime); \
	DECLARE_FUNCTION(execGetPointVector4ValueAtTimeForString); \
	DECLARE_FUNCTION(execGetPointVectorValueAtTime); \
	DECLARE_FUNCTION(execGetPointVectorValueAtTimeForString); \
	DECLARE_FUNCTION(execGetPositionValue); \
	DECLARE_FUNCTION(execGetQuatValue); \
	DECLARE_FUNCTION(execGetQuatValueForString); \
	DECLARE_FUNCTION(execGetSampleIndexesForPointAtTime); \
	DECLARE_FUNCTION(execGetSpawnTimes); \
	DECLARE_FUNCTION(execGetSpecialAttributeIndexes); \
	DECLARE_FUNCTION(execGetTimeValue); \
	DECLARE_FUNCTION(execGetUseCustomCSVTitleRow); \
	DECLARE_FUNCTION(execGetVector4Value); \
	DECLARE_FUNCTION(execGetVector4ValueForString); \
	DECLARE_FUNCTION(execGetVectorValue); \
	DECLARE_FUNCTION(execGetVectorValueForString); \
	DECLARE_FUNCTION(execGetVelocityValue); \
	DECLARE_FUNCTION(execSetUseCustomCSVTitleRow);


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_FX_HoudiniNiagara_Source_HoudiniNiagara_Public_HoudiniPointCache_h_14_ACCESSORS
#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_FX_HoudiniNiagara_Source_HoudiniNiagara_Public_HoudiniPointCache_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHoudiniPointCache(); \
	friend struct Z_Construct_UClass_UHoudiniPointCache_Statics; \
public: \
	DECLARE_CLASS(UHoudiniPointCache, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoudiniNiagara"), NO_API) \
	DECLARE_SERIALIZER(UHoudiniPointCache)


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_FX_HoudiniNiagara_Source_HoudiniNiagara_Public_HoudiniPointCache_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUHoudiniPointCache(); \
	friend struct Z_Construct_UClass_UHoudiniPointCache_Statics; \
public: \
	DECLARE_CLASS(UHoudiniPointCache, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoudiniNiagara"), NO_API) \
	DECLARE_SERIALIZER(UHoudiniPointCache)


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_FX_HoudiniNiagara_Source_HoudiniNiagara_Public_HoudiniPointCache_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHoudiniPointCache(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHoudiniPointCache) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniPointCache); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniPointCache); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHoudiniPointCache(UHoudiniPointCache&&); \
	NO_API UHoudiniPointCache(const UHoudiniPointCache&); \
public: \
	NO_API virtual ~UHoudiniPointCache();


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_FX_HoudiniNiagara_Source_HoudiniNiagara_Public_HoudiniPointCache_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHoudiniPointCache(UHoudiniPointCache&&); \
	NO_API UHoudiniPointCache(const UHoudiniPointCache&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniPointCache); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniPointCache); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHoudiniPointCache) \
	NO_API virtual ~UHoudiniPointCache();


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_FX_HoudiniNiagara_Source_HoudiniNiagara_Public_HoudiniPointCache_h_12_PROLOG
#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_FX_HoudiniNiagara_Source_HoudiniNiagara_Public_HoudiniPointCache_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_FX_HoudiniNiagara_Source_HoudiniNiagara_Public_HoudiniPointCache_h_14_SPARSE_DATA \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_FX_HoudiniNiagara_Source_HoudiniNiagara_Public_HoudiniPointCache_h_14_RPC_WRAPPERS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_FX_HoudiniNiagara_Source_HoudiniNiagara_Public_HoudiniPointCache_h_14_ACCESSORS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_FX_HoudiniNiagara_Source_HoudiniNiagara_Public_HoudiniPointCache_h_14_INCLASS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_FX_HoudiniNiagara_Source_HoudiniNiagara_Public_HoudiniPointCache_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_FX_HoudiniNiagara_Source_HoudiniNiagara_Public_HoudiniPointCache_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_FX_HoudiniNiagara_Source_HoudiniNiagara_Public_HoudiniPointCache_h_14_SPARSE_DATA \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_FX_HoudiniNiagara_Source_HoudiniNiagara_Public_HoudiniPointCache_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_FX_HoudiniNiagara_Source_HoudiniNiagara_Public_HoudiniPointCache_h_14_ACCESSORS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_FX_HoudiniNiagara_Source_HoudiniNiagara_Public_HoudiniPointCache_h_14_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_FX_HoudiniNiagara_Source_HoudiniNiagara_Public_HoudiniPointCache_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOUDININIAGARA_API UClass* StaticClass<class UHoudiniPointCache>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_FX_HoudiniNiagara_Source_HoudiniNiagara_Public_HoudiniPointCache_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
