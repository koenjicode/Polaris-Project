// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/SoundAtomConfig.h"
#include "CriWareRuntime/Public/AtomCategoryInfoParam.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundAtomConfig() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_USoundAtomConfig();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_USoundAtomConfig_NoRegister();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomCategoryInfoParam();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	DEFINE_FUNCTION(USoundAtomConfig::execGetCategoryInfoArray)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FAtomCategoryInfoParam>*)Z_Param__Result=USoundAtomConfig::GetCategoryInfoArray();
		P_NATIVE_END;
	}
	void USoundAtomConfig::StaticRegisterNativesUSoundAtomConfig()
	{
		UClass* Class = USoundAtomConfig::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCategoryInfoArray", &USoundAtomConfig::execGetCategoryInfoArray },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USoundAtomConfig_GetCategoryInfoArray_Statics
	{
		struct SoundAtomConfig_eventGetCategoryInfoArray_Parms
		{
			TArray<FAtomCategoryInfoParam> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USoundAtomConfig_GetCategoryInfoArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAtomCategoryInfoParam, METADATA_PARAMS(nullptr, 0) }; // 820994149
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USoundAtomConfig_GetCategoryInfoArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SoundAtomConfig_eventGetCategoryInfoArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 820994149
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundAtomConfig_GetCategoryInfoArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomConfig_GetCategoryInfoArray_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomConfig_GetCategoryInfoArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundAtomConfig_GetCategoryInfoArray_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SoundAtomConfig.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundAtomConfig_GetCategoryInfoArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomConfig, nullptr, "GetCategoryInfoArray", nullptr, nullptr, sizeof(Z_Construct_UFunction_USoundAtomConfig_GetCategoryInfoArray_Statics::SoundAtomConfig_eventGetCategoryInfoArray_Parms), Z_Construct_UFunction_USoundAtomConfig_GetCategoryInfoArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomConfig_GetCategoryInfoArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundAtomConfig_GetCategoryInfoArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomConfig_GetCategoryInfoArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundAtomConfig_GetCategoryInfoArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundAtomConfig_GetCategoryInfoArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundAtomConfig);
	UClass* Z_Construct_UClass_USoundAtomConfig_NoRegister()
	{
		return USoundAtomConfig::StaticClass();
	}
	struct Z_Construct_UClass_USoundAtomConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AcfFilePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AcfFilePath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundAtomConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USoundAtomConfig_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USoundAtomConfig_GetCategoryInfoArray, "GetCategoryInfoArray" }, // 2811919359
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomConfig_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SoundAtomConfig.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SoundAtomConfig.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomConfig_Statics::NewProp_AcfFilePath_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SoundAtomConfig" },
		{ "ModuleRelativePath", "Public/SoundAtomConfig.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USoundAtomConfig_Statics::NewProp_AcfFilePath = { "AcfFilePath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundAtomConfig, AcfFilePath), METADATA_PARAMS(Z_Construct_UClass_USoundAtomConfig_Statics::NewProp_AcfFilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomConfig_Statics::NewProp_AcfFilePath_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundAtomConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomConfig_Statics::NewProp_AcfFilePath,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundAtomConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundAtomConfig>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundAtomConfig_Statics::ClassParams = {
		&USoundAtomConfig::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USoundAtomConfig_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomConfig_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USoundAtomConfig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundAtomConfig()
	{
		if (!Z_Registration_Info_UClass_USoundAtomConfig.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundAtomConfig.OuterSingleton, Z_Construct_UClass_USoundAtomConfig_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USoundAtomConfig.OuterSingleton;
	}
	template<> CRIWARERUNTIME_API UClass* StaticClass<USoundAtomConfig>()
	{
		return USoundAtomConfig::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundAtomConfig);
	USoundAtomConfig::~USoundAtomConfig() {}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_SoundAtomConfig_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_SoundAtomConfig_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USoundAtomConfig, USoundAtomConfig::StaticClass, TEXT("USoundAtomConfig"), &Z_Registration_Info_UClass_USoundAtomConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundAtomConfig), 3170873786U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_SoundAtomConfig_h_212954421(TEXT("/Script/CriWareRuntime"),
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_SoundAtomConfig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_SoundAtomConfig_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
