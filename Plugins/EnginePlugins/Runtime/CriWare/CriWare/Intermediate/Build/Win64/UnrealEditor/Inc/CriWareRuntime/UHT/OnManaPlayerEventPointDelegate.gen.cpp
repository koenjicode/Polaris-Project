// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/OnManaPlayerEventPointDelegate.h"
#include "CriWareRuntime/Public/ManaEventPointInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnManaPlayerEventPointDelegate() {}
// Cross Module References
	CRIWARERUNTIME_API UFunction* Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerEventPoint__DelegateSignature();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FManaEventPointInfo();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerEventPoint__DelegateSignature_Statics
	{
		struct _Script_CriWareRuntime_eventOnManaPlayerEventPoint_Parms
		{
			FManaEventPointInfo EventPointInfo;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_EventPointInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerEventPoint__DelegateSignature_Statics::NewProp_EventPointInfo = { "EventPointInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_CriWareRuntime_eventOnManaPlayerEventPoint_Parms, EventPointInfo), Z_Construct_UScriptStruct_FManaEventPointInfo, METADATA_PARAMS(nullptr, 0) }; // 3291773953
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerEventPoint__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerEventPoint__DelegateSignature_Statics::NewProp_EventPointInfo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerEventPoint__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnManaPlayerEventPointDelegate.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerEventPoint__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CriWareRuntime, nullptr, "OnManaPlayerEventPoint__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerEventPoint__DelegateSignature_Statics::_Script_CriWareRuntime_eventOnManaPlayerEventPoint_Parms), Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerEventPoint__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerEventPoint__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerEventPoint__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerEventPoint__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerEventPoint__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CriWareRuntime_OnManaPlayerEventPoint__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnManaPlayerEventPoint_DelegateWrapper(const FMulticastScriptDelegate& OnManaPlayerEventPoint, FManaEventPointInfo EventPointInfo)
{
	struct _Script_CriWareRuntime_eventOnManaPlayerEventPoint_Parms
	{
		FManaEventPointInfo EventPointInfo;
	};
	_Script_CriWareRuntime_eventOnManaPlayerEventPoint_Parms Parms;
	Parms.EventPointInfo=EventPointInfo;
	OnManaPlayerEventPoint.ProcessMulticastDelegate<UObject>(&Parms);
}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
