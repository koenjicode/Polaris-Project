// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkCommunicationSettingsWithSystemInitialization.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkCommunicationSettingsWithSystemInitialization() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkCommunicationSettings();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References

static_assert(std::is_polymorphic<FAkCommunicationSettingsWithSystemInitialization>() == std::is_polymorphic<FAkCommunicationSettings>(), "USTRUCT FAkCommunicationSettingsWithSystemInitialization cannot be polymorphic unless super FAkCommunicationSettings is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AkCommunicationSettingsWithSystemInitialization;
class UScriptStruct* FAkCommunicationSettingsWithSystemInitialization::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AkCommunicationSettingsWithSystemInitialization.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AkCommunicationSettingsWithSystemInitialization.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkCommunicationSettingsWithSystemInitialization"));
	}
	return Z_Registration_Info_UScriptStruct_AkCommunicationSettingsWithSystemInitialization.OuterSingleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkCommunicationSettingsWithSystemInitialization>()
{
	return FAkCommunicationSettingsWithSystemInitialization::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitializeSystemComms_MetaData[];
#endif
		static void NewProp_InitializeSystemComms_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_InitializeSystemComms;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AkCommunicationSettingsWithSystemInitialization.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkCommunicationSettingsWithSystemInitialization>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization_Statics::NewProp_InitializeSystemComms_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkCommunicationSettingsWithSystemInitialization" },
		{ "ModuleRelativePath", "Public/AkCommunicationSettingsWithSystemInitialization.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization_Statics::NewProp_InitializeSystemComms_SetBit(void* Obj)
	{
		((FAkCommunicationSettingsWithSystemInitialization*)Obj)->InitializeSystemComms = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization_Statics::NewProp_InitializeSystemComms = { "InitializeSystemComms", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAkCommunicationSettingsWithSystemInitialization), &Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization_Statics::NewProp_InitializeSystemComms_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization_Statics::NewProp_InitializeSystemComms_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization_Statics::NewProp_InitializeSystemComms_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization_Statics::NewProp_InitializeSystemComms,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		Z_Construct_UScriptStruct_FAkCommunicationSettings,
		&NewStructOps,
		"AkCommunicationSettingsWithSystemInitialization",
		sizeof(FAkCommunicationSettingsWithSystemInitialization),
		alignof(FAkCommunicationSettingsWithSystemInitialization),
		Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization()
	{
		if (!Z_Registration_Info_UScriptStruct_AkCommunicationSettingsWithSystemInitialization.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AkCommunicationSettingsWithSystemInitialization.InnerSingleton, Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AkCommunicationSettingsWithSystemInitialization.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkCommunicationSettingsWithSystemInitialization_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkCommunicationSettingsWithSystemInitialization_h_Statics::ScriptStructInfo[] = {
		{ FAkCommunicationSettingsWithSystemInitialization::StaticStruct, Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization_Statics::NewStructOps, TEXT("AkCommunicationSettingsWithSystemInitialization"), &Z_Registration_Info_UScriptStruct_AkCommunicationSettingsWithSystemInitialization, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkCommunicationSettingsWithSystemInitialization), 1879279114U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkCommunicationSettingsWithSystemInitialization_h_3640794058(TEXT("/Script/AkAudio"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkCommunicationSettingsWithSystemInitialization_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkCommunicationSettingsWithSystemInitialization_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
