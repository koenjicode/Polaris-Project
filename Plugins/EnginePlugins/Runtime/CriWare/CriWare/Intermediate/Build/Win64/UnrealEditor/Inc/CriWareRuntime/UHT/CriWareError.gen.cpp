// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/CriWareError.h"
#include "CriWareRuntime/Public/CriWareErrorInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCriWareError() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UCriWareError();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UCriWareError_NoRegister();
	CRIWARERUNTIME_API UFunction* Z_Construct_UDelegateFunction_UCriWareError_OnCriWareError__DelegateSignature();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FCriWareErrorInfo();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UCriWareError_OnCriWareError__DelegateSignature_Statics
	{
		struct CriWareError_eventOnCriWareError_Parms
		{
			FCriWareErrorInfo ErrorInfo;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ErrorInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ErrorInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UCriWareError_OnCriWareError__DelegateSignature_Statics::NewProp_ErrorInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UCriWareError_OnCriWareError__DelegateSignature_Statics::NewProp_ErrorInfo = { "ErrorInfo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CriWareError_eventOnCriWareError_Parms, ErrorInfo), Z_Construct_UScriptStruct_FCriWareErrorInfo, METADATA_PARAMS(Z_Construct_UDelegateFunction_UCriWareError_OnCriWareError__DelegateSignature_Statics::NewProp_ErrorInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UCriWareError_OnCriWareError__DelegateSignature_Statics::NewProp_ErrorInfo_MetaData)) }; // 147633212
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UCriWareError_OnCriWareError__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UCriWareError_OnCriWareError__DelegateSignature_Statics::NewProp_ErrorInfo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UCriWareError_OnCriWareError__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CriWareError.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UCriWareError_OnCriWareError__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCriWareError, nullptr, "OnCriWareError__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UCriWareError_OnCriWareError__DelegateSignature_Statics::CriWareError_eventOnCriWareError_Parms), Z_Construct_UDelegateFunction_UCriWareError_OnCriWareError__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UCriWareError_OnCriWareError__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UCriWareError_OnCriWareError__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UCriWareError_OnCriWareError__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UCriWareError_OnCriWareError__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UCriWareError_OnCriWareError__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UCriWareError::FOnCriWareError_DelegateWrapper(const FMulticastScriptDelegate& OnCriWareError, FCriWareErrorInfo const& ErrorInfo)
{
	struct CriWareError_eventOnCriWareError_Parms
	{
		FCriWareErrorInfo ErrorInfo;
	};
	CriWareError_eventOnCriWareError_Parms Parms;
	Parms.ErrorInfo=ErrorInfo;
	OnCriWareError.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UCriWareError::execGetCriWareError)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCriWareError**)Z_Param__Result=UCriWareError::GetCriWareError();
		P_NATIVE_END;
	}
	void UCriWareError::StaticRegisterNativesUCriWareError()
	{
		UClass* Class = UCriWareError::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCriWareError", &UCriWareError::execGetCriWareError },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCriWareError_GetCriWareError_Statics
	{
		struct CriWareError_eventGetCriWareError_Parms
		{
			UCriWareError* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCriWareError_GetCriWareError_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CriWareError_eventGetCriWareError_Parms, ReturnValue), Z_Construct_UClass_UCriWareError_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCriWareError_GetCriWareError_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCriWareError_GetCriWareError_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCriWareError_GetCriWareError_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CriWareError.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCriWareError_GetCriWareError_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCriWareError, nullptr, "GetCriWareError", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCriWareError_GetCriWareError_Statics::CriWareError_eventGetCriWareError_Parms), Z_Construct_UFunction_UCriWareError_GetCriWareError_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCriWareError_GetCriWareError_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCriWareError_GetCriWareError_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCriWareError_GetCriWareError_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCriWareError_GetCriWareError()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCriWareError_GetCriWareError_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCriWareError);
	UClass* Z_Construct_UClass_UCriWareError_NoRegister()
	{
		return UCriWareError::StaticClass();
	}
	struct Z_Construct_UClass_UCriWareError_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCriWareError_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCriWareError;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCriWareError_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCriWareError_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCriWareError_GetCriWareError, "GetCriWareError" }, // 4164679616
		{ &Z_Construct_UDelegateFunction_UCriWareError_OnCriWareError__DelegateSignature, "OnCriWareError__DelegateSignature" }, // 1926464354
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWareError_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CriWareError.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CriWareError.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWareError_Statics::NewProp_OnCriWareError_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriWareError" },
		{ "ModuleRelativePath", "Public/CriWareError.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCriWareError_Statics::NewProp_OnCriWareError = { "OnCriWareError", nullptr, (EPropertyFlags)0x0010000010080005, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCriWareError, OnCriWareError), Z_Construct_UDelegateFunction_UCriWareError_OnCriWareError__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCriWareError_Statics::NewProp_OnCriWareError_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWareError_Statics::NewProp_OnCriWareError_MetaData)) }; // 1926464354
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCriWareError_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriWareError_Statics::NewProp_OnCriWareError,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCriWareError_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCriWareError>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCriWareError_Statics::ClassParams = {
		&UCriWareError::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCriWareError_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCriWareError_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCriWareError_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWareError_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCriWareError()
	{
		if (!Z_Registration_Info_UClass_UCriWareError.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCriWareError.OuterSingleton, Z_Construct_UClass_UCriWareError_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCriWareError.OuterSingleton;
	}
	template<> CRIWARERUNTIME_API UClass* StaticClass<UCriWareError>()
	{
		return UCriWareError::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCriWareError);
	UCriWareError::~UCriWareError() {}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriWareError_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriWareError_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCriWareError, UCriWareError::StaticClass, TEXT("UCriWareError"), &Z_Registration_Info_UClass_UCriWareError, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCriWareError), 469281073U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriWareError_h_2757732488(TEXT("/Script/CriWareRuntime"),
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriWareError_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriWareError_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
