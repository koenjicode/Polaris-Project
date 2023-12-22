// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/AtomProfileItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomProfileItem() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomProfileItem();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomProfileItem;
class UScriptStruct* FAtomProfileItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomProfileItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomProfileItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomProfileItem, (UObject*)Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AtomProfileItem"));
	}
	return Z_Registration_Info_UScriptStruct_AtomProfileItem.OuterSingleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FAtomProfileItem>()
{
	return FAtomProfileItem::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAtomProfileItem_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AtomComponentID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AtomComponentID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AtomCueName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AtomCueName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AtomComponentLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AtomComponentLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistanceFromListener_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceFromListener;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayingTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayingTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayedNumSamples_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_PlayedNumSamples;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerState_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PlayerState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumSounds_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumSounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConcurrencyName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ConcurrencyName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomProfileItem_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AtomProfileItem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomProfileItem>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_AtomComponentID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomProfileItem" },
		{ "ModuleRelativePath", "Public/AtomProfileItem.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_AtomComponentID = { "AtomComponentID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomProfileItem, AtomComponentID), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_AtomComponentID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_AtomComponentID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_AtomCueName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomProfileItem" },
		{ "ModuleRelativePath", "Public/AtomProfileItem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_AtomCueName = { "AtomCueName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomProfileItem, AtomCueName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_AtomCueName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_AtomCueName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_AtomComponentLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomProfileItem" },
		{ "ModuleRelativePath", "Public/AtomProfileItem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_AtomComponentLocation = { "AtomComponentLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomProfileItem, AtomComponentLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_AtomComponentLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_AtomComponentLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_DistanceFromListener_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomProfileItem" },
		{ "ModuleRelativePath", "Public/AtomProfileItem.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_DistanceFromListener = { "DistanceFromListener", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomProfileItem, DistanceFromListener), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_DistanceFromListener_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_DistanceFromListener_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_PlayingTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomProfileItem" },
		{ "ModuleRelativePath", "Public/AtomProfileItem.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_PlayingTime = { "PlayingTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomProfileItem, PlayingTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_PlayingTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_PlayingTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_PlayedNumSamples_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomProfileItem" },
		{ "ModuleRelativePath", "Public/AtomProfileItem.h" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_PlayedNumSamples = { "PlayedNumSamples", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomProfileItem, PlayedNumSamples), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_PlayedNumSamples_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_PlayedNumSamples_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_PlayerState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomProfileItem" },
		{ "ModuleRelativePath", "Public/AtomProfileItem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_PlayerState = { "PlayerState", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomProfileItem, PlayerState), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_PlayerState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_PlayerState_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_NumSounds_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomProfileItem" },
		{ "ModuleRelativePath", "Public/AtomProfileItem.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_NumSounds = { "NumSounds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomProfileItem, NumSounds), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_NumSounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_NumSounds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_ConcurrencyName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomProfileItem" },
		{ "ModuleRelativePath", "Public/AtomProfileItem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_ConcurrencyName = { "ConcurrencyName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomProfileItem, ConcurrencyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_ConcurrencyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_ConcurrencyName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomProfileItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_AtomComponentID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_AtomCueName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_AtomComponentLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_DistanceFromListener,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_PlayingTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_PlayedNumSamples,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_PlayerState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_NumSounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewProp_ConcurrencyName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomProfileItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
		nullptr,
		&NewStructOps,
		"AtomProfileItem",
		sizeof(FAtomProfileItem),
		alignof(FAtomProfileItem),
		Z_Construct_UScriptStruct_FAtomProfileItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomProfileItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomProfileItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomProfileItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomProfileItem()
	{
		if (!Z_Registration_Info_UScriptStruct_AtomProfileItem.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomProfileItem.InnerSingleton, Z_Construct_UScriptStruct_FAtomProfileItem_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AtomProfileItem.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomProfileItem_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomProfileItem_h_Statics::ScriptStructInfo[] = {
		{ FAtomProfileItem::StaticStruct, Z_Construct_UScriptStruct_FAtomProfileItem_Statics::NewStructOps, TEXT("AtomProfileItem"), &Z_Registration_Info_UScriptStruct_AtomProfileItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomProfileItem), 2843693424U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomProfileItem_h_2179596991(TEXT("/Script/CriWareRuntime"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomProfileItem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomProfileItem_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
