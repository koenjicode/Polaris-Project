// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkCodecId.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkCodecId() {}
// Cross Module References
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_AkCodecId();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_AkCodecId;
	static UEnum* AkCodecId_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_AkCodecId.OuterSingleton)
		{
			Z_Registration_Info_UEnum_AkCodecId.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_AkCodecId, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkCodecId"));
		}
		return Z_Registration_Info_UEnum_AkCodecId.OuterSingleton;
	}
	template<> AKAUDIO_API UEnum* StaticEnum<AkCodecId>()
	{
		return AkCodecId_StaticEnum();
	}
	struct Z_Construct_UEnum_AkAudio_AkCodecId_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AkAudio_AkCodecId_Statics::Enumerators[] = {
		{ "AkCodecId::None", (int64)AkCodecId::None },
		{ "AkCodecId::PCM", (int64)AkCodecId::PCM },
		{ "AkCodecId::ADPCM", (int64)AkCodecId::ADPCM },
		{ "AkCodecId::XMA", (int64)AkCodecId::XMA },
		{ "AkCodecId::Vorbis", (int64)AkCodecId::Vorbis },
		{ "AkCodecId::ATRAC9", (int64)AkCodecId::ATRAC9 },
		{ "AkCodecId::OpusNX", (int64)AkCodecId::OpusNX },
		{ "AkCodecId::AkOpus", (int64)AkCodecId::AkOpus },
		{ "AkCodecId::AkOpusWEM", (int64)AkCodecId::AkOpusWEM },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AkAudio_AkCodecId_Statics::Enum_MetaDataParams[] = {
		{ "ADPCM.Name", "AkCodecId::ADPCM" },
		{ "AkOpus.Name", "AkCodecId::AkOpus" },
		{ "AkOpusWEM.Name", "AkCodecId::AkOpusWEM" },
		{ "ATRAC9.Name", "AkCodecId::ATRAC9" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AkCodecId.h" },
		{ "None.Name", "AkCodecId::None" },
		{ "OpusNX.Name", "AkCodecId::OpusNX" },
		{ "PCM.Name", "AkCodecId::PCM" },
		{ "Vorbis.Name", "AkCodecId::Vorbis" },
		{ "XMA.Name", "AkCodecId::XMA" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AkAudio_AkCodecId_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		"AkCodecId",
		"AkCodecId",
		Z_Construct_UEnum_AkAudio_AkCodecId_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_AkCodecId_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AkAudio_AkCodecId_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_AkCodecId_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AkAudio_AkCodecId()
	{
		if (!Z_Registration_Info_UEnum_AkCodecId.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_AkCodecId.InnerSingleton, Z_Construct_UEnum_AkAudio_AkCodecId_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_AkCodecId.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkCodecId_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkCodecId_h_Statics::EnumInfo[] = {
		{ AkCodecId_StaticEnum, TEXT("AkCodecId"), &Z_Registration_Info_UEnum_AkCodecId, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2193293335U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkCodecId_h_4179632499(TEXT("/Script/AkAudio"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkCodecId_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkCodecId_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
