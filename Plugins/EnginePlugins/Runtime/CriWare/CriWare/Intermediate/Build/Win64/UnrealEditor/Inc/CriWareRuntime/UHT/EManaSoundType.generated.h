// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EManaSoundType.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CRIWARERUNTIME_EManaSoundType_generated_h
#error "EManaSoundType.generated.h already included, missing '#pragma once' in EManaSoundType.h"
#endif
#define CRIWARERUNTIME_EManaSoundType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EManaSoundType_h


#define FOREACH_ENUM_EMANASOUNDTYPE(op) \
	op(EManaSoundType::Adx) \
	op(EManaSoundType::HCA) \
	op(EManaSoundType::Num) \
	op(EManaSoundType::Unknown) 

enum class EManaSoundType : uint8;
template<> struct TIsUEnumClass<EManaSoundType> { enum { Value = true }; };
template<> CRIWARERUNTIME_API UEnum* StaticEnum<EManaSoundType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
