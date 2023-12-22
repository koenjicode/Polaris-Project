// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EWwiseSoundBankType.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WWISEFILEHANDLER_EWwiseSoundBankType_generated_h
#error "EWwiseSoundBankType.generated.h already included, missing '#pragma once' in EWwiseSoundBankType.h"
#endif
#define WWISEFILEHANDLER_EWwiseSoundBankType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_WwiseFileHandler_Public_EWwiseSoundBankType_h


#define FOREACH_ENUM_EWWISESOUNDBANKTYPE(op) \
	op(EWwiseSoundBankType::User) \
	op(EWwiseSoundBankType::Event) \
	op(EWwiseSoundBankType::Bus) 

enum class EWwiseSoundBankType : uint8;
template<> struct TIsUEnumClass<EWwiseSoundBankType> { enum { Value = true }; };
template<> WWISEFILEHANDLER_API UEnum* StaticEnum<EWwiseSoundBankType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
