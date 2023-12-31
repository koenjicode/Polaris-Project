// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/AtomCategoryInfoParam.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomCategoryInfoParam() {}
// Cross Module References
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomCategoryInfoParam();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomCategoryInfoParam;
class UScriptStruct* FAtomCategoryInfoParam::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomCategoryInfoParam.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomCategoryInfoParam.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomCategoryInfoParam, (UObject*)Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AtomCategoryInfoParam"));
	}
	return Z_Registration_Info_UScriptStruct_AtomCategoryInfoParam.OuterSingleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FAtomCategoryInfoParam>()
{
	return FAtomCategoryInfoParam::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_category_id_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_category_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_group_no_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_group_no;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Volume_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Volume;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsPaused_MetaData[];
#endif
		static void NewProp_IsPaused_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsPaused;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AtomCategoryInfoParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomCategoryInfoParam>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomCategoryInfoParam" },
		{ "ModuleRelativePath", "Public/AtomCategoryInfoParam.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomCategoryInfoParam, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Statics::NewProp_category_id_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomCategoryInfoParam" },
		{ "ModuleRelativePath", "Public/AtomCategoryInfoParam.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Statics::NewProp_category_id = { "category_id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomCategoryInfoParam, category_id), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Statics::NewProp_category_id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Statics::NewProp_category_id_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Statics::NewProp_group_no_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomCategoryInfoParam" },
		{ "ModuleRelativePath", "Public/AtomCategoryInfoParam.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Statics::NewProp_group_no = { "group_no", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomCategoryInfoParam, group_no), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Statics::NewProp_group_no_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Statics::NewProp_group_no_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Statics::NewProp_Volume_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomCategoryInfoParam" },
		{ "ModuleRelativePath", "Public/AtomCategoryInfoParam.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomCategoryInfoParam, Volume), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Statics::NewProp_Volume_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Statics::NewProp_Volume_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Statics::NewProp_IsPaused_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomCategoryInfoParam" },
		{ "ModuleRelativePath", "Public/AtomCategoryInfoParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Statics::NewProp_IsPaused_SetBit(void* Obj)
	{
		((FAtomCategoryInfoParam*)Obj)->IsPaused = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Statics::NewProp_IsPaused = { "IsPaused", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAtomCategoryInfoParam), &Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Statics::NewProp_IsPaused_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Statics::NewProp_IsPaused_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Statics::NewProp_IsPaused_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Statics::NewProp_category_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Statics::NewProp_group_no,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Statics::NewProp_Volume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Statics::NewProp_IsPaused,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
		nullptr,
		&NewStructOps,
		"AtomCategoryInfoParam",
		sizeof(FAtomCategoryInfoParam),
		alignof(FAtomCategoryInfoParam),
		Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomCategoryInfoParam()
	{
		if (!Z_Registration_Info_UScriptStruct_AtomCategoryInfoParam.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomCategoryInfoParam.InnerSingleton, Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AtomCategoryInfoParam.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCategoryInfoParam_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCategoryInfoParam_h_Statics::ScriptStructInfo[] = {
		{ FAtomCategoryInfoParam::StaticStruct, Z_Construct_UScriptStruct_FAtomCategoryInfoParam_Statics::NewStructOps, TEXT("AtomCategoryInfoParam"), &Z_Registration_Info_UScriptStruct_AtomCategoryInfoParam, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomCategoryInfoParam), 820994149U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCategoryInfoParam_h_2911231543(TEXT("/Script/CriWareRuntime"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCategoryInfoParam_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCategoryInfoParam_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
