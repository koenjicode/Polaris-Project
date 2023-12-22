// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EAkAudioSessionMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AKAUDIO_EAkAudioSessionMode_generated_h
#error "EAkAudioSessionMode.generated.h already included, missing '#pragma once' in EAkAudioSessionMode.h"
#endif
#define AKAUDIO_EAkAudioSessionMode_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_EAkAudioSessionMode_h


#define FOREACH_ENUM_EAKAUDIOSESSIONMODE(op) \
	op(EAkAudioSessionMode::Default) \
	op(EAkAudioSessionMode::VoiceChat) \
	op(EAkAudioSessionMode::GameChat) \
	op(EAkAudioSessionMode::VideoRecording) \
	op(EAkAudioSessionMode::Measurement) \
	op(EAkAudioSessionMode::MoviePlayback) \
	op(EAkAudioSessionMode::VideoChat) 

enum class EAkAudioSessionMode : int32;
template<> struct TIsUEnumClass<EAkAudioSessionMode> { enum { Value = true }; };
template<> AKAUDIO_API UEnum* StaticEnum<EAkAudioSessionMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
