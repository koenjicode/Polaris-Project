// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WwiseSoundEngine/Public/AkUInt32Wrapper.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkUInt32Wrapper() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_WwiseSoundEngine();
	WWISESOUNDENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAkUInt32Wrapper();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AkUInt32Wrapper;
class UScriptStruct* FAkUInt32Wrapper::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AkUInt32Wrapper.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AkUInt32Wrapper.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkUInt32Wrapper, (UObject*)Z_Construct_UPackage__Script_WwiseSoundEngine(), TEXT("AkUInt32Wrapper"));
	}
	return Z_Registration_Info_UScriptStruct_AkUInt32Wrapper.OuterSingleton;
}
template<> WWISESOUNDENGINE_API UScriptStruct* StaticStruct<FAkUInt32Wrapper>()
{
	return FAkUInt32Wrapper::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAkUInt32Wrapper_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UInt32Value_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_UInt32Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkUInt32Wrapper_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AkUInt32Wrapper.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkUInt32Wrapper_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkUInt32Wrapper>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkUInt32Wrapper_Statics::NewProp_UInt32Value_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkUInt32Wrapper" },
		{ "ModuleRelativePath", "Public/AkUInt32Wrapper.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkUInt32Wrapper_Statics::NewProp_UInt32Value = { "UInt32Value", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkUInt32Wrapper, UInt32Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkUInt32Wrapper_Statics::NewProp_UInt32Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkUInt32Wrapper_Statics::NewProp_UInt32Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkUInt32Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkUInt32Wrapper_Statics::NewProp_UInt32Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkUInt32Wrapper_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WwiseSoundEngine,
		nullptr,
		&NewStructOps,
		"AkUInt32Wrapper",
		sizeof(FAkUInt32Wrapper),
		alignof(FAkUInt32Wrapper),
		Z_Construct_UScriptStruct_FAkUInt32Wrapper_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkUInt32Wrapper_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkUInt32Wrapper_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkUInt32Wrapper_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkUInt32Wrapper()
	{
		if (!Z_Registration_Info_UScriptStruct_AkUInt32Wrapper.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AkUInt32Wrapper.InnerSingleton, Z_Construct_UScriptStruct_FAkUInt32Wrapper_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AkUInt32Wrapper.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_WwiseSoundEngine_Public_AkUInt32Wrapper_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_WwiseSoundEngine_Public_AkUInt32Wrapper_h_Statics::ScriptStructInfo[] = {
		{ FAkUInt32Wrapper::StaticStruct, Z_Construct_UScriptStruct_FAkUInt32Wrapper_Statics::NewStructOps, TEXT("AkUInt32Wrapper"), &Z_Registration_Info_UScriptStruct_AkUInt32Wrapper, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkUInt32Wrapper), 2610336363U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_WwiseSoundEngine_Public_AkUInt32Wrapper_h_3021675786(TEXT("/Script/WwiseSoundEngine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_WwiseSoundEngine_Public_AkUInt32Wrapper_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_WwiseSoundEngine_Public_AkUInt32Wrapper_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
