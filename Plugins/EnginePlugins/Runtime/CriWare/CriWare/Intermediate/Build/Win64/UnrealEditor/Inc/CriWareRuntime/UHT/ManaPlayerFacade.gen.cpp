// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/ManaPlayerFacade.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeManaPlayerFacade() {}
// Cross Module References
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UManaComponent_NoRegister();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FManaPlayerFacade();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ManaPlayerFacade;
class UScriptStruct* FManaPlayerFacade::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ManaPlayerFacade.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ManaPlayerFacade.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FManaPlayerFacade, (UObject*)Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("ManaPlayerFacade"));
	}
	return Z_Registration_Info_UScriptStruct_ManaPlayerFacade.OuterSingleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FManaPlayerFacade>()
{
	return FManaPlayerFacade::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FManaPlayerFacade_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ManaComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ManaComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManaPlayerFacade_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ManaPlayerFacade.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FManaPlayerFacade_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FManaPlayerFacade>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManaPlayerFacade_Statics::NewProp_ManaComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaPlayerFacade" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ManaPlayerFacade.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FManaPlayerFacade_Statics::NewProp_ManaComponent = { "ManaComponent", nullptr, (EPropertyFlags)0x001200000008200d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FManaPlayerFacade, ManaComponent), Z_Construct_UClass_UManaComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FManaPlayerFacade_Statics::NewProp_ManaComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManaPlayerFacade_Statics::NewProp_ManaComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FManaPlayerFacade_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManaPlayerFacade_Statics::NewProp_ManaComponent,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FManaPlayerFacade_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
		nullptr,
		&NewStructOps,
		"ManaPlayerFacade",
		sizeof(FManaPlayerFacade),
		alignof(FManaPlayerFacade),
		Z_Construct_UScriptStruct_FManaPlayerFacade_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManaPlayerFacade_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FManaPlayerFacade_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManaPlayerFacade_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FManaPlayerFacade()
	{
		if (!Z_Registration_Info_UScriptStruct_ManaPlayerFacade.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ManaPlayerFacade.InnerSingleton, Z_Construct_UScriptStruct_FManaPlayerFacade_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ManaPlayerFacade.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlayerFacade_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlayerFacade_h_Statics::ScriptStructInfo[] = {
		{ FManaPlayerFacade::StaticStruct, Z_Construct_UScriptStruct_FManaPlayerFacade_Statics::NewStructOps, TEXT("ManaPlayerFacade"), &Z_Registration_Info_UScriptStruct_ManaPlayerFacade, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FManaPlayerFacade), 1041867165U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlayerFacade_h_1450081205(TEXT("/Script/CriWareRuntime"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlayerFacade_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaPlayerFacade_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
