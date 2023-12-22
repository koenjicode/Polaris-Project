// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EAtomComponentStatus.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CRIWARERUNTIME_EAtomComponentStatus_generated_h
#error "EAtomComponentStatus.generated.h already included, missing '#pragma once' in EAtomComponentStatus.h"
#endif
#define CRIWARERUNTIME_EAtomComponentStatus_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EAtomComponentStatus_h


#define FOREACH_ENUM_EATOMCOMPONENTSTATUS(op) \
	op(EAtomComponentStatus::Stop) \
	op(EAtomComponentStatus::Prep) \
	op(EAtomComponentStatus::Playing) \
	op(EAtomComponentStatus::PlayEnd) \
	op(EAtomComponentStatus::Error) 

enum class EAtomComponentStatus : uint8;
template<> struct TIsUEnumClass<EAtomComponentStatus> { enum { Value = true }; };
template<> CRIWARERUNTIME_API UEnum* StaticEnum<EAtomComponentStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
