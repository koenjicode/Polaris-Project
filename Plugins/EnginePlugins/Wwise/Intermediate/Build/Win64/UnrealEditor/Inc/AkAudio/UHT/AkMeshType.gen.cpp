// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkMeshType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkMeshType() {}
// Cross Module References
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_AkMeshType();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_AkMeshType;
	static UEnum* AkMeshType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_AkMeshType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_AkMeshType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_AkMeshType, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkMeshType"));
		}
		return Z_Registration_Info_UEnum_AkMeshType.OuterSingleton;
	}
	template<> AKAUDIO_API UEnum* StaticEnum<AkMeshType>()
	{
		return AkMeshType_StaticEnum();
	}
	struct Z_Construct_UEnum_AkAudio_AkMeshType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AkAudio_AkMeshType_Statics::Enumerators[] = {
		{ "AkMeshType::StaticMesh", (int64)AkMeshType::StaticMesh },
		{ "AkMeshType::CollisionMesh", (int64)AkMeshType::CollisionMesh },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AkAudio_AkMeshType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CollisionMesh.Name", "AkMeshType::CollisionMesh" },
		{ "ModuleRelativePath", "Public/AkMeshType.h" },
		{ "StaticMesh.Name", "AkMeshType::StaticMesh" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AkAudio_AkMeshType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		"AkMeshType",
		"AkMeshType",
		Z_Construct_UEnum_AkAudio_AkMeshType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_AkMeshType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AkAudio_AkMeshType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_AkMeshType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AkAudio_AkMeshType()
	{
		if (!Z_Registration_Info_UEnum_AkMeshType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_AkMeshType.InnerSingleton, Z_Construct_UEnum_AkAudio_AkMeshType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_AkMeshType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkMeshType_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkMeshType_h_Statics::EnumInfo[] = {
		{ AkMeshType_StaticEnum, TEXT("AkMeshType"), &Z_Registration_Info_UEnum_AkMeshType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3171450369U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkMeshType_h_3130062950(TEXT("/Script/AkAudio"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkMeshType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkMeshType_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
