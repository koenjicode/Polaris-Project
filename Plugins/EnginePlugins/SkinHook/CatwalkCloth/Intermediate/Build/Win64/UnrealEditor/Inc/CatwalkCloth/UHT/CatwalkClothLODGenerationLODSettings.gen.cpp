// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CatwalkCloth/Public/CatwalkClothLODGenerationLODSettings.h"
#include "CatwalkCloth/Public/CatwalkClothLODGenerationMeshSectionSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCatwalkClothLODGenerationLODSettings() {}
// Cross Module References
	CATWALKCLOTH_API UScriptStruct* Z_Construct_UScriptStruct_FCatwalkClothLODGenerationLODSettings();
	CATWALKCLOTH_API UScriptStruct* Z_Construct_UScriptStruct_FCatwalkClothLODGenerationMeshSectionSettings();
	UPackage* Z_Construct_UPackage__Script_CatwalkCloth();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CatwalkClothLODGenerationLODSettings;
class UScriptStruct* FCatwalkClothLODGenerationLODSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CatwalkClothLODGenerationLODSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CatwalkClothLODGenerationLODSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCatwalkClothLODGenerationLODSettings, (UObject*)Z_Construct_UPackage__Script_CatwalkCloth(), TEXT("CatwalkClothLODGenerationLODSettings"));
	}
	return Z_Registration_Info_UScriptStruct_CatwalkClothLODGenerationLODSettings.OuterSingleton;
}
template<> CATWALKCLOTH_API UScriptStruct* StaticStruct<FCatwalkClothLODGenerationLODSettings>()
{
	return FCatwalkClothLODGenerationLODSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCatwalkClothLODGenerationLODSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_LODSetting_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODSetting_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LODSetting;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatwalkClothLODGenerationLODSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CatwalkClothLODGenerationLODSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCatwalkClothLODGenerationLODSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCatwalkClothLODGenerationLODSettings>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCatwalkClothLODGenerationLODSettings_Statics::NewProp_LODSetting_Inner = { "LODSetting", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCatwalkClothLODGenerationMeshSectionSettings, METADATA_PARAMS(nullptr, 0) }; // 46627418
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatwalkClothLODGenerationLODSettings_Statics::NewProp_LODSetting_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatwalkClothLODGenerationLODSettings" },
		{ "ModuleRelativePath", "Public/CatwalkClothLODGenerationLODSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCatwalkClothLODGenerationLODSettings_Statics::NewProp_LODSetting = { "LODSetting", nullptr, (EPropertyFlags)0x0010000000000045, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCatwalkClothLODGenerationLODSettings, LODSetting), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCatwalkClothLODGenerationLODSettings_Statics::NewProp_LODSetting_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCatwalkClothLODGenerationLODSettings_Statics::NewProp_LODSetting_MetaData)) }; // 46627418
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCatwalkClothLODGenerationLODSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatwalkClothLODGenerationLODSettings_Statics::NewProp_LODSetting_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatwalkClothLODGenerationLODSettings_Statics::NewProp_LODSetting,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCatwalkClothLODGenerationLODSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CatwalkCloth,
		nullptr,
		&NewStructOps,
		"CatwalkClothLODGenerationLODSettings",
		sizeof(FCatwalkClothLODGenerationLODSettings),
		alignof(FCatwalkClothLODGenerationLODSettings),
		Z_Construct_UScriptStruct_FCatwalkClothLODGenerationLODSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCatwalkClothLODGenerationLODSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCatwalkClothLODGenerationLODSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCatwalkClothLODGenerationLODSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCatwalkClothLODGenerationLODSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_CatwalkClothLODGenerationLODSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CatwalkClothLODGenerationLODSettings.InnerSingleton, Z_Construct_UScriptStruct_FCatwalkClothLODGenerationLODSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CatwalkClothLODGenerationLODSettings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkCloth_Source_CatwalkCloth_Public_CatwalkClothLODGenerationLODSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkCloth_Source_CatwalkCloth_Public_CatwalkClothLODGenerationLODSettings_h_Statics::ScriptStructInfo[] = {
		{ FCatwalkClothLODGenerationLODSettings::StaticStruct, Z_Construct_UScriptStruct_FCatwalkClothLODGenerationLODSettings_Statics::NewStructOps, TEXT("CatwalkClothLODGenerationLODSettings"), &Z_Registration_Info_UScriptStruct_CatwalkClothLODGenerationLODSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCatwalkClothLODGenerationLODSettings), 3519281986U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkCloth_Source_CatwalkCloth_Public_CatwalkClothLODGenerationLODSettings_h_2242213812(TEXT("/Script/CatwalkCloth"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkCloth_Source_CatwalkCloth_Public_CatwalkClothLODGenerationLODSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkCloth_Source_CatwalkCloth_Public_CatwalkClothLODGenerationLODSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
