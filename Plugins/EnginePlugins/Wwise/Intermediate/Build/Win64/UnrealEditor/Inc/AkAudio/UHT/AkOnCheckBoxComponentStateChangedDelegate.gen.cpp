// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkOnCheckBoxComponentStateChangedDelegate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkOnCheckBoxComponentStateChangedDelegate() {}
// Cross Module References
	AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_AkOnCheckBoxComponentStateChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AkAudio_AkOnCheckBoxComponentStateChanged__DelegateSignature_Statics
	{
		struct _Script_AkAudio_eventAkOnCheckBoxComponentStateChanged_Parms
		{
			bool bIsChecked;
		};
		static void NewProp_bIsChecked_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsChecked;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_AkAudio_AkOnCheckBoxComponentStateChanged__DelegateSignature_Statics::NewProp_bIsChecked_SetBit(void* Obj)
	{
		((_Script_AkAudio_eventAkOnCheckBoxComponentStateChanged_Parms*)Obj)->bIsChecked = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_AkAudio_AkOnCheckBoxComponentStateChanged__DelegateSignature_Statics::NewProp_bIsChecked = { "bIsChecked", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_AkAudio_eventAkOnCheckBoxComponentStateChanged_Parms), &Z_Construct_UDelegateFunction_AkAudio_AkOnCheckBoxComponentStateChanged__DelegateSignature_Statics::NewProp_bIsChecked_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AkAudio_AkOnCheckBoxComponentStateChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AkAudio_AkOnCheckBoxComponentStateChanged__DelegateSignature_Statics::NewProp_bIsChecked,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AkAudio_AkOnCheckBoxComponentStateChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkOnCheckBoxComponentStateChangedDelegate.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AkAudio_AkOnCheckBoxComponentStateChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AkAudio, nullptr, "AkOnCheckBoxComponentStateChanged__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_AkAudio_AkOnCheckBoxComponentStateChanged__DelegateSignature_Statics::_Script_AkAudio_eventAkOnCheckBoxComponentStateChanged_Parms), Z_Construct_UDelegateFunction_AkAudio_AkOnCheckBoxComponentStateChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AkAudio_AkOnCheckBoxComponentStateChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AkAudio_AkOnCheckBoxComponentStateChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AkAudio_AkOnCheckBoxComponentStateChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AkAudio_AkOnCheckBoxComponentStateChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AkAudio_AkOnCheckBoxComponentStateChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FAkOnCheckBoxComponentStateChanged_DelegateWrapper(const FMulticastScriptDelegate& AkOnCheckBoxComponentStateChanged, bool bIsChecked)
{
	struct _Script_AkAudio_eventAkOnCheckBoxComponentStateChanged_Parms
	{
		bool bIsChecked;
	};
	_Script_AkAudio_eventAkOnCheckBoxComponentStateChanged_Parms Parms;
	Parms.bIsChecked=bIsChecked ? true : false;
	AkOnCheckBoxComponentStateChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
