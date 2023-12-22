// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/ECriWareErrorType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECriWareErrorType() {}
// Cross Module References
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_ECriWareErrorType();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECriWareErrorType;
	static UEnum* ECriWareErrorType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECriWareErrorType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECriWareErrorType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CriWareRuntime_ECriWareErrorType, (UObject*)Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("ECriWareErrorType"));
		}
		return Z_Registration_Info_UEnum_ECriWareErrorType.OuterSingleton;
	}
	template<> CRIWARERUNTIME_API UEnum* StaticEnum<ECriWareErrorType>()
	{
		return ECriWareErrorType_StaticEnum();
	}
	struct Z_Construct_UEnum_CriWareRuntime_ECriWareErrorType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CriWareRuntime_ECriWareErrorType_Statics::Enumerators[] = {
		{ "ECriWareErrorType::Warning", (int64)ECriWareErrorType::Warning },
		{ "ECriWareErrorType::Error", (int64)ECriWareErrorType::Error },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CriWareRuntime_ECriWareErrorType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Error.Name", "ECriWareErrorType::Error" },
		{ "ModuleRelativePath", "Public/ECriWareErrorType.h" },
		{ "Warning.Name", "ECriWareErrorType::Warning" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CriWareRuntime_ECriWareErrorType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CriWareRuntime,
		nullptr,
		"ECriWareErrorType",
		"ECriWareErrorType",
		Z_Construct_UEnum_CriWareRuntime_ECriWareErrorType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareRuntime_ECriWareErrorType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CriWareRuntime_ECriWareErrorType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareRuntime_ECriWareErrorType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CriWareRuntime_ECriWareErrorType()
	{
		if (!Z_Registration_Info_UEnum_ECriWareErrorType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECriWareErrorType.InnerSingleton, Z_Construct_UEnum_CriWareRuntime_ECriWareErrorType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECriWareErrorType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ECriWareErrorType_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ECriWareErrorType_h_Statics::EnumInfo[] = {
		{ ECriWareErrorType_StaticEnum, TEXT("ECriWareErrorType"), &Z_Registration_Info_UEnum_ECriWareErrorType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4125820765U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ECriWareErrorType_h_978785249(TEXT("/Script/CriWareRuntime"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ECriWareErrorType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ECriWareErrorType_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
