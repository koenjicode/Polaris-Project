// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WwiseSoundEngine/Public/AkOutputDeviceID.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkOutputDeviceID() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_WwiseSoundEngine();
	WWISESOUNDENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAkOutputDeviceID();
	WWISESOUNDENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAkUInt64Wrapper();
// End Cross Module References

static_assert(std::is_polymorphic<FAkOutputDeviceID>() == std::is_polymorphic<FAkUInt64Wrapper>(), "USTRUCT FAkOutputDeviceID cannot be polymorphic unless super FAkUInt64Wrapper is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AkOutputDeviceID;
class UScriptStruct* FAkOutputDeviceID::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AkOutputDeviceID.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AkOutputDeviceID.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkOutputDeviceID, (UObject*)Z_Construct_UPackage__Script_WwiseSoundEngine(), TEXT("AkOutputDeviceID"));
	}
	return Z_Registration_Info_UScriptStruct_AkOutputDeviceID.OuterSingleton;
}
template<> WWISESOUNDENGINE_API UScriptStruct* StaticStruct<FAkOutputDeviceID>()
{
	return FAkOutputDeviceID::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAkOutputDeviceID_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkOutputDeviceID_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AkOutputDeviceID.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkOutputDeviceID_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkOutputDeviceID>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkOutputDeviceID_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WwiseSoundEngine,
		Z_Construct_UScriptStruct_FAkUInt64Wrapper,
		&NewStructOps,
		"AkOutputDeviceID",
		sizeof(FAkOutputDeviceID),
		alignof(FAkOutputDeviceID),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkOutputDeviceID_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkOutputDeviceID_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkOutputDeviceID()
	{
		if (!Z_Registration_Info_UScriptStruct_AkOutputDeviceID.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AkOutputDeviceID.InnerSingleton, Z_Construct_UScriptStruct_FAkOutputDeviceID_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AkOutputDeviceID.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_WwiseSoundEngine_Public_AkOutputDeviceID_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_WwiseSoundEngine_Public_AkOutputDeviceID_h_Statics::ScriptStructInfo[] = {
		{ FAkOutputDeviceID::StaticStruct, Z_Construct_UScriptStruct_FAkOutputDeviceID_Statics::NewStructOps, TEXT("AkOutputDeviceID"), &Z_Registration_Info_UScriptStruct_AkOutputDeviceID, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkOutputDeviceID), 2881448749U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_WwiseSoundEngine_Public_AkOutputDeviceID_h_363752321(TEXT("/Script/WwiseSoundEngine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_WwiseSoundEngine_Public_AkOutputDeviceID_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_WwiseSoundEngine_Public_AkOutputDeviceID_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
