// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniNiagara/Public/EHoudiniPointCacheFileType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEHoudiniPointCacheFileType() {}
// Cross Module References
	HOUDININIAGARA_API UEnum* Z_Construct_UEnum_HoudiniNiagara_EHoudiniPointCacheFileType();
	UPackage* Z_Construct_UPackage__Script_HoudiniNiagara();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniPointCacheFileType;
	static UEnum* EHoudiniPointCacheFileType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EHoudiniPointCacheFileType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EHoudiniPointCacheFileType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniNiagara_EHoudiniPointCacheFileType, (UObject*)Z_Construct_UPackage__Script_HoudiniNiagara(), TEXT("EHoudiniPointCacheFileType"));
		}
		return Z_Registration_Info_UEnum_EHoudiniPointCacheFileType.OuterSingleton;
	}
	template<> HOUDININIAGARA_API UEnum* StaticEnum<EHoudiniPointCacheFileType>()
	{
		return EHoudiniPointCacheFileType_StaticEnum();
	}
	struct Z_Construct_UEnum_HoudiniNiagara_EHoudiniPointCacheFileType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_HoudiniNiagara_EHoudiniPointCacheFileType_Statics::Enumerators[] = {
		{ "EHoudiniPointCacheFileType::Invalid", (int64)EHoudiniPointCacheFileType::Invalid },
		{ "EHoudiniPointCacheFileType::CSV", (int64)EHoudiniPointCacheFileType::CSV },
		{ "EHoudiniPointCacheFileType::JSON", (int64)EHoudiniPointCacheFileType::JSON },
		{ "EHoudiniPointCacheFileType::BJSON", (int64)EHoudiniPointCacheFileType::BJSON },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_HoudiniNiagara_EHoudiniPointCacheFileType_Statics::Enum_MetaDataParams[] = {
		{ "BJSON.Name", "EHoudiniPointCacheFileType::BJSON" },
		{ "BlueprintType", "true" },
		{ "CSV.Name", "EHoudiniPointCacheFileType::CSV" },
		{ "Invalid.Name", "EHoudiniPointCacheFileType::Invalid" },
		{ "JSON.Name", "EHoudiniPointCacheFileType::JSON" },
		{ "ModuleRelativePath", "Public/EHoudiniPointCacheFileType.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniNiagara_EHoudiniPointCacheFileType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_HoudiniNiagara,
		nullptr,
		"EHoudiniPointCacheFileType",
		"EHoudiniPointCacheFileType",
		Z_Construct_UEnum_HoudiniNiagara_EHoudiniPointCacheFileType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniNiagara_EHoudiniPointCacheFileType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_HoudiniNiagara_EHoudiniPointCacheFileType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniNiagara_EHoudiniPointCacheFileType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_HoudiniNiagara_EHoudiniPointCacheFileType()
	{
		if (!Z_Registration_Info_UEnum_EHoudiniPointCacheFileType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniPointCacheFileType.InnerSingleton, Z_Construct_UEnum_HoudiniNiagara_EHoudiniPointCacheFileType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EHoudiniPointCacheFileType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_FX_HoudiniNiagara_Source_HoudiniNiagara_Public_EHoudiniPointCacheFileType_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_FX_HoudiniNiagara_Source_HoudiniNiagara_Public_EHoudiniPointCacheFileType_h_Statics::EnumInfo[] = {
		{ EHoudiniPointCacheFileType_StaticEnum, TEXT("EHoudiniPointCacheFileType"), &Z_Registration_Info_UEnum_EHoudiniPointCacheFileType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1944666359U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_FX_HoudiniNiagara_Source_HoudiniNiagara_Public_EHoudiniPointCacheFileType_h_3088986431(TEXT("/Script/HoudiniNiagara"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_FX_HoudiniNiagara_Source_HoudiniNiagara_Public_EHoudiniPointCacheFileType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_FX_HoudiniNiagara_Source_HoudiniNiagara_Public_EHoudiniPointCacheFileType_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
