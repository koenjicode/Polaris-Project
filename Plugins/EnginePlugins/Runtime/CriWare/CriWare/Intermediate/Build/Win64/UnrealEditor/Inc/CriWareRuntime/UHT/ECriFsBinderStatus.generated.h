// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ECriFsBinderStatus.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CRIWARERUNTIME_ECriFsBinderStatus_generated_h
#error "ECriFsBinderStatus.generated.h already included, missing '#pragma once' in ECriFsBinderStatus.h"
#endif
#define CRIWARERUNTIME_ECriFsBinderStatus_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ECriFsBinderStatus_h


#define FOREACH_ENUM_ECRIFSBINDERSTATUS(op) \
	op(ECriFsBinderStatus::Stop) \
	op(ECriFsBinderStatus::Binding) \
	op(ECriFsBinderStatus::Complete) \
	op(ECriFsBinderStatus::Error) 

enum class ECriFsBinderStatus : uint8;
template<> struct TIsUEnumClass<ECriFsBinderStatus> { enum { Value = true }; };
template<> CRIWARERUNTIME_API UEnum* StaticEnum<ECriFsBinderStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
