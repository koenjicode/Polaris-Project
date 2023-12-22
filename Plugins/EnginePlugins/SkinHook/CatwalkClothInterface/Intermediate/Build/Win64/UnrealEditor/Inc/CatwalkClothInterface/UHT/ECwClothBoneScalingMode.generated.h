// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ECwClothBoneScalingMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CATWALKCLOTHINTERFACE_ECwClothBoneScalingMode_generated_h
#error "ECwClothBoneScalingMode.generated.h already included, missing '#pragma once' in ECwClothBoneScalingMode.h"
#endif
#define CATWALKCLOTHINTERFACE_ECwClothBoneScalingMode_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkClothInterface_Source_CatwalkClothInterface_Public_ECwClothBoneScalingMode_h


#define FOREACH_ENUM_ECWCLOTHBONESCALINGMODE(op) \
	op(ECwClothBoneScalingMode::Disabled) \
	op(ECwClothBoneScalingMode::UpdateEveryFrame) \
	op(ECwClothBoneScalingMode::UseLastUpdatedFrame) 

enum class ECwClothBoneScalingMode : uint8;
template<> struct TIsUEnumClass<ECwClothBoneScalingMode> { enum { Value = true }; };
template<> CATWALKCLOTHINTERFACE_API UEnum* StaticEnum<ECwClothBoneScalingMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
