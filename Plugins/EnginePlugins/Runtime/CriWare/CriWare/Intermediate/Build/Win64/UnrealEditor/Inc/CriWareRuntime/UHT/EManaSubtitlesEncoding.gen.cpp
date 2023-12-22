// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/EManaSubtitlesEncoding.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEManaSubtitlesEncoding() {}
// Cross Module References
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EManaSubtitlesEncoding();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EManaSubtitlesEncoding;
	static UEnum* EManaSubtitlesEncoding_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EManaSubtitlesEncoding.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EManaSubtitlesEncoding.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CriWareRuntime_EManaSubtitlesEncoding, (UObject*)Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("EManaSubtitlesEncoding"));
		}
		return Z_Registration_Info_UEnum_EManaSubtitlesEncoding.OuterSingleton;
	}
	template<> CRIWARERUNTIME_API UEnum* StaticEnum<EManaSubtitlesEncoding>()
	{
		return EManaSubtitlesEncoding_StaticEnum();
	}
	struct Z_Construct_UEnum_CriWareRuntime_EManaSubtitlesEncoding_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CriWareRuntime_EManaSubtitlesEncoding_Statics::Enumerators[] = {
		{ "EManaSubtitlesEncoding::Default", (int64)EManaSubtitlesEncoding::Default },
		{ "EManaSubtitlesEncoding::ANSI", (int64)EManaSubtitlesEncoding::ANSI },
		{ "EManaSubtitlesEncoding::Utf8", (int64)EManaSubtitlesEncoding::Utf8 },
		{ "EManaSubtitlesEncoding::Utf16", (int64)EManaSubtitlesEncoding::Utf16 },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CriWareRuntime_EManaSubtitlesEncoding_Statics::Enum_MetaDataParams[] = {
		{ "ANSI.Name", "EManaSubtitlesEncoding::ANSI" },
		{ "BlueprintType", "true" },
		{ "Default.Name", "EManaSubtitlesEncoding::Default" },
		{ "ModuleRelativePath", "Public/EManaSubtitlesEncoding.h" },
		{ "Utf16.Name", "EManaSubtitlesEncoding::Utf16" },
		{ "Utf8.Name", "EManaSubtitlesEncoding::Utf8" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CriWareRuntime_EManaSubtitlesEncoding_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CriWareRuntime,
		nullptr,
		"EManaSubtitlesEncoding",
		"EManaSubtitlesEncoding",
		Z_Construct_UEnum_CriWareRuntime_EManaSubtitlesEncoding_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareRuntime_EManaSubtitlesEncoding_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CriWareRuntime_EManaSubtitlesEncoding_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareRuntime_EManaSubtitlesEncoding_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CriWareRuntime_EManaSubtitlesEncoding()
	{
		if (!Z_Registration_Info_UEnum_EManaSubtitlesEncoding.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EManaSubtitlesEncoding.InnerSingleton, Z_Construct_UEnum_CriWareRuntime_EManaSubtitlesEncoding_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EManaSubtitlesEncoding.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EManaSubtitlesEncoding_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EManaSubtitlesEncoding_h_Statics::EnumInfo[] = {
		{ EManaSubtitlesEncoding_StaticEnum, TEXT("EManaSubtitlesEncoding"), &Z_Registration_Info_UEnum_EManaSubtitlesEncoding, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1632816217U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EManaSubtitlesEncoding_h_510040658(TEXT("/Script/CriWareRuntime"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EManaSubtitlesEncoding_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EManaSubtitlesEncoding_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
