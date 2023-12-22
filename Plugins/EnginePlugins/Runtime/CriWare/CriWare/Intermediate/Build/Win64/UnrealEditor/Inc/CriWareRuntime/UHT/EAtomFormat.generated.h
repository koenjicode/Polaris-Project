// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EAtomFormat.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CRIWARERUNTIME_EAtomFormat_generated_h
#error "EAtomFormat.generated.h already included, missing '#pragma once' in EAtomFormat.h"
#endif
#define CRIWARERUNTIME_EAtomFormat_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EAtomFormat_h


#define FOREACH_ENUM_EATOMFORMAT(op) \
	op(EAtomFormat::None) \
	op(EAtomFormat::ADX) \
	op(EAtomFormat::HCA) \
	op(EAtomFormat::HCAMX) \
	op(EAtomFormat::AIFF) \
	op(EAtomFormat::Wave) \
	op(EAtomFormat::RawPCM) \
	op(EAtomFormat::Vibration) \
	op(EAtomFormat::AudioBuffer) \
	op(EAtomFormat::Instrument) \
	op(EAtomFormat::Hardware1) \
	op(EAtomFormat::Hardware2) \
	op(EAtomFormat::Num) 

enum class EAtomFormat : uint8;
template<> struct TIsUEnumClass<EAtomFormat> { enum { Value = true }; };
template<> CRIWARERUNTIME_API UEnum* StaticEnum<EAtomFormat>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
