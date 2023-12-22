// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/OnItemPropertyDragDetectedDelegate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnItemPropertyDragDetectedDelegate() {}
// Cross Module References
	AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_OnItemPropertyDragDetected__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AkAudio_OnItemPropertyDragDetected__DelegateSignature_Statics
	{
		struct _Script_AkAudio_eventOnItemPropertyDragDetected_Parms
		{
			FString PropertyDragged;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyDragged_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyDragged;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AkAudio_OnItemPropertyDragDetected__DelegateSignature_Statics::NewProp_PropertyDragged_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_AkAudio_OnItemPropertyDragDetected__DelegateSignature_Statics::NewProp_PropertyDragged = { "PropertyDragged", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_AkAudio_eventOnItemPropertyDragDetected_Parms, PropertyDragged), METADATA_PARAMS(Z_Construct_UDelegateFunction_AkAudio_OnItemPropertyDragDetected__DelegateSignature_Statics::NewProp_PropertyDragged_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AkAudio_OnItemPropertyDragDetected__DelegateSignature_Statics::NewProp_PropertyDragged_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AkAudio_OnItemPropertyDragDetected__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AkAudio_OnItemPropertyDragDetected__DelegateSignature_Statics::NewProp_PropertyDragged,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AkAudio_OnItemPropertyDragDetected__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnItemPropertyDragDetectedDelegate.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AkAudio_OnItemPropertyDragDetected__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AkAudio, nullptr, "OnItemPropertyDragDetected__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_AkAudio_OnItemPropertyDragDetected__DelegateSignature_Statics::_Script_AkAudio_eventOnItemPropertyDragDetected_Parms), Z_Construct_UDelegateFunction_AkAudio_OnItemPropertyDragDetected__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AkAudio_OnItemPropertyDragDetected__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AkAudio_OnItemPropertyDragDetected__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AkAudio_OnItemPropertyDragDetected__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AkAudio_OnItemPropertyDragDetected__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AkAudio_OnItemPropertyDragDetected__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnItemPropertyDragDetected_DelegateWrapper(const FMulticastScriptDelegate& OnItemPropertyDragDetected, const FString& PropertyDragged)
{
	struct _Script_AkAudio_eventOnItemPropertyDragDetected_Parms
	{
		FString PropertyDragged;
	};
	_Script_AkAudio_eventOnItemPropertyDragDetected_Parms Parms;
	Parms.PropertyDragged=PropertyDragged;
	OnItemPropertyDragDetected.ProcessMulticastDelegate<UObject>(&Parms);
}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
