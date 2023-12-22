// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/AtomCueInfoBlocksParam.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomCueInfoBlocksParam() {}
// Cross Module References
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomCueInfoBlocksParam();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomCueInfoBlocksParam;
class UScriptStruct* FAtomCueInfoBlocksParam::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomCueInfoBlocksParam.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomCueInfoBlocksParam.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomCueInfoBlocksParam, (UObject*)Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AtomCueInfoBlocksParam"));
	}
	return Z_Registration_Info_UScriptStruct_AtomCueInfoBlocksParam.OuterSingleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FAtomCueInfoBlocksParam>()
{
	return FAtomCueInfoBlocksParam::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAtomCueInfoBlocksParam_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartPosition_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StartPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Length_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Length;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueInfoBlocksParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AtomCueInfoBlocksParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomCueInfoBlocksParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomCueInfoBlocksParam>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueInfoBlocksParam_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomCueInfoBlocksParam" },
		{ "ModuleRelativePath", "Public/AtomCueInfoBlocksParam.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoBlocksParam_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomCueInfoBlocksParam, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueInfoBlocksParam_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfoBlocksParam_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueInfoBlocksParam_Statics::NewProp_StartPosition_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomCueInfoBlocksParam" },
		{ "ModuleRelativePath", "Public/AtomCueInfoBlocksParam.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoBlocksParam_Statics::NewProp_StartPosition = { "StartPosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomCueInfoBlocksParam, StartPosition), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueInfoBlocksParam_Statics::NewProp_StartPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfoBlocksParam_Statics::NewProp_StartPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueInfoBlocksParam_Statics::NewProp_Length_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomCueInfoBlocksParam" },
		{ "ModuleRelativePath", "Public/AtomCueInfoBlocksParam.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoBlocksParam_Statics::NewProp_Length = { "Length", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomCueInfoBlocksParam, Length), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueInfoBlocksParam_Statics::NewProp_Length_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfoBlocksParam_Statics::NewProp_Length_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomCueInfoBlocksParam_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoBlocksParam_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoBlocksParam_Statics::NewProp_StartPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoBlocksParam_Statics::NewProp_Length,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomCueInfoBlocksParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
		nullptr,
		&NewStructOps,
		"AtomCueInfoBlocksParam",
		sizeof(FAtomCueInfoBlocksParam),
		alignof(FAtomCueInfoBlocksParam),
		Z_Construct_UScriptStruct_FAtomCueInfoBlocksParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfoBlocksParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueInfoBlocksParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfoBlocksParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomCueInfoBlocksParam()
	{
		if (!Z_Registration_Info_UScriptStruct_AtomCueInfoBlocksParam.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomCueInfoBlocksParam.InnerSingleton, Z_Construct_UScriptStruct_FAtomCueInfoBlocksParam_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AtomCueInfoBlocksParam.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCueInfoBlocksParam_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCueInfoBlocksParam_h_Statics::ScriptStructInfo[] = {
		{ FAtomCueInfoBlocksParam::StaticStruct, Z_Construct_UScriptStruct_FAtomCueInfoBlocksParam_Statics::NewStructOps, TEXT("AtomCueInfoBlocksParam"), &Z_Registration_Info_UScriptStruct_AtomCueInfoBlocksParam, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomCueInfoBlocksParam), 2740605613U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCueInfoBlocksParam_h_3413305934(TEXT("/Script/CriWareRuntime"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCueInfoBlocksParam_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCueInfoBlocksParam_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
