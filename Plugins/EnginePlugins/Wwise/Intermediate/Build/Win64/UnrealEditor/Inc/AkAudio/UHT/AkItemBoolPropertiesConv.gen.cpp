// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkItemBoolPropertiesConv.h"
#include "AkAudio/Public/AkBoolPropertyToControl.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkItemBoolPropertiesConv() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkItemBoolPropertiesConv();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkItemBoolPropertiesConv_NoRegister();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkBoolPropertyToControl();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	DEFINE_FUNCTION(UAkItemBoolPropertiesConv::execConv_FAkBoolPropertyToControlToString)
	{
		P_GET_STRUCT_REF(FAkBoolPropertyToControl,Z_Param_Out_INAkBoolPropertyToControl);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UAkItemBoolPropertiesConv::Conv_FAkBoolPropertyToControlToString(Z_Param_Out_INAkBoolPropertyToControl);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkItemBoolPropertiesConv::execConv_FAkBoolPropertyToControlToText)
	{
		P_GET_STRUCT_REF(FAkBoolPropertyToControl,Z_Param_Out_INAkBoolPropertyToControl);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=UAkItemBoolPropertiesConv::Conv_FAkBoolPropertyToControlToText(Z_Param_Out_INAkBoolPropertyToControl);
		P_NATIVE_END;
	}
	void UAkItemBoolPropertiesConv::StaticRegisterNativesUAkItemBoolPropertiesConv()
	{
		UClass* Class = UAkItemBoolPropertiesConv::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Conv_FAkBoolPropertyToControlToString", &UAkItemBoolPropertiesConv::execConv_FAkBoolPropertyToControlToString },
			{ "Conv_FAkBoolPropertyToControlToText", &UAkItemBoolPropertiesConv::execConv_FAkBoolPropertyToControlToText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToString_Statics
	{
		struct AkItemBoolPropertiesConv_eventConv_FAkBoolPropertyToControlToString_Parms
		{
			FAkBoolPropertyToControl INAkBoolPropertyToControl;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_INAkBoolPropertyToControl_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_INAkBoolPropertyToControl;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToString_Statics::NewProp_INAkBoolPropertyToControl_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToString_Statics::NewProp_INAkBoolPropertyToControl = { "INAkBoolPropertyToControl", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkItemBoolPropertiesConv_eventConv_FAkBoolPropertyToControlToString_Parms, INAkBoolPropertyToControl), Z_Construct_UScriptStruct_FAkBoolPropertyToControl, METADATA_PARAMS(Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToString_Statics::NewProp_INAkBoolPropertyToControl_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToString_Statics::NewProp_INAkBoolPropertyToControl_MetaData)) }; // 3455811129
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkItemBoolPropertiesConv_eventConv_FAkBoolPropertyToControlToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToString_Statics::NewProp_INAkBoolPropertyToControl,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkItemBoolPropertiesConv.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkItemBoolPropertiesConv, nullptr, "Conv_FAkBoolPropertyToControlToString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToString_Statics::AkItemBoolPropertiesConv_eventConv_FAkBoolPropertyToControlToString_Parms), Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToText_Statics
	{
		struct AkItemBoolPropertiesConv_eventConv_FAkBoolPropertyToControlToText_Parms
		{
			FAkBoolPropertyToControl INAkBoolPropertyToControl;
			FText ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_INAkBoolPropertyToControl_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_INAkBoolPropertyToControl;
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToText_Statics::NewProp_INAkBoolPropertyToControl_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToText_Statics::NewProp_INAkBoolPropertyToControl = { "INAkBoolPropertyToControl", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkItemBoolPropertiesConv_eventConv_FAkBoolPropertyToControlToText_Parms, INAkBoolPropertyToControl), Z_Construct_UScriptStruct_FAkBoolPropertyToControl, METADATA_PARAMS(Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToText_Statics::NewProp_INAkBoolPropertyToControl_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToText_Statics::NewProp_INAkBoolPropertyToControl_MetaData)) }; // 3455811129
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkItemBoolPropertiesConv_eventConv_FAkBoolPropertyToControlToText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToText_Statics::NewProp_INAkBoolPropertyToControl,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkItemBoolPropertiesConv.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkItemBoolPropertiesConv, nullptr, "Conv_FAkBoolPropertyToControlToText", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToText_Statics::AkItemBoolPropertiesConv_eventConv_FAkBoolPropertyToControlToText_Parms), Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkItemBoolPropertiesConv);
	UClass* Z_Construct_UClass_UAkItemBoolPropertiesConv_NoRegister()
	{
		return UAkItemBoolPropertiesConv::StaticClass();
	}
	struct Z_Construct_UClass_UAkItemBoolPropertiesConv_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkItemBoolPropertiesConv_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAkItemBoolPropertiesConv_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToString, "Conv_FAkBoolPropertyToControlToString" }, // 3078117860
		{ &Z_Construct_UFunction_UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToText, "Conv_FAkBoolPropertyToControlToText" }, // 323421339
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkItemBoolPropertiesConv_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AkItemBoolPropertiesConv.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AkItemBoolPropertiesConv.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkItemBoolPropertiesConv_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkItemBoolPropertiesConv>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkItemBoolPropertiesConv_Statics::ClassParams = {
		&UAkItemBoolPropertiesConv::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAkItemBoolPropertiesConv_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkItemBoolPropertiesConv_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkItemBoolPropertiesConv()
	{
		if (!Z_Registration_Info_UClass_UAkItemBoolPropertiesConv.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkItemBoolPropertiesConv.OuterSingleton, Z_Construct_UClass_UAkItemBoolPropertiesConv_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAkItemBoolPropertiesConv.OuterSingleton;
	}
	template<> AKAUDIO_API UClass* StaticClass<UAkItemBoolPropertiesConv>()
	{
		return UAkItemBoolPropertiesConv::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkItemBoolPropertiesConv);
	UAkItemBoolPropertiesConv::~UAkItemBoolPropertiesConv() {}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkItemBoolPropertiesConv_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkItemBoolPropertiesConv_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAkItemBoolPropertiesConv, UAkItemBoolPropertiesConv::StaticClass, TEXT("UAkItemBoolPropertiesConv"), &Z_Registration_Info_UClass_UAkItemBoolPropertiesConv, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkItemBoolPropertiesConv), 2173945664U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkItemBoolPropertiesConv_h_378937172(TEXT("/Script/AkAudio"),
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkItemBoolPropertiesConv_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkItemBoolPropertiesConv_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
