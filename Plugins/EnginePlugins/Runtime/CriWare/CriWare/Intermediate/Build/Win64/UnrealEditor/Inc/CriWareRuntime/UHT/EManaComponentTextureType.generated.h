// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EManaComponentTextureType.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CRIWARERUNTIME_EManaComponentTextureType_generated_h
#error "EManaComponentTextureType.generated.h already included, missing '#pragma once' in EManaComponentTextureType.h"
#endif
#define CRIWARERUNTIME_EManaComponentTextureType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EManaComponentTextureType_h


#define FOREACH_ENUM_EMANACOMPONENTTEXTURETYPE(op) \
	op(EManaComponentTextureType::Texture_Y) \
	op(EManaComponentTextureType::Texture_U) \
	op(EManaComponentTextureType::Texture_V) \
	op(EManaComponentTextureType::Texture_A) \
	op(EManaComponentTextureType::Texture_UV) \
	op(EManaComponentTextureType::Texture_RGB) \
	op(EManaComponentTextureType::Texture_External) 

enum class EManaComponentTextureType : uint8;
template<> struct TIsUEnumClass<EManaComponentTextureType> { enum { Value = true }; };
template<> CRIWARERUNTIME_API UEnum* StaticEnum<EManaComponentTextureType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
