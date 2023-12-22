// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkXSXInitializationSettings.h"
#include "AkAudio/Public/AkCommonInitializationSettings.h"
#include "AkAudio/Public/AkCommunicationSettingsWithSystemInitialization.h"
#include "AkAudio/Public/AkXSXAdvancedInitializationSettings.h"
#include "AkAudio/Public/AkXSXApuHeapInitializationSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkXSXInitializationSettings() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkPlatformInitialisationSettingsBase_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkXSXInitializationSettings();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkXSXInitializationSettings_NoRegister();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkCommonInitializationSettings();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkXSXAdvancedInitializationSettings();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkXSXApuHeapInitializationSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	DEFINE_FUNCTION(UAkXSXInitializationSettings::execMigrateMultiCoreRendering)
	{
		P_GET_UBOOL(Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MigrateMultiCoreRendering(Z_Param_NewValue);
		P_NATIVE_END;
	}
	void UAkXSXInitializationSettings::StaticRegisterNativesUAkXSXInitializationSettings()
	{
		UClass* Class = UAkXSXInitializationSettings::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MigrateMultiCoreRendering", &UAkXSXInitializationSettings::execMigrateMultiCoreRendering },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAkXSXInitializationSettings_MigrateMultiCoreRendering_Statics
	{
		struct AkXSXInitializationSettings_eventMigrateMultiCoreRendering_Parms
		{
			bool NewValue;
		};
		static void NewProp_NewValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAkXSXInitializationSettings_MigrateMultiCoreRendering_Statics::NewProp_NewValue_SetBit(void* Obj)
	{
		((AkXSXInitializationSettings_eventMigrateMultiCoreRendering_Parms*)Obj)->NewValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkXSXInitializationSettings_MigrateMultiCoreRendering_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AkXSXInitializationSettings_eventMigrateMultiCoreRendering_Parms), &Z_Construct_UFunction_UAkXSXInitializationSettings_MigrateMultiCoreRendering_Statics::NewProp_NewValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkXSXInitializationSettings_MigrateMultiCoreRendering_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkXSXInitializationSettings_MigrateMultiCoreRendering_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkXSXInitializationSettings_MigrateMultiCoreRendering_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkXSXInitializationSettings.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkXSXInitializationSettings_MigrateMultiCoreRendering_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkXSXInitializationSettings, nullptr, "MigrateMultiCoreRendering", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkXSXInitializationSettings_MigrateMultiCoreRendering_Statics::AkXSXInitializationSettings_eventMigrateMultiCoreRendering_Parms), Z_Construct_UFunction_UAkXSXInitializationSettings_MigrateMultiCoreRendering_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkXSXInitializationSettings_MigrateMultiCoreRendering_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkXSXInitializationSettings_MigrateMultiCoreRendering_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkXSXInitializationSettings_MigrateMultiCoreRendering_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkXSXInitializationSettings_MigrateMultiCoreRendering()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkXSXInitializationSettings_MigrateMultiCoreRendering_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkXSXInitializationSettings);
	UClass* Z_Construct_UClass_UAkXSXInitializationSettings_NoRegister()
	{
		return UAkXSXInitializationSettings::StaticClass();
	}
	struct Z_Construct_UClass_UAkXSXInitializationSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CommonSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CommonSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ApuHeapSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ApuHeapSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CommunicationSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CommunicationSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdvancedSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AdvancedSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkXSXInitializationSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAkXSXInitializationSettings_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAkXSXInitializationSettings_MigrateMultiCoreRendering, "MigrateMultiCoreRendering" }, // 1923021036
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkXSXInitializationSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AkXSXInitializationSettings.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AkXSXInitializationSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkXSXInitializationSettings_Statics::NewProp_CommonSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkXSXInitializationSettings" },
		{ "ModuleRelativePath", "Public/AkXSXInitializationSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkXSXInitializationSettings_Statics::NewProp_CommonSettings = { "CommonSettings", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkXSXInitializationSettings, CommonSettings), Z_Construct_UScriptStruct_FAkCommonInitializationSettings, METADATA_PARAMS(Z_Construct_UClass_UAkXSXInitializationSettings_Statics::NewProp_CommonSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkXSXInitializationSettings_Statics::NewProp_CommonSettings_MetaData)) }; // 3746663954
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkXSXInitializationSettings_Statics::NewProp_ApuHeapSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkXSXInitializationSettings" },
		{ "ModuleRelativePath", "Public/AkXSXInitializationSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkXSXInitializationSettings_Statics::NewProp_ApuHeapSettings = { "ApuHeapSettings", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkXSXInitializationSettings, ApuHeapSettings), Z_Construct_UScriptStruct_FAkXSXApuHeapInitializationSettings, METADATA_PARAMS(Z_Construct_UClass_UAkXSXInitializationSettings_Statics::NewProp_ApuHeapSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkXSXInitializationSettings_Statics::NewProp_ApuHeapSettings_MetaData)) }; // 666300053
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkXSXInitializationSettings_Statics::NewProp_CommunicationSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkXSXInitializationSettings" },
		{ "ModuleRelativePath", "Public/AkXSXInitializationSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkXSXInitializationSettings_Statics::NewProp_CommunicationSettings = { "CommunicationSettings", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkXSXInitializationSettings, CommunicationSettings), Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization, METADATA_PARAMS(Z_Construct_UClass_UAkXSXInitializationSettings_Statics::NewProp_CommunicationSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkXSXInitializationSettings_Statics::NewProp_CommunicationSettings_MetaData)) }; // 1879279114
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkXSXInitializationSettings_Statics::NewProp_AdvancedSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkXSXInitializationSettings" },
		{ "ModuleRelativePath", "Public/AkXSXInitializationSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkXSXInitializationSettings_Statics::NewProp_AdvancedSettings = { "AdvancedSettings", nullptr, (EPropertyFlags)0x0010040000004005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkXSXInitializationSettings, AdvancedSettings), Z_Construct_UScriptStruct_FAkXSXAdvancedInitializationSettings, METADATA_PARAMS(Z_Construct_UClass_UAkXSXInitializationSettings_Statics::NewProp_AdvancedSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkXSXInitializationSettings_Statics::NewProp_AdvancedSettings_MetaData)) }; // 2234612344
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkXSXInitializationSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkXSXInitializationSettings_Statics::NewProp_CommonSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkXSXInitializationSettings_Statics::NewProp_ApuHeapSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkXSXInitializationSettings_Statics::NewProp_CommunicationSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkXSXInitializationSettings_Statics::NewProp_AdvancedSettings,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UAkXSXInitializationSettings_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAkPlatformInitialisationSettingsBase_NoRegister, (int32)VTABLE_OFFSET(UAkXSXInitializationSettings, IAkPlatformInitialisationSettingsBase), false },  // 442443538
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkXSXInitializationSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkXSXInitializationSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkXSXInitializationSettings_Statics::ClassParams = {
		&UAkXSXInitializationSettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAkXSXInitializationSettings_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAkXSXInitializationSettings_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UAkXSXInitializationSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkXSXInitializationSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkXSXInitializationSettings()
	{
		if (!Z_Registration_Info_UClass_UAkXSXInitializationSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkXSXInitializationSettings.OuterSingleton, Z_Construct_UClass_UAkXSXInitializationSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAkXSXInitializationSettings.OuterSingleton;
	}
	template<> AKAUDIO_API UClass* StaticClass<UAkXSXInitializationSettings>()
	{
		return UAkXSXInitializationSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkXSXInitializationSettings);
	UAkXSXInitializationSettings::~UAkXSXInitializationSettings() {}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkXSXInitializationSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkXSXInitializationSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAkXSXInitializationSettings, UAkXSXInitializationSettings::StaticClass, TEXT("UAkXSXInitializationSettings"), &Z_Registration_Info_UClass_UAkXSXInitializationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkXSXInitializationSettings), 773813335U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkXSXInitializationSettings_h_3713407608(TEXT("/Script/AkAudio"),
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkXSXInitializationSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkXSXInitializationSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
