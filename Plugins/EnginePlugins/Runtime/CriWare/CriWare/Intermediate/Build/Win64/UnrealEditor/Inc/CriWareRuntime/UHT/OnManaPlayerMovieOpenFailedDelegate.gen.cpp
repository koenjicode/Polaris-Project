// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/OnManaPlayerMovieOpenFailedDelegate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnManaPlayerMovieOpenFailedDelegate() {}
// Cross Module References
	CRIWARERUNTIME_API UFunction* Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerMovieOpenFailed__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerMovieOpenFailed__DelegateSignature_Statics
	{
		struct _Script_CriWareRuntime_eventOnManaPlayerMovieOpenFailed_Parms
		{
			FString FailedUrl;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FailedUrl_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FailedUrl;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerMovieOpenFailed__DelegateSignature_Statics::NewProp_FailedUrl_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerMovieOpenFailed__DelegateSignature_Statics::NewProp_FailedUrl = { "FailedUrl", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_CriWareRuntime_eventOnManaPlayerMovieOpenFailed_Parms, FailedUrl), METADATA_PARAMS(Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerMovieOpenFailed__DelegateSignature_Statics::NewProp_FailedUrl_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerMovieOpenFailed__DelegateSignature_Statics::NewProp_FailedUrl_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerMovieOpenFailed__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerMovieOpenFailed__DelegateSignature_Statics::NewProp_FailedUrl,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerMovieOpenFailed__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnManaPlayerMovieOpenFailedDelegate.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerMovieOpenFailed__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CriWareRuntime, nullptr, "OnManaPlayerMovieOpenFailed__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerMovieOpenFailed__DelegateSignature_Statics::_Script_CriWareRuntime_eventOnManaPlayerMovieOpenFailed_Parms), Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerMovieOpenFailed__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerMovieOpenFailed__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerMovieOpenFailed__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerMovieOpenFailed__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerMovieOpenFailed__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerMovieOpenFailed__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnManaPlayerMovieOpenFailed_DelegateWrapper(const FMulticastScriptDelegate& OnManaPlayerMovieOpenFailed, const FString& FailedUrl)
{
	struct _Script_CriWareRuntime_eventOnManaPlayerMovieOpenFailed_Parms
	{
		FString FailedUrl;
	};
	_Script_CriWareRuntime_eventOnManaPlayerMovieOpenFailed_Parms Parms;
	Parms.FailedUrl=FailedUrl;
	OnManaPlayerMovieOpenFailed.ProcessMulticastDelegate<UObject>(&Parms);
}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
