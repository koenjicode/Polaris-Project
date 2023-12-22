// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EAkFitToGeometryMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AKAUDIO_EAkFitToGeometryMode_generated_h
#error "EAkFitToGeometryMode.generated.h already included, missing '#pragma once' in EAkFitToGeometryMode.h"
#endif
#define AKAUDIO_EAkFitToGeometryMode_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_EAkFitToGeometryMode_h


#define FOREACH_ENUM_EAKFITTOGEOMETRYMODE(op) \
	op(EAkFitToGeometryMode::OrientedBox) \
	op(EAkFitToGeometryMode::AlignedBox) \
	op(EAkFitToGeometryMode::ConvexPolyhedron) 

enum class EAkFitToGeometryMode : uint8;
template<> struct TIsUEnumClass<EAkFitToGeometryMode> { enum { Value = true }; };
template<> AKAUDIO_API UEnum* StaticEnum<EAkFitToGeometryMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
