// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EAkAndroidAudioAPI.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AKAUDIO_EAkAndroidAudioAPI_generated_h
#error "EAkAndroidAudioAPI.generated.h already included, missing '#pragma once' in EAkAndroidAudioAPI.h"
#endif
#define AKAUDIO_EAkAndroidAudioAPI_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_EAkAndroidAudioAPI_h


#define FOREACH_ENUM_EAKANDROIDAUDIOAPI(op) \
	op(EAkAndroidAudioAPI::AAudio) \
	op(EAkAndroidAudioAPI::OpenSL_ES) 

enum class EAkAndroidAudioAPI : uint8;
template<> struct TIsUEnumClass<EAkAndroidAudioAPI> { enum { Value = true }; };
template<> AKAUDIO_API UEnum* StaticEnum<EAkAndroidAudioAPI>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
