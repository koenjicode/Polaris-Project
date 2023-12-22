// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/EAtomCueSheetLoaderComponentStatus.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAtomCueSheetLoaderComponentStatus() {}
// Cross Module References
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EAtomCueSheetLoaderComponentStatus();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAtomCueSheetLoaderComponentStatus;
	static UEnum* EAtomCueSheetLoaderComponentStatus_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAtomCueSheetLoaderComponentStatus.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAtomCueSheetLoaderComponentStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CriWareRuntime_EAtomCueSheetLoaderComponentStatus, (UObject*)Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("EAtomCueSheetLoaderComponentStatus"));
		}
		return Z_Registration_Info_UEnum_EAtomCueSheetLoaderComponentStatus.OuterSingleton;
	}
	template<> CRIWARERUNTIME_API UEnum* StaticEnum<EAtomCueSheetLoaderComponentStatus>()
	{
		return EAtomCueSheetLoaderComponentStatus_StaticEnum();
	}
	struct Z_Construct_UEnum_CriWareRuntime_EAtomCueSheetLoaderComponentStatus_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CriWareRuntime_EAtomCueSheetLoaderComponentStatus_Statics::Enumerators[] = {
		{ "EAtomCueSheetLoaderComponentStatus::Stop", (int64)EAtomCueSheetLoaderComponentStatus::Stop },
		{ "EAtomCueSheetLoaderComponentStatus::Loading", (int64)EAtomCueSheetLoaderComponentStatus::Loading },
		{ "EAtomCueSheetLoaderComponentStatus::LoadEnd", (int64)EAtomCueSheetLoaderComponentStatus::LoadEnd },
		{ "EAtomCueSheetLoaderComponentStatus::Serializing", (int64)EAtomCueSheetLoaderComponentStatus::Serializing },
		{ "EAtomCueSheetLoaderComponentStatus::SerializeEnd", (int64)EAtomCueSheetLoaderComponentStatus::SerializeEnd },
		{ "EAtomCueSheetLoaderComponentStatus::Binding", (int64)EAtomCueSheetLoaderComponentStatus::Binding },
		{ "EAtomCueSheetLoaderComponentStatus::BindEnd", (int64)EAtomCueSheetLoaderComponentStatus::BindEnd },
		{ "EAtomCueSheetLoaderComponentStatus::LoadCueSheet", (int64)EAtomCueSheetLoaderComponentStatus::LoadCueSheet },
		{ "EAtomCueSheetLoaderComponentStatus::Complete", (int64)EAtomCueSheetLoaderComponentStatus::Complete },
		{ "EAtomCueSheetLoaderComponentStatus::Error", (int64)EAtomCueSheetLoaderComponentStatus::Error },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CriWareRuntime_EAtomCueSheetLoaderComponentStatus_Statics::Enum_MetaDataParams[] = {
		{ "BindEnd.Name", "EAtomCueSheetLoaderComponentStatus::BindEnd" },
		{ "Binding.Name", "EAtomCueSheetLoaderComponentStatus::Binding" },
		{ "BlueprintType", "true" },
		{ "Complete.Name", "EAtomCueSheetLoaderComponentStatus::Complete" },
		{ "Error.Name", "EAtomCueSheetLoaderComponentStatus::Error" },
		{ "LoadCueSheet.Name", "EAtomCueSheetLoaderComponentStatus::LoadCueSheet" },
		{ "LoadEnd.Name", "EAtomCueSheetLoaderComponentStatus::LoadEnd" },
		{ "Loading.Name", "EAtomCueSheetLoaderComponentStatus::Loading" },
		{ "ModuleRelativePath", "Public/EAtomCueSheetLoaderComponentStatus.h" },
		{ "SerializeEnd.Name", "EAtomCueSheetLoaderComponentStatus::SerializeEnd" },
		{ "Serializing.Name", "EAtomCueSheetLoaderComponentStatus::Serializing" },
		{ "Stop.Name", "EAtomCueSheetLoaderComponentStatus::Stop" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CriWareRuntime_EAtomCueSheetLoaderComponentStatus_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CriWareRuntime,
		nullptr,
		"EAtomCueSheetLoaderComponentStatus",
		"EAtomCueSheetLoaderComponentStatus",
		Z_Construct_UEnum_CriWareRuntime_EAtomCueSheetLoaderComponentStatus_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareRuntime_EAtomCueSheetLoaderComponentStatus_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CriWareRuntime_EAtomCueSheetLoaderComponentStatus_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareRuntime_EAtomCueSheetLoaderComponentStatus_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CriWareRuntime_EAtomCueSheetLoaderComponentStatus()
	{
		if (!Z_Registration_Info_UEnum_EAtomCueSheetLoaderComponentStatus.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAtomCueSheetLoaderComponentStatus.InnerSingleton, Z_Construct_UEnum_CriWareRuntime_EAtomCueSheetLoaderComponentStatus_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAtomCueSheetLoaderComponentStatus.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EAtomCueSheetLoaderComponentStatus_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EAtomCueSheetLoaderComponentStatus_h_Statics::EnumInfo[] = {
		{ EAtomCueSheetLoaderComponentStatus_StaticEnum, TEXT("EAtomCueSheetLoaderComponentStatus"), &Z_Registration_Info_UEnum_EAtomCueSheetLoaderComponentStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3814301951U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EAtomCueSheetLoaderComponentStatus_h_921709261(TEXT("/Script/CriWareRuntime"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EAtomCueSheetLoaderComponentStatus_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EAtomCueSheetLoaderComponentStatus_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
