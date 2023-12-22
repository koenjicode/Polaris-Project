// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkMidiPitchBend.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkMidiPitchBend() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkMidiEventBase();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkMidiPitchBend();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References

static_assert(std::is_polymorphic<FAkMidiPitchBend>() == std::is_polymorphic<FAkMidiEventBase>(), "USTRUCT FAkMidiPitchBend cannot be polymorphic unless super FAkMidiEventBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AkMidiPitchBend;
class UScriptStruct* FAkMidiPitchBend::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AkMidiPitchBend.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AkMidiPitchBend.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkMidiPitchBend, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkMidiPitchBend"));
	}
	return Z_Registration_Info_UScriptStruct_AkMidiPitchBend.OuterSingleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkMidiPitchBend>()
{
	return FAkMidiPitchBend::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAkMidiPitchBend_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValueLsb_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ValueLsb;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValueMsb_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ValueMsb;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FullValue_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FullValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkMidiPitchBend_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AkMidiPitchBend.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkMidiPitchBend_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkMidiPitchBend>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkMidiPitchBend_Statics::NewProp_ValueLsb_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkMidiPitchBend" },
		{ "ModuleRelativePath", "Public/AkMidiPitchBend.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAkMidiPitchBend_Statics::NewProp_ValueLsb = { "ValueLsb", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkMidiPitchBend, ValueLsb), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkMidiPitchBend_Statics::NewProp_ValueLsb_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMidiPitchBend_Statics::NewProp_ValueLsb_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkMidiPitchBend_Statics::NewProp_ValueMsb_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkMidiPitchBend" },
		{ "ModuleRelativePath", "Public/AkMidiPitchBend.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAkMidiPitchBend_Statics::NewProp_ValueMsb = { "ValueMsb", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkMidiPitchBend, ValueMsb), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkMidiPitchBend_Statics::NewProp_ValueMsb_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMidiPitchBend_Statics::NewProp_ValueMsb_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkMidiPitchBend_Statics::NewProp_FullValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkMidiPitchBend" },
		{ "ModuleRelativePath", "Public/AkMidiPitchBend.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAkMidiPitchBend_Statics::NewProp_FullValue = { "FullValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkMidiPitchBend, FullValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkMidiPitchBend_Statics::NewProp_FullValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMidiPitchBend_Statics::NewProp_FullValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkMidiPitchBend_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkMidiPitchBend_Statics::NewProp_ValueLsb,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkMidiPitchBend_Statics::NewProp_ValueMsb,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkMidiPitchBend_Statics::NewProp_FullValue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkMidiPitchBend_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		Z_Construct_UScriptStruct_FAkMidiEventBase,
		&NewStructOps,
		"AkMidiPitchBend",
		sizeof(FAkMidiPitchBend),
		alignof(FAkMidiPitchBend),
		Z_Construct_UScriptStruct_FAkMidiPitchBend_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMidiPitchBend_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkMidiPitchBend_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMidiPitchBend_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkMidiPitchBend()
	{
		if (!Z_Registration_Info_UScriptStruct_AkMidiPitchBend.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AkMidiPitchBend.InnerSingleton, Z_Construct_UScriptStruct_FAkMidiPitchBend_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AkMidiPitchBend.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkMidiPitchBend_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkMidiPitchBend_h_Statics::ScriptStructInfo[] = {
		{ FAkMidiPitchBend::StaticStruct, Z_Construct_UScriptStruct_FAkMidiPitchBend_Statics::NewStructOps, TEXT("AkMidiPitchBend"), &Z_Registration_Info_UScriptStruct_AkMidiPitchBend, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkMidiPitchBend), 3527768836U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkMidiPitchBend_h_1265612363(TEXT("/Script/AkAudio"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkMidiPitchBend_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkMidiPitchBend_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
