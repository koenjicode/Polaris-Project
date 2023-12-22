// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkCommunicationSettingsWithCommSelection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkCommunicationSettingsWithCommSelection() {}
// Cross Module References
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkCommSystem();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkCommunicationSettings();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkCommunicationSettingsWithCommSelection();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References

static_assert(std::is_polymorphic<FAkCommunicationSettingsWithCommSelection>() == std::is_polymorphic<FAkCommunicationSettings>(), "USTRUCT FAkCommunicationSettingsWithCommSelection cannot be polymorphic unless super FAkCommunicationSettings is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AkCommunicationSettingsWithCommSelection;
class UScriptStruct* FAkCommunicationSettingsWithCommSelection::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AkCommunicationSettingsWithCommSelection.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AkCommunicationSettingsWithCommSelection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkCommunicationSettingsWithCommSelection, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkCommunicationSettingsWithCommSelection"));
	}
	return Z_Registration_Info_UScriptStruct_AkCommunicationSettingsWithCommSelection.OuterSingleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkCommunicationSettingsWithCommSelection>()
{
	return FAkCommunicationSettingsWithCommSelection::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAkCommunicationSettingsWithCommSelection_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FIntPropertyParams NewProp_CommunicationSystem_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CommunicationSystem_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CommunicationSystem;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkCommunicationSettingsWithCommSelection_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AkCommunicationSettingsWithCommSelection.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkCommunicationSettingsWithCommSelection_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkCommunicationSettingsWithCommSelection>();
	}
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAkCommunicationSettingsWithCommSelection_Statics::NewProp_CommunicationSystem_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkCommunicationSettingsWithCommSelection_Statics::NewProp_CommunicationSystem_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkCommunicationSettingsWithCommSelection" },
		{ "ModuleRelativePath", "Public/AkCommunicationSettingsWithCommSelection.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAkCommunicationSettingsWithCommSelection_Statics::NewProp_CommunicationSystem = { "CommunicationSystem", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkCommunicationSettingsWithCommSelection, CommunicationSystem), Z_Construct_UEnum_AkAudio_EAkCommSystem, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkCommunicationSettingsWithCommSelection_Statics::NewProp_CommunicationSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkCommunicationSettingsWithCommSelection_Statics::NewProp_CommunicationSystem_MetaData)) }; // 2505373730
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkCommunicationSettingsWithCommSelection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkCommunicationSettingsWithCommSelection_Statics::NewProp_CommunicationSystem_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkCommunicationSettingsWithCommSelection_Statics::NewProp_CommunicationSystem,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkCommunicationSettingsWithCommSelection_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		Z_Construct_UScriptStruct_FAkCommunicationSettings,
		&NewStructOps,
		"AkCommunicationSettingsWithCommSelection",
		sizeof(FAkCommunicationSettingsWithCommSelection),
		alignof(FAkCommunicationSettingsWithCommSelection),
		Z_Construct_UScriptStruct_FAkCommunicationSettingsWithCommSelection_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkCommunicationSettingsWithCommSelection_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkCommunicationSettingsWithCommSelection_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkCommunicationSettingsWithCommSelection_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkCommunicationSettingsWithCommSelection()
	{
		if (!Z_Registration_Info_UScriptStruct_AkCommunicationSettingsWithCommSelection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AkCommunicationSettingsWithCommSelection.InnerSingleton, Z_Construct_UScriptStruct_FAkCommunicationSettingsWithCommSelection_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AkCommunicationSettingsWithCommSelection.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkCommunicationSettingsWithCommSelection_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkCommunicationSettingsWithCommSelection_h_Statics::ScriptStructInfo[] = {
		{ FAkCommunicationSettingsWithCommSelection::StaticStruct, Z_Construct_UScriptStruct_FAkCommunicationSettingsWithCommSelection_Statics::NewStructOps, TEXT("AkCommunicationSettingsWithCommSelection"), &Z_Registration_Info_UScriptStruct_AkCommunicationSettingsWithCommSelection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkCommunicationSettingsWithCommSelection), 3880652421U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkCommunicationSettingsWithCommSelection_h_1301646092(TEXT("/Script/AkAudio"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkCommunicationSettingsWithCommSelection_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkCommunicationSettingsWithCommSelection_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
