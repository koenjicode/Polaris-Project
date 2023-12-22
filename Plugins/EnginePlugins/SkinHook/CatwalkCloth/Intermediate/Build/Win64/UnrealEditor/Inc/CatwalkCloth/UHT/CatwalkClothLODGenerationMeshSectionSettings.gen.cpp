// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CatwalkCloth/Public/CatwalkClothLODGenerationMeshSectionSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCatwalkClothLODGenerationMeshSectionSettings() {}
// Cross Module References
	CATWALKCLOTH_API UScriptStruct* Z_Construct_UScriptStruct_FCatwalkClothLODGenerationMeshSectionSettings();
	UPackage* Z_Construct_UPackage__Script_CatwalkCloth();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CatwalkClothLODGenerationMeshSectionSettings;
class UScriptStruct* FCatwalkClothLODGenerationMeshSectionSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CatwalkClothLODGenerationMeshSectionSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CatwalkClothLODGenerationMeshSectionSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCatwalkClothLODGenerationMeshSectionSettings, (UObject*)Z_Construct_UPackage__Script_CatwalkCloth(), TEXT("CatwalkClothLODGenerationMeshSectionSettings"));
	}
	return Z_Registration_Info_UScriptStruct_CatwalkClothLODGenerationMeshSectionSettings.OuterSingleton;
}
template<> CATWALKCLOTH_API UScriptStruct* StaticStruct<FCatwalkClothLODGenerationMeshSectionSettings>()
{
	return FCatwalkClothLODGenerationMeshSectionSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCatwalkClothLODGenerationMeshSectionSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SectionEffectRadius_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SectionEffectRadius_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SectionEffectRadius;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatwalkClothLODGenerationMeshSectionSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CatwalkClothLODGenerationMeshSectionSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCatwalkClothLODGenerationMeshSectionSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCatwalkClothLODGenerationMeshSectionSettings>();
	}
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCatwalkClothLODGenerationMeshSectionSettings_Statics::NewProp_SectionEffectRadius_Inner = { "SectionEffectRadius", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatwalkClothLODGenerationMeshSectionSettings_Statics::NewProp_SectionEffectRadius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatwalkClothLODGenerationMeshSectionSettings" },
		{ "ModuleRelativePath", "Public/CatwalkClothLODGenerationMeshSectionSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCatwalkClothLODGenerationMeshSectionSettings_Statics::NewProp_SectionEffectRadius = { "SectionEffectRadius", nullptr, (EPropertyFlags)0x0010000000000045, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCatwalkClothLODGenerationMeshSectionSettings, SectionEffectRadius), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCatwalkClothLODGenerationMeshSectionSettings_Statics::NewProp_SectionEffectRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCatwalkClothLODGenerationMeshSectionSettings_Statics::NewProp_SectionEffectRadius_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCatwalkClothLODGenerationMeshSectionSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatwalkClothLODGenerationMeshSectionSettings_Statics::NewProp_SectionEffectRadius_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatwalkClothLODGenerationMeshSectionSettings_Statics::NewProp_SectionEffectRadius,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCatwalkClothLODGenerationMeshSectionSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CatwalkCloth,
		nullptr,
		&NewStructOps,
		"CatwalkClothLODGenerationMeshSectionSettings",
		sizeof(FCatwalkClothLODGenerationMeshSectionSettings),
		alignof(FCatwalkClothLODGenerationMeshSectionSettings),
		Z_Construct_UScriptStruct_FCatwalkClothLODGenerationMeshSectionSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCatwalkClothLODGenerationMeshSectionSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCatwalkClothLODGenerationMeshSectionSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCatwalkClothLODGenerationMeshSectionSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCatwalkClothLODGenerationMeshSectionSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_CatwalkClothLODGenerationMeshSectionSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CatwalkClothLODGenerationMeshSectionSettings.InnerSingleton, Z_Construct_UScriptStruct_FCatwalkClothLODGenerationMeshSectionSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CatwalkClothLODGenerationMeshSectionSettings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkCloth_Source_CatwalkCloth_Public_CatwalkClothLODGenerationMeshSectionSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkCloth_Source_CatwalkCloth_Public_CatwalkClothLODGenerationMeshSectionSettings_h_Statics::ScriptStructInfo[] = {
		{ FCatwalkClothLODGenerationMeshSectionSettings::StaticStruct, Z_Construct_UScriptStruct_FCatwalkClothLODGenerationMeshSectionSettings_Statics::NewStructOps, TEXT("CatwalkClothLODGenerationMeshSectionSettings"), &Z_Registration_Info_UScriptStruct_CatwalkClothLODGenerationMeshSectionSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCatwalkClothLODGenerationMeshSectionSettings), 46627418U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkCloth_Source_CatwalkCloth_Public_CatwalkClothLODGenerationMeshSectionSettings_h_2969105872(TEXT("/Script/CatwalkCloth"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkCloth_Source_CatwalkCloth_Public_CatwalkClothLODGenerationMeshSectionSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkCloth_Source_CatwalkCloth_Public_CatwalkClothLODGenerationMeshSectionSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
