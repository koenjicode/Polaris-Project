// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EManaFrameAction.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CRIWARERUNTIME_EManaFrameAction_generated_h
#error "EManaFrameAction.generated.h already included, missing '#pragma once' in EManaFrameAction.h"
#endif
#define CRIWARERUNTIME_EManaFrameAction_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EManaFrameAction_h


#define FOREACH_ENUM_EMANAFRAMEACTION(op) \
	op(EManaFrameAction::Default) \
	op(EManaFrameAction::Hold) \
	op(EManaFrameAction::Clear) 

enum class EManaFrameAction : uint8;
template<> struct TIsUEnumClass<EManaFrameAction> { enum { Value = true }; };
template<> CRIWARERUNTIME_API UEnum* StaticEnum<EManaFrameAction>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
