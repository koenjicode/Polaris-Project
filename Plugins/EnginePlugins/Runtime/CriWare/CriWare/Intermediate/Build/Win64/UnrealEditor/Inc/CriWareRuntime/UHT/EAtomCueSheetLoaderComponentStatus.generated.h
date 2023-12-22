// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EAtomCueSheetLoaderComponentStatus.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CRIWARERUNTIME_EAtomCueSheetLoaderComponentStatus_generated_h
#error "EAtomCueSheetLoaderComponentStatus.generated.h already included, missing '#pragma once' in EAtomCueSheetLoaderComponentStatus.h"
#endif
#define CRIWARERUNTIME_EAtomCueSheetLoaderComponentStatus_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EAtomCueSheetLoaderComponentStatus_h


#define FOREACH_ENUM_EATOMCUESHEETLOADERCOMPONENTSTATUS(op) \
	op(EAtomCueSheetLoaderComponentStatus::Stop) \
	op(EAtomCueSheetLoaderComponentStatus::Loading) \
	op(EAtomCueSheetLoaderComponentStatus::LoadEnd) \
	op(EAtomCueSheetLoaderComponentStatus::Serializing) \
	op(EAtomCueSheetLoaderComponentStatus::SerializeEnd) \
	op(EAtomCueSheetLoaderComponentStatus::Binding) \
	op(EAtomCueSheetLoaderComponentStatus::BindEnd) \
	op(EAtomCueSheetLoaderComponentStatus::LoadCueSheet) \
	op(EAtomCueSheetLoaderComponentStatus::Complete) \
	op(EAtomCueSheetLoaderComponentStatus::Error) 

enum class EAtomCueSheetLoaderComponentStatus : uint8;
template<> struct TIsUEnumClass<EAtomCueSheetLoaderComponentStatus> { enum { Value = true }; };
template<> CRIWARERUNTIME_API UEnum* StaticEnum<EAtomCueSheetLoaderComponentStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
