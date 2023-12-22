// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EWwiseLanguageRequirement.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WWISEFILEHANDLER_EWwiseLanguageRequirement_generated_h
#error "EWwiseLanguageRequirement.generated.h already included, missing '#pragma once' in EWwiseLanguageRequirement.h"
#endif
#define WWISEFILEHANDLER_EWwiseLanguageRequirement_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_WwiseFileHandler_Public_EWwiseLanguageRequirement_h


#define FOREACH_ENUM_EWWISELANGUAGEREQUIREMENT(op) \
	op(EWwiseLanguageRequirement::IsDefault) \
	op(EWwiseLanguageRequirement::IsOptional) \
	op(EWwiseLanguageRequirement::SFX) 

enum class EWwiseLanguageRequirement : uint8;
template<> struct TIsUEnumClass<EWwiseLanguageRequirement> { enum { Value = true }; };
template<> WWISEFILEHANDLER_API UEnum* StaticEnum<EWwiseLanguageRequirement>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
