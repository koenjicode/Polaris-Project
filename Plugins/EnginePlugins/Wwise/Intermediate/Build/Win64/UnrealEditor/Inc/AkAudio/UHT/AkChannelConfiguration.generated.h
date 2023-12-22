// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AkChannelConfiguration.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AKAUDIO_AkChannelConfiguration_generated_h
#error "AkChannelConfiguration.generated.h already included, missing '#pragma once' in AkChannelConfiguration.h"
#endif
#define AKAUDIO_AkChannelConfiguration_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkChannelConfiguration_h


#define FOREACH_ENUM_AKCHANNELCONFIGURATION(op) \
	op(AkChannelConfiguration::Ak_Parent) \
	op(AkChannelConfiguration::Ak_MainMix) \
	op(AkChannelConfiguration::Ak_Passthrough) \
	op(AkChannelConfiguration::Ak_LFE) \
	op(AkChannelConfiguration::AK_Audio_Objects) \
	op(AkChannelConfiguration::Ak_1_0) \
	op(AkChannelConfiguration::Ak_2_0) \
	op(AkChannelConfiguration::Ak_2_1) \
	op(AkChannelConfiguration::Ak_3_0) \
	op(AkChannelConfiguration::Ak_3_1) \
	op(AkChannelConfiguration::Ak_4_0) \
	op(AkChannelConfiguration::Ak_4_1) \
	op(AkChannelConfiguration::Ak_5_0) \
	op(AkChannelConfiguration::Ak_5_1) \
	op(AkChannelConfiguration::Ak_7_1) \
	op(AkChannelConfiguration::Ak_5_1_2) \
	op(AkChannelConfiguration::Ak_7_1_2) \
	op(AkChannelConfiguration::Ak_7_1_4) \
	op(AkChannelConfiguration::Ak_Auro_9_1) \
	op(AkChannelConfiguration::Ak_Auro_10_1) \
	op(AkChannelConfiguration::Ak_Auro_11_1) \
	op(AkChannelConfiguration::Ak_Auro_13_1) \
	op(AkChannelConfiguration::Ak_Ambisonics_1st_order) \
	op(AkChannelConfiguration::Ak_Ambisonics_2nd_order) \
	op(AkChannelConfiguration::Ak_Ambisonics_3rd_order) \
	op(AkChannelConfiguration::Ak_Ambisonics_4th_order) \
	op(AkChannelConfiguration::Ak_Ambisonics_5th_order) 

enum class AkChannelConfiguration : uint8;
template<> struct TIsUEnumClass<AkChannelConfiguration> { enum { Value = true }; };
template<> AKAUDIO_API UEnum* StaticEnum<AkChannelConfiguration>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
