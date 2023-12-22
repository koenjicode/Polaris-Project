// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkMidiNoteAftertouch.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkMidiNoteAftertouch() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkMidiEventBase();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkMidiNoteAftertouch();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References

static_assert(std::is_polymorphic<FAkMidiNoteAftertouch>() == std::is_polymorphic<FAkMidiEventBase>(), "USTRUCT FAkMidiNoteAftertouch cannot be polymorphic unless super FAkMidiEventBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AkMidiNoteAftertouch;
class UScriptStruct* FAkMidiNoteAftertouch::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AkMidiNoteAftertouch.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AkMidiNoteAftertouch.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkMidiNoteAftertouch, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkMidiNoteAftertouch"));
	}
	return Z_Registration_Info_UScriptStruct_AkMidiNoteAftertouch.OuterSingleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkMidiNoteAftertouch>()
{
	return FAkMidiNoteAftertouch::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAkMidiNoteAftertouch_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Note_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Note;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkMidiNoteAftertouch_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AkMidiNoteAftertouch.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkMidiNoteAftertouch_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkMidiNoteAftertouch>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkMidiNoteAftertouch_Statics::NewProp_Note_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkMidiNoteAftertouch" },
		{ "ModuleRelativePath", "Public/AkMidiNoteAftertouch.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAkMidiNoteAftertouch_Statics::NewProp_Note = { "Note", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkMidiNoteAftertouch, Note), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkMidiNoteAftertouch_Statics::NewProp_Note_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMidiNoteAftertouch_Statics::NewProp_Note_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkMidiNoteAftertouch_Statics::NewProp_Value_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkMidiNoteAftertouch" },
		{ "ModuleRelativePath", "Public/AkMidiNoteAftertouch.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAkMidiNoteAftertouch_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkMidiNoteAftertouch, Value), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkMidiNoteAftertouch_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMidiNoteAftertouch_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkMidiNoteAftertouch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkMidiNoteAftertouch_Statics::NewProp_Note,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkMidiNoteAftertouch_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkMidiNoteAftertouch_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		Z_Construct_UScriptStruct_FAkMidiEventBase,
		&NewStructOps,
		"AkMidiNoteAftertouch",
		sizeof(FAkMidiNoteAftertouch),
		alignof(FAkMidiNoteAftertouch),
		Z_Construct_UScriptStruct_FAkMidiNoteAftertouch_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMidiNoteAftertouch_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkMidiNoteAftertouch_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMidiNoteAftertouch_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkMidiNoteAftertouch()
	{
		if (!Z_Registration_Info_UScriptStruct_AkMidiNoteAftertouch.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AkMidiNoteAftertouch.InnerSingleton, Z_Construct_UScriptStruct_FAkMidiNoteAftertouch_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AkMidiNoteAftertouch.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkMidiNoteAftertouch_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkMidiNoteAftertouch_h_Statics::ScriptStructInfo[] = {
		{ FAkMidiNoteAftertouch::StaticStruct, Z_Construct_UScriptStruct_FAkMidiNoteAftertouch_Statics::NewStructOps, TEXT("AkMidiNoteAftertouch"), &Z_Registration_Info_UScriptStruct_AkMidiNoteAftertouch, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkMidiNoteAftertouch), 694811589U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkMidiNoteAftertouch_h_325624576(TEXT("/Script/AkAudio"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkMidiNoteAftertouch_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkMidiNoteAftertouch_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
