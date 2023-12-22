// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/EAtomFaderCurve.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAtomFaderCurve() {}
// Cross Module References
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EAtomFaderCurve();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAtomFaderCurve;
	static UEnum* EAtomFaderCurve_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAtomFaderCurve.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAtomFaderCurve.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CriWareRuntime_EAtomFaderCurve, (UObject*)Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("EAtomFaderCurve"));
		}
		return Z_Registration_Info_UEnum_EAtomFaderCurve.OuterSingleton;
	}
	template<> CRIWARERUNTIME_API UEnum* StaticEnum<EAtomFaderCurve>()
	{
		return EAtomFaderCurve_StaticEnum();
	}
	struct Z_Construct_UEnum_CriWareRuntime_EAtomFaderCurve_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CriWareRuntime_EAtomFaderCurve_Statics::Enumerators[] = {
		{ "EAtomFaderCurve::Linear", (int64)EAtomFaderCurve::Linear },
		{ "EAtomFaderCurve::Logarithmic", (int64)EAtomFaderCurve::Logarithmic },
		{ "EAtomFaderCurve::SCurve", (int64)EAtomFaderCurve::SCurve },
		{ "EAtomFaderCurve::Sin", (int64)EAtomFaderCurve::Sin },
		{ "EAtomFaderCurve::Count", (int64)EAtomFaderCurve::Count },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CriWareRuntime_EAtomFaderCurve_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Count.Name", "EAtomFaderCurve::Count" },
		{ "Linear.Name", "EAtomFaderCurve::Linear" },
		{ "Logarithmic.Name", "EAtomFaderCurve::Logarithmic" },
		{ "ModuleRelativePath", "Public/EAtomFaderCurve.h" },
		{ "SCurve.Name", "EAtomFaderCurve::SCurve" },
		{ "Sin.Name", "EAtomFaderCurve::Sin" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CriWareRuntime_EAtomFaderCurve_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CriWareRuntime,
		nullptr,
		"EAtomFaderCurve",
		"EAtomFaderCurve",
		Z_Construct_UEnum_CriWareRuntime_EAtomFaderCurve_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareRuntime_EAtomFaderCurve_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CriWareRuntime_EAtomFaderCurve_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareRuntime_EAtomFaderCurve_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CriWareRuntime_EAtomFaderCurve()
	{
		if (!Z_Registration_Info_UEnum_EAtomFaderCurve.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAtomFaderCurve.InnerSingleton, Z_Construct_UEnum_CriWareRuntime_EAtomFaderCurve_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAtomFaderCurve.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EAtomFaderCurve_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EAtomFaderCurve_h_Statics::EnumInfo[] = {
		{ EAtomFaderCurve_StaticEnum, TEXT("EAtomFaderCurve"), &Z_Registration_Info_UEnum_EAtomFaderCurve, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2195998171U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EAtomFaderCurve_h_1049378353(TEXT("/Script/CriWareRuntime"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EAtomFaderCurve_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EAtomFaderCurve_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
