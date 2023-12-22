// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ESpeakerType.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CRIWARERUNTIME_ESpeakerType_generated_h
#error "ESpeakerType.generated.h already included, missing '#pragma once' in ESpeakerType.h"
#endif
#define CRIWARERUNTIME_ESpeakerType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ESpeakerType_h


#define FOREACH_ENUM_ESPEAKERTYPE(op) \
	op(ESpeakerType::NormalMode) \
	op(ESpeakerType::SeparateMode) 

enum class ESpeakerType : uint8;
template<> struct TIsUEnumClass<ESpeakerType> { enum { Value = true }; };
template<> CRIWARERUNTIME_API UEnum* StaticEnum<ESpeakerType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
