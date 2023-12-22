// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/AtomTriggerRow.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomTriggerRow() {}
// Cross Module References
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_USoundAtomCue_NoRegister();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomTriggerRow();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References

static_assert(std::is_polymorphic<FAtomTriggerRow>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FAtomTriggerRow cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomTriggerRow;
class UScriptStruct* FAtomTriggerRow::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomTriggerRow.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomTriggerRow.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomTriggerRow, (UObject*)Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AtomTriggerRow"));
	}
	return Z_Registration_Info_UScriptStruct_AtomTriggerRow.OuterSingleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FAtomTriggerRow>()
{
	return FAtomTriggerRow::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAtomTriggerRow_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bone_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_bone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Cue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Cue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomTriggerRow_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AtomTriggerRow.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomTriggerRow_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomTriggerRow>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomTriggerRow_Statics::NewProp_Time_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomTriggerRow" },
		{ "ModuleRelativePath", "Public/AtomTriggerRow.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomTriggerRow_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomTriggerRow, Time), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomTriggerRow_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomTriggerRow_Statics::NewProp_Time_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomTriggerRow_Statics::NewProp_bone_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomTriggerRow" },
		{ "ModuleRelativePath", "Public/AtomTriggerRow.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAtomTriggerRow_Statics::NewProp_bone = { "bone", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomTriggerRow, bone), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomTriggerRow_Statics::NewProp_bone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomTriggerRow_Statics::NewProp_bone_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomTriggerRow_Statics::NewProp_Cue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomTriggerRow" },
		{ "ModuleRelativePath", "Public/AtomTriggerRow.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAtomTriggerRow_Statics::NewProp_Cue = { "Cue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomTriggerRow, Cue), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomTriggerRow_Statics::NewProp_Cue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomTriggerRow_Statics::NewProp_Cue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomTriggerRow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomTriggerRow_Statics::NewProp_Time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomTriggerRow_Statics::NewProp_bone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomTriggerRow_Statics::NewProp_Cue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomTriggerRow_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"AtomTriggerRow",
		sizeof(FAtomTriggerRow),
		alignof(FAtomTriggerRow),
		Z_Construct_UScriptStruct_FAtomTriggerRow_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomTriggerRow_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomTriggerRow_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomTriggerRow_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomTriggerRow()
	{
		if (!Z_Registration_Info_UScriptStruct_AtomTriggerRow.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomTriggerRow.InnerSingleton, Z_Construct_UScriptStruct_FAtomTriggerRow_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AtomTriggerRow.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomTriggerRow_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomTriggerRow_h_Statics::ScriptStructInfo[] = {
		{ FAtomTriggerRow::StaticStruct, Z_Construct_UScriptStruct_FAtomTriggerRow_Statics::NewStructOps, TEXT("AtomTriggerRow"), &Z_Registration_Info_UScriptStruct_AtomTriggerRow, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomTriggerRow), 1240285998U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomTriggerRow_h_1804540834(TEXT("/Script/CriWareRuntime"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomTriggerRow_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomTriggerRow_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
