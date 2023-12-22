// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkChannelMask.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkChannelMask() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkChannelMask();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AkChannelMask;
class UScriptStruct* FAkChannelMask::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AkChannelMask.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AkChannelMask.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkChannelMask, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkChannelMask"));
	}
	return Z_Registration_Info_UScriptStruct_AkChannelMask.OuterSingleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkChannelMask>()
{
	return FAkChannelMask::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAkChannelMask_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChannelMask_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ChannelMask;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkChannelMask_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AkChannelMask.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkChannelMask_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkChannelMask>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkChannelMask_Statics::NewProp_ChannelMask_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkChannelMask" },
		{ "ModuleRelativePath", "Public/AkChannelMask.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAkChannelMask_Statics::NewProp_ChannelMask = { "ChannelMask", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkChannelMask, ChannelMask), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkChannelMask_Statics::NewProp_ChannelMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkChannelMask_Statics::NewProp_ChannelMask_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkChannelMask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkChannelMask_Statics::NewProp_ChannelMask,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkChannelMask_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"AkChannelMask",
		sizeof(FAkChannelMask),
		alignof(FAkChannelMask),
		Z_Construct_UScriptStruct_FAkChannelMask_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkChannelMask_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkChannelMask_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkChannelMask_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkChannelMask()
	{
		if (!Z_Registration_Info_UScriptStruct_AkChannelMask.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AkChannelMask.InnerSingleton, Z_Construct_UScriptStruct_FAkChannelMask_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AkChannelMask.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkChannelMask_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkChannelMask_h_Statics::ScriptStructInfo[] = {
		{ FAkChannelMask::StaticStruct, Z_Construct_UScriptStruct_FAkChannelMask_Statics::NewStructOps, TEXT("AkChannelMask"), &Z_Registration_Info_UScriptStruct_AkChannelMask, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkChannelMask), 1174891400U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkChannelMask_h_2067069292(TEXT("/Script/AkAudio"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkChannelMask_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkChannelMask_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
