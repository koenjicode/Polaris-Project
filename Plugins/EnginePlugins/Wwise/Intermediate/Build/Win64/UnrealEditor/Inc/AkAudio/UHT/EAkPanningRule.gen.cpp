// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/EAkPanningRule.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAkPanningRule() {}
// Cross Module References
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkPanningRule();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAkPanningRule;
	static UEnum* EAkPanningRule_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAkPanningRule.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAkPanningRule.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_EAkPanningRule, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("EAkPanningRule"));
		}
		return Z_Registration_Info_UEnum_EAkPanningRule.OuterSingleton;
	}
	template<> AKAUDIO_API UEnum* StaticEnum<EAkPanningRule>()
	{
		return EAkPanningRule_StaticEnum();
	}
	struct Z_Construct_UEnum_AkAudio_EAkPanningRule_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AkAudio_EAkPanningRule_Statics::Enumerators[] = {
		{ "EAkPanningRule::Speakers", (int64)EAkPanningRule::Speakers },
		{ "EAkPanningRule::Headphones", (int64)EAkPanningRule::Headphones },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AkAudio_EAkPanningRule_Statics::Enum_MetaDataParams[] = {
		{ "Headphones.Name", "EAkPanningRule::Headphones" },
		{ "ModuleRelativePath", "Public/EAkPanningRule.h" },
		{ "Speakers.Name", "EAkPanningRule::Speakers" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AkAudio_EAkPanningRule_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		"EAkPanningRule",
		"EAkPanningRule",
		Z_Construct_UEnum_AkAudio_EAkPanningRule_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_EAkPanningRule_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AkAudio_EAkPanningRule_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_EAkPanningRule_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AkAudio_EAkPanningRule()
	{
		if (!Z_Registration_Info_UEnum_EAkPanningRule.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAkPanningRule.InnerSingleton, Z_Construct_UEnum_AkAudio_EAkPanningRule_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAkPanningRule.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_EAkPanningRule_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_EAkPanningRule_h_Statics::EnumInfo[] = {
		{ EAkPanningRule_StaticEnum, TEXT("EAkPanningRule"), &Z_Registration_Info_UEnum_EAkPanningRule, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3096846560U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_EAkPanningRule_h_1632202596(TEXT("/Script/AkAudio"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_EAkPanningRule_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_EAkPanningRule_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
