// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EManaColorSpace.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CRIWARERUNTIME_EManaColorSpace_generated_h
#error "EManaColorSpace.generated.h already included, missing '#pragma once' in EManaColorSpace.h"
#endif
#define CRIWARERUNTIME_EManaColorSpace_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EManaColorSpace_h


#define FOREACH_ENUM_EMANACOLORSPACE(op) \
	op(EManaColorSpace::Rec601) \
	op(EManaColorSpace::Rec601Full) \
	op(EManaColorSpace::Rec709) \
	op(EManaColorSpace::Rec709Full) \
	op(EManaColorSpace::Num) 

enum class EManaColorSpace : uint8;
template<> struct TIsUEnumClass<EManaColorSpace> { enum { Value = true }; };
template<> CRIWARERUNTIME_API UEnum* StaticEnum<EManaColorSpace>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
