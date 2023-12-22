// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WwiseFileHandler/Public/EWwiseSoundBankType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEWwiseSoundBankType() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_WwiseFileHandler();
	WWISEFILEHANDLER_API UEnum* Z_Construct_UEnum_WwiseFileHandler_EWwiseSoundBankType();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWwiseSoundBankType;
	static UEnum* EWwiseSoundBankType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EWwiseSoundBankType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EWwiseSoundBankType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WwiseFileHandler_EWwiseSoundBankType, (UObject*)Z_Construct_UPackage__Script_WwiseFileHandler(), TEXT("EWwiseSoundBankType"));
		}
		return Z_Registration_Info_UEnum_EWwiseSoundBankType.OuterSingleton;
	}
	template<> WWISEFILEHANDLER_API UEnum* StaticEnum<EWwiseSoundBankType>()
	{
		return EWwiseSoundBankType_StaticEnum();
	}
	struct Z_Construct_UEnum_WwiseFileHandler_EWwiseSoundBankType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_WwiseFileHandler_EWwiseSoundBankType_Statics::Enumerators[] = {
		{ "EWwiseSoundBankType::User", (int64)EWwiseSoundBankType::User },
		{ "EWwiseSoundBankType::Event", (int64)EWwiseSoundBankType::Event },
		{ "EWwiseSoundBankType::Bus", (int64)EWwiseSoundBankType::Bus },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_WwiseFileHandler_EWwiseSoundBankType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Bus.Name", "EWwiseSoundBankType::Bus" },
		{ "Event.Name", "EWwiseSoundBankType::Event" },
		{ "ModuleRelativePath", "Public/EWwiseSoundBankType.h" },
		{ "User.Name", "EWwiseSoundBankType::User" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_WwiseFileHandler_EWwiseSoundBankType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_WwiseFileHandler,
		nullptr,
		"EWwiseSoundBankType",
		"EWwiseSoundBankType",
		Z_Construct_UEnum_WwiseFileHandler_EWwiseSoundBankType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_WwiseFileHandler_EWwiseSoundBankType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_WwiseFileHandler_EWwiseSoundBankType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_WwiseFileHandler_EWwiseSoundBankType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_WwiseFileHandler_EWwiseSoundBankType()
	{
		if (!Z_Registration_Info_UEnum_EWwiseSoundBankType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWwiseSoundBankType.InnerSingleton, Z_Construct_UEnum_WwiseFileHandler_EWwiseSoundBankType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EWwiseSoundBankType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_WwiseFileHandler_Public_EWwiseSoundBankType_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_WwiseFileHandler_Public_EWwiseSoundBankType_h_Statics::EnumInfo[] = {
		{ EWwiseSoundBankType_StaticEnum, TEXT("EWwiseSoundBankType"), &Z_Registration_Info_UEnum_EWwiseSoundBankType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3402398106U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_WwiseFileHandler_Public_EWwiseSoundBankType_h_629332282(TEXT("/Script/WwiseFileHandler"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_WwiseFileHandler_Public_EWwiseSoundBankType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_WwiseFileHandler_Public_EWwiseSoundBankType_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
