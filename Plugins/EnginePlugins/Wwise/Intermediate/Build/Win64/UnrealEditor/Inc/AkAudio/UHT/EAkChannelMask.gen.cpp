// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/EAkChannelMask.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAkChannelMask() {}
// Cross Module References
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkChannelMask();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAkChannelMask;
	static UEnum* EAkChannelMask_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAkChannelMask.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAkChannelMask.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_EAkChannelMask, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("EAkChannelMask"));
		}
		return Z_Registration_Info_UEnum_EAkChannelMask.OuterSingleton;
	}
	template<> AKAUDIO_API UEnum* StaticEnum<EAkChannelMask>()
	{
		return EAkChannelMask_StaticEnum();
	}
	struct Z_Construct_UEnum_AkAudio_EAkChannelMask_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AkAudio_EAkChannelMask_Statics::Enumerators[] = {
		{ "EAkChannelMask::FrontLeft", (int64)EAkChannelMask::FrontLeft },
		{ "EAkChannelMask::FrontRight", (int64)EAkChannelMask::FrontRight },
		{ "EAkChannelMask::FrontCenter", (int64)EAkChannelMask::FrontCenter },
		{ "EAkChannelMask::LowFrequency", (int64)EAkChannelMask::LowFrequency },
		{ "EAkChannelMask::BackLeft", (int64)EAkChannelMask::BackLeft },
		{ "EAkChannelMask::BackRight", (int64)EAkChannelMask::BackRight },
		{ "EAkChannelMask::BackCenter", (int64)EAkChannelMask::BackCenter },
		{ "EAkChannelMask::SideLeft", (int64)EAkChannelMask::SideLeft },
		{ "EAkChannelMask::SideRight", (int64)EAkChannelMask::SideRight },
		{ "EAkChannelMask::Top", (int64)EAkChannelMask::Top },
		{ "EAkChannelMask::HeightFrontLeft", (int64)EAkChannelMask::HeightFrontLeft },
		{ "EAkChannelMask::HeightFrontCenter", (int64)EAkChannelMask::HeightFrontCenter },
		{ "EAkChannelMask::HeightFrontRight", (int64)EAkChannelMask::HeightFrontRight },
		{ "EAkChannelMask::HeightBackLeft", (int64)EAkChannelMask::HeightBackLeft },
		{ "EAkChannelMask::HeightBackCenter", (int64)EAkChannelMask::HeightBackCenter },
		{ "EAkChannelMask::HeightBackRight", (int64)EAkChannelMask::HeightBackRight },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AkAudio_EAkChannelMask_Statics::Enum_MetaDataParams[] = {
		{ "BackCenter.Name", "EAkChannelMask::BackCenter" },
		{ "BackLeft.Name", "EAkChannelMask::BackLeft" },
		{ "BackRight.Name", "EAkChannelMask::BackRight" },
		{ "BlueprintType", "true" },
		{ "FrontCenter.Name", "EAkChannelMask::FrontCenter" },
		{ "FrontLeft.Name", "EAkChannelMask::FrontLeft" },
		{ "FrontRight.Name", "EAkChannelMask::FrontRight" },
		{ "HeightBackCenter.Name", "EAkChannelMask::HeightBackCenter" },
		{ "HeightBackLeft.Name", "EAkChannelMask::HeightBackLeft" },
		{ "HeightBackRight.Name", "EAkChannelMask::HeightBackRight" },
		{ "HeightFrontCenter.Name", "EAkChannelMask::HeightFrontCenter" },
		{ "HeightFrontLeft.Name", "EAkChannelMask::HeightFrontLeft" },
		{ "HeightFrontRight.Name", "EAkChannelMask::HeightFrontRight" },
		{ "LowFrequency.Name", "EAkChannelMask::LowFrequency" },
		{ "ModuleRelativePath", "Public/EAkChannelMask.h" },
		{ "SideLeft.Name", "EAkChannelMask::SideLeft" },
		{ "SideRight.Name", "EAkChannelMask::SideRight" },
		{ "Top.Name", "EAkChannelMask::Top" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AkAudio_EAkChannelMask_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		"EAkChannelMask",
		"EAkChannelMask",
		Z_Construct_UEnum_AkAudio_EAkChannelMask_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_EAkChannelMask_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AkAudio_EAkChannelMask_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_EAkChannelMask_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AkAudio_EAkChannelMask()
	{
		if (!Z_Registration_Info_UEnum_EAkChannelMask.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAkChannelMask.InnerSingleton, Z_Construct_UEnum_AkAudio_EAkChannelMask_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAkChannelMask.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_EAkChannelMask_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_EAkChannelMask_h_Statics::EnumInfo[] = {
		{ EAkChannelMask_StaticEnum, TEXT("EAkChannelMask"), &Z_Registration_Info_UEnum_EAkChannelMask, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4065448066U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_EAkChannelMask_h_1097310137(TEXT("/Script/AkAudio"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_EAkChannelMask_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_EAkChannelMask_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
