// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EAtomSpeakerID.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CRIWARERUNTIME_EAtomSpeakerID_generated_h
#error "EAtomSpeakerID.generated.h already included, missing '#pragma once' in EAtomSpeakerID.h"
#endif
#define CRIWARERUNTIME_EAtomSpeakerID_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EAtomSpeakerID_h


#define FOREACH_ENUM_EATOMSPEAKERID(op) \
	op(EAtomSpeakerID::FrontLeft) \
	op(EAtomSpeakerID::FrontRight) \
	op(EAtomSpeakerID::FrontCenter) \
	op(EAtomSpeakerID::LowFrequency) \
	op(EAtomSpeakerID::SurroundLeft) \
	op(EAtomSpeakerID::SurroundRight) \
	op(EAtomSpeakerID::SurroundBackLeft) \
	op(EAtomSpeakerID::SurroundBackRight) 

enum class EAtomSpeakerID : uint8;
template<> struct TIsUEnumClass<EAtomSpeakerID> { enum { Value = true }; };
template<> CRIWARERUNTIME_API UEnum* StaticEnum<EAtomSpeakerID>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
