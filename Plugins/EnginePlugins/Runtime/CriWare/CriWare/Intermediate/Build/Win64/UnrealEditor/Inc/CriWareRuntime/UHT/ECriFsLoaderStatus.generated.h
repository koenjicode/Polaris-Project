// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ECriFsLoaderStatus.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CRIWARERUNTIME_ECriFsLoaderStatus_generated_h
#error "ECriFsLoaderStatus.generated.h already included, missing '#pragma once' in ECriFsLoaderStatus.h"
#endif
#define CRIWARERUNTIME_ECriFsLoaderStatus_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ECriFsLoaderStatus_h


#define FOREACH_ENUM_ECRIFSLOADERSTATUS(op) \
	op(ECriFsLoaderStatus::Stop) \
	op(ECriFsLoaderStatus::Loading) \
	op(ECriFsLoaderStatus::Complete) \
	op(ECriFsLoaderStatus::Error) 

enum class ECriFsLoaderStatus : uint8;
template<> struct TIsUEnumClass<ECriFsLoaderStatus> { enum { Value = true }; };
template<> CRIWARERUNTIME_API UEnum* StaticEnum<ECriFsLoaderStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
