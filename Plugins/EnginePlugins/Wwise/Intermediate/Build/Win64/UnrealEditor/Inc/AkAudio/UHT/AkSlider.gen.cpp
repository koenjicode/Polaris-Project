// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkSlider.h"
#include "AkAudio/Public/AkPropertyToControl.h"
#include "AkAudio/Public/AkWwiseItemToControl.h"
#include "Styling/SlateTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkSlider() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkSlider();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkSlider_NoRegister();
	AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_AkOnFloatValueChangedEvent__DelegateSignature();
	AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_OnItemDropDetected__DelegateSignature();
	AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_OnPropertyDropDetected__DelegateSignature();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkPropertyToControl();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkWwiseItemToControl();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EOrientation();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSliderStyle();
	UMG_API UClass* Z_Construct_UClass_UWidget();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UWidget_GetFloat__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	DEFINE_FUNCTION(UAkSlider::execGetAkSliderItemId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGuid*)Z_Param__Result=P_THIS->GetAkSliderItemId();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkSlider::execGetAkSliderItemProperty)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetAkSliderItemProperty();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkSlider::execGetValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetValue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkSlider::execSetAkSliderItemId)
	{
		P_GET_STRUCT_REF(FGuid,Z_Param_Out_ItemId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAkSliderItemId(Z_Param_Out_ItemId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkSlider::execSetAkSliderItemProperty)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ItemProperty);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAkSliderItemProperty(Z_Param_ItemProperty);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkSlider::execSetIndentHandle)
	{
		P_GET_UBOOL(Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIndentHandle(Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkSlider::execSetLocked)
	{
		P_GET_UBOOL(Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLocked(Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkSlider::execSetSliderBarColor)
	{
		P_GET_STRUCT(FLinearColor,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSliderBarColor(Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkSlider::execSetSliderHandleColor)
	{
		P_GET_STRUCT(FLinearColor,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSliderHandleColor(Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkSlider::execSetStepSize)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStepSize(Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkSlider::execSetValue)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetValue(Z_Param_InValue);
		P_NATIVE_END;
	}
	void UAkSlider::StaticRegisterNativesUAkSlider()
	{
		UClass* Class = UAkSlider::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAkSliderItemId", &UAkSlider::execGetAkSliderItemId },
			{ "GetAkSliderItemProperty", &UAkSlider::execGetAkSliderItemProperty },
			{ "GetValue", &UAkSlider::execGetValue },
			{ "SetAkSliderItemId", &UAkSlider::execSetAkSliderItemId },
			{ "SetAkSliderItemProperty", &UAkSlider::execSetAkSliderItemProperty },
			{ "SetIndentHandle", &UAkSlider::execSetIndentHandle },
			{ "SetLocked", &UAkSlider::execSetLocked },
			{ "SetSliderBarColor", &UAkSlider::execSetSliderBarColor },
			{ "SetSliderHandleColor", &UAkSlider::execSetSliderHandleColor },
			{ "SetStepSize", &UAkSlider::execSetStepSize },
			{ "SetValue", &UAkSlider::execSetValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAkSlider_GetAkSliderItemId_Statics
	{
		struct AkSlider_eventGetAkSliderItemId_Parms
		{
			FGuid ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkSlider_GetAkSliderItemId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkSlider_eventGetAkSliderItemId_Parms, ReturnValue), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkSlider_GetAkSliderItemId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkSlider_GetAkSliderItemId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkSlider_GetAkSliderItemId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkSlider.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkSlider_GetAkSliderItemId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkSlider, nullptr, "GetAkSliderItemId", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkSlider_GetAkSliderItemId_Statics::AkSlider_eventGetAkSliderItemId_Parms), Z_Construct_UFunction_UAkSlider_GetAkSliderItemId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkSlider_GetAkSliderItemId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkSlider_GetAkSliderItemId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkSlider_GetAkSliderItemId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkSlider_GetAkSliderItemId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkSlider_GetAkSliderItemId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkSlider_GetAkSliderItemProperty_Statics
	{
		struct AkSlider_eventGetAkSliderItemProperty_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkSlider_GetAkSliderItemProperty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkSlider_eventGetAkSliderItemProperty_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkSlider_GetAkSliderItemProperty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkSlider_GetAkSliderItemProperty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkSlider_GetAkSliderItemProperty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkSlider.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkSlider_GetAkSliderItemProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkSlider, nullptr, "GetAkSliderItemProperty", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkSlider_GetAkSliderItemProperty_Statics::AkSlider_eventGetAkSliderItemProperty_Parms), Z_Construct_UFunction_UAkSlider_GetAkSliderItemProperty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkSlider_GetAkSliderItemProperty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkSlider_GetAkSliderItemProperty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkSlider_GetAkSliderItemProperty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkSlider_GetAkSliderItemProperty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkSlider_GetAkSliderItemProperty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkSlider_GetValue_Statics
	{
		struct AkSlider_eventGetValue_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAkSlider_GetValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkSlider_eventGetValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkSlider_GetValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkSlider_GetValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkSlider_GetValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkSlider.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkSlider_GetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkSlider, nullptr, "GetValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkSlider_GetValue_Statics::AkSlider_eventGetValue_Parms), Z_Construct_UFunction_UAkSlider_GetValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkSlider_GetValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkSlider_GetValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkSlider_GetValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkSlider_GetValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkSlider_GetValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkSlider_SetAkSliderItemId_Statics
	{
		struct AkSlider_eventSetAkSliderItemId_Parms
		{
			FGuid ItemId;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkSlider_SetAkSliderItemId_Statics::NewProp_ItemId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkSlider_SetAkSliderItemId_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkSlider_eventSetAkSliderItemId_Parms, ItemId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UFunction_UAkSlider_SetAkSliderItemId_Statics::NewProp_ItemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkSlider_SetAkSliderItemId_Statics::NewProp_ItemId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkSlider_SetAkSliderItemId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkSlider_SetAkSliderItemId_Statics::NewProp_ItemId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkSlider_SetAkSliderItemId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkSlider.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkSlider_SetAkSliderItemId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkSlider, nullptr, "SetAkSliderItemId", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkSlider_SetAkSliderItemId_Statics::AkSlider_eventSetAkSliderItemId_Parms), Z_Construct_UFunction_UAkSlider_SetAkSliderItemId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkSlider_SetAkSliderItemId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkSlider_SetAkSliderItemId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkSlider_SetAkSliderItemId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkSlider_SetAkSliderItemId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkSlider_SetAkSliderItemId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkSlider_SetAkSliderItemProperty_Statics
	{
		struct AkSlider_eventSetAkSliderItemProperty_Parms
		{
			FString ItemProperty;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemProperty_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ItemProperty;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkSlider_SetAkSliderItemProperty_Statics::NewProp_ItemProperty_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkSlider_SetAkSliderItemProperty_Statics::NewProp_ItemProperty = { "ItemProperty", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkSlider_eventSetAkSliderItemProperty_Parms, ItemProperty), METADATA_PARAMS(Z_Construct_UFunction_UAkSlider_SetAkSliderItemProperty_Statics::NewProp_ItemProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkSlider_SetAkSliderItemProperty_Statics::NewProp_ItemProperty_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkSlider_SetAkSliderItemProperty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkSlider_SetAkSliderItemProperty_Statics::NewProp_ItemProperty,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkSlider_SetAkSliderItemProperty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkSlider.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkSlider_SetAkSliderItemProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkSlider, nullptr, "SetAkSliderItemProperty", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkSlider_SetAkSliderItemProperty_Statics::AkSlider_eventSetAkSliderItemProperty_Parms), Z_Construct_UFunction_UAkSlider_SetAkSliderItemProperty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkSlider_SetAkSliderItemProperty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkSlider_SetAkSliderItemProperty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkSlider_SetAkSliderItemProperty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkSlider_SetAkSliderItemProperty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkSlider_SetAkSliderItemProperty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkSlider_SetIndentHandle_Statics
	{
		struct AkSlider_eventSetIndentHandle_Parms
		{
			bool InValue;
		};
		static void NewProp_InValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAkSlider_SetIndentHandle_Statics::NewProp_InValue_SetBit(void* Obj)
	{
		((AkSlider_eventSetIndentHandle_Parms*)Obj)->InValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkSlider_SetIndentHandle_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AkSlider_eventSetIndentHandle_Parms), &Z_Construct_UFunction_UAkSlider_SetIndentHandle_Statics::NewProp_InValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkSlider_SetIndentHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkSlider_SetIndentHandle_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkSlider_SetIndentHandle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkSlider.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkSlider_SetIndentHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkSlider, nullptr, "SetIndentHandle", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkSlider_SetIndentHandle_Statics::AkSlider_eventSetIndentHandle_Parms), Z_Construct_UFunction_UAkSlider_SetIndentHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkSlider_SetIndentHandle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkSlider_SetIndentHandle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkSlider_SetIndentHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkSlider_SetIndentHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkSlider_SetIndentHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkSlider_SetLocked_Statics
	{
		struct AkSlider_eventSetLocked_Parms
		{
			bool InValue;
		};
		static void NewProp_InValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAkSlider_SetLocked_Statics::NewProp_InValue_SetBit(void* Obj)
	{
		((AkSlider_eventSetLocked_Parms*)Obj)->InValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkSlider_SetLocked_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AkSlider_eventSetLocked_Parms), &Z_Construct_UFunction_UAkSlider_SetLocked_Statics::NewProp_InValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkSlider_SetLocked_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkSlider_SetLocked_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkSlider_SetLocked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkSlider.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkSlider_SetLocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkSlider, nullptr, "SetLocked", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkSlider_SetLocked_Statics::AkSlider_eventSetLocked_Parms), Z_Construct_UFunction_UAkSlider_SetLocked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkSlider_SetLocked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkSlider_SetLocked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkSlider_SetLocked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkSlider_SetLocked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkSlider_SetLocked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkSlider_SetSliderBarColor_Statics
	{
		struct AkSlider_eventSetSliderBarColor_Parms
		{
			FLinearColor InValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkSlider_SetSliderBarColor_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkSlider_eventSetSliderBarColor_Parms, InValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkSlider_SetSliderBarColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkSlider_SetSliderBarColor_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkSlider_SetSliderBarColor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkSlider.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkSlider_SetSliderBarColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkSlider, nullptr, "SetSliderBarColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkSlider_SetSliderBarColor_Statics::AkSlider_eventSetSliderBarColor_Parms), Z_Construct_UFunction_UAkSlider_SetSliderBarColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkSlider_SetSliderBarColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkSlider_SetSliderBarColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkSlider_SetSliderBarColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkSlider_SetSliderBarColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkSlider_SetSliderBarColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkSlider_SetSliderHandleColor_Statics
	{
		struct AkSlider_eventSetSliderHandleColor_Parms
		{
			FLinearColor InValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkSlider_SetSliderHandleColor_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkSlider_eventSetSliderHandleColor_Parms, InValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkSlider_SetSliderHandleColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkSlider_SetSliderHandleColor_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkSlider_SetSliderHandleColor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkSlider.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkSlider_SetSliderHandleColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkSlider, nullptr, "SetSliderHandleColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkSlider_SetSliderHandleColor_Statics::AkSlider_eventSetSliderHandleColor_Parms), Z_Construct_UFunction_UAkSlider_SetSliderHandleColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkSlider_SetSliderHandleColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkSlider_SetSliderHandleColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkSlider_SetSliderHandleColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkSlider_SetSliderHandleColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkSlider_SetSliderHandleColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkSlider_SetStepSize_Statics
	{
		struct AkSlider_eventSetStepSize_Parms
		{
			float InValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAkSlider_SetStepSize_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkSlider_eventSetStepSize_Parms, InValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkSlider_SetStepSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkSlider_SetStepSize_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkSlider_SetStepSize_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkSlider.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkSlider_SetStepSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkSlider, nullptr, "SetStepSize", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkSlider_SetStepSize_Statics::AkSlider_eventSetStepSize_Parms), Z_Construct_UFunction_UAkSlider_SetStepSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkSlider_SetStepSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkSlider_SetStepSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkSlider_SetStepSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkSlider_SetStepSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkSlider_SetStepSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkSlider_SetValue_Statics
	{
		struct AkSlider_eventSetValue_Parms
		{
			float InValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAkSlider_SetValue_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkSlider_eventSetValue_Parms, InValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkSlider_SetValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkSlider_SetValue_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkSlider_SetValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkSlider.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkSlider_SetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkSlider, nullptr, "SetValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkSlider_SetValue_Statics::AkSlider_eventSetValue_Parms), Z_Construct_UFunction_UAkSlider_SetValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkSlider_SetValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkSlider_SetValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkSlider_SetValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkSlider_SetValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkSlider_SetValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkSlider);
	UClass* Z_Construct_UClass_UAkSlider_NoRegister()
	{
		return UAkSlider::StaticClass();
	}
	struct Z_Construct_UClass_UAkSlider_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValueDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_ValueDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WidgetStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Orientation_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Orientation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SliderBarColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SliderBarColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SliderHandleColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SliderHandleColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IndentHandle_MetaData[];
#endif
		static void NewProp_IndentHandle_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IndentHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Locked_MetaData[];
#endif
		static void NewProp_Locked_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Locked;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StepSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StepSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsFocusable_MetaData[];
#endif
		static void NewProp_IsFocusable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsFocusable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThePropertyToControl_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ThePropertyToControl;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemToControl_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemToControl;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnValueChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnValueChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnItemDropped_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnItemDropped;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPropertyDropped_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPropertyDropped;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkSlider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAkSlider_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAkSlider_GetAkSliderItemId, "GetAkSliderItemId" }, // 2762395144
		{ &Z_Construct_UFunction_UAkSlider_GetAkSliderItemProperty, "GetAkSliderItemProperty" }, // 3238463479
		{ &Z_Construct_UFunction_UAkSlider_GetValue, "GetValue" }, // 3025113090
		{ &Z_Construct_UFunction_UAkSlider_SetAkSliderItemId, "SetAkSliderItemId" }, // 138103142
		{ &Z_Construct_UFunction_UAkSlider_SetAkSliderItemProperty, "SetAkSliderItemProperty" }, // 3635626026
		{ &Z_Construct_UFunction_UAkSlider_SetIndentHandle, "SetIndentHandle" }, // 2888653647
		{ &Z_Construct_UFunction_UAkSlider_SetLocked, "SetLocked" }, // 3073471742
		{ &Z_Construct_UFunction_UAkSlider_SetSliderBarColor, "SetSliderBarColor" }, // 2209398181
		{ &Z_Construct_UFunction_UAkSlider_SetSliderHandleColor, "SetSliderHandleColor" }, // 1629353265
		{ &Z_Construct_UFunction_UAkSlider_SetStepSize, "SetStepSize" }, // 887825795
		{ &Z_Construct_UFunction_UAkSlider_SetValue, "SetValue" }, // 758878123
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSlider_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AkSlider.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AkSlider.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSlider_Statics::NewProp_Value_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkSlider" },
		{ "ModuleRelativePath", "Public/AkSlider.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAkSlider_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkSlider, Value), METADATA_PARAMS(Z_Construct_UClass_UAkSlider_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkSlider_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSlider_Statics::NewProp_ValueDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkSlider" },
		{ "ModuleRelativePath", "Public/AkSlider.h" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UAkSlider_Statics::NewProp_ValueDelegate = { "ValueDelegate", nullptr, (EPropertyFlags)0x0010000000080005, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkSlider, ValueDelegate), Z_Construct_UDelegateFunction_UWidget_GetFloat__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAkSlider_Statics::NewProp_ValueDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkSlider_Statics::NewProp_ValueDelegate_MetaData)) }; // 3819155322
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSlider_Statics::NewProp_WidgetStyle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkSlider" },
		{ "ModuleRelativePath", "Public/AkSlider.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkSlider_Statics::NewProp_WidgetStyle = { "WidgetStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkSlider, WidgetStyle), Z_Construct_UScriptStruct_FSliderStyle, METADATA_PARAMS(Z_Construct_UClass_UAkSlider_Statics::NewProp_WidgetStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkSlider_Statics::NewProp_WidgetStyle_MetaData)) }; // 4127039365
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSlider_Statics::NewProp_Orientation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkSlider" },
		{ "ModuleRelativePath", "Public/AkSlider.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAkSlider_Statics::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkSlider, Orientation), Z_Construct_UEnum_SlateCore_EOrientation, METADATA_PARAMS(Z_Construct_UClass_UAkSlider_Statics::NewProp_Orientation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkSlider_Statics::NewProp_Orientation_MetaData)) }; // 3412645699
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSlider_Statics::NewProp_SliderBarColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkSlider" },
		{ "ModuleRelativePath", "Public/AkSlider.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkSlider_Statics::NewProp_SliderBarColor = { "SliderBarColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkSlider, SliderBarColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UAkSlider_Statics::NewProp_SliderBarColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkSlider_Statics::NewProp_SliderBarColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSlider_Statics::NewProp_SliderHandleColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkSlider" },
		{ "ModuleRelativePath", "Public/AkSlider.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkSlider_Statics::NewProp_SliderHandleColor = { "SliderHandleColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkSlider, SliderHandleColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UAkSlider_Statics::NewProp_SliderHandleColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkSlider_Statics::NewProp_SliderHandleColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSlider_Statics::NewProp_IndentHandle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkSlider" },
		{ "ModuleRelativePath", "Public/AkSlider.h" },
	};
#endif
	void Z_Construct_UClass_UAkSlider_Statics::NewProp_IndentHandle_SetBit(void* Obj)
	{
		((UAkSlider*)Obj)->IndentHandle = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkSlider_Statics::NewProp_IndentHandle = { "IndentHandle", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAkSlider), &Z_Construct_UClass_UAkSlider_Statics::NewProp_IndentHandle_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkSlider_Statics::NewProp_IndentHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkSlider_Statics::NewProp_IndentHandle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSlider_Statics::NewProp_Locked_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkSlider" },
		{ "ModuleRelativePath", "Public/AkSlider.h" },
	};
#endif
	void Z_Construct_UClass_UAkSlider_Statics::NewProp_Locked_SetBit(void* Obj)
	{
		((UAkSlider*)Obj)->Locked = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkSlider_Statics::NewProp_Locked = { "Locked", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAkSlider), &Z_Construct_UClass_UAkSlider_Statics::NewProp_Locked_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkSlider_Statics::NewProp_Locked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkSlider_Statics::NewProp_Locked_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSlider_Statics::NewProp_StepSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkSlider" },
		{ "ModuleRelativePath", "Public/AkSlider.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAkSlider_Statics::NewProp_StepSize = { "StepSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkSlider, StepSize), METADATA_PARAMS(Z_Construct_UClass_UAkSlider_Statics::NewProp_StepSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkSlider_Statics::NewProp_StepSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSlider_Statics::NewProp_IsFocusable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkSlider" },
		{ "ModuleRelativePath", "Public/AkSlider.h" },
	};
#endif
	void Z_Construct_UClass_UAkSlider_Statics::NewProp_IsFocusable_SetBit(void* Obj)
	{
		((UAkSlider*)Obj)->IsFocusable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkSlider_Statics::NewProp_IsFocusable = { "IsFocusable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAkSlider), &Z_Construct_UClass_UAkSlider_Statics::NewProp_IsFocusable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkSlider_Statics::NewProp_IsFocusable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkSlider_Statics::NewProp_IsFocusable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSlider_Statics::NewProp_ThePropertyToControl_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkSlider" },
		{ "ModuleRelativePath", "Public/AkSlider.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkSlider_Statics::NewProp_ThePropertyToControl = { "ThePropertyToControl", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkSlider, ThePropertyToControl), Z_Construct_UScriptStruct_FAkPropertyToControl, METADATA_PARAMS(Z_Construct_UClass_UAkSlider_Statics::NewProp_ThePropertyToControl_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkSlider_Statics::NewProp_ThePropertyToControl_MetaData)) }; // 3552283036
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSlider_Statics::NewProp_ItemToControl_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkSlider" },
		{ "ModuleRelativePath", "Public/AkSlider.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkSlider_Statics::NewProp_ItemToControl = { "ItemToControl", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkSlider, ItemToControl), Z_Construct_UScriptStruct_FAkWwiseItemToControl, METADATA_PARAMS(Z_Construct_UClass_UAkSlider_Statics::NewProp_ItemToControl_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkSlider_Statics::NewProp_ItemToControl_MetaData)) }; // 4077020967
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSlider_Statics::NewProp_OnValueChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkSlider" },
		{ "ModuleRelativePath", "Public/AkSlider.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAkSlider_Statics::NewProp_OnValueChanged = { "OnValueChanged", nullptr, (EPropertyFlags)0x0010000010080005, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkSlider, OnValueChanged), Z_Construct_UDelegateFunction_AkAudio_AkOnFloatValueChangedEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAkSlider_Statics::NewProp_OnValueChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkSlider_Statics::NewProp_OnValueChanged_MetaData)) }; // 3384854290
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSlider_Statics::NewProp_OnItemDropped_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkSlider" },
		{ "ModuleRelativePath", "Public/AkSlider.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAkSlider_Statics::NewProp_OnItemDropped = { "OnItemDropped", nullptr, (EPropertyFlags)0x0010000010080005, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkSlider, OnItemDropped), Z_Construct_UDelegateFunction_AkAudio_OnItemDropDetected__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAkSlider_Statics::NewProp_OnItemDropped_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkSlider_Statics::NewProp_OnItemDropped_MetaData)) }; // 594593486
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSlider_Statics::NewProp_OnPropertyDropped_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkSlider" },
		{ "ModuleRelativePath", "Public/AkSlider.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAkSlider_Statics::NewProp_OnPropertyDropped = { "OnPropertyDropped", nullptr, (EPropertyFlags)0x0010000010080005, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkSlider, OnPropertyDropped), Z_Construct_UDelegateFunction_AkAudio_OnPropertyDropDetected__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAkSlider_Statics::NewProp_OnPropertyDropped_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkSlider_Statics::NewProp_OnPropertyDropped_MetaData)) }; // 3811095173
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkSlider_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSlider_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSlider_Statics::NewProp_ValueDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSlider_Statics::NewProp_WidgetStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSlider_Statics::NewProp_Orientation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSlider_Statics::NewProp_SliderBarColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSlider_Statics::NewProp_SliderHandleColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSlider_Statics::NewProp_IndentHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSlider_Statics::NewProp_Locked,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSlider_Statics::NewProp_StepSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSlider_Statics::NewProp_IsFocusable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSlider_Statics::NewProp_ThePropertyToControl,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSlider_Statics::NewProp_ItemToControl,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSlider_Statics::NewProp_OnValueChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSlider_Statics::NewProp_OnItemDropped,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSlider_Statics::NewProp_OnPropertyDropped,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkSlider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkSlider>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkSlider_Statics::ClassParams = {
		&UAkSlider::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAkSlider_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAkSlider_Statics::PropPointers),
		0,
		0x00B000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UAkSlider_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkSlider_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkSlider()
	{
		if (!Z_Registration_Info_UClass_UAkSlider.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkSlider.OuterSingleton, Z_Construct_UClass_UAkSlider_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAkSlider.OuterSingleton;
	}
	template<> AKAUDIO_API UClass* StaticClass<UAkSlider>()
	{
		return UAkSlider::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkSlider);
	UAkSlider::~UAkSlider() {}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkSlider_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkSlider_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAkSlider, UAkSlider::StaticClass, TEXT("UAkSlider"), &Z_Registration_Info_UClass_UAkSlider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkSlider), 3486899746U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkSlider_h_2444622513(TEXT("/Script/AkAudio"),
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkSlider_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkSlider_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
