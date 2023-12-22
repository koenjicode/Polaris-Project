// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EAtomSortOrderType.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CRIWARERUNTIME_EAtomSortOrderType_generated_h
#error "EAtomSortOrderType.generated.h already included, missing '#pragma once' in EAtomSortOrderType.h"
#endif
#define CRIWARERUNTIME_EAtomSortOrderType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EAtomSortOrderType_h


#define FOREACH_ENUM_EATOMSORTORDERTYPE(op) \
	op(EAtomSortOrderType::Ascending) \
	op(EAtomSortOrderType::Descending) 

enum class EAtomSortOrderType : uint8;
template<> struct TIsUEnumClass<EAtomSortOrderType> { enum { Value = true }; };
template<> CRIWARERUNTIME_API UEnum* StaticEnum<EAtomSortOrderType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
