// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/OnAkPostEventCallbackDelegate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnAkPostEventCallbackDelegate() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkCallbackInfo_NoRegister();
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkCallbackType();
	AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_OnAkPostEventCallback__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AkAudio_OnAkPostEventCallback__DelegateSignature_Statics
	{
		struct _Script_AkAudio_eventOnAkPostEventCallback_Parms
		{
			EAkCallbackType CallbackType;
			UAkCallbackInfo* CallbackInfo;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_CallbackType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CallbackType;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CallbackInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_AkAudio_OnAkPostEventCallback__DelegateSignature_Statics::NewProp_CallbackType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_AkAudio_OnAkPostEventCallback__DelegateSignature_Statics::NewProp_CallbackType = { "CallbackType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_AkAudio_eventOnAkPostEventCallback_Parms, CallbackType), Z_Construct_UEnum_AkAudio_EAkCallbackType, METADATA_PARAMS(nullptr, 0) }; // 2306497486
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AkAudio_OnAkPostEventCallback__DelegateSignature_Statics::NewProp_CallbackInfo = { "CallbackInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_AkAudio_eventOnAkPostEventCallback_Parms, CallbackInfo), Z_Construct_UClass_UAkCallbackInfo_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AkAudio_OnAkPostEventCallback__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AkAudio_OnAkPostEventCallback__DelegateSignature_Statics::NewProp_CallbackType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AkAudio_OnAkPostEventCallback__DelegateSignature_Statics::NewProp_CallbackType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AkAudio_OnAkPostEventCallback__DelegateSignature_Statics::NewProp_CallbackInfo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AkAudio_OnAkPostEventCallback__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnAkPostEventCallbackDelegate.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AkAudio_OnAkPostEventCallback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AkAudio, nullptr, "OnAkPostEventCallback__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_AkAudio_OnAkPostEventCallback__DelegateSignature_Statics::_Script_AkAudio_eventOnAkPostEventCallback_Parms), Z_Construct_UDelegateFunction_AkAudio_OnAkPostEventCallback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AkAudio_OnAkPostEventCallback__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AkAudio_OnAkPostEventCallback__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AkAudio_OnAkPostEventCallback__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AkAudio_OnAkPostEventCallback__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AkAudio_OnAkPostEventCallback__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnAkPostEventCallback_DelegateWrapper(const FScriptDelegate& OnAkPostEventCallback, EAkCallbackType CallbackType, UAkCallbackInfo* CallbackInfo)
{
	struct _Script_AkAudio_eventOnAkPostEventCallback_Parms
	{
		EAkCallbackType CallbackType;
		UAkCallbackInfo* CallbackInfo;
	};
	_Script_AkAudio_eventOnAkPostEventCallback_Parms Parms;
	Parms.CallbackType=CallbackType;
	Parms.CallbackInfo=CallbackInfo;
	OnAkPostEventCallback.ProcessDelegate<UObject>(&Parms);
}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
