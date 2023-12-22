// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EAkAudioSessionCategoryOptions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AKAUDIO_EAkAudioSessionCategoryOptions_generated_h
#error "EAkAudioSessionCategoryOptions.generated.h already included, missing '#pragma once' in EAkAudioSessionCategoryOptions.h"
#endif
#define AKAUDIO_EAkAudioSessionCategoryOptions_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_EAkAudioSessionCategoryOptions_h


#define FOREACH_ENUM_EAKAUDIOSESSIONCATEGORYOPTIONS(op) \
	op(EAkAudioSessionCategoryOptions::MixWithOthers) \
	op(EAkAudioSessionCategoryOptions::DuckOthers) \
	op(EAkAudioSessionCategoryOptions::AllowBluetooth) \
	op(EAkAudioSessionCategoryOptions::DefaultToSpeaker) 

enum class EAkAudioSessionCategoryOptions : uint8;
template<> struct TIsUEnumClass<EAkAudioSessionCategoryOptions> { enum { Value = true }; };
template<> AKAUDIO_API UEnum* StaticEnum<EAkAudioSessionCategoryOptions>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
