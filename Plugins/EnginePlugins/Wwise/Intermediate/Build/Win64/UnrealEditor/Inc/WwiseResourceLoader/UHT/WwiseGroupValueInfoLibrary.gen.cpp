// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WwiseResourceLoader/Public/WwiseGroupValueInfoLibrary.h"
#include "WwiseResourceLoader/Public/WwiseGroupValueInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWwiseGroupValueInfoLibrary() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_WwiseResourceLoader();
	WWISERESOURCELOADER_API UClass* Z_Construct_UClass_UWwiseGroupValueInfoLibrary();
	WWISERESOURCELOADER_API UClass* Z_Construct_UClass_UWwiseGroupValueInfoLibrary_NoRegister();
	WWISERESOURCELOADER_API UScriptStruct* Z_Construct_UScriptStruct_FWwiseGroupValueInfo();
// End Cross Module References
	DEFINE_FUNCTION(UWwiseGroupValueInfoLibrary::execBreakStruct)
	{
		P_GET_STRUCT(FWwiseGroupValueInfo,Z_Param_Ref);
		P_GET_STRUCT_REF(FGuid,Z_Param_Out_OutAssetGuid);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutGroupShortId);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutWwiseShortId);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutWwiseName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UWwiseGroupValueInfoLibrary::BreakStruct(Z_Param_Ref,Z_Param_Out_OutAssetGuid,Z_Param_Out_OutGroupShortId,Z_Param_Out_OutWwiseShortId,Z_Param_Out_OutWwiseName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWwiseGroupValueInfoLibrary::execGetAssetGuid)
	{
		P_GET_STRUCT_REF(FWwiseGroupValueInfo,Z_Param_Out_Ref);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGuid*)Z_Param__Result=UWwiseGroupValueInfoLibrary::GetAssetGuid(Z_Param_Out_Ref);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWwiseGroupValueInfoLibrary::execGetGroupShortId)
	{
		P_GET_STRUCT_REF(FWwiseGroupValueInfo,Z_Param_Out_Ref);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UWwiseGroupValueInfoLibrary::GetGroupShortId(Z_Param_Out_Ref);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWwiseGroupValueInfoLibrary::execGetWwiseName)
	{
		P_GET_STRUCT_REF(FWwiseGroupValueInfo,Z_Param_Out_Ref);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UWwiseGroupValueInfoLibrary::GetWwiseName(Z_Param_Out_Ref);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWwiseGroupValueInfoLibrary::execGetWwiseShortID)
	{
		P_GET_STRUCT_REF(FWwiseGroupValueInfo,Z_Param_Out_Ref);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UWwiseGroupValueInfoLibrary::GetWwiseShortID(Z_Param_Out_Ref);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWwiseGroupValueInfoLibrary::execMakeStruct)
	{
		P_GET_STRUCT_REF(FGuid,Z_Param_Out_AssetGuid);
		P_GET_PROPERTY(FIntProperty,Z_Param_GroupShortId);
		P_GET_PROPERTY(FIntProperty,Z_Param_WwiseShortId);
		P_GET_PROPERTY(FStrProperty,Z_Param_WwiseName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FWwiseGroupValueInfo*)Z_Param__Result=UWwiseGroupValueInfoLibrary::MakeStruct(Z_Param_Out_AssetGuid,Z_Param_GroupShortId,Z_Param_WwiseShortId,Z_Param_WwiseName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWwiseGroupValueInfoLibrary::execSetAssetGuid)
	{
		P_GET_STRUCT_REF(FWwiseGroupValueInfo,Z_Param_Out_Ref);
		P_GET_STRUCT_REF(FGuid,Z_Param_Out_AssetGuid);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FWwiseGroupValueInfo*)Z_Param__Result=UWwiseGroupValueInfoLibrary::SetAssetGuid(Z_Param_Out_Ref,Z_Param_Out_AssetGuid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWwiseGroupValueInfoLibrary::execSetGroupShortId)
	{
		P_GET_STRUCT_REF(FWwiseGroupValueInfo,Z_Param_Out_Ref);
		P_GET_PROPERTY(FIntProperty,Z_Param_GroupShortId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FWwiseGroupValueInfo*)Z_Param__Result=UWwiseGroupValueInfoLibrary::SetGroupShortId(Z_Param_Out_Ref,Z_Param_GroupShortId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWwiseGroupValueInfoLibrary::execSetWwiseName)
	{
		P_GET_STRUCT_REF(FWwiseGroupValueInfo,Z_Param_Out_Ref);
		P_GET_PROPERTY(FStrProperty,Z_Param_WwiseName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FWwiseGroupValueInfo*)Z_Param__Result=UWwiseGroupValueInfoLibrary::SetWwiseName(Z_Param_Out_Ref,Z_Param_WwiseName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWwiseGroupValueInfoLibrary::execSetWwiseShortId)
	{
		P_GET_STRUCT_REF(FWwiseGroupValueInfo,Z_Param_Out_Ref);
		P_GET_PROPERTY(FIntProperty,Z_Param_WwiseShortId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FWwiseGroupValueInfo*)Z_Param__Result=UWwiseGroupValueInfoLibrary::SetWwiseShortId(Z_Param_Out_Ref,Z_Param_WwiseShortId);
		P_NATIVE_END;
	}
	void UWwiseGroupValueInfoLibrary::StaticRegisterNativesUWwiseGroupValueInfoLibrary()
	{
		UClass* Class = UWwiseGroupValueInfoLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BreakStruct", &UWwiseGroupValueInfoLibrary::execBreakStruct },
			{ "GetAssetGuid", &UWwiseGroupValueInfoLibrary::execGetAssetGuid },
			{ "GetGroupShortId", &UWwiseGroupValueInfoLibrary::execGetGroupShortId },
			{ "GetWwiseName", &UWwiseGroupValueInfoLibrary::execGetWwiseName },
			{ "GetWwiseShortID", &UWwiseGroupValueInfoLibrary::execGetWwiseShortID },
			{ "MakeStruct", &UWwiseGroupValueInfoLibrary::execMakeStruct },
			{ "SetAssetGuid", &UWwiseGroupValueInfoLibrary::execSetAssetGuid },
			{ "SetGroupShortId", &UWwiseGroupValueInfoLibrary::execSetGroupShortId },
			{ "SetWwiseName", &UWwiseGroupValueInfoLibrary::execSetWwiseName },
			{ "SetWwiseShortId", &UWwiseGroupValueInfoLibrary::execSetWwiseShortId },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_BreakStruct_Statics
	{
		struct WwiseGroupValueInfoLibrary_eventBreakStruct_Parms
		{
			FWwiseGroupValueInfo Ref;
			FGuid OutAssetGuid;
			int32 OutGroupShortId;
			int32 OutWwiseShortId;
			FString OutWwiseName;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Ref;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutAssetGuid;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutGroupShortId;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutWwiseShortId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutWwiseName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_BreakStruct_Statics::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WwiseGroupValueInfoLibrary_eventBreakStruct_Parms, Ref), Z_Construct_UScriptStruct_FWwiseGroupValueInfo, METADATA_PARAMS(nullptr, 0) }; // 208656363
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_BreakStruct_Statics::NewProp_OutAssetGuid = { "OutAssetGuid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WwiseGroupValueInfoLibrary_eventBreakStruct_Parms, OutAssetGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_BreakStruct_Statics::NewProp_OutGroupShortId = { "OutGroupShortId", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WwiseGroupValueInfoLibrary_eventBreakStruct_Parms, OutGroupShortId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_BreakStruct_Statics::NewProp_OutWwiseShortId = { "OutWwiseShortId", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WwiseGroupValueInfoLibrary_eventBreakStruct_Parms, OutWwiseShortId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_BreakStruct_Statics::NewProp_OutWwiseName = { "OutWwiseName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WwiseGroupValueInfoLibrary_eventBreakStruct_Parms, OutWwiseName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_BreakStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_BreakStruct_Statics::NewProp_Ref,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_BreakStruct_Statics::NewProp_OutAssetGuid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_BreakStruct_Statics::NewProp_OutGroupShortId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_BreakStruct_Statics::NewProp_OutWwiseShortId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_BreakStruct_Statics::NewProp_OutWwiseName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_BreakStruct_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WwiseGroupValueInfoLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_BreakStruct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWwiseGroupValueInfoLibrary, nullptr, "BreakStruct", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_BreakStruct_Statics::WwiseGroupValueInfoLibrary_eventBreakStruct_Parms), Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_BreakStruct_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_BreakStruct_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_BreakStruct_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_BreakStruct_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_BreakStruct()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_BreakStruct_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetAssetGuid_Statics
	{
		struct WwiseGroupValueInfoLibrary_eventGetAssetGuid_Parms
		{
			FWwiseGroupValueInfo Ref;
			FGuid ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ref_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Ref;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetAssetGuid_Statics::NewProp_Ref_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetAssetGuid_Statics::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WwiseGroupValueInfoLibrary_eventGetAssetGuid_Parms, Ref), Z_Construct_UScriptStruct_FWwiseGroupValueInfo, METADATA_PARAMS(Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetAssetGuid_Statics::NewProp_Ref_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetAssetGuid_Statics::NewProp_Ref_MetaData)) }; // 208656363
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetAssetGuid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WwiseGroupValueInfoLibrary_eventGetAssetGuid_Parms, ReturnValue), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetAssetGuid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetAssetGuid_Statics::NewProp_Ref,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetAssetGuid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetAssetGuid_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WwiseGroupValueInfoLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetAssetGuid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWwiseGroupValueInfoLibrary, nullptr, "GetAssetGuid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetAssetGuid_Statics::WwiseGroupValueInfoLibrary_eventGetAssetGuid_Parms), Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetAssetGuid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetAssetGuid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetAssetGuid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetAssetGuid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetAssetGuid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetAssetGuid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetGroupShortId_Statics
	{
		struct WwiseGroupValueInfoLibrary_eventGetGroupShortId_Parms
		{
			FWwiseGroupValueInfo Ref;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ref_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Ref;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetGroupShortId_Statics::NewProp_Ref_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetGroupShortId_Statics::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WwiseGroupValueInfoLibrary_eventGetGroupShortId_Parms, Ref), Z_Construct_UScriptStruct_FWwiseGroupValueInfo, METADATA_PARAMS(Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetGroupShortId_Statics::NewProp_Ref_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetGroupShortId_Statics::NewProp_Ref_MetaData)) }; // 208656363
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetGroupShortId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WwiseGroupValueInfoLibrary_eventGetGroupShortId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetGroupShortId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetGroupShortId_Statics::NewProp_Ref,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetGroupShortId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetGroupShortId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WwiseGroupValueInfoLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetGroupShortId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWwiseGroupValueInfoLibrary, nullptr, "GetGroupShortId", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetGroupShortId_Statics::WwiseGroupValueInfoLibrary_eventGetGroupShortId_Parms), Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetGroupShortId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetGroupShortId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetGroupShortId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetGroupShortId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetGroupShortId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetGroupShortId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetWwiseName_Statics
	{
		struct WwiseGroupValueInfoLibrary_eventGetWwiseName_Parms
		{
			FWwiseGroupValueInfo Ref;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ref_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Ref;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetWwiseName_Statics::NewProp_Ref_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetWwiseName_Statics::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WwiseGroupValueInfoLibrary_eventGetWwiseName_Parms, Ref), Z_Construct_UScriptStruct_FWwiseGroupValueInfo, METADATA_PARAMS(Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetWwiseName_Statics::NewProp_Ref_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetWwiseName_Statics::NewProp_Ref_MetaData)) }; // 208656363
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetWwiseName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WwiseGroupValueInfoLibrary_eventGetWwiseName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetWwiseName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetWwiseName_Statics::NewProp_Ref,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetWwiseName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetWwiseName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WwiseGroupValueInfoLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetWwiseName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWwiseGroupValueInfoLibrary, nullptr, "GetWwiseName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetWwiseName_Statics::WwiseGroupValueInfoLibrary_eventGetWwiseName_Parms), Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetWwiseName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetWwiseName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetWwiseName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetWwiseName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetWwiseName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetWwiseName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetWwiseShortID_Statics
	{
		struct WwiseGroupValueInfoLibrary_eventGetWwiseShortID_Parms
		{
			FWwiseGroupValueInfo Ref;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ref_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Ref;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetWwiseShortID_Statics::NewProp_Ref_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetWwiseShortID_Statics::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WwiseGroupValueInfoLibrary_eventGetWwiseShortID_Parms, Ref), Z_Construct_UScriptStruct_FWwiseGroupValueInfo, METADATA_PARAMS(Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetWwiseShortID_Statics::NewProp_Ref_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetWwiseShortID_Statics::NewProp_Ref_MetaData)) }; // 208656363
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetWwiseShortID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WwiseGroupValueInfoLibrary_eventGetWwiseShortID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetWwiseShortID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetWwiseShortID_Statics::NewProp_Ref,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetWwiseShortID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetWwiseShortID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WwiseGroupValueInfoLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetWwiseShortID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWwiseGroupValueInfoLibrary, nullptr, "GetWwiseShortID", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetWwiseShortID_Statics::WwiseGroupValueInfoLibrary_eventGetWwiseShortID_Parms), Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetWwiseShortID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetWwiseShortID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetWwiseShortID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetWwiseShortID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetWwiseShortID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetWwiseShortID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_MakeStruct_Statics
	{
		struct WwiseGroupValueInfoLibrary_eventMakeStruct_Parms
		{
			FGuid AssetGuid;
			int32 GroupShortId;
			int32 WwiseShortId;
			FString WwiseName;
			FWwiseGroupValueInfo ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AssetGuid;
		static const UECodeGen_Private::FIntPropertyParams NewProp_GroupShortId;
		static const UECodeGen_Private::FIntPropertyParams NewProp_WwiseShortId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WwiseName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_WwiseName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_MakeStruct_Statics::NewProp_AssetGuid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_MakeStruct_Statics::NewProp_AssetGuid = { "AssetGuid", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WwiseGroupValueInfoLibrary_eventMakeStruct_Parms, AssetGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_MakeStruct_Statics::NewProp_AssetGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_MakeStruct_Statics::NewProp_AssetGuid_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_MakeStruct_Statics::NewProp_GroupShortId = { "GroupShortId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WwiseGroupValueInfoLibrary_eventMakeStruct_Parms, GroupShortId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_MakeStruct_Statics::NewProp_WwiseShortId = { "WwiseShortId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WwiseGroupValueInfoLibrary_eventMakeStruct_Parms, WwiseShortId), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_MakeStruct_Statics::NewProp_WwiseName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_MakeStruct_Statics::NewProp_WwiseName = { "WwiseName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WwiseGroupValueInfoLibrary_eventMakeStruct_Parms, WwiseName), METADATA_PARAMS(Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_MakeStruct_Statics::NewProp_WwiseName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_MakeStruct_Statics::NewProp_WwiseName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_MakeStruct_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WwiseGroupValueInfoLibrary_eventMakeStruct_Parms, ReturnValue), Z_Construct_UScriptStruct_FWwiseGroupValueInfo, METADATA_PARAMS(nullptr, 0) }; // 208656363
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_MakeStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_MakeStruct_Statics::NewProp_AssetGuid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_MakeStruct_Statics::NewProp_GroupShortId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_MakeStruct_Statics::NewProp_WwiseShortId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_MakeStruct_Statics::NewProp_WwiseName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_MakeStruct_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_MakeStruct_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WwiseGroupValueInfoLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_MakeStruct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWwiseGroupValueInfoLibrary, nullptr, "MakeStruct", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_MakeStruct_Statics::WwiseGroupValueInfoLibrary_eventMakeStruct_Parms), Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_MakeStruct_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_MakeStruct_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_MakeStruct_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_MakeStruct_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_MakeStruct()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_MakeStruct_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetAssetGuid_Statics
	{
		struct WwiseGroupValueInfoLibrary_eventSetAssetGuid_Parms
		{
			FWwiseGroupValueInfo Ref;
			FGuid AssetGuid;
			FWwiseGroupValueInfo ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ref_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Ref;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AssetGuid;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetAssetGuid_Statics::NewProp_Ref_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetAssetGuid_Statics::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WwiseGroupValueInfoLibrary_eventSetAssetGuid_Parms, Ref), Z_Construct_UScriptStruct_FWwiseGroupValueInfo, METADATA_PARAMS(Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetAssetGuid_Statics::NewProp_Ref_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetAssetGuid_Statics::NewProp_Ref_MetaData)) }; // 208656363
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetAssetGuid_Statics::NewProp_AssetGuid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetAssetGuid_Statics::NewProp_AssetGuid = { "AssetGuid", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WwiseGroupValueInfoLibrary_eventSetAssetGuid_Parms, AssetGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetAssetGuid_Statics::NewProp_AssetGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetAssetGuid_Statics::NewProp_AssetGuid_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetAssetGuid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WwiseGroupValueInfoLibrary_eventSetAssetGuid_Parms, ReturnValue), Z_Construct_UScriptStruct_FWwiseGroupValueInfo, METADATA_PARAMS(nullptr, 0) }; // 208656363
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetAssetGuid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetAssetGuid_Statics::NewProp_Ref,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetAssetGuid_Statics::NewProp_AssetGuid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetAssetGuid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetAssetGuid_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WwiseGroupValueInfoLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetAssetGuid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWwiseGroupValueInfoLibrary, nullptr, "SetAssetGuid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetAssetGuid_Statics::WwiseGroupValueInfoLibrary_eventSetAssetGuid_Parms), Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetAssetGuid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetAssetGuid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetAssetGuid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetAssetGuid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetAssetGuid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetAssetGuid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetGroupShortId_Statics
	{
		struct WwiseGroupValueInfoLibrary_eventSetGroupShortId_Parms
		{
			FWwiseGroupValueInfo Ref;
			int32 GroupShortId;
			FWwiseGroupValueInfo ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ref_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Ref;
		static const UECodeGen_Private::FIntPropertyParams NewProp_GroupShortId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetGroupShortId_Statics::NewProp_Ref_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetGroupShortId_Statics::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WwiseGroupValueInfoLibrary_eventSetGroupShortId_Parms, Ref), Z_Construct_UScriptStruct_FWwiseGroupValueInfo, METADATA_PARAMS(Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetGroupShortId_Statics::NewProp_Ref_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetGroupShortId_Statics::NewProp_Ref_MetaData)) }; // 208656363
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetGroupShortId_Statics::NewProp_GroupShortId = { "GroupShortId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WwiseGroupValueInfoLibrary_eventSetGroupShortId_Parms, GroupShortId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetGroupShortId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WwiseGroupValueInfoLibrary_eventSetGroupShortId_Parms, ReturnValue), Z_Construct_UScriptStruct_FWwiseGroupValueInfo, METADATA_PARAMS(nullptr, 0) }; // 208656363
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetGroupShortId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetGroupShortId_Statics::NewProp_Ref,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetGroupShortId_Statics::NewProp_GroupShortId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetGroupShortId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetGroupShortId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WwiseGroupValueInfoLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetGroupShortId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWwiseGroupValueInfoLibrary, nullptr, "SetGroupShortId", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetGroupShortId_Statics::WwiseGroupValueInfoLibrary_eventSetGroupShortId_Parms), Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetGroupShortId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetGroupShortId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetGroupShortId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetGroupShortId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetGroupShortId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetGroupShortId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetWwiseName_Statics
	{
		struct WwiseGroupValueInfoLibrary_eventSetWwiseName_Parms
		{
			FWwiseGroupValueInfo Ref;
			FString WwiseName;
			FWwiseGroupValueInfo ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ref_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Ref;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WwiseName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_WwiseName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetWwiseName_Statics::NewProp_Ref_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetWwiseName_Statics::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WwiseGroupValueInfoLibrary_eventSetWwiseName_Parms, Ref), Z_Construct_UScriptStruct_FWwiseGroupValueInfo, METADATA_PARAMS(Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetWwiseName_Statics::NewProp_Ref_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetWwiseName_Statics::NewProp_Ref_MetaData)) }; // 208656363
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetWwiseName_Statics::NewProp_WwiseName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetWwiseName_Statics::NewProp_WwiseName = { "WwiseName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WwiseGroupValueInfoLibrary_eventSetWwiseName_Parms, WwiseName), METADATA_PARAMS(Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetWwiseName_Statics::NewProp_WwiseName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetWwiseName_Statics::NewProp_WwiseName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetWwiseName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WwiseGroupValueInfoLibrary_eventSetWwiseName_Parms, ReturnValue), Z_Construct_UScriptStruct_FWwiseGroupValueInfo, METADATA_PARAMS(nullptr, 0) }; // 208656363
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetWwiseName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetWwiseName_Statics::NewProp_Ref,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetWwiseName_Statics::NewProp_WwiseName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetWwiseName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetWwiseName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WwiseGroupValueInfoLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetWwiseName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWwiseGroupValueInfoLibrary, nullptr, "SetWwiseName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetWwiseName_Statics::WwiseGroupValueInfoLibrary_eventSetWwiseName_Parms), Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetWwiseName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetWwiseName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetWwiseName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetWwiseName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetWwiseName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetWwiseName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetWwiseShortId_Statics
	{
		struct WwiseGroupValueInfoLibrary_eventSetWwiseShortId_Parms
		{
			FWwiseGroupValueInfo Ref;
			int32 WwiseShortId;
			FWwiseGroupValueInfo ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ref_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Ref;
		static const UECodeGen_Private::FIntPropertyParams NewProp_WwiseShortId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetWwiseShortId_Statics::NewProp_Ref_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetWwiseShortId_Statics::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WwiseGroupValueInfoLibrary_eventSetWwiseShortId_Parms, Ref), Z_Construct_UScriptStruct_FWwiseGroupValueInfo, METADATA_PARAMS(Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetWwiseShortId_Statics::NewProp_Ref_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetWwiseShortId_Statics::NewProp_Ref_MetaData)) }; // 208656363
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetWwiseShortId_Statics::NewProp_WwiseShortId = { "WwiseShortId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WwiseGroupValueInfoLibrary_eventSetWwiseShortId_Parms, WwiseShortId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetWwiseShortId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WwiseGroupValueInfoLibrary_eventSetWwiseShortId_Parms, ReturnValue), Z_Construct_UScriptStruct_FWwiseGroupValueInfo, METADATA_PARAMS(nullptr, 0) }; // 208656363
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetWwiseShortId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetWwiseShortId_Statics::NewProp_Ref,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetWwiseShortId_Statics::NewProp_WwiseShortId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetWwiseShortId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetWwiseShortId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WwiseGroupValueInfoLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetWwiseShortId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWwiseGroupValueInfoLibrary, nullptr, "SetWwiseShortId", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetWwiseShortId_Statics::WwiseGroupValueInfoLibrary_eventSetWwiseShortId_Parms), Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetWwiseShortId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetWwiseShortId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetWwiseShortId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetWwiseShortId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetWwiseShortId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetWwiseShortId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWwiseGroupValueInfoLibrary);
	UClass* Z_Construct_UClass_UWwiseGroupValueInfoLibrary_NoRegister()
	{
		return UWwiseGroupValueInfoLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UWwiseGroupValueInfoLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWwiseGroupValueInfoLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_WwiseResourceLoader,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWwiseGroupValueInfoLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_BreakStruct, "BreakStruct" }, // 4240526871
		{ &Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetAssetGuid, "GetAssetGuid" }, // 167034646
		{ &Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetGroupShortId, "GetGroupShortId" }, // 408076200
		{ &Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetWwiseName, "GetWwiseName" }, // 3070168169
		{ &Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_GetWwiseShortID, "GetWwiseShortID" }, // 4090747036
		{ &Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_MakeStruct, "MakeStruct" }, // 2492650644
		{ &Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetAssetGuid, "SetAssetGuid" }, // 3724260262
		{ &Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetGroupShortId, "SetGroupShortId" }, // 2700338928
		{ &Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetWwiseName, "SetWwiseName" }, // 2366825350
		{ &Z_Construct_UFunction_UWwiseGroupValueInfoLibrary_SetWwiseShortId, "SetWwiseShortId" }, // 3943099368
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWwiseGroupValueInfoLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "WwiseGroupValueInfoLibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/WwiseGroupValueInfoLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWwiseGroupValueInfoLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWwiseGroupValueInfoLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWwiseGroupValueInfoLibrary_Statics::ClassParams = {
		&UWwiseGroupValueInfoLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UWwiseGroupValueInfoLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseGroupValueInfoLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWwiseGroupValueInfoLibrary()
	{
		if (!Z_Registration_Info_UClass_UWwiseGroupValueInfoLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWwiseGroupValueInfoLibrary.OuterSingleton, Z_Construct_UClass_UWwiseGroupValueInfoLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWwiseGroupValueInfoLibrary.OuterSingleton;
	}
	template<> WWISERESOURCELOADER_API UClass* StaticClass<UWwiseGroupValueInfoLibrary>()
	{
		return UWwiseGroupValueInfoLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWwiseGroupValueInfoLibrary);
	UWwiseGroupValueInfoLibrary::~UWwiseGroupValueInfoLibrary() {}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_WwiseResourceLoader_Public_WwiseGroupValueInfoLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_WwiseResourceLoader_Public_WwiseGroupValueInfoLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWwiseGroupValueInfoLibrary, UWwiseGroupValueInfoLibrary::StaticClass, TEXT("UWwiseGroupValueInfoLibrary"), &Z_Registration_Info_UClass_UWwiseGroupValueInfoLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWwiseGroupValueInfoLibrary), 4019023665U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_WwiseResourceLoader_Public_WwiseGroupValueInfoLibrary_h_4161125521(TEXT("/Script/WwiseResourceLoader"),
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_WwiseResourceLoader_Public_WwiseGroupValueInfoLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_WwiseResourceLoader_Public_WwiseGroupValueInfoLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
