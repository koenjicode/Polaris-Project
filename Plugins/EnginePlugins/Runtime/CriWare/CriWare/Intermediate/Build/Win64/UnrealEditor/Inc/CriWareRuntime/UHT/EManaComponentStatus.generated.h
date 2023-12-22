// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EManaComponentStatus.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CRIWARERUNTIME_EManaComponentStatus_generated_h
#error "EManaComponentStatus.generated.h already included, missing '#pragma once' in EManaComponentStatus.h"
#endif
#define CRIWARERUNTIME_EManaComponentStatus_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EManaComponentStatus_h


#define FOREACH_ENUM_EMANACOMPONENTSTATUS(op) \
	op(EManaComponentStatus::Stop) \
	op(EManaComponentStatus::DecHdr) \
	op(EManaComponentStatus::WaitPrep) \
	op(EManaComponentStatus::Prep) \
	op(EManaComponentStatus::Ready) \
	op(EManaComponentStatus::Playing) \
	op(EManaComponentStatus::PlayEnd) \
	op(EManaComponentStatus::Error) \
	op(EManaComponentStatus::StopProcessing) 

enum class EManaComponentStatus : uint8;
template<> struct TIsUEnumClass<EManaComponentStatus> { enum { Value = true }; };
template<> CRIWARERUNTIME_API UEnum* StaticEnum<EManaComponentStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
