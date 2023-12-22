// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkMidiChannelAftertouch.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkMidiChannelAftertouch() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkMidiChannelAftertouch();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkMidiEventBase();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References

static_assert(std::is_polymorphic<FAkMidiChannelAftertouch>() == std::is_polymorphic<FAkMidiEventBase>(), "USTRUCT FAkMidiChannelAftertouch cannot be polymorphic unless super FAkMidiEventBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AkMidiChannelAftertouch;
class UScriptStruct* FAkMidiChannelAftertouch::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AkMidiChannelAftertouch.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AkMidiChannelAftertouch.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkMidiChannelAftertouch, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkMidiChannelAftertouch"));
	}
	return Z_Registration_Info_UScriptStruct_AkMidiChannelAftertouch.OuterSingleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkMidiChannelAftertouch>()
{
	return FAkMidiChannelAftertouch::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAkMidiChannelAftertouch_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkMidiChannelAftertouch_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AkMidiChannelAftertouch.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkMidiChannelAftertouch_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkMidiChannelAftertouch>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkMidiChannelAftertouch_Statics::NewProp_Value_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkMidiChannelAftertouch" },
		{ "ModuleRelativePath", "Public/AkMidiChannelAftertouch.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAkMidiChannelAftertouch_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkMidiChannelAftertouch, Value), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkMidiChannelAftertouch_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMidiChannelAftertouch_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkMidiChannelAftertouch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkMidiChannelAftertouch_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkMidiChannelAftertouch_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		Z_Construct_UScriptStruct_FAkMidiEventBase,
		&NewStructOps,
		"AkMidiChannelAftertouch",
		sizeof(FAkMidiChannelAftertouch),
		alignof(FAkMidiChannelAftertouch),
		Z_Construct_UScriptStruct_FAkMidiChannelAftertouch_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMidiChannelAftertouch_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkMidiChannelAftertouch_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMidiChannelAftertouch_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkMidiChannelAftertouch()
	{
		if (!Z_Registration_Info_UScriptStruct_AkMidiChannelAftertouch.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AkMidiChannelAftertouch.InnerSingleton, Z_Construct_UScriptStruct_FAkMidiChannelAftertouch_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AkMidiChannelAftertouch.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkMidiChannelAftertouch_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkMidiChannelAftertouch_h_Statics::ScriptStructInfo[] = {
		{ FAkMidiChannelAftertouch::StaticStruct, Z_Construct_UScriptStruct_FAkMidiChannelAftertouch_Statics::NewStructOps, TEXT("AkMidiChannelAftertouch"), &Z_Registration_Info_UScriptStruct_AkMidiChannelAftertouch, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkMidiChannelAftertouch), 2324997025U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkMidiChannelAftertouch_h_733913213(TEXT("/Script/AkAudio"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkMidiChannelAftertouch_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkMidiChannelAftertouch_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
