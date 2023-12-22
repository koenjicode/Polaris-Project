// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/EAtomProfileSortType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAtomProfileSortType() {}
// Cross Module References
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EAtomProfileSortType();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAtomProfileSortType;
	static UEnum* EAtomProfileSortType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAtomProfileSortType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAtomProfileSortType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CriWareRuntime_EAtomProfileSortType, (UObject*)Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("EAtomProfileSortType"));
		}
		return Z_Registration_Info_UEnum_EAtomProfileSortType.OuterSingleton;
	}
	template<> CRIWARERUNTIME_API UEnum* StaticEnum<EAtomProfileSortType>()
	{
		return EAtomProfileSortType_StaticEnum();
	}
	struct Z_Construct_UEnum_CriWareRuntime_EAtomProfileSortType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CriWareRuntime_EAtomProfileSortType_Statics::Enumerators[] = {
		{ "EAtomProfileSortType::AtomComponentID", (int64)EAtomProfileSortType::AtomComponentID },
		{ "EAtomProfileSortType::Distance", (int64)EAtomProfileSortType::Distance },
		{ "EAtomProfileSortType::Name", (int64)EAtomProfileSortType::Name },
		{ "EAtomProfileSortType::Time", (int64)EAtomProfileSortType::Time },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CriWareRuntime_EAtomProfileSortType_Statics::Enum_MetaDataParams[] = {
		{ "AtomComponentID.Name", "EAtomProfileSortType::AtomComponentID" },
		{ "BlueprintType", "true" },
		{ "Distance.Name", "EAtomProfileSortType::Distance" },
		{ "ModuleRelativePath", "Public/EAtomProfileSortType.h" },
		{ "Name.Name", "EAtomProfileSortType::Name" },
		{ "Time.Name", "EAtomProfileSortType::Time" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CriWareRuntime_EAtomProfileSortType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CriWareRuntime,
		nullptr,
		"EAtomProfileSortType",
		"EAtomProfileSortType",
		Z_Construct_UEnum_CriWareRuntime_EAtomProfileSortType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareRuntime_EAtomProfileSortType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CriWareRuntime_EAtomProfileSortType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareRuntime_EAtomProfileSortType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CriWareRuntime_EAtomProfileSortType()
	{
		if (!Z_Registration_Info_UEnum_EAtomProfileSortType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAtomProfileSortType.InnerSingleton, Z_Construct_UEnum_CriWareRuntime_EAtomProfileSortType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAtomProfileSortType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EAtomProfileSortType_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EAtomProfileSortType_h_Statics::EnumInfo[] = {
		{ EAtomProfileSortType_StaticEnum, TEXT("EAtomProfileSortType"), &Z_Registration_Info_UEnum_EAtomProfileSortType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2588730139U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EAtomProfileSortType_h_3816737211(TEXT("/Script/CriWareRuntime"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EAtomProfileSortType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EAtomProfileSortType_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
