// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/EManaSoundType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEManaSoundType() {}
// Cross Module References
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EManaSoundType();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EManaSoundType;
	static UEnum* EManaSoundType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EManaSoundType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EManaSoundType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CriWareRuntime_EManaSoundType, (UObject*)Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("EManaSoundType"));
		}
		return Z_Registration_Info_UEnum_EManaSoundType.OuterSingleton;
	}
	template<> CRIWARERUNTIME_API UEnum* StaticEnum<EManaSoundType>()
	{
		return EManaSoundType_StaticEnum();
	}
	struct Z_Construct_UEnum_CriWareRuntime_EManaSoundType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CriWareRuntime_EManaSoundType_Statics::Enumerators[] = {
		{ "EManaSoundType::Adx", (int64)EManaSoundType::Adx },
		{ "EManaSoundType::HCA", (int64)EManaSoundType::HCA },
		{ "EManaSoundType::Num", (int64)EManaSoundType::Num },
		{ "EManaSoundType::Unknown", (int64)EManaSoundType::Unknown },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CriWareRuntime_EManaSoundType_Statics::Enum_MetaDataParams[] = {
		{ "Adx.Name", "EManaSoundType::Adx" },
		{ "BlueprintType", "true" },
		{ "HCA.Name", "EManaSoundType::HCA" },
		{ "ModuleRelativePath", "Public/EManaSoundType.h" },
		{ "Num.Name", "EManaSoundType::Num" },
		{ "Unknown.Name", "EManaSoundType::Unknown" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CriWareRuntime_EManaSoundType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CriWareRuntime,
		nullptr,
		"EManaSoundType",
		"EManaSoundType",
		Z_Construct_UEnum_CriWareRuntime_EManaSoundType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareRuntime_EManaSoundType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CriWareRuntime_EManaSoundType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareRuntime_EManaSoundType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CriWareRuntime_EManaSoundType()
	{
		if (!Z_Registration_Info_UEnum_EManaSoundType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EManaSoundType.InnerSingleton, Z_Construct_UEnum_CriWareRuntime_EManaSoundType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EManaSoundType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EManaSoundType_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EManaSoundType_h_Statics::EnumInfo[] = {
		{ EManaSoundType_StaticEnum, TEXT("EManaSoundType"), &Z_Registration_Info_UEnum_EManaSoundType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2485356916U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EManaSoundType_h_3737715585(TEXT("/Script/CriWareRuntime"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EManaSoundType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EManaSoundType_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
