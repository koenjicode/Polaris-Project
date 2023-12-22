// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkMidiNoteOnOff.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkMidiNoteOnOff() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkMidiEventBase();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkMidiNoteOnOff();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References

static_assert(std::is_polymorphic<FAkMidiNoteOnOff>() == std::is_polymorphic<FAkMidiEventBase>(), "USTRUCT FAkMidiNoteOnOff cannot be polymorphic unless super FAkMidiEventBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AkMidiNoteOnOff;
class UScriptStruct* FAkMidiNoteOnOff::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AkMidiNoteOnOff.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AkMidiNoteOnOff.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkMidiNoteOnOff, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkMidiNoteOnOff"));
	}
	return Z_Registration_Info_UScriptStruct_AkMidiNoteOnOff.OuterSingleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkMidiNoteOnOff>()
{
	return FAkMidiNoteOnOff::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAkMidiNoteOnOff_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Velocity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkMidiNoteOnOff_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AkMidiNoteOnOff.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkMidiNoteOnOff_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkMidiNoteOnOff>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkMidiNoteOnOff_Statics::NewProp_Note_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkMidiNoteOnOff" },
		{ "ModuleRelativePath", "Public/AkMidiNoteOnOff.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAkMidiNoteOnOff_Statics::NewProp_Note = { "Note", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkMidiNoteOnOff, Note), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkMidiNoteOnOff_Statics::NewProp_Note_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMidiNoteOnOff_Statics::NewProp_Note_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkMidiNoteOnOff_Statics::NewProp_Velocity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkMidiNoteOnOff" },
		{ "ModuleRelativePath", "Public/AkMidiNoteOnOff.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAkMidiNoteOnOff_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkMidiNoteOnOff, Velocity), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkMidiNoteOnOff_Statics::NewProp_Velocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMidiNoteOnOff_Statics::NewProp_Velocity_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkMidiNoteOnOff_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkMidiNoteOnOff_Statics::NewProp_Note,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkMidiNoteOnOff_Statics::NewProp_Velocity,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkMidiNoteOnOff_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		Z_Construct_UScriptStruct_FAkMidiEventBase,
		&NewStructOps,
		"AkMidiNoteOnOff",
		sizeof(FAkMidiNoteOnOff),
		alignof(FAkMidiNoteOnOff),
		Z_Construct_UScriptStruct_FAkMidiNoteOnOff_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMidiNoteOnOff_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkMidiNoteOnOff_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkMidiNoteOnOff_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkMidiNoteOnOff()
	{
		if (!Z_Registration_Info_UScriptStruct_AkMidiNoteOnOff.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AkMidiNoteOnOff.InnerSingleton, Z_Construct_UScriptStruct_FAkMidiNoteOnOff_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AkMidiNoteOnOff.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkMidiNoteOnOff_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkMidiNoteOnOff_h_Statics::ScriptStructInfo[] = {
		{ FAkMidiNoteOnOff::StaticStruct, Z_Construct_UScriptStruct_FAkMidiNoteOnOff_Statics::NewStructOps, TEXT("AkMidiNoteOnOff"), &Z_Registration_Info_UScriptStruct_AkMidiNoteOnOff, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkMidiNoteOnOff), 2013898154U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkMidiNoteOnOff_h_1711516148(TEXT("/Script/AkAudio"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkMidiNoteOnOff_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkMidiNoteOnOff_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
