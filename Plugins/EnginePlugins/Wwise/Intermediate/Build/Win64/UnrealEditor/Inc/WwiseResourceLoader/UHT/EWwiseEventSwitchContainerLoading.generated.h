// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EWwiseEventSwitchContainerLoading.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WWISERESOURCELOADER_EWwiseEventSwitchContainerLoading_generated_h
#error "EWwiseEventSwitchContainerLoading.generated.h already included, missing '#pragma once' in EWwiseEventSwitchContainerLoading.h"
#endif
#define WWISERESOURCELOADER_EWwiseEventSwitchContainerLoading_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_WwiseResourceLoader_Public_EWwiseEventSwitchContainerLoading_h


#define FOREACH_ENUM_EWWISEEVENTSWITCHCONTAINERLOADING(op) \
	op(EWwiseEventSwitchContainerLoading::AlwaysLoad) \
	op(EWwiseEventSwitchContainerLoading::LoadOnReference) 

enum class EWwiseEventSwitchContainerLoading : uint8;
template<> struct TIsUEnumClass<EWwiseEventSwitchContainerLoading> { enum { Value = true }; };
template<> WWISERESOURCELOADER_API UEnum* StaticEnum<EWwiseEventSwitchContainerLoading>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
