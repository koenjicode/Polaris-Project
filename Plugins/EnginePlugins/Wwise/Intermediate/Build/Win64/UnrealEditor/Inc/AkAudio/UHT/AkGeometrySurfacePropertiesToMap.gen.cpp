// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkGeometrySurfacePropertiesToMap.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkGeometrySurfacePropertiesToMap() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAcousticTexture_NoRegister();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AkGeometrySurfacePropertiesToMap;
class UScriptStruct* FAkGeometrySurfacePropertiesToMap::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AkGeometrySurfacePropertiesToMap.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AkGeometrySurfacePropertiesToMap.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkGeometrySurfacePropertiesToMap"));
	}
	return Z_Registration_Info_UScriptStruct_AkGeometrySurfacePropertiesToMap.OuterSingleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkGeometrySurfacePropertiesToMap>()
{
	return FAkGeometrySurfacePropertiesToMap::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AcousticTexture_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_AcousticTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OcclusionValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OcclusionValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AkGeometrySurfacePropertiesToMap.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkGeometrySurfacePropertiesToMap>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap_Statics::NewProp_AcousticTexture_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkGeometrySurfacePropertiesToMap" },
		{ "ModuleRelativePath", "Public/AkGeometrySurfacePropertiesToMap.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap_Statics::NewProp_AcousticTexture = { "AcousticTexture", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkGeometrySurfacePropertiesToMap, AcousticTexture), Z_Construct_UClass_UAkAcousticTexture_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap_Statics::NewProp_AcousticTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap_Statics::NewProp_AcousticTexture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap_Statics::NewProp_OcclusionValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkGeometrySurfacePropertiesToMap" },
		{ "ModuleRelativePath", "Public/AkGeometrySurfacePropertiesToMap.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap_Statics::NewProp_OcclusionValue = { "OcclusionValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkGeometrySurfacePropertiesToMap, OcclusionValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap_Statics::NewProp_OcclusionValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap_Statics::NewProp_OcclusionValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap_Statics::NewProp_AcousticTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap_Statics::NewProp_OcclusionValue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"AkGeometrySurfacePropertiesToMap",
		sizeof(FAkGeometrySurfacePropertiesToMap),
		alignof(FAkGeometrySurfacePropertiesToMap),
		Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap()
	{
		if (!Z_Registration_Info_UScriptStruct_AkGeometrySurfacePropertiesToMap.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AkGeometrySurfacePropertiesToMap.InnerSingleton, Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AkGeometrySurfacePropertiesToMap.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkGeometrySurfacePropertiesToMap_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkGeometrySurfacePropertiesToMap_h_Statics::ScriptStructInfo[] = {
		{ FAkGeometrySurfacePropertiesToMap::StaticStruct, Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap_Statics::NewStructOps, TEXT("AkGeometrySurfacePropertiesToMap"), &Z_Registration_Info_UScriptStruct_AkGeometrySurfacePropertiesToMap, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkGeometrySurfacePropertiesToMap), 3481568963U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkGeometrySurfacePropertiesToMap_h_2822813276(TEXT("/Script/AkAudio"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkGeometrySurfacePropertiesToMap_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkGeometrySurfacePropertiesToMap_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
