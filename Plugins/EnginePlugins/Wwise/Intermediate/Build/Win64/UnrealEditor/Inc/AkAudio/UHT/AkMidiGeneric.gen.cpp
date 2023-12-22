// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkMidiGeneric.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkMidiGeneric() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkMidiEventBase();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkMidiGeneric();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References

static_assert(std::is_polymorphic<FAkMidiGeneric>() == std::is_polymorphic<FAkMidiEventBase>(), "USTRUCT FAkMidiGeneric cannot be polymorphic unless super FAkMidiEventBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AkMidiGeneric;
class UScriptStruct* FAkMidiGeneric::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AkMidiGeneric.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AkMidiGeneric.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkMidiGeneric, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkMidiGeneric"));
	}
	return Z_Registration_Info_UScriptStruct_AkMidiGeneric.OuterSingleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkMidiGeneric>()
{
	return FAkMidiGeneric::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAkMidiGeneric_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_param1_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_param1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Param2_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Param2;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkMidiGeneric_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AkMidiGeneric.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkMidiGeneric_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkMidiGeneric>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkMidiGeneric_Statics::NewProp_param1_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkMidiGeneric" },
		{ "ModuleRelativePath", "Public/AkMidiGeneric.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAkMidiGeneric_Statics::NewProp_param1 = { "param1", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkMidiGeneric, param1), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkMidiGeneric_Statics::NewProp_param1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMidiGeneric_Statics::NewProp_param1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkMidiGeneric_Statics::NewProp_Param2_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkMidiGeneric" },
		{ "ModuleRelativePath", "Public/AkMidiGeneric.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAkMidiGeneric_Statics::NewProp_Param2 = { "Param2", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkMidiGeneric, Param2), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkMidiGeneric_Statics::NewProp_Param2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMidiGeneric_Statics::NewProp_Param2_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkMidiGeneric_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkMidiGeneric_Statics::NewProp_param1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkMidiGeneric_Statics::NewProp_Param2,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkMidiGeneric_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		Z_Construct_UScriptStruct_FAkMidiEventBase,
		&NewStructOps,
		"AkMidiGeneric",
		sizeof(FAkMidiGeneric),
		alignof(FAkMidiGeneric),
		Z_Construct_UScriptStruct_FAkMidiGeneric_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMidiGeneric_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkMidiGeneric_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMidiGeneric_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkMidiGeneric()
	{
		if (!Z_Registration_Info_UScriptStruct_AkMidiGeneric.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AkMidiGeneric.InnerSingleton, Z_Construct_UScriptStruct_FAkMidiGeneric_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AkMidiGeneric.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkMidiGeneric_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkMidiGeneric_h_Statics::ScriptStructInfo[] = {
		{ FAkMidiGeneric::StaticStruct, Z_Construct_UScriptStruct_FAkMidiGeneric_Statics::NewStructOps, TEXT("AkMidiGeneric"), &Z_Registration_Info_UScriptStruct_AkMidiGeneric, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkMidiGeneric), 3525655979U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkMidiGeneric_h_420675460(TEXT("/Script/AkAudio"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkMidiGeneric_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkMidiGeneric_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
