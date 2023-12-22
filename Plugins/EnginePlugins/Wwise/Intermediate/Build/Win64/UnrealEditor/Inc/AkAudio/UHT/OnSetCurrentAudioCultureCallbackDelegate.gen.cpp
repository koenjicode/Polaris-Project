// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/OnSetCurrentAudioCultureCallbackDelegate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnSetCurrentAudioCultureCallbackDelegate() {}
// Cross Module References
	AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_OnSetCurrentAudioCultureCallback__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AkAudio_OnSetCurrentAudioCultureCallback__DelegateSignature_Statics
	{
		struct _Script_AkAudio_eventOnSetCurrentAudioCultureCallback_Parms
		{
			bool Succeeded;
		};
		static void NewProp_Succeeded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Succeeded;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_AkAudio_OnSetCurrentAudioCultureCallback__DelegateSignature_Statics::NewProp_Succeeded_SetBit(void* Obj)
	{
		((_Script_AkAudio_eventOnSetCurrentAudioCultureCallback_Parms*)Obj)->Succeeded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_AkAudio_OnSetCurrentAudioCultureCallback__DelegateSignature_Statics::NewProp_Succeeded = { "Succeeded", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_AkAudio_eventOnSetCurrentAudioCultureCallback_Parms), &Z_Construct_UDelegateFunction_AkAudio_OnSetCurrentAudioCultureCallback__DelegateSignature_Statics::NewProp_Succeeded_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AkAudio_OnSetCurrentAudioCultureCallback__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AkAudio_OnSetCurrentAudioCultureCallback__DelegateSignature_Statics::NewProp_Succeeded,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AkAudio_OnSetCurrentAudioCultureCallback__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnSetCurrentAudioCultureCallbackDelegate.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AkAudio_OnSetCurrentAudioCultureCallback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AkAudio, nullptr, "OnSetCurrentAudioCultureCallback__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_AkAudio_OnSetCurrentAudioCultureCallback__DelegateSignature_Statics::_Script_AkAudio_eventOnSetCurrentAudioCultureCallback_Parms), Z_Construct_UDelegateFunction_AkAudio_OnSetCurrentAudioCultureCallback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AkAudio_OnSetCurrentAudioCultureCallback__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AkAudio_OnSetCurrentAudioCultureCallback__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AkAudio_OnSetCurrentAudioCultureCallback__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AkAudio_OnSetCurrentAudioCultureCallback__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AkAudio_OnSetCurrentAudioCultureCallback__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnSetCurrentAudioCultureCallback_DelegateWrapper(const FScriptDelegate& OnSetCurrentAudioCultureCallback, bool Succeeded)
{
	struct _Script_AkAudio_eventOnSetCurrentAudioCultureCallback_Parms
	{
		bool Succeeded;
	};
	_Script_AkAudio_eventOnSetCurrentAudioCultureCallback_Parms Parms;
	Parms.Succeeded=Succeeded ? true : false;
	OnSetCurrentAudioCultureCallback.ProcessDelegate<UObject>(&Parms);
}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
