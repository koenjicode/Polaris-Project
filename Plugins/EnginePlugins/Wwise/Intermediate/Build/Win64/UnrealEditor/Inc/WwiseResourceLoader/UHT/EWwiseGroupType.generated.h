// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EWwiseGroupType.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WWISERESOURCELOADER_EWwiseGroupType_generated_h
#error "EWwiseGroupType.generated.h already included, missing '#pragma once' in EWwiseGroupType.h"
#endif
#define WWISERESOURCELOADER_EWwiseGroupType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_WwiseResourceLoader_Public_EWwiseGroupType_h


#define FOREACH_ENUM_EWWISEGROUPTYPE(op) \
	op(EWwiseGroupType::Switch) \
	op(EWwiseGroupType::State) \
	op(EWwiseGroupType::Unknown) 

enum class EWwiseGroupType : uint8;
template<> struct TIsUEnumClass<EWwiseGroupType> { enum { Value = true }; };
template<> WWISERESOURCELOADER_API UEnum* StaticEnum<EWwiseGroupType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
