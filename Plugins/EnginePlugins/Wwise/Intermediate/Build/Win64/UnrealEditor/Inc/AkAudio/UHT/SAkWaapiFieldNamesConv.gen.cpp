// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/SAkWaapiFieldNamesConv.h"
#include "AkAudio/Public/AkWaapiFieldNames.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSAkWaapiFieldNamesConv() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_USAkWaapiFieldNamesConv();
	AKAUDIO_API UClass* Z_Construct_UClass_USAkWaapiFieldNamesConv_NoRegister();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkWaapiFieldNames();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	DEFINE_FUNCTION(USAkWaapiFieldNamesConv::execConv_FAkWaapiFieldNamesToString)
	{
		P_GET_STRUCT_REF(FAkWaapiFieldNames,Z_Param_Out_INAkWaapiFieldNames);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=USAkWaapiFieldNamesConv::Conv_FAkWaapiFieldNamesToString(Z_Param_Out_INAkWaapiFieldNames);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USAkWaapiFieldNamesConv::execConv_FAkWaapiFieldNamesToText)
	{
		P_GET_STRUCT_REF(FAkWaapiFieldNames,Z_Param_Out_INAkWaapiFieldNames);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=USAkWaapiFieldNamesConv::Conv_FAkWaapiFieldNamesToText(Z_Param_Out_INAkWaapiFieldNames);
		P_NATIVE_END;
	}
	void USAkWaapiFieldNamesConv::StaticRegisterNativesUSAkWaapiFieldNamesConv()
	{
		UClass* Class = USAkWaapiFieldNamesConv::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Conv_FAkWaapiFieldNamesToString", &USAkWaapiFieldNamesConv::execConv_FAkWaapiFieldNamesToString },
			{ "Conv_FAkWaapiFieldNamesToText", &USAkWaapiFieldNamesConv::execConv_FAkWaapiFieldNamesToText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToString_Statics
	{
		struct SAkWaapiFieldNamesConv_eventConv_FAkWaapiFieldNamesToString_Parms
		{
			FAkWaapiFieldNames INAkWaapiFieldNames;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_INAkWaapiFieldNames_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_INAkWaapiFieldNames;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToString_Statics::NewProp_INAkWaapiFieldNames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToString_Statics::NewProp_INAkWaapiFieldNames = { "INAkWaapiFieldNames", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SAkWaapiFieldNamesConv_eventConv_FAkWaapiFieldNamesToString_Parms, INAkWaapiFieldNames), Z_Construct_UScriptStruct_FAkWaapiFieldNames, METADATA_PARAMS(Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToString_Statics::NewProp_INAkWaapiFieldNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToString_Statics::NewProp_INAkWaapiFieldNames_MetaData)) }; // 16996084
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SAkWaapiFieldNamesConv_eventConv_FAkWaapiFieldNamesToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToString_Statics::NewProp_INAkWaapiFieldNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAkWaapiFieldNamesConv.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USAkWaapiFieldNamesConv, nullptr, "Conv_FAkWaapiFieldNamesToString", nullptr, nullptr, sizeof(Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToString_Statics::SAkWaapiFieldNamesConv_eventConv_FAkWaapiFieldNamesToString_Parms), Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToText_Statics
	{
		struct SAkWaapiFieldNamesConv_eventConv_FAkWaapiFieldNamesToText_Parms
		{
			FAkWaapiFieldNames INAkWaapiFieldNames;
			FText ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_INAkWaapiFieldNames_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_INAkWaapiFieldNames;
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToText_Statics::NewProp_INAkWaapiFieldNames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToText_Statics::NewProp_INAkWaapiFieldNames = { "INAkWaapiFieldNames", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SAkWaapiFieldNamesConv_eventConv_FAkWaapiFieldNamesToText_Parms, INAkWaapiFieldNames), Z_Construct_UScriptStruct_FAkWaapiFieldNames, METADATA_PARAMS(Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToText_Statics::NewProp_INAkWaapiFieldNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToText_Statics::NewProp_INAkWaapiFieldNames_MetaData)) }; // 16996084
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SAkWaapiFieldNamesConv_eventConv_FAkWaapiFieldNamesToText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToText_Statics::NewProp_INAkWaapiFieldNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SAkWaapiFieldNamesConv.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USAkWaapiFieldNamesConv, nullptr, "Conv_FAkWaapiFieldNamesToText", nullptr, nullptr, sizeof(Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToText_Statics::SAkWaapiFieldNamesConv_eventConv_FAkWaapiFieldNamesToText_Parms), Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USAkWaapiFieldNamesConv);
	UClass* Z_Construct_UClass_USAkWaapiFieldNamesConv_NoRegister()
	{
		return USAkWaapiFieldNamesConv::StaticClass();
	}
	struct Z_Construct_UClass_USAkWaapiFieldNamesConv_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USAkWaapiFieldNamesConv_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USAkWaapiFieldNamesConv_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToString, "Conv_FAkWaapiFieldNamesToString" }, // 1325790893
		{ &Z_Construct_UFunction_USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToText, "Conv_FAkWaapiFieldNamesToText" }, // 871150216
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USAkWaapiFieldNamesConv_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SAkWaapiFieldNamesConv.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SAkWaapiFieldNamesConv.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USAkWaapiFieldNamesConv_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USAkWaapiFieldNamesConv>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USAkWaapiFieldNamesConv_Statics::ClassParams = {
		&USAkWaapiFieldNamesConv::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USAkWaapiFieldNamesConv_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USAkWaapiFieldNamesConv_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USAkWaapiFieldNamesConv()
	{
		if (!Z_Registration_Info_UClass_USAkWaapiFieldNamesConv.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USAkWaapiFieldNamesConv.OuterSingleton, Z_Construct_UClass_USAkWaapiFieldNamesConv_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USAkWaapiFieldNamesConv.OuterSingleton;
	}
	template<> AKAUDIO_API UClass* StaticClass<USAkWaapiFieldNamesConv>()
	{
		return USAkWaapiFieldNamesConv::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USAkWaapiFieldNamesConv);
	USAkWaapiFieldNamesConv::~USAkWaapiFieldNamesConv() {}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_SAkWaapiFieldNamesConv_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_SAkWaapiFieldNamesConv_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USAkWaapiFieldNamesConv, USAkWaapiFieldNamesConv::StaticClass, TEXT("USAkWaapiFieldNamesConv"), &Z_Registration_Info_UClass_USAkWaapiFieldNamesConv, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USAkWaapiFieldNamesConv), 3432648403U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_SAkWaapiFieldNamesConv_h_426398550(TEXT("/Script/AkAudio"),
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_SAkWaapiFieldNamesConv_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_SAkWaapiFieldNamesConv_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
