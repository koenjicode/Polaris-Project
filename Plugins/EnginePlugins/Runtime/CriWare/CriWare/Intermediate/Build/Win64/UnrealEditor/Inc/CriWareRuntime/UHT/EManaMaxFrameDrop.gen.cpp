// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/EManaMaxFrameDrop.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEManaMaxFrameDrop() {}
// Cross Module References
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EManaMaxFrameDrop();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EManaMaxFrameDrop;
	static UEnum* EManaMaxFrameDrop_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EManaMaxFrameDrop.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EManaMaxFrameDrop.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CriWareRuntime_EManaMaxFrameDrop, (UObject*)Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("EManaMaxFrameDrop"));
		}
		return Z_Registration_Info_UEnum_EManaMaxFrameDrop.OuterSingleton;
	}
	template<> CRIWARERUNTIME_API UEnum* StaticEnum<EManaMaxFrameDrop>()
	{
		return EManaMaxFrameDrop_StaticEnum();
	}
	struct Z_Construct_UEnum_CriWareRuntime_EManaMaxFrameDrop_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CriWareRuntime_EManaMaxFrameDrop_Statics::Enumerators[] = {
		{ "EManaMaxFrameDrop::Disabled", (int64)EManaMaxFrameDrop::Disabled },
		{ "EManaMaxFrameDrop::One", (int64)EManaMaxFrameDrop::One },
		{ "EManaMaxFrameDrop::Two", (int64)EManaMaxFrameDrop::Two },
		{ "EManaMaxFrameDrop::Three", (int64)EManaMaxFrameDrop::Three },
		{ "EManaMaxFrameDrop::For", (int64)EManaMaxFrameDrop::For },
		{ "EManaMaxFrameDrop::Five", (int64)EManaMaxFrameDrop::Five },
		{ "EManaMaxFrameDrop::Six", (int64)EManaMaxFrameDrop::Six },
		{ "EManaMaxFrameDrop::Seven", (int64)EManaMaxFrameDrop::Seven },
		{ "EManaMaxFrameDrop::Eight", (int64)EManaMaxFrameDrop::Eight },
		{ "EManaMaxFrameDrop::Nine", (int64)EManaMaxFrameDrop::Nine },
		{ "EManaMaxFrameDrop::Ten", (int64)EManaMaxFrameDrop::Ten },
		{ "EManaMaxFrameDrop::Infinite", (int64)EManaMaxFrameDrop::Infinite },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CriWareRuntime_EManaMaxFrameDrop_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Disabled.Name", "EManaMaxFrameDrop::Disabled" },
		{ "Eight.Name", "EManaMaxFrameDrop::Eight" },
		{ "Five.Name", "EManaMaxFrameDrop::Five" },
		{ "For.Name", "EManaMaxFrameDrop::For" },
		{ "Infinite.Name", "EManaMaxFrameDrop::Infinite" },
		{ "ModuleRelativePath", "Public/EManaMaxFrameDrop.h" },
		{ "Nine.Name", "EManaMaxFrameDrop::Nine" },
		{ "One.Name", "EManaMaxFrameDrop::One" },
		{ "Seven.Name", "EManaMaxFrameDrop::Seven" },
		{ "Six.Name", "EManaMaxFrameDrop::Six" },
		{ "Ten.Name", "EManaMaxFrameDrop::Ten" },
		{ "Three.Name", "EManaMaxFrameDrop::Three" },
		{ "Two.Name", "EManaMaxFrameDrop::Two" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CriWareRuntime_EManaMaxFrameDrop_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CriWareRuntime,
		nullptr,
		"EManaMaxFrameDrop",
		"EManaMaxFrameDrop",
		Z_Construct_UEnum_CriWareRuntime_EManaMaxFrameDrop_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareRuntime_EManaMaxFrameDrop_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CriWareRuntime_EManaMaxFrameDrop_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareRuntime_EManaMaxFrameDrop_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CriWareRuntime_EManaMaxFrameDrop()
	{
		if (!Z_Registration_Info_UEnum_EManaMaxFrameDrop.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EManaMaxFrameDrop.InnerSingleton, Z_Construct_UEnum_CriWareRuntime_EManaMaxFrameDrop_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EManaMaxFrameDrop.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EManaMaxFrameDrop_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EManaMaxFrameDrop_h_Statics::EnumInfo[] = {
		{ EManaMaxFrameDrop_StaticEnum, TEXT("EManaMaxFrameDrop"), &Z_Registration_Info_UEnum_EManaMaxFrameDrop, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2553448219U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EManaMaxFrameDrop_h_1060274810(TEXT("/Script/CriWareRuntime"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EManaMaxFrameDrop_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EManaMaxFrameDrop_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
