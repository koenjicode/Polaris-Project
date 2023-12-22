// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EManaPlayerTrack.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CRIWARERUNTIME_EManaPlayerTrack_generated_h
#error "EManaPlayerTrack.generated.h already included, missing '#pragma once' in EManaPlayerTrack.h"
#endif
#define CRIWARERUNTIME_EManaPlayerTrack_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EManaPlayerTrack_h


#define FOREACH_ENUM_EMANAPLAYERTRACK(op) \
	op(EManaPlayerTrack::Audio) \
	op(EManaPlayerTrack::SubAudio) \
	op(EManaPlayerTrack::ExtraAudio) \
	op(EManaPlayerTrack::EventPoint) \
	op(EManaPlayerTrack::Subtitle) \
	op(EManaPlayerTrack::Video) \
	op(EManaPlayerTrack::Alpha) 

enum class EManaPlayerTrack : uint8;
template<> struct TIsUEnumClass<EManaPlayerTrack> { enum { Value = true }; };
template<> CRIWARERUNTIME_API UEnum* StaticEnum<EManaPlayerTrack>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
