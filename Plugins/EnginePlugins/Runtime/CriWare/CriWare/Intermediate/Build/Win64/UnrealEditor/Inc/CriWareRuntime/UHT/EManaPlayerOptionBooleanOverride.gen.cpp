// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/EManaPlayerOptionBooleanOverride.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEManaPlayerOptionBooleanOverride() {}
// Cross Module References
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EManaPlayerOptionBooleanOverride();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EManaPlayerOptionBooleanOverride;
	static UEnum* EManaPlayerOptionBooleanOverride_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EManaPlayerOptionBooleanOverride.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EManaPlayerOptionBooleanOverride.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CriWareRuntime_EManaPlayerOptionBooleanOverride, (UObject*)Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("EManaPlayerOptionBooleanOverride"));
		}
		return Z_Registration_Info_UEnum_EManaPlayerOptionBooleanOverride.OuterSingleton;
	}
	template<> CRIWARERUNTIME_API UEnum* StaticEnum<EManaPlayerOptionBooleanOverride>()
	{
		return EManaPlayerOptionBooleanOverride_StaticEnum();
	}
	struct Z_Construct_UEnum_CriWareRuntime_EManaPlayerOptionBooleanOverride_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CriWareRuntime_EManaPlayerOptionBooleanOverride_Statics::Enumerators[] = {
		{ "EManaPlayerOptionBooleanOverride::UseManaPlayerSetting", (int64)EManaPlayerOptionBooleanOverride::UseManaPlayerSetting },
		{ "EManaPlayerOptionBooleanOverride::Enabled", (int64)EManaPlayerOptionBooleanOverride::Enabled },
		{ "EManaPlayerOptionBooleanOverride::Disabled", (int64)EManaPlayerOptionBooleanOverride::Disabled },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CriWareRuntime_EManaPlayerOptionBooleanOverride_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Disabled.Name", "EManaPlayerOptionBooleanOverride::Disabled" },
		{ "Enabled.Name", "EManaPlayerOptionBooleanOverride::Enabled" },
		{ "ModuleRelativePath", "Public/EManaPlayerOptionBooleanOverride.h" },
		{ "UseManaPlayerSetting.Name", "EManaPlayerOptionBooleanOverride::UseManaPlayerSetting" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CriWareRuntime_EManaPlayerOptionBooleanOverride_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CriWareRuntime,
		nullptr,
		"EManaPlayerOptionBooleanOverride",
		"EManaPlayerOptionBooleanOverride",
		Z_Construct_UEnum_CriWareRuntime_EManaPlayerOptionBooleanOverride_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareRuntime_EManaPlayerOptionBooleanOverride_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CriWareRuntime_EManaPlayerOptionBooleanOverride_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareRuntime_EManaPlayerOptionBooleanOverride_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CriWareRuntime_EManaPlayerOptionBooleanOverride()
	{
		if (!Z_Registration_Info_UEnum_EManaPlayerOptionBooleanOverride.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EManaPlayerOptionBooleanOverride.InnerSingleton, Z_Construct_UEnum_CriWareRuntime_EManaPlayerOptionBooleanOverride_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EManaPlayerOptionBooleanOverride.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EManaPlayerOptionBooleanOverride_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EManaPlayerOptionBooleanOverride_h_Statics::EnumInfo[] = {
		{ EManaPlayerOptionBooleanOverride_StaticEnum, TEXT("EManaPlayerOptionBooleanOverride"), &Z_Registration_Info_UEnum_EManaPlayerOptionBooleanOverride, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3354961529U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EManaPlayerOptionBooleanOverride_h_3137272181(TEXT("/Script/CriWareRuntime"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EManaPlayerOptionBooleanOverride_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EManaPlayerOptionBooleanOverride_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
