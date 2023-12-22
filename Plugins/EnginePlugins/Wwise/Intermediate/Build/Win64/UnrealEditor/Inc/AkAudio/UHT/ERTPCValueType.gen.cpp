// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/ERTPCValueType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeERTPCValueType() {}
// Cross Module References
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_ERTPCValueType();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERTPCValueType;
	static UEnum* ERTPCValueType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERTPCValueType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERTPCValueType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_ERTPCValueType, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("ERTPCValueType"));
		}
		return Z_Registration_Info_UEnum_ERTPCValueType.OuterSingleton;
	}
	template<> AKAUDIO_API UEnum* StaticEnum<ERTPCValueType>()
	{
		return ERTPCValueType_StaticEnum();
	}
	struct Z_Construct_UEnum_AkAudio_ERTPCValueType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AkAudio_ERTPCValueType_Statics::Enumerators[] = {
		{ "ERTPCValueType::Default", (int64)ERTPCValueType::Default },
		{ "ERTPCValueType::Global", (int64)ERTPCValueType::Global },
		{ "ERTPCValueType::GameObject", (int64)ERTPCValueType::GameObject },
		{ "ERTPCValueType::PlayingID", (int64)ERTPCValueType::PlayingID },
		{ "ERTPCValueType::Unavailable", (int64)ERTPCValueType::Unavailable },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AkAudio_ERTPCValueType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Default.Name", "ERTPCValueType::Default" },
		{ "GameObject.Name", "ERTPCValueType::GameObject" },
		{ "Global.Name", "ERTPCValueType::Global" },
		{ "ModuleRelativePath", "Public/ERTPCValueType.h" },
		{ "PlayingID.Name", "ERTPCValueType::PlayingID" },
		{ "Unavailable.Name", "ERTPCValueType::Unavailable" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AkAudio_ERTPCValueType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		"ERTPCValueType",
		"ERTPCValueType",
		Z_Construct_UEnum_AkAudio_ERTPCValueType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_ERTPCValueType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AkAudio_ERTPCValueType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_ERTPCValueType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AkAudio_ERTPCValueType()
	{
		if (!Z_Registration_Info_UEnum_ERTPCValueType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERTPCValueType.InnerSingleton, Z_Construct_UEnum_AkAudio_ERTPCValueType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERTPCValueType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_ERTPCValueType_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_ERTPCValueType_h_Statics::EnumInfo[] = {
		{ ERTPCValueType_StaticEnum, TEXT("ERTPCValueType"), &Z_Registration_Info_UEnum_ERTPCValueType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4274172160U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_ERTPCValueType_h_1067098035(TEXT("/Script/AkAudio"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_ERTPCValueType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_ERTPCValueType_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
