// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EWwiseEventDestroyOptions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WWISERESOURCELOADER_EWwiseEventDestroyOptions_generated_h
#error "EWwiseEventDestroyOptions.generated.h already included, missing '#pragma once' in EWwiseEventDestroyOptions.h"
#endif
#define WWISERESOURCELOADER_EWwiseEventDestroyOptions_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_WwiseResourceLoader_Public_EWwiseEventDestroyOptions_h


#define FOREACH_ENUM_EWWISEEVENTDESTROYOPTIONS(op) \
	op(EWwiseEventDestroyOptions::StopEventOnDestroy) \
	op(EWwiseEventDestroyOptions::WaitForEventEnd) 

enum class EWwiseEventDestroyOptions : uint8;
template<> struct TIsUEnumClass<EWwiseEventDestroyOptions> { enum { Value = true }; };
template<> WWISERESOURCELOADER_API UEnum* StaticEnum<EWwiseEventDestroyOptions>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
