// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ERTPCValueType.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AKAUDIO_ERTPCValueType_generated_h
#error "ERTPCValueType.generated.h already included, missing '#pragma once' in ERTPCValueType.h"
#endif
#define AKAUDIO_ERTPCValueType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_ERTPCValueType_h


#define FOREACH_ENUM_ERTPCVALUETYPE(op) \
	op(ERTPCValueType::Default) \
	op(ERTPCValueType::Global) \
	op(ERTPCValueType::GameObject) \
	op(ERTPCValueType::PlayingID) \
	op(ERTPCValueType::Unavailable) 

enum class ERTPCValueType : uint8;
template<> struct TIsUEnumClass<ERTPCValueType> { enum { Value = true }; };
template<> AKAUDIO_API UEnum* StaticEnum<ERTPCValueType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
