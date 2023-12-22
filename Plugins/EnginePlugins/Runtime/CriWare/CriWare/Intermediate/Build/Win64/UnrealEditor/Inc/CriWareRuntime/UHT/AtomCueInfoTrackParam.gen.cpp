// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/AtomCueInfoTrackParam.h"
#include "CriWareRuntime/Public/AtomCueInfoSelectorParam.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomCueInfoTrackParam() {}
// Cross Module References
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomCueInfoSelectorParam();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomCueInfoTrackParam();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomCueInfoTrackParam;
class UScriptStruct* FAtomCueInfoTrackParam::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomCueInfoTrackParam.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomCueInfoTrackParam.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomCueInfoTrackParam, (UObject*)Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AtomCueInfoTrackParam"));
	}
	return Z_Registration_Info_UScriptStruct_AtomCueInfoTrackParam.OuterSingleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FAtomCueInfoTrackParam>()
{
	return FAtomCueInfoTrackParam::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAtomCueInfoTrackParam_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Volume_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Volume;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Selector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Selector;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueInfoTrackParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AtomCueInfoTrackParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomCueInfoTrackParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomCueInfoTrackParam>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueInfoTrackParam_Statics::NewProp_Volume_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomCueInfoTrackParam" },
		{ "ModuleRelativePath", "Public/AtomCueInfoTrackParam.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoTrackParam_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomCueInfoTrackParam, Volume), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueInfoTrackParam_Statics::NewProp_Volume_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfoTrackParam_Statics::NewProp_Volume_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueInfoTrackParam_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomCueInfoTrackParam" },
		{ "ModuleRelativePath", "Public/AtomCueInfoTrackParam.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoTrackParam_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomCueInfoTrackParam, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueInfoTrackParam_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfoTrackParam_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueInfoTrackParam_Statics::NewProp_Selector_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomCueInfoTrackParam" },
		{ "ModuleRelativePath", "Public/AtomCueInfoTrackParam.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoTrackParam_Statics::NewProp_Selector = { "Selector", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomCueInfoTrackParam, Selector), Z_Construct_UScriptStruct_FAtomCueInfoSelectorParam, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueInfoTrackParam_Statics::NewProp_Selector_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfoTrackParam_Statics::NewProp_Selector_MetaData)) }; // 3903711681
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomCueInfoTrackParam_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoTrackParam_Statics::NewProp_Volume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoTrackParam_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoTrackParam_Statics::NewProp_Selector,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomCueInfoTrackParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
		nullptr,
		&NewStructOps,
		"AtomCueInfoTrackParam",
		sizeof(FAtomCueInfoTrackParam),
		alignof(FAtomCueInfoTrackParam),
		Z_Construct_UScriptStruct_FAtomCueInfoTrackParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfoTrackParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueInfoTrackParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfoTrackParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomCueInfoTrackParam()
	{
		if (!Z_Registration_Info_UScriptStruct_AtomCueInfoTrackParam.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomCueInfoTrackParam.InnerSingleton, Z_Construct_UScriptStruct_FAtomCueInfoTrackParam_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AtomCueInfoTrackParam.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCueInfoTrackParam_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCueInfoTrackParam_h_Statics::ScriptStructInfo[] = {
		{ FAtomCueInfoTrackParam::StaticStruct, Z_Construct_UScriptStruct_FAtomCueInfoTrackParam_Statics::NewStructOps, TEXT("AtomCueInfoTrackParam"), &Z_Registration_Info_UScriptStruct_AtomCueInfoTrackParam, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomCueInfoTrackParam), 843945557U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCueInfoTrackParam_h_2846243063(TEXT("/Script/CriWareRuntime"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCueInfoTrackParam_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCueInfoTrackParam_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
