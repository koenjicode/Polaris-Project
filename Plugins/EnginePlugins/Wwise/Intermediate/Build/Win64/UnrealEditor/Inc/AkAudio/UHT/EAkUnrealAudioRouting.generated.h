// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EAkUnrealAudioRouting.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AKAUDIO_EAkUnrealAudioRouting_generated_h
#error "EAkUnrealAudioRouting.generated.h already included, missing '#pragma once' in EAkUnrealAudioRouting.h"
#endif
#define AKAUDIO_EAkUnrealAudioRouting_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_EAkUnrealAudioRouting_h


#define FOREACH_ENUM_EAKUNREALAUDIOROUTING(op) \
	op(EAkUnrealAudioRouting::Custom) \
	op(EAkUnrealAudioRouting::Separate) \
	op(EAkUnrealAudioRouting::AudioLink) \
	op(EAkUnrealAudioRouting::AudioMixer) \
	op(EAkUnrealAudioRouting::EnableWwiseOnly) \
	op(EAkUnrealAudioRouting::EnableUnrealOnly) 

enum class EAkUnrealAudioRouting : int32;
template<> struct TIsUEnumClass<EAkUnrealAudioRouting> { enum { Value = true }; };
template<> AKAUDIO_API UEnum* StaticEnum<EAkUnrealAudioRouting>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
