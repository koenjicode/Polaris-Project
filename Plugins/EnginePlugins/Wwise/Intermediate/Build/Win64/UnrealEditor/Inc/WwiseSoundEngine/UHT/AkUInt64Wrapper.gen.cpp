// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WwiseSoundEngine/Public/AkUInt64Wrapper.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkUInt64Wrapper() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_WwiseSoundEngine();
	WWISESOUNDENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAkUInt64Wrapper();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AkUInt64Wrapper;
class UScriptStruct* FAkUInt64Wrapper::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AkUInt64Wrapper.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AkUInt64Wrapper.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkUInt64Wrapper, (UObject*)Z_Construct_UPackage__Script_WwiseSoundEngine(), TEXT("AkUInt64Wrapper"));
	}
	return Z_Registration_Info_UScriptStruct_AkUInt64Wrapper.OuterSingleton;
}
template<> WWISESOUNDENGINE_API UScriptStruct* StaticStruct<FAkUInt64Wrapper>()
{
	return FAkUInt64Wrapper::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAkUInt64Wrapper_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UInt64Value_MetaData[];
#endif
		static const UECodeGen_Private::FFInt64PropertyParams NewProp_UInt64Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkUInt64Wrapper_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AkUInt64Wrapper.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkUInt64Wrapper_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkUInt64Wrapper>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkUInt64Wrapper_Statics::NewProp_UInt64Value_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkUInt64Wrapper" },
		{ "ModuleRelativePath", "Public/AkUInt64Wrapper.h" },
	};
#endif
	const UECodeGen_Private::FFInt64PropertyParams Z_Construct_UScriptStruct_FAkUInt64Wrapper_Statics::NewProp_UInt64Value = { "UInt64Value", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkUInt64Wrapper, UInt64Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkUInt64Wrapper_Statics::NewProp_UInt64Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkUInt64Wrapper_Statics::NewProp_UInt64Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkUInt64Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkUInt64Wrapper_Statics::NewProp_UInt64Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkUInt64Wrapper_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WwiseSoundEngine,
		nullptr,
		&NewStructOps,
		"AkUInt64Wrapper",
		sizeof(FAkUInt64Wrapper),
		alignof(FAkUInt64Wrapper),
		Z_Construct_UScriptStruct_FAkUInt64Wrapper_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkUInt64Wrapper_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkUInt64Wrapper_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkUInt64Wrapper_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkUInt64Wrapper()
	{
		if (!Z_Registration_Info_UScriptStruct_AkUInt64Wrapper.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AkUInt64Wrapper.InnerSingleton, Z_Construct_UScriptStruct_FAkUInt64Wrapper_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AkUInt64Wrapper.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_WwiseSoundEngine_Public_AkUInt64Wrapper_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_WwiseSoundEngine_Public_AkUInt64Wrapper_h_Statics::ScriptStructInfo[] = {
		{ FAkUInt64Wrapper::StaticStruct, Z_Construct_UScriptStruct_FAkUInt64Wrapper_Statics::NewStructOps, TEXT("AkUInt64Wrapper"), &Z_Registration_Info_UScriptStruct_AkUInt64Wrapper, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkUInt64Wrapper), 2913730692U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_WwiseSoundEngine_Public_AkUInt64Wrapper_h_276006539(TEXT("/Script/WwiseSoundEngine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_WwiseSoundEngine_Public_AkUInt64Wrapper_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_WwiseSoundEngine_Public_AkUInt64Wrapper_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
