// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GFur/Public/FurCustomLod.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFurCustomLod() {}
// Cross Module References
	GFUR_API UScriptStruct* Z_Construct_UScriptStruct_FFurCustomLod();
	UPackage* Z_Construct_UPackage__Script_GFur();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FurCustomLod;
class UScriptStruct* FFurCustomLod::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FurCustomLod.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FurCustomLod.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFurCustomLod, (UObject*)Z_Construct_UPackage__Script_GFur(), TEXT("FurCustomLod"));
	}
	return Z_Registration_Info_UScriptStruct_FurCustomLod.OuterSingleton;
}
template<> GFUR_API UScriptStruct* StaticStruct<FFurCustomLod>()
{
	return FFurCustomLod::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFurCustomLod_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsCustomLodEnable_MetaData[];
#endif
		static void NewProp_bIsCustomLodEnable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCustomLodEnable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxCustomLodScreenSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxCustomLodScreenSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxParam_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxParam;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinCustomLodScreenSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinCustomLodScreenSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinParam_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinParam;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LodDivNum_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LodDivNum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LodPower_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LodPower;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsContinuous_MetaData[];
#endif
		static void NewProp_bIsContinuous_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsContinuous;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFurCustomLod_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FurCustomLod.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFurCustomLod_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFurCustomLod>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFurCustomLod_Statics::NewProp_bIsCustomLodEnable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FurCustomLod" },
		{ "ModuleRelativePath", "Public/FurCustomLod.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFurCustomLod_Statics::NewProp_bIsCustomLodEnable_SetBit(void* Obj)
	{
		((FFurCustomLod*)Obj)->bIsCustomLodEnable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFurCustomLod_Statics::NewProp_bIsCustomLodEnable = { "bIsCustomLodEnable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FFurCustomLod), &Z_Construct_UScriptStruct_FFurCustomLod_Statics::NewProp_bIsCustomLodEnable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFurCustomLod_Statics::NewProp_bIsCustomLodEnable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFurCustomLod_Statics::NewProp_bIsCustomLodEnable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFurCustomLod_Statics::NewProp_MaxCustomLodScreenSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FurCustomLod" },
		{ "ModuleRelativePath", "Public/FurCustomLod.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFurCustomLod_Statics::NewProp_MaxCustomLodScreenSize = { "MaxCustomLodScreenSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFurCustomLod, MaxCustomLodScreenSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FFurCustomLod_Statics::NewProp_MaxCustomLodScreenSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFurCustomLod_Statics::NewProp_MaxCustomLodScreenSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFurCustomLod_Statics::NewProp_MaxParam_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FurCustomLod" },
		{ "ModuleRelativePath", "Public/FurCustomLod.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFurCustomLod_Statics::NewProp_MaxParam = { "MaxParam", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFurCustomLod, MaxParam), METADATA_PARAMS(Z_Construct_UScriptStruct_FFurCustomLod_Statics::NewProp_MaxParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFurCustomLod_Statics::NewProp_MaxParam_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFurCustomLod_Statics::NewProp_MinCustomLodScreenSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FurCustomLod" },
		{ "ModuleRelativePath", "Public/FurCustomLod.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFurCustomLod_Statics::NewProp_MinCustomLodScreenSize = { "MinCustomLodScreenSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFurCustomLod, MinCustomLodScreenSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FFurCustomLod_Statics::NewProp_MinCustomLodScreenSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFurCustomLod_Statics::NewProp_MinCustomLodScreenSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFurCustomLod_Statics::NewProp_MinParam_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FurCustomLod" },
		{ "ModuleRelativePath", "Public/FurCustomLod.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFurCustomLod_Statics::NewProp_MinParam = { "MinParam", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFurCustomLod, MinParam), METADATA_PARAMS(Z_Construct_UScriptStruct_FFurCustomLod_Statics::NewProp_MinParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFurCustomLod_Statics::NewProp_MinParam_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFurCustomLod_Statics::NewProp_LodDivNum_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FurCustomLod" },
		{ "ModuleRelativePath", "Public/FurCustomLod.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFurCustomLod_Statics::NewProp_LodDivNum = { "LodDivNum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFurCustomLod, LodDivNum), METADATA_PARAMS(Z_Construct_UScriptStruct_FFurCustomLod_Statics::NewProp_LodDivNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFurCustomLod_Statics::NewProp_LodDivNum_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFurCustomLod_Statics::NewProp_LodPower_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FurCustomLod" },
		{ "ModuleRelativePath", "Public/FurCustomLod.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFurCustomLod_Statics::NewProp_LodPower = { "LodPower", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFurCustomLod, LodPower), METADATA_PARAMS(Z_Construct_UScriptStruct_FFurCustomLod_Statics::NewProp_LodPower_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFurCustomLod_Statics::NewProp_LodPower_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFurCustomLod_Statics::NewProp_bIsContinuous_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FurCustomLod" },
		{ "ModuleRelativePath", "Public/FurCustomLod.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFurCustomLod_Statics::NewProp_bIsContinuous_SetBit(void* Obj)
	{
		((FFurCustomLod*)Obj)->bIsContinuous = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFurCustomLod_Statics::NewProp_bIsContinuous = { "bIsContinuous", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FFurCustomLod), &Z_Construct_UScriptStruct_FFurCustomLod_Statics::NewProp_bIsContinuous_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFurCustomLod_Statics::NewProp_bIsContinuous_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFurCustomLod_Statics::NewProp_bIsContinuous_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFurCustomLod_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFurCustomLod_Statics::NewProp_bIsCustomLodEnable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFurCustomLod_Statics::NewProp_MaxCustomLodScreenSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFurCustomLod_Statics::NewProp_MaxParam,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFurCustomLod_Statics::NewProp_MinCustomLodScreenSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFurCustomLod_Statics::NewProp_MinParam,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFurCustomLod_Statics::NewProp_LodDivNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFurCustomLod_Statics::NewProp_LodPower,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFurCustomLod_Statics::NewProp_bIsContinuous,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFurCustomLod_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GFur,
		nullptr,
		&NewStructOps,
		"FurCustomLod",
		sizeof(FFurCustomLod),
		alignof(FFurCustomLod),
		Z_Construct_UScriptStruct_FFurCustomLod_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFurCustomLod_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFurCustomLod_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFurCustomLod_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFurCustomLod()
	{
		if (!Z_Registration_Info_UScriptStruct_FurCustomLod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FurCustomLod.InnerSingleton, Z_Construct_UScriptStruct_FFurCustomLod_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FurCustomLod.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_Marketplace_GFurPRO_Source_GFur_Public_FurCustomLod_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_Marketplace_GFurPRO_Source_GFur_Public_FurCustomLod_h_Statics::ScriptStructInfo[] = {
		{ FFurCustomLod::StaticStruct, Z_Construct_UScriptStruct_FFurCustomLod_Statics::NewStructOps, TEXT("FurCustomLod"), &Z_Registration_Info_UScriptStruct_FurCustomLod, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFurCustomLod), 2934652189U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_Marketplace_GFurPRO_Source_GFur_Public_FurCustomLod_h_1013045196(TEXT("/Script/GFur"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_Marketplace_GFurPRO_Source_GFur_Public_FurCustomLod_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_Marketplace_GFurPRO_Source_GFur_Public_FurCustomLod_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
