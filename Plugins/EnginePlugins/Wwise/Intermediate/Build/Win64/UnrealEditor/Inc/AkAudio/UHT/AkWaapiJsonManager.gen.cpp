// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkWaapiJsonManager.h"
#include "AkAudio/Public/AkWaapiFieldNames.h"
#include "AkAudio/Public/AKWaapiJsonObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkWaapiJsonManager() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkWaapiJsonManager();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkWaapiJsonManager_NoRegister();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkWaapiFieldNames();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAKWaapiJsonObject();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	DEFINE_FUNCTION(UAkWaapiJsonManager::execConv_FAKWaapiJsonObjectToString)
	{
		P_GET_STRUCT(FAKWaapiJsonObject,Z_Param_INAKWaapiJsonObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UAkWaapiJsonManager::Conv_FAKWaapiJsonObjectToString(Z_Param_INAKWaapiJsonObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkWaapiJsonManager::execConv_FAKWaapiJsonObjectToText)
	{
		P_GET_STRUCT(FAKWaapiJsonObject,Z_Param_INAKWaapiJsonObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=UAkWaapiJsonManager::Conv_FAKWaapiJsonObjectToText(Z_Param_INAKWaapiJsonObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkWaapiJsonManager::execGetArrayField)
	{
		P_GET_STRUCT_REF(FAkWaapiFieldNames,Z_Param_Out_FieldName);
		P_GET_STRUCT(FAKWaapiJsonObject,Z_Param_Target);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FAKWaapiJsonObject>*)Z_Param__Result=UAkWaapiJsonManager::GetArrayField(Z_Param_Out_FieldName,Z_Param_Target);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkWaapiJsonManager::execGetBoolField)
	{
		P_GET_STRUCT_REF(FAkWaapiFieldNames,Z_Param_Out_FieldName);
		P_GET_STRUCT(FAKWaapiJsonObject,Z_Param_Target);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAkWaapiJsonManager::GetBoolField(Z_Param_Out_FieldName,Z_Param_Target);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkWaapiJsonManager::execGetIntegerField)
	{
		P_GET_STRUCT_REF(FAkWaapiFieldNames,Z_Param_Out_FieldName);
		P_GET_STRUCT(FAKWaapiJsonObject,Z_Param_Target);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UAkWaapiJsonManager::GetIntegerField(Z_Param_Out_FieldName,Z_Param_Target);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkWaapiJsonManager::execGetNumberField)
	{
		P_GET_STRUCT_REF(FAkWaapiFieldNames,Z_Param_Out_FieldName);
		P_GET_STRUCT(FAKWaapiJsonObject,Z_Param_Target);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UAkWaapiJsonManager::GetNumberField(Z_Param_Out_FieldName,Z_Param_Target);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkWaapiJsonManager::execGetObjectField)
	{
		P_GET_STRUCT_REF(FAkWaapiFieldNames,Z_Param_Out_FieldName);
		P_GET_STRUCT(FAKWaapiJsonObject,Z_Param_Target);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAKWaapiJsonObject*)Z_Param__Result=UAkWaapiJsonManager::GetObjectField(Z_Param_Out_FieldName,Z_Param_Target);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkWaapiJsonManager::execGetStringField)
	{
		P_GET_STRUCT_REF(FAkWaapiFieldNames,Z_Param_Out_FieldName);
		P_GET_STRUCT(FAKWaapiJsonObject,Z_Param_Target);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UAkWaapiJsonManager::GetStringField(Z_Param_Out_FieldName,Z_Param_Target);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkWaapiJsonManager::execSetArrayObjectFields)
	{
		P_GET_STRUCT_REF(FAkWaapiFieldNames,Z_Param_Out_FieldName);
		P_GET_TARRAY_REF(FAKWaapiJsonObject,Z_Param_Out_FieldObjectValues);
		P_GET_STRUCT(FAKWaapiJsonObject,Z_Param_Target);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAKWaapiJsonObject*)Z_Param__Result=UAkWaapiJsonManager::SetArrayObjectFields(Z_Param_Out_FieldName,Z_Param_Out_FieldObjectValues,Z_Param_Target);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkWaapiJsonManager::execSetArrayStringFields)
	{
		P_GET_STRUCT_REF(FAkWaapiFieldNames,Z_Param_Out_FieldName);
		P_GET_TARRAY_REF(FString,Z_Param_Out_FieldStringValues);
		P_GET_STRUCT(FAKWaapiJsonObject,Z_Param_Target);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAKWaapiJsonObject*)Z_Param__Result=UAkWaapiJsonManager::SetArrayStringFields(Z_Param_Out_FieldName,Z_Param_Out_FieldStringValues,Z_Param_Target);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkWaapiJsonManager::execSetBoolField)
	{
		P_GET_STRUCT_REF(FAkWaapiFieldNames,Z_Param_Out_FieldName);
		P_GET_UBOOL(Z_Param_FieldValue);
		P_GET_STRUCT(FAKWaapiJsonObject,Z_Param_Target);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAKWaapiJsonObject*)Z_Param__Result=UAkWaapiJsonManager::SetBoolField(Z_Param_Out_FieldName,Z_Param_FieldValue,Z_Param_Target);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkWaapiJsonManager::execSetNumberField)
	{
		P_GET_STRUCT_REF(FAkWaapiFieldNames,Z_Param_Out_FieldName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_FieldValue);
		P_GET_STRUCT(FAKWaapiJsonObject,Z_Param_Target);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAKWaapiJsonObject*)Z_Param__Result=UAkWaapiJsonManager::SetNumberField(Z_Param_Out_FieldName,Z_Param_FieldValue,Z_Param_Target);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkWaapiJsonManager::execSetObjectField)
	{
		P_GET_STRUCT_REF(FAkWaapiFieldNames,Z_Param_Out_FieldName);
		P_GET_STRUCT(FAKWaapiJsonObject,Z_Param_FieldValue);
		P_GET_STRUCT(FAKWaapiJsonObject,Z_Param_Target);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAKWaapiJsonObject*)Z_Param__Result=UAkWaapiJsonManager::SetObjectField(Z_Param_Out_FieldName,Z_Param_FieldValue,Z_Param_Target);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkWaapiJsonManager::execSetStringField)
	{
		P_GET_STRUCT_REF(FAkWaapiFieldNames,Z_Param_Out_FieldName);
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldValue);
		P_GET_STRUCT(FAKWaapiJsonObject,Z_Param_Target);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAKWaapiJsonObject*)Z_Param__Result=UAkWaapiJsonManager::SetStringField(Z_Param_Out_FieldName,Z_Param_FieldValue,Z_Param_Target);
		P_NATIVE_END;
	}
	void UAkWaapiJsonManager::StaticRegisterNativesUAkWaapiJsonManager()
	{
		UClass* Class = UAkWaapiJsonManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Conv_FAKWaapiJsonObjectToString", &UAkWaapiJsonManager::execConv_FAKWaapiJsonObjectToString },
			{ "Conv_FAKWaapiJsonObjectToText", &UAkWaapiJsonManager::execConv_FAKWaapiJsonObjectToText },
			{ "GetArrayField", &UAkWaapiJsonManager::execGetArrayField },
			{ "GetBoolField", &UAkWaapiJsonManager::execGetBoolField },
			{ "GetIntegerField", &UAkWaapiJsonManager::execGetIntegerField },
			{ "GetNumberField", &UAkWaapiJsonManager::execGetNumberField },
			{ "GetObjectField", &UAkWaapiJsonManager::execGetObjectField },
			{ "GetStringField", &UAkWaapiJsonManager::execGetStringField },
			{ "SetArrayObjectFields", &UAkWaapiJsonManager::execSetArrayObjectFields },
			{ "SetArrayStringFields", &UAkWaapiJsonManager::execSetArrayStringFields },
			{ "SetBoolField", &UAkWaapiJsonManager::execSetBoolField },
			{ "SetNumberField", &UAkWaapiJsonManager::execSetNumberField },
			{ "SetObjectField", &UAkWaapiJsonManager::execSetObjectField },
			{ "SetStringField", &UAkWaapiJsonManager::execSetStringField },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToString_Statics
	{
		struct AkWaapiJsonManager_eventConv_FAKWaapiJsonObjectToString_Parms
		{
			FAKWaapiJsonObject INAKWaapiJsonObject;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_INAKWaapiJsonObject;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToString_Statics::NewProp_INAKWaapiJsonObject = { "INAKWaapiJsonObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkWaapiJsonManager_eventConv_FAKWaapiJsonObjectToString_Parms, INAKWaapiJsonObject), Z_Construct_UScriptStruct_FAKWaapiJsonObject, METADATA_PARAMS(nullptr, 0) }; // 2004490638
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkWaapiJsonManager_eventConv_FAKWaapiJsonObjectToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToString_Statics::NewProp_INAKWaapiJsonObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkWaapiJsonManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkWaapiJsonManager, nullptr, "Conv_FAKWaapiJsonObjectToString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToString_Statics::AkWaapiJsonManager_eventConv_FAKWaapiJsonObjectToString_Parms), Z_Construct_UFunction_UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToText_Statics
	{
		struct AkWaapiJsonManager_eventConv_FAKWaapiJsonObjectToText_Parms
		{
			FAKWaapiJsonObject INAKWaapiJsonObject;
			FText ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_INAKWaapiJsonObject;
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToText_Statics::NewProp_INAKWaapiJsonObject = { "INAKWaapiJsonObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkWaapiJsonManager_eventConv_FAKWaapiJsonObjectToText_Parms, INAKWaapiJsonObject), Z_Construct_UScriptStruct_FAKWaapiJsonObject, METADATA_PARAMS(nullptr, 0) }; // 2004490638
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkWaapiJsonManager_eventConv_FAKWaapiJsonObjectToText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToText_Statics::NewProp_INAKWaapiJsonObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkWaapiJsonManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkWaapiJsonManager, nullptr, "Conv_FAKWaapiJsonObjectToText", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToText_Statics::AkWaapiJsonManager_eventConv_FAKWaapiJsonObjectToText_Parms), Z_Construct_UFunction_UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkWaapiJsonManager_GetArrayField_Statics
	{
		struct AkWaapiJsonManager_eventGetArrayField_Parms
		{
			FAkWaapiFieldNames FieldName;
			FAKWaapiJsonObject Target;
			TArray<FAKWaapiJsonObject> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FieldName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Target;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiJsonManager_GetArrayField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_GetArrayField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkWaapiJsonManager_eventGetArrayField_Parms, FieldName), Z_Construct_UScriptStruct_FAkWaapiFieldNames, METADATA_PARAMS(Z_Construct_UFunction_UAkWaapiJsonManager_GetArrayField_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_GetArrayField_Statics::NewProp_FieldName_MetaData)) }; // 16996084
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_GetArrayField_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkWaapiJsonManager_eventGetArrayField_Parms, Target), Z_Construct_UScriptStruct_FAKWaapiJsonObject, METADATA_PARAMS(nullptr, 0) }; // 2004490638
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_GetArrayField_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAKWaapiJsonObject, METADATA_PARAMS(nullptr, 0) }; // 2004490638
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_GetArrayField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkWaapiJsonManager_eventGetArrayField_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2004490638
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkWaapiJsonManager_GetArrayField_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_GetArrayField_Statics::NewProp_FieldName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_GetArrayField_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_GetArrayField_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_GetArrayField_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiJsonManager_GetArrayField_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkWaapiJsonManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkWaapiJsonManager_GetArrayField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkWaapiJsonManager, nullptr, "GetArrayField", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkWaapiJsonManager_GetArrayField_Statics::AkWaapiJsonManager_eventGetArrayField_Parms), Z_Construct_UFunction_UAkWaapiJsonManager_GetArrayField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_GetArrayField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkWaapiJsonManager_GetArrayField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_GetArrayField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkWaapiJsonManager_GetArrayField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkWaapiJsonManager_GetArrayField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkWaapiJsonManager_GetBoolField_Statics
	{
		struct AkWaapiJsonManager_eventGetBoolField_Parms
		{
			FAkWaapiFieldNames FieldName;
			FAKWaapiJsonObject Target;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FieldName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Target;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiJsonManager_GetBoolField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_GetBoolField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkWaapiJsonManager_eventGetBoolField_Parms, FieldName), Z_Construct_UScriptStruct_FAkWaapiFieldNames, METADATA_PARAMS(Z_Construct_UFunction_UAkWaapiJsonManager_GetBoolField_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_GetBoolField_Statics::NewProp_FieldName_MetaData)) }; // 16996084
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_GetBoolField_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkWaapiJsonManager_eventGetBoolField_Parms, Target), Z_Construct_UScriptStruct_FAKWaapiJsonObject, METADATA_PARAMS(nullptr, 0) }; // 2004490638
	void Z_Construct_UFunction_UAkWaapiJsonManager_GetBoolField_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AkWaapiJsonManager_eventGetBoolField_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_GetBoolField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AkWaapiJsonManager_eventGetBoolField_Parms), &Z_Construct_UFunction_UAkWaapiJsonManager_GetBoolField_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkWaapiJsonManager_GetBoolField_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_GetBoolField_Statics::NewProp_FieldName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_GetBoolField_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_GetBoolField_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiJsonManager_GetBoolField_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkWaapiJsonManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkWaapiJsonManager_GetBoolField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkWaapiJsonManager, nullptr, "GetBoolField", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkWaapiJsonManager_GetBoolField_Statics::AkWaapiJsonManager_eventGetBoolField_Parms), Z_Construct_UFunction_UAkWaapiJsonManager_GetBoolField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_GetBoolField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkWaapiJsonManager_GetBoolField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_GetBoolField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkWaapiJsonManager_GetBoolField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkWaapiJsonManager_GetBoolField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkWaapiJsonManager_GetIntegerField_Statics
	{
		struct AkWaapiJsonManager_eventGetIntegerField_Parms
		{
			FAkWaapiFieldNames FieldName;
			FAKWaapiJsonObject Target;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FieldName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Target;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiJsonManager_GetIntegerField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_GetIntegerField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkWaapiJsonManager_eventGetIntegerField_Parms, FieldName), Z_Construct_UScriptStruct_FAkWaapiFieldNames, METADATA_PARAMS(Z_Construct_UFunction_UAkWaapiJsonManager_GetIntegerField_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_GetIntegerField_Statics::NewProp_FieldName_MetaData)) }; // 16996084
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_GetIntegerField_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkWaapiJsonManager_eventGetIntegerField_Parms, Target), Z_Construct_UScriptStruct_FAKWaapiJsonObject, METADATA_PARAMS(nullptr, 0) }; // 2004490638
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_GetIntegerField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkWaapiJsonManager_eventGetIntegerField_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkWaapiJsonManager_GetIntegerField_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_GetIntegerField_Statics::NewProp_FieldName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_GetIntegerField_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_GetIntegerField_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiJsonManager_GetIntegerField_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkWaapiJsonManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkWaapiJsonManager_GetIntegerField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkWaapiJsonManager, nullptr, "GetIntegerField", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkWaapiJsonManager_GetIntegerField_Statics::AkWaapiJsonManager_eventGetIntegerField_Parms), Z_Construct_UFunction_UAkWaapiJsonManager_GetIntegerField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_GetIntegerField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkWaapiJsonManager_GetIntegerField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_GetIntegerField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkWaapiJsonManager_GetIntegerField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkWaapiJsonManager_GetIntegerField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkWaapiJsonManager_GetNumberField_Statics
	{
		struct AkWaapiJsonManager_eventGetNumberField_Parms
		{
			FAkWaapiFieldNames FieldName;
			FAKWaapiJsonObject Target;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FieldName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Target;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiJsonManager_GetNumberField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_GetNumberField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkWaapiJsonManager_eventGetNumberField_Parms, FieldName), Z_Construct_UScriptStruct_FAkWaapiFieldNames, METADATA_PARAMS(Z_Construct_UFunction_UAkWaapiJsonManager_GetNumberField_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_GetNumberField_Statics::NewProp_FieldName_MetaData)) }; // 16996084
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_GetNumberField_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkWaapiJsonManager_eventGetNumberField_Parms, Target), Z_Construct_UScriptStruct_FAKWaapiJsonObject, METADATA_PARAMS(nullptr, 0) }; // 2004490638
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_GetNumberField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkWaapiJsonManager_eventGetNumberField_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkWaapiJsonManager_GetNumberField_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_GetNumberField_Statics::NewProp_FieldName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_GetNumberField_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_GetNumberField_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiJsonManager_GetNumberField_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkWaapiJsonManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkWaapiJsonManager_GetNumberField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkWaapiJsonManager, nullptr, "GetNumberField", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkWaapiJsonManager_GetNumberField_Statics::AkWaapiJsonManager_eventGetNumberField_Parms), Z_Construct_UFunction_UAkWaapiJsonManager_GetNumberField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_GetNumberField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkWaapiJsonManager_GetNumberField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_GetNumberField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkWaapiJsonManager_GetNumberField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkWaapiJsonManager_GetNumberField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkWaapiJsonManager_GetObjectField_Statics
	{
		struct AkWaapiJsonManager_eventGetObjectField_Parms
		{
			FAkWaapiFieldNames FieldName;
			FAKWaapiJsonObject Target;
			FAKWaapiJsonObject ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FieldName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Target;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiJsonManager_GetObjectField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_GetObjectField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkWaapiJsonManager_eventGetObjectField_Parms, FieldName), Z_Construct_UScriptStruct_FAkWaapiFieldNames, METADATA_PARAMS(Z_Construct_UFunction_UAkWaapiJsonManager_GetObjectField_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_GetObjectField_Statics::NewProp_FieldName_MetaData)) }; // 16996084
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_GetObjectField_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkWaapiJsonManager_eventGetObjectField_Parms, Target), Z_Construct_UScriptStruct_FAKWaapiJsonObject, METADATA_PARAMS(nullptr, 0) }; // 2004490638
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_GetObjectField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkWaapiJsonManager_eventGetObjectField_Parms, ReturnValue), Z_Construct_UScriptStruct_FAKWaapiJsonObject, METADATA_PARAMS(nullptr, 0) }; // 2004490638
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkWaapiJsonManager_GetObjectField_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_GetObjectField_Statics::NewProp_FieldName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_GetObjectField_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_GetObjectField_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiJsonManager_GetObjectField_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkWaapiJsonManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkWaapiJsonManager_GetObjectField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkWaapiJsonManager, nullptr, "GetObjectField", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkWaapiJsonManager_GetObjectField_Statics::AkWaapiJsonManager_eventGetObjectField_Parms), Z_Construct_UFunction_UAkWaapiJsonManager_GetObjectField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_GetObjectField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkWaapiJsonManager_GetObjectField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_GetObjectField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkWaapiJsonManager_GetObjectField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkWaapiJsonManager_GetObjectField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkWaapiJsonManager_GetStringField_Statics
	{
		struct AkWaapiJsonManager_eventGetStringField_Parms
		{
			FAkWaapiFieldNames FieldName;
			FAKWaapiJsonObject Target;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FieldName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Target;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiJsonManager_GetStringField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_GetStringField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkWaapiJsonManager_eventGetStringField_Parms, FieldName), Z_Construct_UScriptStruct_FAkWaapiFieldNames, METADATA_PARAMS(Z_Construct_UFunction_UAkWaapiJsonManager_GetStringField_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_GetStringField_Statics::NewProp_FieldName_MetaData)) }; // 16996084
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_GetStringField_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkWaapiJsonManager_eventGetStringField_Parms, Target), Z_Construct_UScriptStruct_FAKWaapiJsonObject, METADATA_PARAMS(nullptr, 0) }; // 2004490638
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_GetStringField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkWaapiJsonManager_eventGetStringField_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkWaapiJsonManager_GetStringField_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_GetStringField_Statics::NewProp_FieldName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_GetStringField_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_GetStringField_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiJsonManager_GetStringField_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkWaapiJsonManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkWaapiJsonManager_GetStringField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkWaapiJsonManager, nullptr, "GetStringField", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkWaapiJsonManager_GetStringField_Statics::AkWaapiJsonManager_eventGetStringField_Parms), Z_Construct_UFunction_UAkWaapiJsonManager_GetStringField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_GetStringField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkWaapiJsonManager_GetStringField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_GetStringField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkWaapiJsonManager_GetStringField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkWaapiJsonManager_GetStringField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayObjectFields_Statics
	{
		struct AkWaapiJsonManager_eventSetArrayObjectFields_Parms
		{
			FAkWaapiFieldNames FieldName;
			TArray<FAKWaapiJsonObject> FieldObjectValues;
			FAKWaapiJsonObject Target;
			FAKWaapiJsonObject ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FieldName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FieldObjectValues_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldObjectValues_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FieldObjectValues;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Target;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayObjectFields_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayObjectFields_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkWaapiJsonManager_eventSetArrayObjectFields_Parms, FieldName), Z_Construct_UScriptStruct_FAkWaapiFieldNames, METADATA_PARAMS(Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayObjectFields_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayObjectFields_Statics::NewProp_FieldName_MetaData)) }; // 16996084
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayObjectFields_Statics::NewProp_FieldObjectValues_Inner = { "FieldObjectValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAKWaapiJsonObject, METADATA_PARAMS(nullptr, 0) }; // 2004490638
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayObjectFields_Statics::NewProp_FieldObjectValues_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayObjectFields_Statics::NewProp_FieldObjectValues = { "FieldObjectValues", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkWaapiJsonManager_eventSetArrayObjectFields_Parms, FieldObjectValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayObjectFields_Statics::NewProp_FieldObjectValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayObjectFields_Statics::NewProp_FieldObjectValues_MetaData)) }; // 2004490638
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayObjectFields_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkWaapiJsonManager_eventSetArrayObjectFields_Parms, Target), Z_Construct_UScriptStruct_FAKWaapiJsonObject, METADATA_PARAMS(nullptr, 0) }; // 2004490638
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayObjectFields_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkWaapiJsonManager_eventSetArrayObjectFields_Parms, ReturnValue), Z_Construct_UScriptStruct_FAKWaapiJsonObject, METADATA_PARAMS(nullptr, 0) }; // 2004490638
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayObjectFields_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayObjectFields_Statics::NewProp_FieldName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayObjectFields_Statics::NewProp_FieldObjectValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayObjectFields_Statics::NewProp_FieldObjectValues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayObjectFields_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayObjectFields_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayObjectFields_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkWaapiJsonManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayObjectFields_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkWaapiJsonManager, nullptr, "SetArrayObjectFields", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayObjectFields_Statics::AkWaapiJsonManager_eventSetArrayObjectFields_Parms), Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayObjectFields_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayObjectFields_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayObjectFields_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayObjectFields_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayObjectFields()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayObjectFields_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayStringFields_Statics
	{
		struct AkWaapiJsonManager_eventSetArrayStringFields_Parms
		{
			FAkWaapiFieldNames FieldName;
			TArray<FString> FieldStringValues;
			FAKWaapiJsonObject Target;
			FAKWaapiJsonObject ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FieldName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FieldStringValues_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldStringValues_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FieldStringValues;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Target;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayStringFields_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayStringFields_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkWaapiJsonManager_eventSetArrayStringFields_Parms, FieldName), Z_Construct_UScriptStruct_FAkWaapiFieldNames, METADATA_PARAMS(Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayStringFields_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayStringFields_Statics::NewProp_FieldName_MetaData)) }; // 16996084
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayStringFields_Statics::NewProp_FieldStringValues_Inner = { "FieldStringValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayStringFields_Statics::NewProp_FieldStringValues_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayStringFields_Statics::NewProp_FieldStringValues = { "FieldStringValues", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkWaapiJsonManager_eventSetArrayStringFields_Parms, FieldStringValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayStringFields_Statics::NewProp_FieldStringValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayStringFields_Statics::NewProp_FieldStringValues_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayStringFields_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkWaapiJsonManager_eventSetArrayStringFields_Parms, Target), Z_Construct_UScriptStruct_FAKWaapiJsonObject, METADATA_PARAMS(nullptr, 0) }; // 2004490638
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayStringFields_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkWaapiJsonManager_eventSetArrayStringFields_Parms, ReturnValue), Z_Construct_UScriptStruct_FAKWaapiJsonObject, METADATA_PARAMS(nullptr, 0) }; // 2004490638
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayStringFields_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayStringFields_Statics::NewProp_FieldName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayStringFields_Statics::NewProp_FieldStringValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayStringFields_Statics::NewProp_FieldStringValues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayStringFields_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayStringFields_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayStringFields_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkWaapiJsonManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayStringFields_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkWaapiJsonManager, nullptr, "SetArrayStringFields", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayStringFields_Statics::AkWaapiJsonManager_eventSetArrayStringFields_Parms), Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayStringFields_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayStringFields_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayStringFields_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayStringFields_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayStringFields()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayStringFields_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkWaapiJsonManager_SetBoolField_Statics
	{
		struct AkWaapiJsonManager_eventSetBoolField_Parms
		{
			FAkWaapiFieldNames FieldName;
			bool FieldValue;
			FAKWaapiJsonObject Target;
			FAKWaapiJsonObject ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FieldName;
		static void NewProp_FieldValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_FieldValue;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Target;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiJsonManager_SetBoolField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_SetBoolField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkWaapiJsonManager_eventSetBoolField_Parms, FieldName), Z_Construct_UScriptStruct_FAkWaapiFieldNames, METADATA_PARAMS(Z_Construct_UFunction_UAkWaapiJsonManager_SetBoolField_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_SetBoolField_Statics::NewProp_FieldName_MetaData)) }; // 16996084
	void Z_Construct_UFunction_UAkWaapiJsonManager_SetBoolField_Statics::NewProp_FieldValue_SetBit(void* Obj)
	{
		((AkWaapiJsonManager_eventSetBoolField_Parms*)Obj)->FieldValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_SetBoolField_Statics::NewProp_FieldValue = { "FieldValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AkWaapiJsonManager_eventSetBoolField_Parms), &Z_Construct_UFunction_UAkWaapiJsonManager_SetBoolField_Statics::NewProp_FieldValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_SetBoolField_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkWaapiJsonManager_eventSetBoolField_Parms, Target), Z_Construct_UScriptStruct_FAKWaapiJsonObject, METADATA_PARAMS(nullptr, 0) }; // 2004490638
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_SetBoolField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkWaapiJsonManager_eventSetBoolField_Parms, ReturnValue), Z_Construct_UScriptStruct_FAKWaapiJsonObject, METADATA_PARAMS(nullptr, 0) }; // 2004490638
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkWaapiJsonManager_SetBoolField_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_SetBoolField_Statics::NewProp_FieldName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_SetBoolField_Statics::NewProp_FieldValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_SetBoolField_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_SetBoolField_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiJsonManager_SetBoolField_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkWaapiJsonManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkWaapiJsonManager_SetBoolField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkWaapiJsonManager, nullptr, "SetBoolField", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkWaapiJsonManager_SetBoolField_Statics::AkWaapiJsonManager_eventSetBoolField_Parms), Z_Construct_UFunction_UAkWaapiJsonManager_SetBoolField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_SetBoolField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkWaapiJsonManager_SetBoolField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_SetBoolField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkWaapiJsonManager_SetBoolField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkWaapiJsonManager_SetBoolField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkWaapiJsonManager_SetNumberField_Statics
	{
		struct AkWaapiJsonManager_eventSetNumberField_Parms
		{
			FAkWaapiFieldNames FieldName;
			float FieldValue;
			FAKWaapiJsonObject Target;
			FAKWaapiJsonObject ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FieldName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FieldValue;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Target;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiJsonManager_SetNumberField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_SetNumberField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkWaapiJsonManager_eventSetNumberField_Parms, FieldName), Z_Construct_UScriptStruct_FAkWaapiFieldNames, METADATA_PARAMS(Z_Construct_UFunction_UAkWaapiJsonManager_SetNumberField_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_SetNumberField_Statics::NewProp_FieldName_MetaData)) }; // 16996084
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_SetNumberField_Statics::NewProp_FieldValue = { "FieldValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkWaapiJsonManager_eventSetNumberField_Parms, FieldValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_SetNumberField_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkWaapiJsonManager_eventSetNumberField_Parms, Target), Z_Construct_UScriptStruct_FAKWaapiJsonObject, METADATA_PARAMS(nullptr, 0) }; // 2004490638
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_SetNumberField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkWaapiJsonManager_eventSetNumberField_Parms, ReturnValue), Z_Construct_UScriptStruct_FAKWaapiJsonObject, METADATA_PARAMS(nullptr, 0) }; // 2004490638
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkWaapiJsonManager_SetNumberField_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_SetNumberField_Statics::NewProp_FieldName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_SetNumberField_Statics::NewProp_FieldValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_SetNumberField_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_SetNumberField_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiJsonManager_SetNumberField_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkWaapiJsonManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkWaapiJsonManager_SetNumberField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkWaapiJsonManager, nullptr, "SetNumberField", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkWaapiJsonManager_SetNumberField_Statics::AkWaapiJsonManager_eventSetNumberField_Parms), Z_Construct_UFunction_UAkWaapiJsonManager_SetNumberField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_SetNumberField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkWaapiJsonManager_SetNumberField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_SetNumberField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkWaapiJsonManager_SetNumberField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkWaapiJsonManager_SetNumberField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkWaapiJsonManager_SetObjectField_Statics
	{
		struct AkWaapiJsonManager_eventSetObjectField_Parms
		{
			FAkWaapiFieldNames FieldName;
			FAKWaapiJsonObject FieldValue;
			FAKWaapiJsonObject Target;
			FAKWaapiJsonObject ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FieldName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FieldValue;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Target;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiJsonManager_SetObjectField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_SetObjectField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkWaapiJsonManager_eventSetObjectField_Parms, FieldName), Z_Construct_UScriptStruct_FAkWaapiFieldNames, METADATA_PARAMS(Z_Construct_UFunction_UAkWaapiJsonManager_SetObjectField_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_SetObjectField_Statics::NewProp_FieldName_MetaData)) }; // 16996084
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_SetObjectField_Statics::NewProp_FieldValue = { "FieldValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkWaapiJsonManager_eventSetObjectField_Parms, FieldValue), Z_Construct_UScriptStruct_FAKWaapiJsonObject, METADATA_PARAMS(nullptr, 0) }; // 2004490638
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_SetObjectField_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkWaapiJsonManager_eventSetObjectField_Parms, Target), Z_Construct_UScriptStruct_FAKWaapiJsonObject, METADATA_PARAMS(nullptr, 0) }; // 2004490638
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_SetObjectField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkWaapiJsonManager_eventSetObjectField_Parms, ReturnValue), Z_Construct_UScriptStruct_FAKWaapiJsonObject, METADATA_PARAMS(nullptr, 0) }; // 2004490638
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkWaapiJsonManager_SetObjectField_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_SetObjectField_Statics::NewProp_FieldName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_SetObjectField_Statics::NewProp_FieldValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_SetObjectField_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_SetObjectField_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiJsonManager_SetObjectField_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkWaapiJsonManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkWaapiJsonManager_SetObjectField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkWaapiJsonManager, nullptr, "SetObjectField", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkWaapiJsonManager_SetObjectField_Statics::AkWaapiJsonManager_eventSetObjectField_Parms), Z_Construct_UFunction_UAkWaapiJsonManager_SetObjectField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_SetObjectField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkWaapiJsonManager_SetObjectField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_SetObjectField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkWaapiJsonManager_SetObjectField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkWaapiJsonManager_SetObjectField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkWaapiJsonManager_SetStringField_Statics
	{
		struct AkWaapiJsonManager_eventSetStringField_Parms
		{
			FAkWaapiFieldNames FieldName;
			FString FieldValue;
			FAKWaapiJsonObject Target;
			FAKWaapiJsonObject ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FieldName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FieldValue;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Target;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiJsonManager_SetStringField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_SetStringField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkWaapiJsonManager_eventSetStringField_Parms, FieldName), Z_Construct_UScriptStruct_FAkWaapiFieldNames, METADATA_PARAMS(Z_Construct_UFunction_UAkWaapiJsonManager_SetStringField_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_SetStringField_Statics::NewProp_FieldName_MetaData)) }; // 16996084
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiJsonManager_SetStringField_Statics::NewProp_FieldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_SetStringField_Statics::NewProp_FieldValue = { "FieldValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkWaapiJsonManager_eventSetStringField_Parms, FieldValue), METADATA_PARAMS(Z_Construct_UFunction_UAkWaapiJsonManager_SetStringField_Statics::NewProp_FieldValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_SetStringField_Statics::NewProp_FieldValue_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_SetStringField_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkWaapiJsonManager_eventSetStringField_Parms, Target), Z_Construct_UScriptStruct_FAKWaapiJsonObject, METADATA_PARAMS(nullptr, 0) }; // 2004490638
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWaapiJsonManager_SetStringField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkWaapiJsonManager_eventSetStringField_Parms, ReturnValue), Z_Construct_UScriptStruct_FAKWaapiJsonObject, METADATA_PARAMS(nullptr, 0) }; // 2004490638
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkWaapiJsonManager_SetStringField_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_SetStringField_Statics::NewProp_FieldName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_SetStringField_Statics::NewProp_FieldValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_SetStringField_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWaapiJsonManager_SetStringField_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWaapiJsonManager_SetStringField_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkWaapiJsonManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkWaapiJsonManager_SetStringField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkWaapiJsonManager, nullptr, "SetStringField", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkWaapiJsonManager_SetStringField_Statics::AkWaapiJsonManager_eventSetStringField_Parms), Z_Construct_UFunction_UAkWaapiJsonManager_SetStringField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_SetStringField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkWaapiJsonManager_SetStringField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWaapiJsonManager_SetStringField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkWaapiJsonManager_SetStringField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkWaapiJsonManager_SetStringField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkWaapiJsonManager);
	UClass* Z_Construct_UClass_UAkWaapiJsonManager_NoRegister()
	{
		return UAkWaapiJsonManager::StaticClass();
	}
	struct Z_Construct_UClass_UAkWaapiJsonManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkWaapiJsonManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAkWaapiJsonManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToString, "Conv_FAKWaapiJsonObjectToString" }, // 3628249881
		{ &Z_Construct_UFunction_UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToText, "Conv_FAKWaapiJsonObjectToText" }, // 559969744
		{ &Z_Construct_UFunction_UAkWaapiJsonManager_GetArrayField, "GetArrayField" }, // 4086349686
		{ &Z_Construct_UFunction_UAkWaapiJsonManager_GetBoolField, "GetBoolField" }, // 3100745564
		{ &Z_Construct_UFunction_UAkWaapiJsonManager_GetIntegerField, "GetIntegerField" }, // 2052315699
		{ &Z_Construct_UFunction_UAkWaapiJsonManager_GetNumberField, "GetNumberField" }, // 2269138068
		{ &Z_Construct_UFunction_UAkWaapiJsonManager_GetObjectField, "GetObjectField" }, // 798730946
		{ &Z_Construct_UFunction_UAkWaapiJsonManager_GetStringField, "GetStringField" }, // 1115252069
		{ &Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayObjectFields, "SetArrayObjectFields" }, // 1191869847
		{ &Z_Construct_UFunction_UAkWaapiJsonManager_SetArrayStringFields, "SetArrayStringFields" }, // 3021761588
		{ &Z_Construct_UFunction_UAkWaapiJsonManager_SetBoolField, "SetBoolField" }, // 1118675453
		{ &Z_Construct_UFunction_UAkWaapiJsonManager_SetNumberField, "SetNumberField" }, // 2002659618
		{ &Z_Construct_UFunction_UAkWaapiJsonManager_SetObjectField, "SetObjectField" }, // 3394716181
		{ &Z_Construct_UFunction_UAkWaapiJsonManager_SetStringField, "SetStringField" }, // 713351761
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkWaapiJsonManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AkWaapiJsonManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AkWaapiJsonManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkWaapiJsonManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkWaapiJsonManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkWaapiJsonManager_Statics::ClassParams = {
		&UAkWaapiJsonManager::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAkWaapiJsonManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkWaapiJsonManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkWaapiJsonManager()
	{
		if (!Z_Registration_Info_UClass_UAkWaapiJsonManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkWaapiJsonManager.OuterSingleton, Z_Construct_UClass_UAkWaapiJsonManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAkWaapiJsonManager.OuterSingleton;
	}
	template<> AKAUDIO_API UClass* StaticClass<UAkWaapiJsonManager>()
	{
		return UAkWaapiJsonManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkWaapiJsonManager);
	UAkWaapiJsonManager::~UAkWaapiJsonManager() {}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkWaapiJsonManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkWaapiJsonManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAkWaapiJsonManager, UAkWaapiJsonManager::StaticClass, TEXT("UAkWaapiJsonManager"), &Z_Registration_Info_UClass_UAkWaapiJsonManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkWaapiJsonManager), 2780046001U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkWaapiJsonManager_h_3392546046(TEXT("/Script/AkAudio"),
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkWaapiJsonManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkWaapiJsonManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
