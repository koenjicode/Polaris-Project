// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkActionOnEventType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkActionOnEventType() {}
// Cross Module References
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_AkActionOnEventType();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_AkActionOnEventType;
	static UEnum* AkActionOnEventType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_AkActionOnEventType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_AkActionOnEventType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_AkActionOnEventType, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkActionOnEventType"));
		}
		return Z_Registration_Info_UEnum_AkActionOnEventType.OuterSingleton;
	}
	template<> AKAUDIO_API UEnum* StaticEnum<AkActionOnEventType>()
	{
		return AkActionOnEventType_StaticEnum();
	}
	struct Z_Construct_UEnum_AkAudio_AkActionOnEventType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AkAudio_AkActionOnEventType_Statics::Enumerators[] = {
		{ "AkActionOnEventType::Stop", (int64)AkActionOnEventType::Stop },
		{ "AkActionOnEventType::Pause", (int64)AkActionOnEventType::Pause },
		{ "AkActionOnEventType::Resume", (int64)AkActionOnEventType::Resume },
		{ "AkActionOnEventType::Break", (int64)AkActionOnEventType::Break },
		{ "AkActionOnEventType::ReleaseEnvelope", (int64)AkActionOnEventType::ReleaseEnvelope },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AkAudio_AkActionOnEventType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Break.Name", "AkActionOnEventType::Break" },
		{ "ModuleRelativePath", "Public/AkActionOnEventType.h" },
		{ "Pause.Name", "AkActionOnEventType::Pause" },
		{ "ReleaseEnvelope.Name", "AkActionOnEventType::ReleaseEnvelope" },
		{ "Resume.Name", "AkActionOnEventType::Resume" },
		{ "Stop.Name", "AkActionOnEventType::Stop" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AkAudio_AkActionOnEventType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		"AkActionOnEventType",
		"AkActionOnEventType",
		Z_Construct_UEnum_AkAudio_AkActionOnEventType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_AkActionOnEventType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AkAudio_AkActionOnEventType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_AkActionOnEventType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AkAudio_AkActionOnEventType()
	{
		if (!Z_Registration_Info_UEnum_AkActionOnEventType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_AkActionOnEventType.InnerSingleton, Z_Construct_UEnum_AkAudio_AkActionOnEventType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_AkActionOnEventType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkActionOnEventType_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkActionOnEventType_h_Statics::EnumInfo[] = {
		{ AkActionOnEventType_StaticEnum, TEXT("AkActionOnEventType"), &Z_Registration_Info_UEnum_AkActionOnEventType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 598488493U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkActionOnEventType_h_3853262520(TEXT("/Script/AkAudio"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkActionOnEventType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkActionOnEventType_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
