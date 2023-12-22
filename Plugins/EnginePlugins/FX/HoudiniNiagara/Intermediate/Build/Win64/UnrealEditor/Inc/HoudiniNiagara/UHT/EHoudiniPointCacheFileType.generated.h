// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EHoudiniPointCacheFileType.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOUDININIAGARA_EHoudiniPointCacheFileType_generated_h
#error "EHoudiniPointCacheFileType.generated.h already included, missing '#pragma once' in EHoudiniPointCacheFileType.h"
#endif
#define HOUDININIAGARA_EHoudiniPointCacheFileType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_FX_HoudiniNiagara_Source_HoudiniNiagara_Public_EHoudiniPointCacheFileType_h


#define FOREACH_ENUM_EHOUDINIPOINTCACHEFILETYPE(op) \
	op(EHoudiniPointCacheFileType::Invalid) \
	op(EHoudiniPointCacheFileType::CSV) \
	op(EHoudiniPointCacheFileType::JSON) \
	op(EHoudiniPointCacheFileType::BJSON) 

enum class EHoudiniPointCacheFileType : uint8;
template<> struct TIsUEnumClass<EHoudiniPointCacheFileType> { enum { Value = true }; };
template<> HOUDININIAGARA_API UEnum* StaticEnum<EHoudiniPointCacheFileType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
