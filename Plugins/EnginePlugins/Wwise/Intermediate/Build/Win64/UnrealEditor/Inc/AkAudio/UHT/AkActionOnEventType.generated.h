// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AkActionOnEventType.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AKAUDIO_AkActionOnEventType_generated_h
#error "AkActionOnEventType.generated.h already included, missing '#pragma once' in AkActionOnEventType.h"
#endif
#define AKAUDIO_AkActionOnEventType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkActionOnEventType_h


#define FOREACH_ENUM_AKACTIONONEVENTTYPE(op) \
	op(AkActionOnEventType::Stop) \
	op(AkActionOnEventType::Pause) \
	op(AkActionOnEventType::Resume) \
	op(AkActionOnEventType::Break) \
	op(AkActionOnEventType::ReleaseEnvelope) 

enum class AkActionOnEventType : uint8;
template<> struct TIsUEnumClass<AkActionOnEventType> { enum { Value = true }; };
template<> AKAUDIO_API UEnum* StaticEnum<AkActionOnEventType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
