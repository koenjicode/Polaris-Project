// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CatwalkClothInterface/Public/CatwalkClothExternalSimulationMeshSlot.h"
#include "../../Source/Runtime/Engine/Classes/Engine/EngineTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCatwalkClothExternalSimulationMeshSlot() {}
// Cross Module References
	CATWALKCLOTHINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FCatwalkClothExternalSimulationMeshSlot();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FComponentReference();
	UPackage* Z_Construct_UPackage__Script_CatwalkClothInterface();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CatwalkClothExternalSimulationMeshSlot;
class UScriptStruct* FCatwalkClothExternalSimulationMeshSlot::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CatwalkClothExternalSimulationMeshSlot.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CatwalkClothExternalSimulationMeshSlot.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCatwalkClothExternalSimulationMeshSlot, (UObject*)Z_Construct_UPackage__Script_CatwalkClothInterface(), TEXT("CatwalkClothExternalSimulationMeshSlot"));
	}
	return Z_Registration_Info_UScriptStruct_CatwalkClothExternalSimulationMeshSlot.OuterSingleton;
}
template<> CATWALKCLOTHINTERFACE_API UScriptStruct* StaticStruct<FCatwalkClothExternalSimulationMeshSlot>()
{
	return FCatwalkClothExternalSimulationMeshSlot::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCatwalkClothExternalSimulationMeshSlot_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExternalComponent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExternalComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatwalkClothExternalSimulationMeshSlot_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CatwalkClothExternalSimulationMeshSlot.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCatwalkClothExternalSimulationMeshSlot_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCatwalkClothExternalSimulationMeshSlot>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCatwalkClothExternalSimulationMeshSlot_Statics::NewProp_ExternalComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatwalkClothExternalSimulationMeshSlot" },
		{ "ModuleRelativePath", "Public/CatwalkClothExternalSimulationMeshSlot.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCatwalkClothExternalSimulationMeshSlot_Statics::NewProp_ExternalComponent = { "ExternalComponent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCatwalkClothExternalSimulationMeshSlot, ExternalComponent), Z_Construct_UScriptStruct_FComponentReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FCatwalkClothExternalSimulationMeshSlot_Statics::NewProp_ExternalComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCatwalkClothExternalSimulationMeshSlot_Statics::NewProp_ExternalComponent_MetaData)) }; // 1758507179
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCatwalkClothExternalSimulationMeshSlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCatwalkClothExternalSimulationMeshSlot_Statics::NewProp_ExternalComponent,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCatwalkClothExternalSimulationMeshSlot_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CatwalkClothInterface,
		nullptr,
		&NewStructOps,
		"CatwalkClothExternalSimulationMeshSlot",
		sizeof(FCatwalkClothExternalSimulationMeshSlot),
		alignof(FCatwalkClothExternalSimulationMeshSlot),
		Z_Construct_UScriptStruct_FCatwalkClothExternalSimulationMeshSlot_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCatwalkClothExternalSimulationMeshSlot_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCatwalkClothExternalSimulationMeshSlot_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCatwalkClothExternalSimulationMeshSlot_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCatwalkClothExternalSimulationMeshSlot()
	{
		if (!Z_Registration_Info_UScriptStruct_CatwalkClothExternalSimulationMeshSlot.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CatwalkClothExternalSimulationMeshSlot.InnerSingleton, Z_Construct_UScriptStruct_FCatwalkClothExternalSimulationMeshSlot_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CatwalkClothExternalSimulationMeshSlot.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkClothInterface_Source_CatwalkClothInterface_Public_CatwalkClothExternalSimulationMeshSlot_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkClothInterface_Source_CatwalkClothInterface_Public_CatwalkClothExternalSimulationMeshSlot_h_Statics::ScriptStructInfo[] = {
		{ FCatwalkClothExternalSimulationMeshSlot::StaticStruct, Z_Construct_UScriptStruct_FCatwalkClothExternalSimulationMeshSlot_Statics::NewStructOps, TEXT("CatwalkClothExternalSimulationMeshSlot"), &Z_Registration_Info_UScriptStruct_CatwalkClothExternalSimulationMeshSlot, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCatwalkClothExternalSimulationMeshSlot), 3997532246U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkClothInterface_Source_CatwalkClothInterface_Public_CatwalkClothExternalSimulationMeshSlot_h_1184595573(TEXT("/Script/CatwalkClothInterface"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkClothInterface_Source_CatwalkClothInterface_Public_CatwalkClothExternalSimulationMeshSlot_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkClothInterface_Source_CatwalkClothInterface_Public_CatwalkClothExternalSimulationMeshSlot_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
