// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EAtomProfileSortType.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CRIWARERUNTIME_EAtomProfileSortType_generated_h
#error "EAtomProfileSortType.generated.h already included, missing '#pragma once' in EAtomProfileSortType.h"
#endif
#define CRIWARERUNTIME_EAtomProfileSortType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EAtomProfileSortType_h


#define FOREACH_ENUM_EATOMPROFILESORTTYPE(op) \
	op(EAtomProfileSortType::AtomComponentID) \
	op(EAtomProfileSortType::Distance) \
	op(EAtomProfileSortType::Name) \
	op(EAtomProfileSortType::Time) 

enum class EAtomProfileSortType : uint8;
template<> struct TIsUEnumClass<EAtomProfileSortType> { enum { Value = true }; };
template<> CRIWARERUNTIME_API UEnum* StaticEnum<EAtomProfileSortType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
