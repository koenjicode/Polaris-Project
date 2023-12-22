// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AkMeshType.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AKAUDIO_AkMeshType_generated_h
#error "AkMeshType.generated.h already included, missing '#pragma once' in AkMeshType.h"
#endif
#define AKAUDIO_AkMeshType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkMeshType_h


#define FOREACH_ENUM_AKMESHTYPE(op) \
	op(AkMeshType::StaticMesh) \
	op(AkMeshType::CollisionMesh) 

enum class AkMeshType : uint8;
template<> struct TIsUEnumClass<AkMeshType> { enum { Value = true }; };
template<> AKAUDIO_API UEnum* StaticEnum<AkMeshType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
