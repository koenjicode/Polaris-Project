// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GFur/Public/FurLod.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFurLod() {}
// Cross Module References
	GFUR_API UScriptStruct* Z_Construct_UScriptStruct_FFurLod();
	UPackage* Z_Construct_UPackage__Script_GFur();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FurLod;
class UScriptStruct* FFurLod::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FurLod.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FurLod.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFurLod, (UObject*)Z_Construct_UPackage__Script_GFur(), TEXT("FurLod"));
	}
	return Z_Registration_Info_UScriptStruct_FurLod.OuterSingleton;
}
template<> GFUR_API UScriptStruct* StaticStruct<FFurLod>()
{
	return FFurLod::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFurLod_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScreenSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ScreenSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayerCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LayerCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Lod_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Lod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhysicsEnabled_MetaData[];
#endif
		static void NewProp_PhysicsEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_PhysicsEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisableMorphTargets_MetaData[];
#endif
		static void NewProp_DisableMorphTargets_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DisableMorphTargets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFurLod_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FurLod.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFurLod_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFurLod>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFurLod_Statics::NewProp_ScreenSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FurLod" },
		{ "ModuleRelativePath", "Public/FurLod.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFurLod_Statics::NewProp_ScreenSize = { "ScreenSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFurLod, ScreenSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FFurLod_Statics::NewProp_ScreenSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFurLod_Statics::NewProp_ScreenSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFurLod_Statics::NewProp_LayerCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FurLod" },
		{ "ModuleRelativePath", "Public/FurLod.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFurLod_Statics::NewProp_LayerCount = { "LayerCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFurLod, LayerCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FFurLod_Statics::NewProp_LayerCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFurLod_Statics::NewProp_LayerCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFurLod_Statics::NewProp_Lod_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FurLod" },
		{ "ModuleRelativePath", "Public/FurLod.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFurLod_Statics::NewProp_Lod = { "Lod", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFurLod, Lod), METADATA_PARAMS(Z_Construct_UScriptStruct_FFurLod_Statics::NewProp_Lod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFurLod_Statics::NewProp_Lod_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFurLod_Statics::NewProp_PhysicsEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FurLod" },
		{ "ModuleRelativePath", "Public/FurLod.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFurLod_Statics::NewProp_PhysicsEnabled_SetBit(void* Obj)
	{
		((FFurLod*)Obj)->PhysicsEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFurLod_Statics::NewProp_PhysicsEnabled = { "PhysicsEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FFurLod), &Z_Construct_UScriptStruct_FFurLod_Statics::NewProp_PhysicsEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFurLod_Statics::NewProp_PhysicsEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFurLod_Statics::NewProp_PhysicsEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFurLod_Statics::NewProp_DisableMorphTargets_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FurLod" },
		{ "ModuleRelativePath", "Public/FurLod.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFurLod_Statics::NewProp_DisableMorphTargets_SetBit(void* Obj)
	{
		((FFurLod*)Obj)->DisableMorphTargets = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFurLod_Statics::NewProp_DisableMorphTargets = { "DisableMorphTargets", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FFurLod), &Z_Construct_UScriptStruct_FFurLod_Statics::NewProp_DisableMorphTargets_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFurLod_Statics::NewProp_DisableMorphTargets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFurLod_Statics::NewProp_DisableMorphTargets_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFurLod_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFurLod_Statics::NewProp_ScreenSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFurLod_Statics::NewProp_LayerCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFurLod_Statics::NewProp_Lod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFurLod_Statics::NewProp_PhysicsEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFurLod_Statics::NewProp_DisableMorphTargets,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFurLod_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GFur,
		nullptr,
		&NewStructOps,
		"FurLod",
		sizeof(FFurLod),
		alignof(FFurLod),
		Z_Construct_UScriptStruct_FFurLod_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFurLod_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFurLod_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFurLod_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFurLod()
	{
		if (!Z_Registration_Info_UScriptStruct_FurLod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FurLod.InnerSingleton, Z_Construct_UScriptStruct_FFurLod_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FurLod.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_Marketplace_GFurPRO_Source_GFur_Public_FurLod_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_Marketplace_GFurPRO_Source_GFur_Public_FurLod_h_Statics::ScriptStructInfo[] = {
		{ FFurLod::StaticStruct, Z_Construct_UScriptStruct_FFurLod_Statics::NewStructOps, TEXT("FurLod"), &Z_Registration_Info_UScriptStruct_FurLod, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFurLod), 2348481537U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_Marketplace_GFurPRO_Source_GFur_Public_FurLod_h_156929810(TEXT("/Script/GFur"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_Marketplace_GFurPRO_Source_GFur_Public_FurLod_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_Marketplace_GFurPRO_Source_GFur_Public_FurLod_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
