// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WwiseSoundEngine/Public/AkUniqueID.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkUniqueID() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_WwiseSoundEngine();
	WWISESOUNDENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAkUInt32Wrapper();
	WWISESOUNDENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAkUniqueID();
// End Cross Module References

static_assert(std::is_polymorphic<FAkUniqueID>() == std::is_polymorphic<FAkUInt32Wrapper>(), "USTRUCT FAkUniqueID cannot be polymorphic unless super FAkUInt32Wrapper is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AkUniqueID;
class UScriptStruct* FAkUniqueID::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AkUniqueID.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AkUniqueID.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkUniqueID, (UObject*)Z_Construct_UPackage__Script_WwiseSoundEngine(), TEXT("AkUniqueID"));
	}
	return Z_Registration_Info_UScriptStruct_AkUniqueID.OuterSingleton;
}
template<> WWISESOUNDENGINE_API UScriptStruct* StaticStruct<FAkUniqueID>()
{
	return FAkUniqueID::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAkUniqueID_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkUniqueID_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AkUniqueID.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkUniqueID_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkUniqueID>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkUniqueID_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WwiseSoundEngine,
		Z_Construct_UScriptStruct_FAkUInt32Wrapper,
		&NewStructOps,
		"AkUniqueID",
		sizeof(FAkUniqueID),
		alignof(FAkUniqueID),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkUniqueID_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkUniqueID_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkUniqueID()
	{
		if (!Z_Registration_Info_UScriptStruct_AkUniqueID.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AkUniqueID.InnerSingleton, Z_Construct_UScriptStruct_FAkUniqueID_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AkUniqueID.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_WwiseSoundEngine_Public_AkUniqueID_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_WwiseSoundEngine_Public_AkUniqueID_h_Statics::ScriptStructInfo[] = {
		{ FAkUniqueID::StaticStruct, Z_Construct_UScriptStruct_FAkUniqueID_Statics::NewStructOps, TEXT("AkUniqueID"), &Z_Registration_Info_UScriptStruct_AkUniqueID, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkUniqueID), 4197935245U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_WwiseSoundEngine_Public_AkUniqueID_h_1730246830(TEXT("/Script/WwiseSoundEngine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_WwiseSoundEngine_Public_AkUniqueID_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_WwiseSoundEngine_Public_AkUniqueID_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
