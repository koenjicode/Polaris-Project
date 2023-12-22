// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EAkChannelMask.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AKAUDIO_EAkChannelMask_generated_h
#error "EAkChannelMask.generated.h already included, missing '#pragma once' in EAkChannelMask.h"
#endif
#define AKAUDIO_EAkChannelMask_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_EAkChannelMask_h


#define FOREACH_ENUM_EAKCHANNELMASK(op) \
	op(EAkChannelMask::FrontLeft) \
	op(EAkChannelMask::FrontRight) \
	op(EAkChannelMask::FrontCenter) \
	op(EAkChannelMask::LowFrequency) \
	op(EAkChannelMask::BackLeft) \
	op(EAkChannelMask::BackRight) \
	op(EAkChannelMask::BackCenter) \
	op(EAkChannelMask::SideLeft) \
	op(EAkChannelMask::SideRight) \
	op(EAkChannelMask::Top) \
	op(EAkChannelMask::HeightFrontLeft) \
	op(EAkChannelMask::HeightFrontCenter) \
	op(EAkChannelMask::HeightFrontRight) \
	op(EAkChannelMask::HeightBackLeft) \
	op(EAkChannelMask::HeightBackCenter) \
	op(EAkChannelMask::HeightBackRight) 

enum class EAkChannelMask : uint8;
template<> struct TIsUEnumClass<EAkChannelMask> { enum { Value = true }; };
template<> AKAUDIO_API UEnum* StaticEnum<EAkChannelMask>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
