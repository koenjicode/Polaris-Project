// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkMultiPositionType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkMultiPositionType() {}
// Cross Module References
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_AkMultiPositionType();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_AkMultiPositionType;
	static UEnum* AkMultiPositionType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_AkMultiPositionType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_AkMultiPositionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_AkMultiPositionType, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkMultiPositionType"));
		}
		return Z_Registration_Info_UEnum_AkMultiPositionType.OuterSingleton;
	}
	template<> AKAUDIO_API UEnum* StaticEnum<AkMultiPositionType>()
	{
		return AkMultiPositionType_StaticEnum();
	}
	struct Z_Construct_UEnum_AkAudio_AkMultiPositionType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AkAudio_AkMultiPositionType_Statics::Enumerators[] = {
		{ "AkMultiPositionType::SingleSource", (int64)AkMultiPositionType::SingleSource },
		{ "AkMultiPositionType::MultiSources", (int64)AkMultiPositionType::MultiSources },
		{ "AkMultiPositionType::MultiDirections", (int64)AkMultiPositionType::MultiDirections },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AkAudio_AkMultiPositionType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AkMultiPositionType.h" },
		{ "MultiDirections.Name", "AkMultiPositionType::MultiDirections" },
		{ "MultiSources.Name", "AkMultiPositionType::MultiSources" },
		{ "SingleSource.Name", "AkMultiPositionType::SingleSource" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AkAudio_AkMultiPositionType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		"AkMultiPositionType",
		"AkMultiPositionType",
		Z_Construct_UEnum_AkAudio_AkMultiPositionType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_AkMultiPositionType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AkAudio_AkMultiPositionType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_AkMultiPositionType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AkAudio_AkMultiPositionType()
	{
		if (!Z_Registration_Info_UEnum_AkMultiPositionType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_AkMultiPositionType.InnerSingleton, Z_Construct_UEnum_AkAudio_AkMultiPositionType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_AkMultiPositionType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkMultiPositionType_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkMultiPositionType_h_Statics::EnumInfo[] = {
		{ AkMultiPositionType_StaticEnum, TEXT("AkMultiPositionType"), &Z_Registration_Info_UEnum_AkMultiPositionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2717086087U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkMultiPositionType_h_610808898(TEXT("/Script/AkAudio"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkMultiPositionType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkMultiPositionType_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
