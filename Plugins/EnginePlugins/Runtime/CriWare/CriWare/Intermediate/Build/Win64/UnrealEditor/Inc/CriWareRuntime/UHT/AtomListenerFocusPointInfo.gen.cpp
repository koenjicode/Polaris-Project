// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/AtomListenerFocusPointInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomListenerFocusPointInfo() {}
// Cross Module References
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomListenerFocusPointInfo();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomListenerFocusPointInfo;
class UScriptStruct* FAtomListenerFocusPointInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomListenerFocusPointInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomListenerFocusPointInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomListenerFocusPointInfo, (UObject*)Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AtomListenerFocusPointInfo"));
	}
	return Z_Registration_Info_UScriptStruct_AtomListenerFocusPointInfo.OuterSingleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FAtomListenerFocusPointInfo>()
{
	return FAtomListenerFocusPointInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAtomListenerFocusPointInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetActor_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_TargetActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetComponent_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_TargetComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistanceLevel_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DirectionLevel_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DirectionLevel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomListenerFocusPointInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AtomListenerFocusPointInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomListenerFocusPointInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomListenerFocusPointInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomListenerFocusPointInfo_Statics::NewProp_TargetActor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomListenerFocusPointInfo" },
		{ "ModuleRelativePath", "Public/AtomListenerFocusPointInfo.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FAtomListenerFocusPointInfo_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomListenerFocusPointInfo, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomListenerFocusPointInfo_Statics::NewProp_TargetActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomListenerFocusPointInfo_Statics::NewProp_TargetActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomListenerFocusPointInfo_Statics::NewProp_TargetComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomListenerFocusPointInfo" },
		{ "ModuleRelativePath", "Public/AtomListenerFocusPointInfo.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FAtomListenerFocusPointInfo_Statics::NewProp_TargetComponent = { "TargetComponent", nullptr, (EPropertyFlags)0x001400000008000d, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomListenerFocusPointInfo, TargetComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomListenerFocusPointInfo_Statics::NewProp_TargetComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomListenerFocusPointInfo_Statics::NewProp_TargetComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomListenerFocusPointInfo_Statics::NewProp_DistanceLevel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomListenerFocusPointInfo" },
		{ "ModuleRelativePath", "Public/AtomListenerFocusPointInfo.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomListenerFocusPointInfo_Statics::NewProp_DistanceLevel = { "DistanceLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomListenerFocusPointInfo, DistanceLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomListenerFocusPointInfo_Statics::NewProp_DistanceLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomListenerFocusPointInfo_Statics::NewProp_DistanceLevel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomListenerFocusPointInfo_Statics::NewProp_DirectionLevel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomListenerFocusPointInfo" },
		{ "ModuleRelativePath", "Public/AtomListenerFocusPointInfo.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomListenerFocusPointInfo_Statics::NewProp_DirectionLevel = { "DirectionLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomListenerFocusPointInfo, DirectionLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomListenerFocusPointInfo_Statics::NewProp_DirectionLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomListenerFocusPointInfo_Statics::NewProp_DirectionLevel_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomListenerFocusPointInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomListenerFocusPointInfo_Statics::NewProp_TargetActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomListenerFocusPointInfo_Statics::NewProp_TargetComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomListenerFocusPointInfo_Statics::NewProp_DistanceLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomListenerFocusPointInfo_Statics::NewProp_DirectionLevel,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomListenerFocusPointInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
		nullptr,
		&NewStructOps,
		"AtomListenerFocusPointInfo",
		sizeof(FAtomListenerFocusPointInfo),
		alignof(FAtomListenerFocusPointInfo),
		Z_Construct_UScriptStruct_FAtomListenerFocusPointInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomListenerFocusPointInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomListenerFocusPointInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomListenerFocusPointInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomListenerFocusPointInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_AtomListenerFocusPointInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomListenerFocusPointInfo.InnerSingleton, Z_Construct_UScriptStruct_FAtomListenerFocusPointInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AtomListenerFocusPointInfo.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomListenerFocusPointInfo_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomListenerFocusPointInfo_h_Statics::ScriptStructInfo[] = {
		{ FAtomListenerFocusPointInfo::StaticStruct, Z_Construct_UScriptStruct_FAtomListenerFocusPointInfo_Statics::NewStructOps, TEXT("AtomListenerFocusPointInfo"), &Z_Registration_Info_UScriptStruct_AtomListenerFocusPointInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomListenerFocusPointInfo), 790036711U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomListenerFocusPointInfo_h_3080570161(TEXT("/Script/CriWareRuntime"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomListenerFocusPointInfo_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomListenerFocusPointInfo_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
