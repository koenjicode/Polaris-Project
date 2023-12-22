// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EAkCommSystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AKAUDIO_EAkCommSystem_generated_h
#error "EAkCommSystem.generated.h already included, missing '#pragma once' in EAkCommSystem.h"
#endif
#define AKAUDIO_EAkCommSystem_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_EAkCommSystem_h


#define FOREACH_ENUM_EAKCOMMSYSTEM(op) \
	op(EAkCommSystem::Socket) \
	op(EAkCommSystem::HTCS) 

enum class EAkCommSystem : int32;
template<> struct TIsUEnumClass<EAkCommSystem> { enum { Value = true }; };
template<> AKAUDIO_API UEnum* StaticEnum<EAkCommSystem>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
