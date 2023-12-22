// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkReverbDescriptor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkReverbDescriptor() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkReverbDescriptor();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AkReverbDescriptor;
class UScriptStruct* FAkReverbDescriptor::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AkReverbDescriptor.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AkReverbDescriptor.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkReverbDescriptor, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("AkReverbDescriptor"));
	}
	return Z_Registration_Info_UScriptStruct_AkReverbDescriptor.OuterSingleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkReverbDescriptor>()
{
	return FAkReverbDescriptor::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAkReverbDescriptor_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Primitive_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Primitive;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkReverbDescriptor_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AkReverbDescriptor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkReverbDescriptor_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkReverbDescriptor>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkReverbDescriptor_Statics::NewProp_Primitive_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkReverbDescriptor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AkReverbDescriptor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAkReverbDescriptor_Statics::NewProp_Primitive = { "Primitive", nullptr, (EPropertyFlags)0x004200000008200d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAkReverbDescriptor, Primitive), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkReverbDescriptor_Statics::NewProp_Primitive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkReverbDescriptor_Statics::NewProp_Primitive_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkReverbDescriptor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkReverbDescriptor_Statics::NewProp_Primitive,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkReverbDescriptor_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"AkReverbDescriptor",
		sizeof(FAkReverbDescriptor),
		alignof(FAkReverbDescriptor),
		Z_Construct_UScriptStruct_FAkReverbDescriptor_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkReverbDescriptor_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkReverbDescriptor_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkReverbDescriptor_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkReverbDescriptor()
	{
		if (!Z_Registration_Info_UScriptStruct_AkReverbDescriptor.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AkReverbDescriptor.InnerSingleton, Z_Construct_UScriptStruct_FAkReverbDescriptor_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AkReverbDescriptor.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkReverbDescriptor_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkReverbDescriptor_h_Statics::ScriptStructInfo[] = {
		{ FAkReverbDescriptor::StaticStruct, Z_Construct_UScriptStruct_FAkReverbDescriptor_Statics::NewStructOps, TEXT("AkReverbDescriptor"), &Z_Registration_Info_UScriptStruct_AkReverbDescriptor, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAkReverbDescriptor), 879305430U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkReverbDescriptor_h_692397309(TEXT("/Script/AkAudio"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkReverbDescriptor_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkReverbDescriptor_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
