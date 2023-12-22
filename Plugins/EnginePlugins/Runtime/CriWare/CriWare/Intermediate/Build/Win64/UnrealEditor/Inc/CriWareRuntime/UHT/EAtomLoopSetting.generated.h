// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EAtomLoopSetting.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CRIWARERUNTIME_EAtomLoopSetting_generated_h
#error "EAtomLoopSetting.generated.h already included, missing '#pragma once' in EAtomLoopSetting.h"
#endif
#define CRIWARERUNTIME_EAtomLoopSetting_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EAtomLoopSetting_h


#define FOREACH_ENUM_EATOMLOOPSETTING(op) \
	op(EAtomLoopSetting::Inherited) \
	op(EAtomLoopSetting::Loop) \
	op(EAtomLoopSetting::OneShot) 

enum class EAtomLoopSetting : uint8;
template<> struct TIsUEnumClass<EAtomLoopSetting> { enum { Value = true }; };
template<> CRIWARERUNTIME_API UEnum* StaticEnum<EAtomLoopSetting>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
