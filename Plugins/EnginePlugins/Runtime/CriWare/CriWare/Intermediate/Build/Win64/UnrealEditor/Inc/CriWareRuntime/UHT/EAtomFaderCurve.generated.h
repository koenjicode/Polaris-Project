// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EAtomFaderCurve.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CRIWARERUNTIME_EAtomFaderCurve_generated_h
#error "EAtomFaderCurve.generated.h already included, missing '#pragma once' in EAtomFaderCurve.h"
#endif
#define CRIWARERUNTIME_EAtomFaderCurve_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EAtomFaderCurve_h


#define FOREACH_ENUM_EATOMFADERCURVE(op) \
	op(EAtomFaderCurve::Linear) \
	op(EAtomFaderCurve::Logarithmic) \
	op(EAtomFaderCurve::SCurve) \
	op(EAtomFaderCurve::Sin) \
	op(EAtomFaderCurve::Count) 

enum class EAtomFaderCurve : uint8;
template<> struct TIsUEnumClass<EAtomFaderCurve> { enum { Value = true }; };
template<> CRIWARERUNTIME_API UEnum* StaticEnum<EAtomFaderCurve>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
