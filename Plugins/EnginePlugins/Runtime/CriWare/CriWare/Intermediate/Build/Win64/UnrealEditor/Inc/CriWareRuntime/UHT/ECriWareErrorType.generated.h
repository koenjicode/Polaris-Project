// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ECriWareErrorType.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CRIWARERUNTIME_ECriWareErrorType_generated_h
#error "ECriWareErrorType.generated.h already included, missing '#pragma once' in ECriWareErrorType.h"
#endif
#define CRIWARERUNTIME_ECriWareErrorType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ECriWareErrorType_h


#define FOREACH_ENUM_ECRIWAREERRORTYPE(op) \
	op(ECriWareErrorType::Warning) \
	op(ECriWareErrorType::Error) 

enum class ECriWareErrorType : uint8;
template<> struct TIsUEnumClass<ECriWareErrorType> { enum { Value = true }; };
template<> CRIWARERUNTIME_API UEnum* StaticEnum<ECriWareErrorType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
