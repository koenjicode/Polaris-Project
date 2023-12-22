// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AkCodecId.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AKAUDIO_AkCodecId_generated_h
#error "AkCodecId.generated.h already included, missing '#pragma once' in AkCodecId.h"
#endif
#define AKAUDIO_AkCodecId_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkCodecId_h


#define FOREACH_ENUM_AKCODECID(op) \
	op(AkCodecId::None) \
	op(AkCodecId::PCM) \
	op(AkCodecId::ADPCM) \
	op(AkCodecId::XMA) \
	op(AkCodecId::Vorbis) \
	op(AkCodecId::ATRAC9) \
	op(AkCodecId::OpusNX) \
	op(AkCodecId::AkOpus) \
	op(AkCodecId::AkOpusWEM) 

enum class AkCodecId : uint8;
template<> struct TIsUEnumClass<AkCodecId> { enum { Value = true }; };
template<> AKAUDIO_API UEnum* StaticEnum<AkCodecId>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
