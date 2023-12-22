// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/EAkCurveInterpolation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAkCurveInterpolation() {}
// Cross Module References
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkCurveInterpolation();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAkCurveInterpolation;
	static UEnum* EAkCurveInterpolation_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAkCurveInterpolation.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAkCurveInterpolation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_EAkCurveInterpolation, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("EAkCurveInterpolation"));
		}
		return Z_Registration_Info_UEnum_EAkCurveInterpolation.OuterSingleton;
	}
	template<> AKAUDIO_API UEnum* StaticEnum<EAkCurveInterpolation>()
	{
		return EAkCurveInterpolation_StaticEnum();
	}
	struct Z_Construct_UEnum_AkAudio_EAkCurveInterpolation_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AkAudio_EAkCurveInterpolation_Statics::Enumerators[] = {
		{ "EAkCurveInterpolation::Log3", (int64)EAkCurveInterpolation::Log3 },
		{ "EAkCurveInterpolation::Sine", (int64)EAkCurveInterpolation::Sine },
		{ "EAkCurveInterpolation::Log1", (int64)EAkCurveInterpolation::Log1 },
		{ "EAkCurveInterpolation::InvSCurve", (int64)EAkCurveInterpolation::InvSCurve },
		{ "EAkCurveInterpolation::Linear", (int64)EAkCurveInterpolation::Linear },
		{ "EAkCurveInterpolation::SCurve", (int64)EAkCurveInterpolation::SCurve },
		{ "EAkCurveInterpolation::Exp1", (int64)EAkCurveInterpolation::Exp1 },
		{ "EAkCurveInterpolation::SineRecip", (int64)EAkCurveInterpolation::SineRecip },
		{ "EAkCurveInterpolation::Exp3", (int64)EAkCurveInterpolation::Exp3 },
		{ "EAkCurveInterpolation::LastFadeCurve", (int64)EAkCurveInterpolation::LastFadeCurve },
		{ "EAkCurveInterpolation::Constant", (int64)EAkCurveInterpolation::Constant },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AkAudio_EAkCurveInterpolation_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Constant.Name", "EAkCurveInterpolation::Constant" },
		{ "Exp1.Name", "EAkCurveInterpolation::Exp1" },
		{ "Exp3.Name", "EAkCurveInterpolation::Exp3" },
		{ "InvSCurve.Name", "EAkCurveInterpolation::InvSCurve" },
		{ "LastFadeCurve.Name", "EAkCurveInterpolation::LastFadeCurve" },
		{ "Linear.Name", "EAkCurveInterpolation::Linear" },
		{ "Log1.Name", "EAkCurveInterpolation::Log1" },
		{ "Log3.Name", "EAkCurveInterpolation::Log3" },
		{ "ModuleRelativePath", "Public/EAkCurveInterpolation.h" },
		{ "SCurve.Name", "EAkCurveInterpolation::SCurve" },
		{ "Sine.Name", "EAkCurveInterpolation::Sine" },
		{ "SineRecip.Name", "EAkCurveInterpolation::SineRecip" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AkAudio_EAkCurveInterpolation_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		"EAkCurveInterpolation",
		"EAkCurveInterpolation",
		Z_Construct_UEnum_AkAudio_EAkCurveInterpolation_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_EAkCurveInterpolation_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AkAudio_EAkCurveInterpolation_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_EAkCurveInterpolation_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AkAudio_EAkCurveInterpolation()
	{
		if (!Z_Registration_Info_UEnum_EAkCurveInterpolation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAkCurveInterpolation.InnerSingleton, Z_Construct_UEnum_AkAudio_EAkCurveInterpolation_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAkCurveInterpolation.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_EAkCurveInterpolation_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_EAkCurveInterpolation_h_Statics::EnumInfo[] = {
		{ EAkCurveInterpolation_StaticEnum, TEXT("EAkCurveInterpolation"), &Z_Registration_Info_UEnum_EAkCurveInterpolation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 41013187U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_EAkCurveInterpolation_h_2700930635(TEXT("/Script/AkAudio"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_EAkCurveInterpolation_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_EAkCurveInterpolation_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
