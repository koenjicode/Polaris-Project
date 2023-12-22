// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/AtomSelectorSettingsParam.h"
#include "CriWareRuntime/Public/AtomStringWithComment.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomSelectorSettingsParam() {}
// Cross Module References
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomSelectorSettingsParam();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomStringWithComment();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomSelectorSettingsParam;
class UScriptStruct* FAtomSelectorSettingsParam::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomSelectorSettingsParam.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomSelectorSettingsParam.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomSelectorSettingsParam, (UObject*)Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AtomSelectorSettingsParam"));
	}
	return Z_Registration_Info_UScriptStruct_AtomSelectorSettingsParam.OuterSingleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FAtomSelectorSettingsParam>()
{
	return FAtomSelectorSettingsParam::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAtomSelectorSettingsParam_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSelectorLabel_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultSelectorLabel;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Labels_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Labels_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Labels;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomSelectorSettingsParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AtomSelectorSettingsParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomSelectorSettingsParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomSelectorSettingsParam>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomSelectorSettingsParam_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomSelectorSettingsParam" },
		{ "ModuleRelativePath", "Public/AtomSelectorSettingsParam.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomSelectorSettingsParam_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomSelectorSettingsParam, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomSelectorSettingsParam_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomSelectorSettingsParam_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomSelectorSettingsParam_Statics::NewProp_DefaultSelectorLabel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomSelectorSettingsParam" },
		{ "ModuleRelativePath", "Public/AtomSelectorSettingsParam.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomSelectorSettingsParam_Statics::NewProp_DefaultSelectorLabel = { "DefaultSelectorLabel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomSelectorSettingsParam, DefaultSelectorLabel), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomSelectorSettingsParam_Statics::NewProp_DefaultSelectorLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomSelectorSettingsParam_Statics::NewProp_DefaultSelectorLabel_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomSelectorSettingsParam_Statics::NewProp_Labels_Inner = { "Labels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAtomStringWithComment, METADATA_PARAMS(nullptr, 0) }; // 1829005662
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomSelectorSettingsParam_Statics::NewProp_Labels_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomSelectorSettingsParam" },
		{ "ModuleRelativePath", "Public/AtomSelectorSettingsParam.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtomSelectorSettingsParam_Statics::NewProp_Labels = { "Labels", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomSelectorSettingsParam, Labels), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomSelectorSettingsParam_Statics::NewProp_Labels_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomSelectorSettingsParam_Statics::NewProp_Labels_MetaData)) }; // 1829005662
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomSelectorSettingsParam_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomSelectorSettingsParam_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomSelectorSettingsParam_Statics::NewProp_DefaultSelectorLabel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomSelectorSettingsParam_Statics::NewProp_Labels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomSelectorSettingsParam_Statics::NewProp_Labels,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomSelectorSettingsParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
		nullptr,
		&NewStructOps,
		"AtomSelectorSettingsParam",
		sizeof(FAtomSelectorSettingsParam),
		alignof(FAtomSelectorSettingsParam),
		Z_Construct_UScriptStruct_FAtomSelectorSettingsParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomSelectorSettingsParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomSelectorSettingsParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomSelectorSettingsParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomSelectorSettingsParam()
	{
		if (!Z_Registration_Info_UScriptStruct_AtomSelectorSettingsParam.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomSelectorSettingsParam.InnerSingleton, Z_Construct_UScriptStruct_FAtomSelectorSettingsParam_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AtomSelectorSettingsParam.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomSelectorSettingsParam_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomSelectorSettingsParam_h_Statics::ScriptStructInfo[] = {
		{ FAtomSelectorSettingsParam::StaticStruct, Z_Construct_UScriptStruct_FAtomSelectorSettingsParam_Statics::NewStructOps, TEXT("AtomSelectorSettingsParam"), &Z_Registration_Info_UScriptStruct_AtomSelectorSettingsParam, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomSelectorSettingsParam), 2624219717U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomSelectorSettingsParam_h_1968673262(TEXT("/Script/CriWareRuntime"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomSelectorSettingsParam_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomSelectorSettingsParam_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
