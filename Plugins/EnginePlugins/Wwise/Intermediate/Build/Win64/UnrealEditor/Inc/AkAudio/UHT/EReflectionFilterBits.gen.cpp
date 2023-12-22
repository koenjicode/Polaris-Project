// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/EReflectionFilterBits.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEReflectionFilterBits() {}
// Cross Module References
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EReflectionFilterBits();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EReflectionFilterBits;
	static UEnum* EReflectionFilterBits_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EReflectionFilterBits.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EReflectionFilterBits.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_EReflectionFilterBits, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("EReflectionFilterBits"));
		}
		return Z_Registration_Info_UEnum_EReflectionFilterBits.OuterSingleton;
	}
	template<> AKAUDIO_API UEnum* StaticEnum<EReflectionFilterBits>()
	{
		return EReflectionFilterBits_StaticEnum();
	}
	struct Z_Construct_UEnum_AkAudio_EReflectionFilterBits_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AkAudio_EReflectionFilterBits_Statics::Enumerators[] = {
		{ "EReflectionFilterBits::Wall", (int64)EReflectionFilterBits::Wall },
		{ "EReflectionFilterBits::Ceiling", (int64)EReflectionFilterBits::Ceiling },
		{ "EReflectionFilterBits::Floor", (int64)EReflectionFilterBits::Floor },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AkAudio_EReflectionFilterBits_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Ceiling.Name", "EReflectionFilterBits::Ceiling" },
		{ "Floor.Name", "EReflectionFilterBits::Floor" },
		{ "ModuleRelativePath", "Public/EReflectionFilterBits.h" },
		{ "Wall.Name", "EReflectionFilterBits::Wall" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AkAudio_EReflectionFilterBits_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		"EReflectionFilterBits",
		"EReflectionFilterBits",
		Z_Construct_UEnum_AkAudio_EReflectionFilterBits_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_EReflectionFilterBits_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AkAudio_EReflectionFilterBits_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_EReflectionFilterBits_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AkAudio_EReflectionFilterBits()
	{
		if (!Z_Registration_Info_UEnum_EReflectionFilterBits.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EReflectionFilterBits.InnerSingleton, Z_Construct_UEnum_AkAudio_EReflectionFilterBits_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EReflectionFilterBits.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_EReflectionFilterBits_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_EReflectionFilterBits_h_Statics::EnumInfo[] = {
		{ EReflectionFilterBits_StaticEnum, TEXT("EReflectionFilterBits"), &Z_Registration_Info_UEnum_EReflectionFilterBits, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 875268680U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_EReflectionFilterBits_h_1693537268(TEXT("/Script/AkAudio"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_EReflectionFilterBits_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_EReflectionFilterBits_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
