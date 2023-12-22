// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WwiseFileHandler/Public/EWwiseLanguageRequirement.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEWwiseLanguageRequirement() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_WwiseFileHandler();
	WWISEFILEHANDLER_API UEnum* Z_Construct_UEnum_WwiseFileHandler_EWwiseLanguageRequirement();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWwiseLanguageRequirement;
	static UEnum* EWwiseLanguageRequirement_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EWwiseLanguageRequirement.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EWwiseLanguageRequirement.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WwiseFileHandler_EWwiseLanguageRequirement, (UObject*)Z_Construct_UPackage__Script_WwiseFileHandler(), TEXT("EWwiseLanguageRequirement"));
		}
		return Z_Registration_Info_UEnum_EWwiseLanguageRequirement.OuterSingleton;
	}
	template<> WWISEFILEHANDLER_API UEnum* StaticEnum<EWwiseLanguageRequirement>()
	{
		return EWwiseLanguageRequirement_StaticEnum();
	}
	struct Z_Construct_UEnum_WwiseFileHandler_EWwiseLanguageRequirement_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_WwiseFileHandler_EWwiseLanguageRequirement_Statics::Enumerators[] = {
		{ "EWwiseLanguageRequirement::IsDefault", (int64)EWwiseLanguageRequirement::IsDefault },
		{ "EWwiseLanguageRequirement::IsOptional", (int64)EWwiseLanguageRequirement::IsOptional },
		{ "EWwiseLanguageRequirement::SFX", (int64)EWwiseLanguageRequirement::SFX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_WwiseFileHandler_EWwiseLanguageRequirement_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsDefault.Name", "EWwiseLanguageRequirement::IsDefault" },
		{ "IsOptional.Name", "EWwiseLanguageRequirement::IsOptional" },
		{ "ModuleRelativePath", "Public/EWwiseLanguageRequirement.h" },
		{ "SFX.Name", "EWwiseLanguageRequirement::SFX" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_WwiseFileHandler_EWwiseLanguageRequirement_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_WwiseFileHandler,
		nullptr,
		"EWwiseLanguageRequirement",
		"EWwiseLanguageRequirement",
		Z_Construct_UEnum_WwiseFileHandler_EWwiseLanguageRequirement_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_WwiseFileHandler_EWwiseLanguageRequirement_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_WwiseFileHandler_EWwiseLanguageRequirement_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_WwiseFileHandler_EWwiseLanguageRequirement_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_WwiseFileHandler_EWwiseLanguageRequirement()
	{
		if (!Z_Registration_Info_UEnum_EWwiseLanguageRequirement.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWwiseLanguageRequirement.InnerSingleton, Z_Construct_UEnum_WwiseFileHandler_EWwiseLanguageRequirement_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EWwiseLanguageRequirement.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_WwiseFileHandler_Public_EWwiseLanguageRequirement_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_WwiseFileHandler_Public_EWwiseLanguageRequirement_h_Statics::EnumInfo[] = {
		{ EWwiseLanguageRequirement_StaticEnum, TEXT("EWwiseLanguageRequirement"), &Z_Registration_Info_UEnum_EWwiseLanguageRequirement, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2685026499U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_WwiseFileHandler_Public_EWwiseLanguageRequirement_h_712354012(TEXT("/Script/WwiseFileHandler"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_WwiseFileHandler_Public_EWwiseLanguageRequirement_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_WwiseFileHandler_Public_EWwiseLanguageRequirement_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
