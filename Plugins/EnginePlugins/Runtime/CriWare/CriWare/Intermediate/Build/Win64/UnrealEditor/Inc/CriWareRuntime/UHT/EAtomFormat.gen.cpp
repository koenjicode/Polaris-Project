// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/EAtomFormat.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAtomFormat() {}
// Cross Module References
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EAtomFormat();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAtomFormat;
	static UEnum* EAtomFormat_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAtomFormat.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAtomFormat.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CriWareRuntime_EAtomFormat, (UObject*)Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("EAtomFormat"));
		}
		return Z_Registration_Info_UEnum_EAtomFormat.OuterSingleton;
	}
	template<> CRIWARERUNTIME_API UEnum* StaticEnum<EAtomFormat>()
	{
		return EAtomFormat_StaticEnum();
	}
	struct Z_Construct_UEnum_CriWareRuntime_EAtomFormat_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CriWareRuntime_EAtomFormat_Statics::Enumerators[] = {
		{ "EAtomFormat::None", (int64)EAtomFormat::None },
		{ "EAtomFormat::ADX", (int64)EAtomFormat::ADX },
		{ "EAtomFormat::HCA", (int64)EAtomFormat::HCA },
		{ "EAtomFormat::HCAMX", (int64)EAtomFormat::HCAMX },
		{ "EAtomFormat::AIFF", (int64)EAtomFormat::AIFF },
		{ "EAtomFormat::Wave", (int64)EAtomFormat::Wave },
		{ "EAtomFormat::RawPCM", (int64)EAtomFormat::RawPCM },
		{ "EAtomFormat::Vibration", (int64)EAtomFormat::Vibration },
		{ "EAtomFormat::AudioBuffer", (int64)EAtomFormat::AudioBuffer },
		{ "EAtomFormat::Instrument", (int64)EAtomFormat::Instrument },
		{ "EAtomFormat::Hardware1", (int64)EAtomFormat::Hardware1 },
		{ "EAtomFormat::Hardware2", (int64)EAtomFormat::Hardware2 },
		{ "EAtomFormat::Num", (int64)EAtomFormat::Num },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CriWareRuntime_EAtomFormat_Statics::Enum_MetaDataParams[] = {
		{ "ADX.Name", "EAtomFormat::ADX" },
		{ "AIFF.Name", "EAtomFormat::AIFF" },
		{ "AudioBuffer.Name", "EAtomFormat::AudioBuffer" },
		{ "BlueprintType", "true" },
		{ "Hardware1.Name", "EAtomFormat::Hardware1" },
		{ "Hardware2.Name", "EAtomFormat::Hardware2" },
		{ "HCA.Name", "EAtomFormat::HCA" },
		{ "HCAMX.Name", "EAtomFormat::HCAMX" },
		{ "Instrument.Name", "EAtomFormat::Instrument" },
		{ "ModuleRelativePath", "Public/EAtomFormat.h" },
		{ "None.Name", "EAtomFormat::None" },
		{ "Num.Name", "EAtomFormat::Num" },
		{ "RawPCM.Name", "EAtomFormat::RawPCM" },
		{ "Vibration.Name", "EAtomFormat::Vibration" },
		{ "Wave.Name", "EAtomFormat::Wave" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CriWareRuntime_EAtomFormat_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CriWareRuntime,
		nullptr,
		"EAtomFormat",
		"EAtomFormat",
		Z_Construct_UEnum_CriWareRuntime_EAtomFormat_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareRuntime_EAtomFormat_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CriWareRuntime_EAtomFormat_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareRuntime_EAtomFormat_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CriWareRuntime_EAtomFormat()
	{
		if (!Z_Registration_Info_UEnum_EAtomFormat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAtomFormat.InnerSingleton, Z_Construct_UEnum_CriWareRuntime_EAtomFormat_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAtomFormat.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EAtomFormat_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EAtomFormat_h_Statics::EnumInfo[] = {
		{ EAtomFormat_StaticEnum, TEXT("EAtomFormat"), &Z_Registration_Info_UEnum_EAtomFormat, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 787416241U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EAtomFormat_h_146847147(TEXT("/Script/CriWareRuntime"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EAtomFormat_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EAtomFormat_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
