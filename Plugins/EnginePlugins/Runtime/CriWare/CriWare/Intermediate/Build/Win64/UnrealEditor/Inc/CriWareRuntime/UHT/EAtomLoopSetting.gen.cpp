// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/EAtomLoopSetting.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAtomLoopSetting() {}
// Cross Module References
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EAtomLoopSetting();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAtomLoopSetting;
	static UEnum* EAtomLoopSetting_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAtomLoopSetting.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAtomLoopSetting.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CriWareRuntime_EAtomLoopSetting, (UObject*)Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("EAtomLoopSetting"));
		}
		return Z_Registration_Info_UEnum_EAtomLoopSetting.OuterSingleton;
	}
	template<> CRIWARERUNTIME_API UEnum* StaticEnum<EAtomLoopSetting>()
	{
		return EAtomLoopSetting_StaticEnum();
	}
	struct Z_Construct_UEnum_CriWareRuntime_EAtomLoopSetting_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CriWareRuntime_EAtomLoopSetting_Statics::Enumerators[] = {
		{ "EAtomLoopSetting::Inherited", (int64)EAtomLoopSetting::Inherited },
		{ "EAtomLoopSetting::Loop", (int64)EAtomLoopSetting::Loop },
		{ "EAtomLoopSetting::OneShot", (int64)EAtomLoopSetting::OneShot },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CriWareRuntime_EAtomLoopSetting_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Inherited.Name", "EAtomLoopSetting::Inherited" },
		{ "Loop.Name", "EAtomLoopSetting::Loop" },
		{ "ModuleRelativePath", "Public/EAtomLoopSetting.h" },
		{ "OneShot.Name", "EAtomLoopSetting::OneShot" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CriWareRuntime_EAtomLoopSetting_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CriWareRuntime,
		nullptr,
		"EAtomLoopSetting",
		"EAtomLoopSetting",
		Z_Construct_UEnum_CriWareRuntime_EAtomLoopSetting_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareRuntime_EAtomLoopSetting_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CriWareRuntime_EAtomLoopSetting_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareRuntime_EAtomLoopSetting_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CriWareRuntime_EAtomLoopSetting()
	{
		if (!Z_Registration_Info_UEnum_EAtomLoopSetting.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAtomLoopSetting.InnerSingleton, Z_Construct_UEnum_CriWareRuntime_EAtomLoopSetting_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAtomLoopSetting.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EAtomLoopSetting_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EAtomLoopSetting_h_Statics::EnumInfo[] = {
		{ EAtomLoopSetting_StaticEnum, TEXT("EAtomLoopSetting"), &Z_Registration_Info_UEnum_EAtomLoopSetting, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2960216734U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EAtomLoopSetting_h_158240581(TEXT("/Script/CriWareRuntime"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EAtomLoopSetting_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EAtomLoopSetting_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
