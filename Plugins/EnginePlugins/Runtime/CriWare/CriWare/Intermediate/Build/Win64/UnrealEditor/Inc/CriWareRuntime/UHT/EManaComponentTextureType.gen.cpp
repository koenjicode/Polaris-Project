// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/EManaComponentTextureType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEManaComponentTextureType() {}
// Cross Module References
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EManaComponentTextureType();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EManaComponentTextureType;
	static UEnum* EManaComponentTextureType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EManaComponentTextureType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EManaComponentTextureType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CriWareRuntime_EManaComponentTextureType, (UObject*)Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("EManaComponentTextureType"));
		}
		return Z_Registration_Info_UEnum_EManaComponentTextureType.OuterSingleton;
	}
	template<> CRIWARERUNTIME_API UEnum* StaticEnum<EManaComponentTextureType>()
	{
		return EManaComponentTextureType_StaticEnum();
	}
	struct Z_Construct_UEnum_CriWareRuntime_EManaComponentTextureType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CriWareRuntime_EManaComponentTextureType_Statics::Enumerators[] = {
		{ "EManaComponentTextureType::Texture_Y", (int64)EManaComponentTextureType::Texture_Y },
		{ "EManaComponentTextureType::Texture_U", (int64)EManaComponentTextureType::Texture_U },
		{ "EManaComponentTextureType::Texture_V", (int64)EManaComponentTextureType::Texture_V },
		{ "EManaComponentTextureType::Texture_A", (int64)EManaComponentTextureType::Texture_A },
		{ "EManaComponentTextureType::Texture_UV", (int64)EManaComponentTextureType::Texture_UV },
		{ "EManaComponentTextureType::Texture_RGB", (int64)EManaComponentTextureType::Texture_RGB },
		{ "EManaComponentTextureType::Texture_External", (int64)EManaComponentTextureType::Texture_External },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CriWareRuntime_EManaComponentTextureType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EManaComponentTextureType.h" },
		{ "Texture_A.Name", "EManaComponentTextureType::Texture_A" },
		{ "Texture_External.Name", "EManaComponentTextureType::Texture_External" },
		{ "Texture_RGB.Name", "EManaComponentTextureType::Texture_RGB" },
		{ "Texture_U.Name", "EManaComponentTextureType::Texture_U" },
		{ "Texture_UV.Name", "EManaComponentTextureType::Texture_UV" },
		{ "Texture_V.Name", "EManaComponentTextureType::Texture_V" },
		{ "Texture_Y.Name", "EManaComponentTextureType::Texture_Y" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CriWareRuntime_EManaComponentTextureType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CriWareRuntime,
		nullptr,
		"EManaComponentTextureType",
		"EManaComponentTextureType",
		Z_Construct_UEnum_CriWareRuntime_EManaComponentTextureType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareRuntime_EManaComponentTextureType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CriWareRuntime_EManaComponentTextureType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CriWareRuntime_EManaComponentTextureType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CriWareRuntime_EManaComponentTextureType()
	{
		if (!Z_Registration_Info_UEnum_EManaComponentTextureType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EManaComponentTextureType.InnerSingleton, Z_Construct_UEnum_CriWareRuntime_EManaComponentTextureType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EManaComponentTextureType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EManaComponentTextureType_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EManaComponentTextureType_h_Statics::EnumInfo[] = {
		{ EManaComponentTextureType_StaticEnum, TEXT("EManaComponentTextureType"), &Z_Registration_Info_UEnum_EManaComponentTextureType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 313436480U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EManaComponentTextureType_h_1877954842(TEXT("/Script/CriWareRuntime"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EManaComponentTextureType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EManaComponentTextureType_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
