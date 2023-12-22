// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkMidiCc.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkMidiCc() {}
// Cross Module References
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkMidiCcValues();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkMidiCc();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkMidiEventBase();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References

static_assert(std::is_polymorphic<FAkMidiCc>() == std::is_polymorphic<FAkMidiEventBase>(), "USTRUCT FAkMidiCc cannot be polymorphic unless super FAkMidiEventBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AkMidiCc;
class UScriptStruct* FAkMidiCc::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AkMidiCc.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AkMidiCc.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkMidiCc, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkMidiCc"));
	}
	return Z_Registration_Info_UScriptStruct_AkMidiCc.OuterSingleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkMidiCc>()
{
	return FAkMidiCc::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAkMidiCc_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Cc_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Cc_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Cc;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkMidiCc_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AkMidiCc.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkMidiCc_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkMidiCc>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAkMidiCc_Statics::NewProp_Cc_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkMidiCc_Statics::NewProp_Cc_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkMidiCc" },
		{ "ModuleRelativePath", "Public/AkMidiCc.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAkMidiCc_Statics::NewProp_Cc = { "Cc", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkMidiCc, Cc), Z_Construct_UEnum_AkAudio_EAkMidiCcValues, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkMidiCc_Statics::NewProp_Cc_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMidiCc_Statics::NewProp_Cc_MetaData)) }; // 2323382756
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkMidiCc_Statics::NewProp_Value_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkMidiCc" },
		{ "ModuleRelativePath", "Public/AkMidiCc.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAkMidiCc_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkMidiCc, Value), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkMidiCc_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMidiCc_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkMidiCc_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkMidiCc_Statics::NewProp_Cc_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkMidiCc_Statics::NewProp_Cc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkMidiCc_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkMidiCc_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		Z_Construct_UScriptStruct_FAkMidiEventBase,
		&NewStructOps,
		"AkMidiCc",
		sizeof(FAkMidiCc),
		alignof(FAkMidiCc),
		Z_Construct_UScriptStruct_FAkMidiCc_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMidiCc_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkMidiCc_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMidiCc_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkMidiCc()
	{
		if (!Z_Registration_Info_UScriptStruct_AkMidiCc.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AkMidiCc.InnerSingleton, Z_Construct_UScriptStruct_FAkMidiCc_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AkMidiCc.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkMidiCc_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkMidiCc_h_Statics::ScriptStructInfo[] = {
		{ FAkMidiCc::StaticStruct, Z_Construct_UScriptStruct_FAkMidiCc_Statics::NewStructOps, TEXT("AkMidiCc"), &Z_Registration_Info_UScriptStruct_AkMidiCc, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkMidiCc), 4106275771U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkMidiCc_h_4139190090(TEXT("/Script/AkAudio"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkMidiCc_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkMidiCc_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
