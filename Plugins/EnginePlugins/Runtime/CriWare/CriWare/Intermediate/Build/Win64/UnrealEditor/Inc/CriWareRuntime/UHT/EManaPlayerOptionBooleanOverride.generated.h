// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EManaPlayerOptionBooleanOverride.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CRIWARERUNTIME_EManaPlayerOptionBooleanOverride_generated_h
#error "EManaPlayerOptionBooleanOverride.generated.h already included, missing '#pragma once' in EManaPlayerOptionBooleanOverride.h"
#endif
#define CRIWARERUNTIME_EManaPlayerOptionBooleanOverride_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EManaPlayerOptionBooleanOverride_h


#define FOREACH_ENUM_EMANAPLAYEROPTIONBOOLEANOVERRIDE(op) \
	op(EManaPlayerOptionBooleanOverride::UseManaPlayerSetting) \
	op(EManaPlayerOptionBooleanOverride::Enabled) \
	op(EManaPlayerOptionBooleanOverride::Disabled) 

enum class EManaPlayerOptionBooleanOverride : uint8;
template<> struct TIsUEnumClass<EManaPlayerOptionBooleanOverride> { enum { Value = true }; };
template<> CRIWARERUNTIME_API UEnum* StaticEnum<EManaPlayerOptionBooleanOverride>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
