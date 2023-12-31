// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/EManaMovieType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEManaMovieType() {}
// Cross Module References
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EManaMovieType();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EManaMovieType;
	static UEnum* EManaMovieType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EManaMovieType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EManaMovieType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CriWareRuntime_EManaMovieType, (UObject*)Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("EManaMovieType"));
		}
		return Z_Registration_Info_UEnum_EManaMovieType.OuterSingleton;
	}
	template<> CRIWARERUNTIME_API UEnum* StaticEnum<EManaMovieType>()
	{
		return EManaMovieType_StaticEnum();
	}
	struct Z_Construct_UEnum_CriWareRuntime_EManaMovieType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CriWareRuntime_EManaMovieType_Statics::Enumerators[] = {
		{ "EManaMovieType::SofdecPrime", (int64)EManaMovieType::SofdecPrime },
		{ "EManaMovieType::H264", (int64)EManaMovieType::H264 },
		{ "EManaMovieType::VP9", (int64)EManaMovieType::VP9 },
		{ "EManaMovieType::Num", (int64)EManaMovieType::Num },
		{ "EManaMovieType::Unknown", (int64)EManaMovieType::Unknown },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CriWareRuntime_EManaMovieType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "H264.Name", "EManaMovieType::H264" },
		{ "ModuleRelativePath", "Public/EManaMovieType.h" },
		{ "Num.Name", "EManaMovieType::Num" },
		{ "SofdecPrime.Name", "EManaMovieType::SofdecPrime" },
		{ "Unknown.Name", "EManaMovieType::Unknown" },
		{ "VP9.Name", "EManaMovieType::VP9" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CriWareRuntime_EManaMovieType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CriWareRuntime,
		nullptr,
		"EManaMovieType",
		"EManaMovieType",
		Z_Construct_UEnum_CriWareRuntime_EManaMovieType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareRuntime_EManaMovieType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CriWareRuntime_EManaMovieType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareRuntime_EManaMovieType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CriWareRuntime_EManaMovieType()
	{
		if (!Z_Registration_Info_UEnum_EManaMovieType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EManaMovieType.InnerSingleton, Z_Construct_UEnum_CriWareRuntime_EManaMovieType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EManaMovieType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EManaMovieType_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EManaMovieType_h_Statics::EnumInfo[] = {
		{ EManaMovieType_StaticEnum, TEXT("EManaMovieType"), &Z_Registration_Info_UEnum_EManaMovieType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2434398798U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EManaMovieType_h_3797848875(TEXT("/Script/CriWareRuntime"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EManaMovieType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EManaMovieType_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
