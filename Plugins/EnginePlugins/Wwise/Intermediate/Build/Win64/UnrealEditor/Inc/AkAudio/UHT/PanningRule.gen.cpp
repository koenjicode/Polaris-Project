// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/PanningRule.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePanningRule() {}
// Cross Module References
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_PanningRule();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_PanningRule;
	static UEnum* PanningRule_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_PanningRule.OuterSingleton)
		{
			Z_Registration_Info_UEnum_PanningRule.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_PanningRule, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("PanningRule"));
		}
		return Z_Registration_Info_UEnum_PanningRule.OuterSingleton;
	}
	template<> AKAUDIO_API UEnum* StaticEnum<PanningRule>()
	{
		return PanningRule_StaticEnum();
	}
	struct Z_Construct_UEnum_AkAudio_PanningRule_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AkAudio_PanningRule_Statics::Enumerators[] = {
		{ "PanningRule::PanningRule_Speakers", (int64)PanningRule::PanningRule_Speakers },
		{ "PanningRule::PanningRule_Headphones", (int64)PanningRule::PanningRule_Headphones },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AkAudio_PanningRule_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PanningRule.h" },
		{ "PanningRule_Headphones.Name", "PanningRule::PanningRule_Headphones" },
		{ "PanningRule_Speakers.Name", "PanningRule::PanningRule_Speakers" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AkAudio_PanningRule_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		"PanningRule",
		"PanningRule",
		Z_Construct_UEnum_AkAudio_PanningRule_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_PanningRule_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AkAudio_PanningRule_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_PanningRule_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AkAudio_PanningRule()
	{
		if (!Z_Registration_Info_UEnum_PanningRule.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_PanningRule.InnerSingleton, Z_Construct_UEnum_AkAudio_PanningRule_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_PanningRule.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_PanningRule_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_PanningRule_h_Statics::EnumInfo[] = {
		{ PanningRule_StaticEnum, TEXT("PanningRule"), &Z_Registration_Info_UEnum_PanningRule, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3413737044U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_PanningRule_h_1892273707(TEXT("/Script/AkAudio"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_PanningRule_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_PanningRule_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
