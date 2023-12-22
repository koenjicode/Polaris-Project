// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/OnEventCallbackDelegate.h"
#include "AkAudio/Public/AKWaapiJsonObject.h"
#include "AkAudio/Public/AkWaapiSubscriptionId.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnEventCallbackDelegate() {}
// Cross Module References
	AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_OnEventCallback__DelegateSignature();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAKWaapiJsonObject();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkWaapiSubscriptionId();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AkAudio_OnEventCallback__DelegateSignature_Statics
	{
		struct _Script_AkAudio_eventOnEventCallback_Parms
		{
			FAkWaapiSubscriptionId SubscriptionId;
			FAKWaapiJsonObject WaapiJsonObject;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SubscriptionId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_WaapiJsonObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AkAudio_OnEventCallback__DelegateSignature_Statics::NewProp_SubscriptionId = { "SubscriptionId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_AkAudio_eventOnEventCallback_Parms, SubscriptionId), Z_Construct_UScriptStruct_FAkWaapiSubscriptionId, METADATA_PARAMS(nullptr, 0) }; // 2388991589
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AkAudio_OnEventCallback__DelegateSignature_Statics::NewProp_WaapiJsonObject = { "WaapiJsonObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_AkAudio_eventOnEventCallback_Parms, WaapiJsonObject), Z_Construct_UScriptStruct_FAKWaapiJsonObject, METADATA_PARAMS(nullptr, 0) }; // 2004490638
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AkAudio_OnEventCallback__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AkAudio_OnEventCallback__DelegateSignature_Statics::NewProp_SubscriptionId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AkAudio_OnEventCallback__DelegateSignature_Statics::NewProp_WaapiJsonObject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AkAudio_OnEventCallback__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnEventCallbackDelegate.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AkAudio_OnEventCallback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AkAudio, nullptr, "OnEventCallback__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_AkAudio_OnEventCallback__DelegateSignature_Statics::_Script_AkAudio_eventOnEventCallback_Parms), Z_Construct_UDelegateFunction_AkAudio_OnEventCallback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AkAudio_OnEventCallback__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AkAudio_OnEventCallback__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AkAudio_OnEventCallback__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AkAudio_OnEventCallback__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AkAudio_OnEventCallback__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnEventCallback_DelegateWrapper(const FScriptDelegate& OnEventCallback, FAkWaapiSubscriptionId SubscriptionId, FAKWaapiJsonObject WaapiJsonObject)
{
	struct _Script_AkAudio_eventOnEventCallback_Parms
	{
		FAkWaapiSubscriptionId SubscriptionId;
		FAKWaapiJsonObject WaapiJsonObject;
	};
	_Script_AkAudio_eventOnEventCallback_Parms Parms;
	Parms.SubscriptionId=SubscriptionId;
	Parms.WaapiJsonObject=WaapiJsonObject;
	OnEventCallback.ProcessDelegate<UObject>(&Parms);
}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
