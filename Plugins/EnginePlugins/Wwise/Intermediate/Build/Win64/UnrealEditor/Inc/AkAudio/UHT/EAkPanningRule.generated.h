// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EAkPanningRule.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AKAUDIO_EAkPanningRule_generated_h
#error "EAkPanningRule.generated.h already included, missing '#pragma once' in EAkPanningRule.h"
#endif
#define AKAUDIO_EAkPanningRule_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_EAkPanningRule_h


#define FOREACH_ENUM_EAKPANNINGRULE(op) \
	op(EAkPanningRule::Speakers) \
	op(EAkPanningRule::Headphones) 

enum class EAkPanningRule : int32;
template<> struct TIsUEnumClass<EAkPanningRule> { enum { Value = true }; };
template<> AKAUDIO_API UEnum* StaticEnum<EAkPanningRule>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
