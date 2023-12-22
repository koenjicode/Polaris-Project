// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CatwalkCloth/Public/ECatwalkClothVertexDebugDrawChannel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECatwalkClothVertexDebugDrawChannel() {}
// Cross Module References
	CATWALKCLOTH_API UEnum* Z_Construct_UEnum_CatwalkCloth_ECatwalkClothVertexDebugDrawChannel();
	UPackage* Z_Construct_UPackage__Script_CatwalkCloth();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECatwalkClothVertexDebugDrawChannel;
	static UEnum* ECatwalkClothVertexDebugDrawChannel_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECatwalkClothVertexDebugDrawChannel.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECatwalkClothVertexDebugDrawChannel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CatwalkCloth_ECatwalkClothVertexDebugDrawChannel, (UObject*)Z_Construct_UPackage__Script_CatwalkCloth(), TEXT("ECatwalkClothVertexDebugDrawChannel"));
		}
		return Z_Registration_Info_UEnum_ECatwalkClothVertexDebugDrawChannel.OuterSingleton;
	}
	template<> CATWALKCLOTH_API UEnum* StaticEnum<ECatwalkClothVertexDebugDrawChannel>()
	{
		return ECatwalkClothVertexDebugDrawChannel_StaticEnum();
	}
	struct Z_Construct_UEnum_CatwalkCloth_ECatwalkClothVertexDebugDrawChannel_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CatwalkCloth_ECatwalkClothVertexDebugDrawChannel_Statics::Enumerators[] = {
		{ "ECatwalkClothVertexDebugDrawChannel::Collision", (int64)ECatwalkClothVertexDebugDrawChannel::Collision },
		{ "ECatwalkClothVertexDebugDrawChannel::MaxDistance", (int64)ECatwalkClothVertexDebugDrawChannel::MaxDistance },
		{ "ECatwalkClothVertexDebugDrawChannel::BackstopLimit", (int64)ECatwalkClothVertexDebugDrawChannel::BackstopLimit },
		{ "ECatwalkClothVertexDebugDrawChannel::FrontstopLimit", (int64)ECatwalkClothVertexDebugDrawChannel::FrontstopLimit },
		{ "ECatwalkClothVertexDebugDrawChannel::SelfCollision", (int64)ECatwalkClothVertexDebugDrawChannel::SelfCollision },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CatwalkCloth_ECatwalkClothVertexDebugDrawChannel_Statics::Enum_MetaDataParams[] = {
		{ "BackstopLimit.Name", "ECatwalkClothVertexDebugDrawChannel::BackstopLimit" },
		{ "BlueprintType", "true" },
		{ "Collision.Name", "ECatwalkClothVertexDebugDrawChannel::Collision" },
		{ "FrontstopLimit.Name", "ECatwalkClothVertexDebugDrawChannel::FrontstopLimit" },
		{ "MaxDistance.Name", "ECatwalkClothVertexDebugDrawChannel::MaxDistance" },
		{ "ModuleRelativePath", "Public/ECatwalkClothVertexDebugDrawChannel.h" },
		{ "SelfCollision.Name", "ECatwalkClothVertexDebugDrawChannel::SelfCollision" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CatwalkCloth_ECatwalkClothVertexDebugDrawChannel_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CatwalkCloth,
		nullptr,
		"ECatwalkClothVertexDebugDrawChannel",
		"ECatwalkClothVertexDebugDrawChannel",
		Z_Construct_UEnum_CatwalkCloth_ECatwalkClothVertexDebugDrawChannel_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CatwalkCloth_ECatwalkClothVertexDebugDrawChannel_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CatwalkCloth_ECatwalkClothVertexDebugDrawChannel_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CatwalkCloth_ECatwalkClothVertexDebugDrawChannel_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CatwalkCloth_ECatwalkClothVertexDebugDrawChannel()
	{
		if (!Z_Registration_Info_UEnum_ECatwalkClothVertexDebugDrawChannel.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECatwalkClothVertexDebugDrawChannel.InnerSingleton, Z_Construct_UEnum_CatwalkCloth_ECatwalkClothVertexDebugDrawChannel_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECatwalkClothVertexDebugDrawChannel.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkCloth_Source_CatwalkCloth_Public_ECatwalkClothVertexDebugDrawChannel_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkCloth_Source_CatwalkCloth_Public_ECatwalkClothVertexDebugDrawChannel_h_Statics::EnumInfo[] = {
		{ ECatwalkClothVertexDebugDrawChannel_StaticEnum, TEXT("ECatwalkClothVertexDebugDrawChannel"), &Z_Registration_Info_UEnum_ECatwalkClothVertexDebugDrawChannel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3542651576U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkCloth_Source_CatwalkCloth_Public_ECatwalkClothVertexDebugDrawChannel_h_3254256835(TEXT("/Script/CatwalkCloth"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkCloth_Source_CatwalkCloth_Public_ECatwalkClothVertexDebugDrawChannel_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkCloth_Source_CatwalkCloth_Public_ECatwalkClothVertexDebugDrawChannel_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
