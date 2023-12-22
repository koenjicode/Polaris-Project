// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/AtomAsrRackConfigUI.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomAsrRackConfigUI() {}
// Cross Module References
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EAtomSoundRendererType();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomAsrRackConfigUI();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomAsrRackConfigUI;
class UScriptStruct* FAtomAsrRackConfigUI::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomAsrRackConfigUI.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomAsrRackConfigUI.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomAsrRackConfigUI, (UObject*)Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AtomAsrRackConfigUI"));
	}
	return Z_Registration_Info_UScriptStruct_AtomAsrRackConfigUI.OuterSingleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FAtomAsrRackConfigUI>()
{
	return FAtomAsrRackConfigUI::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAtomAsrRackConfigUI_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundRendererTypeUI_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_SoundRendererTypeUI;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElementID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ElementID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseOutputPort_MetaData[];
#endif
		static void NewProp_bUseOutputPort_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseOutputPort;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_UserIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAsrRackConfigUI_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AtomAsrRackConfigUI.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomAsrRackConfigUI_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomAsrRackConfigUI>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAsrRackConfigUI_Statics::NewProp_SoundRendererTypeUI_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAsrRackConfigUI" },
		{ "ModuleRelativePath", "Public/AtomAsrRackConfigUI.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAtomAsrRackConfigUI_Statics::NewProp_SoundRendererTypeUI = { "SoundRendererTypeUI", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomAsrRackConfigUI, SoundRendererTypeUI), Z_Construct_UEnum_CriWareRuntime_EAtomSoundRendererType, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAsrRackConfigUI_Statics::NewProp_SoundRendererTypeUI_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAsrRackConfigUI_Statics::NewProp_SoundRendererTypeUI_MetaData)) }; // 649548809
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAsrRackConfigUI_Statics::NewProp_ElementID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAsrRackConfigUI" },
		{ "ModuleRelativePath", "Public/AtomAsrRackConfigUI.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomAsrRackConfigUI_Statics::NewProp_ElementID = { "ElementID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomAsrRackConfigUI, ElementID), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAsrRackConfigUI_Statics::NewProp_ElementID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAsrRackConfigUI_Statics::NewProp_ElementID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAsrRackConfigUI_Statics::NewProp_bUseOutputPort_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAsrRackConfigUI" },
		{ "ModuleRelativePath", "Public/AtomAsrRackConfigUI.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAtomAsrRackConfigUI_Statics::NewProp_bUseOutputPort_SetBit(void* Obj)
	{
		((FAtomAsrRackConfigUI*)Obj)->bUseOutputPort = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtomAsrRackConfigUI_Statics::NewProp_bUseOutputPort = { "bUseOutputPort", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAtomAsrRackConfigUI), &Z_Construct_UScriptStruct_FAtomAsrRackConfigUI_Statics::NewProp_bUseOutputPort_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAsrRackConfigUI_Statics::NewProp_bUseOutputPort_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAsrRackConfigUI_Statics::NewProp_bUseOutputPort_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAsrRackConfigUI_Statics::NewProp_UserIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAsrRackConfigUI" },
		{ "ModuleRelativePath", "Public/AtomAsrRackConfigUI.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomAsrRackConfigUI_Statics::NewProp_UserIndex = { "UserIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomAsrRackConfigUI, UserIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAsrRackConfigUI_Statics::NewProp_UserIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAsrRackConfigUI_Statics::NewProp_UserIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomAsrRackConfigUI_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAsrRackConfigUI_Statics::NewProp_SoundRendererTypeUI,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAsrRackConfigUI_Statics::NewProp_ElementID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAsrRackConfigUI_Statics::NewProp_bUseOutputPort,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAsrRackConfigUI_Statics::NewProp_UserIndex,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomAsrRackConfigUI_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
		nullptr,
		&NewStructOps,
		"AtomAsrRackConfigUI",
		sizeof(FAtomAsrRackConfigUI),
		alignof(FAtomAsrRackConfigUI),
		Z_Construct_UScriptStruct_FAtomAsrRackConfigUI_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAsrRackConfigUI_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAsrRackConfigUI_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAsrRackConfigUI_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomAsrRackConfigUI()
	{
		if (!Z_Registration_Info_UScriptStruct_AtomAsrRackConfigUI.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomAsrRackConfigUI.InnerSingleton, Z_Construct_UScriptStruct_FAtomAsrRackConfigUI_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AtomAsrRackConfigUI.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAsrRackConfigUI_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAsrRackConfigUI_h_Statics::ScriptStructInfo[] = {
		{ FAtomAsrRackConfigUI::StaticStruct, Z_Construct_UScriptStruct_FAtomAsrRackConfigUI_Statics::NewStructOps, TEXT("AtomAsrRackConfigUI"), &Z_Registration_Info_UScriptStruct_AtomAsrRackConfigUI, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomAsrRackConfigUI), 3532081834U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAsrRackConfigUI_h_3203067285(TEXT("/Script/CriWareRuntime"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAsrRackConfigUI_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAsrRackConfigUI_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
