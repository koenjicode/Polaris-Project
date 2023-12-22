// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/EAkFitToGeometryMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAkFitToGeometryMode() {}
// Cross Module References
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkFitToGeometryMode();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAkFitToGeometryMode;
	static UEnum* EAkFitToGeometryMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAkFitToGeometryMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAkFitToGeometryMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_EAkFitToGeometryMode, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("EAkFitToGeometryMode"));
		}
		return Z_Registration_Info_UEnum_EAkFitToGeometryMode.OuterSingleton;
	}
	template<> AKAUDIO_API UEnum* StaticEnum<EAkFitToGeometryMode>()
	{
		return EAkFitToGeometryMode_StaticEnum();
	}
	struct Z_Construct_UEnum_AkAudio_EAkFitToGeometryMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AkAudio_EAkFitToGeometryMode_Statics::Enumerators[] = {
		{ "EAkFitToGeometryMode::OrientedBox", (int64)EAkFitToGeometryMode::OrientedBox },
		{ "EAkFitToGeometryMode::AlignedBox", (int64)EAkFitToGeometryMode::AlignedBox },
		{ "EAkFitToGeometryMode::ConvexPolyhedron", (int64)EAkFitToGeometryMode::ConvexPolyhedron },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AkAudio_EAkFitToGeometryMode_Statics::Enum_MetaDataParams[] = {
		{ "AlignedBox.Name", "EAkFitToGeometryMode::AlignedBox" },
		{ "BlueprintType", "true" },
		{ "ConvexPolyhedron.Name", "EAkFitToGeometryMode::ConvexPolyhedron" },
		{ "ModuleRelativePath", "Public/EAkFitToGeometryMode.h" },
		{ "OrientedBox.Name", "EAkFitToGeometryMode::OrientedBox" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AkAudio_EAkFitToGeometryMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		"EAkFitToGeometryMode",
		"EAkFitToGeometryMode",
		Z_Construct_UEnum_AkAudio_EAkFitToGeometryMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_EAkFitToGeometryMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AkAudio_EAkFitToGeometryMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_EAkFitToGeometryMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AkAudio_EAkFitToGeometryMode()
	{
		if (!Z_Registration_Info_UEnum_EAkFitToGeometryMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAkFitToGeometryMode.InnerSingleton, Z_Construct_UEnum_AkAudio_EAkFitToGeometryMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAkFitToGeometryMode.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_EAkFitToGeometryMode_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_EAkFitToGeometryMode_h_Statics::EnumInfo[] = {
		{ EAkFitToGeometryMode_StaticEnum, TEXT("EAkFitToGeometryMode"), &Z_Registration_Info_UEnum_EAkFitToGeometryMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2183497876U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_EAkFitToGeometryMode_h_2274013873(TEXT("/Script/AkAudio"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_EAkFitToGeometryMode_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_EAkFitToGeometryMode_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
