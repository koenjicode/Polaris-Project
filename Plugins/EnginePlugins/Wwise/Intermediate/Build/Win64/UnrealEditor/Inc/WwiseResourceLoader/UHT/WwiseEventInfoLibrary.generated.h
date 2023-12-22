// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WwiseEventInfoLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EWwiseEventDestroyOptions : uint8;
enum class EWwiseEventSwitchContainerLoading : uint8;
struct FGuid;
struct FWwiseEventInfo;
#ifdef WWISERESOURCELOADER_WwiseEventInfoLibrary_generated_h
#error "WwiseEventInfoLibrary.generated.h already included, missing '#pragma once' in WwiseEventInfoLibrary.h"
#endif
#define WWISERESOURCELOADER_WwiseEventInfoLibrary_generated_h

#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_WwiseResourceLoader_Public_WwiseEventInfoLibrary_h_12_SPARSE_DATA
#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_WwiseResourceLoader_Public_WwiseEventInfoLibrary_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBreakStruct); \
	DECLARE_FUNCTION(execGetDestroyOptions); \
	DECLARE_FUNCTION(execGetHardCodedSoundBankShortId); \
	DECLARE_FUNCTION(execGetSwitchContainerLoading); \
	DECLARE_FUNCTION(execGetWwiseGuid); \
	DECLARE_FUNCTION(execGetWwiseName); \
	DECLARE_FUNCTION(execGetWwiseShortID); \
	DECLARE_FUNCTION(execMakeStruct); \
	DECLARE_FUNCTION(execSetDestroyOptions); \
	DECLARE_FUNCTION(execSetHardCodedSoundBankShortId); \
	DECLARE_FUNCTION(execSetSwitchContainerLoading); \
	DECLARE_FUNCTION(execSetWwiseGuid); \
	DECLARE_FUNCTION(execSetWwiseName); \
	DECLARE_FUNCTION(execSetWwiseShortId);


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_WwiseResourceLoader_Public_WwiseEventInfoLibrary_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBreakStruct); \
	DECLARE_FUNCTION(execGetDestroyOptions); \
	DECLARE_FUNCTION(execGetHardCodedSoundBankShortId); \
	DECLARE_FUNCTION(execGetSwitchContainerLoading); \
	DECLARE_FUNCTION(execGetWwiseGuid); \
	DECLARE_FUNCTION(execGetWwiseName); \
	DECLARE_FUNCTION(execGetWwiseShortID); \
	DECLARE_FUNCTION(execMakeStruct); \
	DECLARE_FUNCTION(execSetDestroyOptions); \
	DECLARE_FUNCTION(execSetHardCodedSoundBankShortId); \
	DECLARE_FUNCTION(execSetSwitchContainerLoading); \
	DECLARE_FUNCTION(execSetWwiseGuid); \
	DECLARE_FUNCTION(execSetWwiseName); \
	DECLARE_FUNCTION(execSetWwiseShortId);


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_WwiseResourceLoader_Public_WwiseEventInfoLibrary_h_12_ACCESSORS
#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_WwiseResourceLoader_Public_WwiseEventInfoLibrary_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWwiseEventInfoLibrary(); \
	friend struct Z_Construct_UClass_UWwiseEventInfoLibrary_Statics; \
public: \
	DECLARE_CLASS(UWwiseEventInfoLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WwiseResourceLoader"), NO_API) \
	DECLARE_SERIALIZER(UWwiseEventInfoLibrary)


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_WwiseResourceLoader_Public_WwiseEventInfoLibrary_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUWwiseEventInfoLibrary(); \
	friend struct Z_Construct_UClass_UWwiseEventInfoLibrary_Statics; \
public: \
	DECLARE_CLASS(UWwiseEventInfoLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WwiseResourceLoader"), NO_API) \
	DECLARE_SERIALIZER(UWwiseEventInfoLibrary)


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_WwiseResourceLoader_Public_WwiseEventInfoLibrary_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWwiseEventInfoLibrary(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWwiseEventInfoLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWwiseEventInfoLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWwiseEventInfoLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWwiseEventInfoLibrary(UWwiseEventInfoLibrary&&); \
	NO_API UWwiseEventInfoLibrary(const UWwiseEventInfoLibrary&); \
public: \
	NO_API virtual ~UWwiseEventInfoLibrary();


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_WwiseResourceLoader_Public_WwiseEventInfoLibrary_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWwiseEventInfoLibrary(UWwiseEventInfoLibrary&&); \
	NO_API UWwiseEventInfoLibrary(const UWwiseEventInfoLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWwiseEventInfoLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWwiseEventInfoLibrary); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWwiseEventInfoLibrary) \
	NO_API virtual ~UWwiseEventInfoLibrary();


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_WwiseResourceLoader_Public_WwiseEventInfoLibrary_h_10_PROLOG
#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_WwiseResourceLoader_Public_WwiseEventInfoLibrary_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_WwiseResourceLoader_Public_WwiseEventInfoLibrary_h_12_SPARSE_DATA \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_WwiseResourceLoader_Public_WwiseEventInfoLibrary_h_12_RPC_WRAPPERS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_WwiseResourceLoader_Public_WwiseEventInfoLibrary_h_12_ACCESSORS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_WwiseResourceLoader_Public_WwiseEventInfoLibrary_h_12_INCLASS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_WwiseResourceLoader_Public_WwiseEventInfoLibrary_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_WwiseResourceLoader_Public_WwiseEventInfoLibrary_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_WwiseResourceLoader_Public_WwiseEventInfoLibrary_h_12_SPARSE_DATA \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_WwiseResourceLoader_Public_WwiseEventInfoLibrary_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_WwiseResourceLoader_Public_WwiseEventInfoLibrary_h_12_ACCESSORS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_WwiseResourceLoader_Public_WwiseEventInfoLibrary_h_12_INCLASS_NO_PURE_DECLS \
	FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_WwiseResourceLoader_Public_WwiseEventInfoLibrary_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WWISERESOURCELOADER_API UClass* StaticClass<class UWwiseEventInfoLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_WwiseResourceLoader_Public_WwiseEventInfoLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
