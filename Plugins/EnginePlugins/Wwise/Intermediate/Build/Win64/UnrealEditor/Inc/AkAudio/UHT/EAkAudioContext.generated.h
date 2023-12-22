// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EAkAudioContext.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AKAUDIO_EAkAudioContext_generated_h
#error "EAkAudioContext.generated.h already included, missing '#pragma once' in EAkAudioContext.h"
#endif
#define AKAUDIO_EAkAudioContext_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_EAkAudioContext_h


#define FOREACH_ENUM_EAKAUDIOCONTEXT(op) \
	op(EAkAudioContext::Foreign) \
	op(EAkAudioContext::GameplayAudio) \
	op(EAkAudioContext::EditorAudio) \
	op(EAkAudioContext::AlwaysActive) 

enum class EAkAudioContext : uint8;
template<> struct TIsUEnumClass<EAkAudioContext> { enum { Value = true }; };
template<> AKAUDIO_API UEnum* StaticEnum<EAkAudioContext>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
