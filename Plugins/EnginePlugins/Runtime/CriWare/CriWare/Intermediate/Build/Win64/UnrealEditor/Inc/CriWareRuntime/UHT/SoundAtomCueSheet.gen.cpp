// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/SoundAtomCueSheet.h"
#include "CriWareRuntime/Public/AtomCueInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundAtomCueSheet() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_USoundAtomCue_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_USoundAtomCueSheet();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_USoundAtomCueSheet_NoRegister();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomCueInfo();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	DEFINE_FUNCTION(USoundAtomCueSheet::execApplyDspBusSnapshot)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SnapshotName);
		P_GET_PROPERTY(FIntProperty,Z_Param_Milliseconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		USoundAtomCueSheet::ApplyDspBusSnapshot(Z_Param_SnapshotName,Z_Param_Milliseconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundAtomCueSheet::execAttachDspBusSetting)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SettingName);
		P_FINISH;
		P_NATIVE_BEGIN;
		USoundAtomCueSheet::AttachDspBusSetting(Z_Param_SettingName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundAtomCueSheet::execBP_GetCueInfoFromId)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ID);
		P_GET_STRUCT_REF(FAtomCueInfo,Z_Param_Out_CueInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->BP_GetCueInfoFromId(Z_Param_ID,Z_Param_Out_CueInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundAtomCueSheet::execBP_GetCueInfoFromIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_STRUCT_REF(FAtomCueInfo,Z_Param_Out_CueInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->BP_GetCueInfoFromIndex(Z_Param_Index,Z_Param_Out_CueInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundAtomCueSheet::execBP_GetCueInfoFromName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_STRUCT_REF(FAtomCueInfo,Z_Param_Out_CueInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->BP_GetCueInfoFromName(Z_Param_Name,Z_Param_Out_CueInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundAtomCueSheet::execDetachDspBusSetting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		USoundAtomCueSheet::DetachDspBusSetting();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundAtomCueSheet::execGetAtomCueById)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_CueId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USoundAtomCue**)Z_Param__Result=P_THIS->GetAtomCueById(Z_Param_CueId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundAtomCueSheet::execGetAtomCueByIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_CueIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USoundAtomCue**)Z_Param__Result=P_THIS->GetAtomCueByIndex(Z_Param_CueIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundAtomCueSheet::execGetAtomCueByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_CueName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USoundAtomCue**)Z_Param__Result=P_THIS->GetAtomCueByName(Z_Param_CueName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundAtomCueSheet::execGetNumCues)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumCues();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundAtomCueSheet::execIsLoaded)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLoaded();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundAtomCueSheet::execLoadAcb)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_AcbName);
		P_GET_UBOOL(Z_Param_bAddToLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USoundAtomCueSheet**)Z_Param__Result=USoundAtomCueSheet::LoadAcb(Z_Param_AcbName,Z_Param_bAddToLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundAtomCueSheet::execLoadAtomCueSheet)
	{
		P_GET_OBJECT(USoundAtomCueSheet,Z_Param_CueSheet);
		P_GET_UBOOL(Z_Param_bAddToLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USoundAtomCueSheet**)Z_Param__Result=USoundAtomCueSheet::LoadAtomCueSheet(Z_Param_CueSheet,Z_Param_bAddToLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundAtomCueSheet::execReleaseAcb)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_AcbName);
		P_FINISH;
		P_NATIVE_BEGIN;
		USoundAtomCueSheet::ReleaseAcb(Z_Param_AcbName);
		P_NATIVE_END;
	}
	void USoundAtomCueSheet::StaticRegisterNativesUSoundAtomCueSheet()
	{
		UClass* Class = USoundAtomCueSheet::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyDspBusSnapshot", &USoundAtomCueSheet::execApplyDspBusSnapshot },
			{ "AttachDspBusSetting", &USoundAtomCueSheet::execAttachDspBusSetting },
			{ "BP_GetCueInfoFromId", &USoundAtomCueSheet::execBP_GetCueInfoFromId },
			{ "BP_GetCueInfoFromIndex", &USoundAtomCueSheet::execBP_GetCueInfoFromIndex },
			{ "BP_GetCueInfoFromName", &USoundAtomCueSheet::execBP_GetCueInfoFromName },
			{ "DetachDspBusSetting", &USoundAtomCueSheet::execDetachDspBusSetting },
			{ "GetAtomCueById", &USoundAtomCueSheet::execGetAtomCueById },
			{ "GetAtomCueByIndex", &USoundAtomCueSheet::execGetAtomCueByIndex },
			{ "GetAtomCueByName", &USoundAtomCueSheet::execGetAtomCueByName },
			{ "GetNumCues", &USoundAtomCueSheet::execGetNumCues },
			{ "IsLoaded", &USoundAtomCueSheet::execIsLoaded },
			{ "LoadAcb", &USoundAtomCueSheet::execLoadAcb },
			{ "LoadAtomCueSheet", &USoundAtomCueSheet::execLoadAtomCueSheet },
			{ "ReleaseAcb", &USoundAtomCueSheet::execReleaseAcb },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USoundAtomCueSheet_ApplyDspBusSnapshot_Statics
	{
		struct SoundAtomCueSheet_eventApplyDspBusSnapshot_Parms
		{
			FString SnapshotName;
			int32 Milliseconds;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SnapshotName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SnapshotName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Milliseconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundAtomCueSheet_ApplyDspBusSnapshot_Statics::NewProp_SnapshotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USoundAtomCueSheet_ApplyDspBusSnapshot_Statics::NewProp_SnapshotName = { "SnapshotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SoundAtomCueSheet_eventApplyDspBusSnapshot_Parms, SnapshotName), METADATA_PARAMS(Z_Construct_UFunction_USoundAtomCueSheet_ApplyDspBusSnapshot_Statics::NewProp_SnapshotName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_ApplyDspBusSnapshot_Statics::NewProp_SnapshotName_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USoundAtomCueSheet_ApplyDspBusSnapshot_Statics::NewProp_Milliseconds = { "Milliseconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SoundAtomCueSheet_eventApplyDspBusSnapshot_Parms, Milliseconds), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundAtomCueSheet_ApplyDspBusSnapshot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCueSheet_ApplyDspBusSnapshot_Statics::NewProp_SnapshotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCueSheet_ApplyDspBusSnapshot_Statics::NewProp_Milliseconds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundAtomCueSheet_ApplyDspBusSnapshot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SoundAtomCueSheet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundAtomCueSheet_ApplyDspBusSnapshot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomCueSheet, nullptr, "ApplyDspBusSnapshot", nullptr, nullptr, sizeof(Z_Construct_UFunction_USoundAtomCueSheet_ApplyDspBusSnapshot_Statics::SoundAtomCueSheet_eventApplyDspBusSnapshot_Parms), Z_Construct_UFunction_USoundAtomCueSheet_ApplyDspBusSnapshot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_ApplyDspBusSnapshot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundAtomCueSheet_ApplyDspBusSnapshot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_ApplyDspBusSnapshot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundAtomCueSheet_ApplyDspBusSnapshot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundAtomCueSheet_ApplyDspBusSnapshot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundAtomCueSheet_AttachDspBusSetting_Statics
	{
		struct SoundAtomCueSheet_eventAttachDspBusSetting_Parms
		{
			FString SettingName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SettingName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SettingName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundAtomCueSheet_AttachDspBusSetting_Statics::NewProp_SettingName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USoundAtomCueSheet_AttachDspBusSetting_Statics::NewProp_SettingName = { "SettingName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SoundAtomCueSheet_eventAttachDspBusSetting_Parms, SettingName), METADATA_PARAMS(Z_Construct_UFunction_USoundAtomCueSheet_AttachDspBusSetting_Statics::NewProp_SettingName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_AttachDspBusSetting_Statics::NewProp_SettingName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundAtomCueSheet_AttachDspBusSetting_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCueSheet_AttachDspBusSetting_Statics::NewProp_SettingName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundAtomCueSheet_AttachDspBusSetting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SoundAtomCueSheet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundAtomCueSheet_AttachDspBusSetting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomCueSheet, nullptr, "AttachDspBusSetting", nullptr, nullptr, sizeof(Z_Construct_UFunction_USoundAtomCueSheet_AttachDspBusSetting_Statics::SoundAtomCueSheet_eventAttachDspBusSetting_Parms), Z_Construct_UFunction_USoundAtomCueSheet_AttachDspBusSetting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_AttachDspBusSetting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundAtomCueSheet_AttachDspBusSetting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_AttachDspBusSetting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundAtomCueSheet_AttachDspBusSetting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundAtomCueSheet_AttachDspBusSetting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromId_Statics
	{
		struct SoundAtomCueSheet_eventBP_GetCueInfoFromId_Parms
		{
			int32 ID;
			FAtomCueInfo CueInfo;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ID;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CueInfo;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromId_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SoundAtomCueSheet_eventBP_GetCueInfoFromId_Parms, ID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromId_Statics::NewProp_CueInfo = { "CueInfo", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SoundAtomCueSheet_eventBP_GetCueInfoFromId_Parms, CueInfo), Z_Construct_UScriptStruct_FAtomCueInfo, METADATA_PARAMS(nullptr, 0) }; // 2456355479
	void Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromId_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SoundAtomCueSheet_eventBP_GetCueInfoFromId_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SoundAtomCueSheet_eventBP_GetCueInfoFromId_Parms), &Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromId_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromId_Statics::NewProp_ID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromId_Statics::NewProp_CueInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SoundAtomCueSheet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomCueSheet, nullptr, "BP_GetCueInfoFromId", nullptr, nullptr, sizeof(Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromId_Statics::SoundAtomCueSheet_eventBP_GetCueInfoFromId_Parms), Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromIndex_Statics
	{
		struct SoundAtomCueSheet_eventBP_GetCueInfoFromIndex_Parms
		{
			int32 Index;
			FAtomCueInfo CueInfo;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CueInfo;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SoundAtomCueSheet_eventBP_GetCueInfoFromIndex_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromIndex_Statics::NewProp_CueInfo = { "CueInfo", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SoundAtomCueSheet_eventBP_GetCueInfoFromIndex_Parms, CueInfo), Z_Construct_UScriptStruct_FAtomCueInfo, METADATA_PARAMS(nullptr, 0) }; // 2456355479
	void Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SoundAtomCueSheet_eventBP_GetCueInfoFromIndex_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SoundAtomCueSheet_eventBP_GetCueInfoFromIndex_Parms), &Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromIndex_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromIndex_Statics::NewProp_CueInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SoundAtomCueSheet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomCueSheet, nullptr, "BP_GetCueInfoFromIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromIndex_Statics::SoundAtomCueSheet_eventBP_GetCueInfoFromIndex_Parms), Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromName_Statics
	{
		struct SoundAtomCueSheet_eventBP_GetCueInfoFromName_Parms
		{
			FString Name;
			FAtomCueInfo CueInfo;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CueInfo;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromName_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromName_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SoundAtomCueSheet_eventBP_GetCueInfoFromName_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromName_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromName_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromName_Statics::NewProp_CueInfo = { "CueInfo", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SoundAtomCueSheet_eventBP_GetCueInfoFromName_Parms, CueInfo), Z_Construct_UScriptStruct_FAtomCueInfo, METADATA_PARAMS(nullptr, 0) }; // 2456355479
	void Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SoundAtomCueSheet_eventBP_GetCueInfoFromName_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SoundAtomCueSheet_eventBP_GetCueInfoFromName_Parms), &Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromName_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromName_Statics::NewProp_CueInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SoundAtomCueSheet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomCueSheet, nullptr, "BP_GetCueInfoFromName", nullptr, nullptr, sizeof(Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromName_Statics::SoundAtomCueSheet_eventBP_GetCueInfoFromName_Parms), Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundAtomCueSheet_DetachDspBusSetting_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundAtomCueSheet_DetachDspBusSetting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SoundAtomCueSheet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundAtomCueSheet_DetachDspBusSetting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomCueSheet, nullptr, "DetachDspBusSetting", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundAtomCueSheet_DetachDspBusSetting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_DetachDspBusSetting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundAtomCueSheet_DetachDspBusSetting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundAtomCueSheet_DetachDspBusSetting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueById_Statics
	{
		struct SoundAtomCueSheet_eventGetAtomCueById_Parms
		{
			int32 CueId;
			USoundAtomCue* ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_CueId;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueById_Statics::NewProp_CueId = { "CueId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SoundAtomCueSheet_eventGetAtomCueById_Parms, CueId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueById_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SoundAtomCueSheet_eventGetAtomCueById_Parms, ReturnValue), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueById_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueById_Statics::NewProp_CueId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueById_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueById_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SoundAtomCueSheet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueById_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomCueSheet, nullptr, "GetAtomCueById", nullptr, nullptr, sizeof(Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueById_Statics::SoundAtomCueSheet_eventGetAtomCueById_Parms), Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueById_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueById_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueById_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueById_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueById()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueById_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByIndex_Statics
	{
		struct SoundAtomCueSheet_eventGetAtomCueByIndex_Parms
		{
			int32 CueIndex;
			USoundAtomCue* ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_CueIndex;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByIndex_Statics::NewProp_CueIndex = { "CueIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SoundAtomCueSheet_eventGetAtomCueByIndex_Parms, CueIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SoundAtomCueSheet_eventGetAtomCueByIndex_Parms, ReturnValue), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByIndex_Statics::NewProp_CueIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SoundAtomCueSheet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomCueSheet, nullptr, "GetAtomCueByIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByIndex_Statics::SoundAtomCueSheet_eventGetAtomCueByIndex_Parms), Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByName_Statics
	{
		struct SoundAtomCueSheet_eventGetAtomCueByName_Parms
		{
			FString CueName;
			USoundAtomCue* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CueName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CueName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByName_Statics::NewProp_CueName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByName_Statics::NewProp_CueName = { "CueName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SoundAtomCueSheet_eventGetAtomCueByName_Parms, CueName), METADATA_PARAMS(Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByName_Statics::NewProp_CueName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByName_Statics::NewProp_CueName_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SoundAtomCueSheet_eventGetAtomCueByName_Parms, ReturnValue), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByName_Statics::NewProp_CueName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SoundAtomCueSheet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomCueSheet, nullptr, "GetAtomCueByName", nullptr, nullptr, sizeof(Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByName_Statics::SoundAtomCueSheet_eventGetAtomCueByName_Parms), Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundAtomCueSheet_GetNumCues_Statics
	{
		struct SoundAtomCueSheet_eventGetNumCues_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USoundAtomCueSheet_GetNumCues_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SoundAtomCueSheet_eventGetNumCues_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundAtomCueSheet_GetNumCues_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCueSheet_GetNumCues_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundAtomCueSheet_GetNumCues_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SoundAtomCueSheet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundAtomCueSheet_GetNumCues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomCueSheet, nullptr, "GetNumCues", nullptr, nullptr, sizeof(Z_Construct_UFunction_USoundAtomCueSheet_GetNumCues_Statics::SoundAtomCueSheet_eventGetNumCues_Parms), Z_Construct_UFunction_USoundAtomCueSheet_GetNumCues_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_GetNumCues_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundAtomCueSheet_GetNumCues_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_GetNumCues_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundAtomCueSheet_GetNumCues()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundAtomCueSheet_GetNumCues_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundAtomCueSheet_IsLoaded_Statics
	{
		struct SoundAtomCueSheet_eventIsLoaded_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USoundAtomCueSheet_IsLoaded_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SoundAtomCueSheet_eventIsLoaded_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USoundAtomCueSheet_IsLoaded_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SoundAtomCueSheet_eventIsLoaded_Parms), &Z_Construct_UFunction_USoundAtomCueSheet_IsLoaded_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundAtomCueSheet_IsLoaded_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCueSheet_IsLoaded_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundAtomCueSheet_IsLoaded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SoundAtomCueSheet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundAtomCueSheet_IsLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomCueSheet, nullptr, "IsLoaded", nullptr, nullptr, sizeof(Z_Construct_UFunction_USoundAtomCueSheet_IsLoaded_Statics::SoundAtomCueSheet_eventIsLoaded_Parms), Z_Construct_UFunction_USoundAtomCueSheet_IsLoaded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_IsLoaded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundAtomCueSheet_IsLoaded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_IsLoaded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundAtomCueSheet_IsLoaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundAtomCueSheet_IsLoaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundAtomCueSheet_LoadAcb_Statics
	{
		struct SoundAtomCueSheet_eventLoadAcb_Parms
		{
			FName AcbName;
			bool bAddToLevel;
			USoundAtomCueSheet* ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_AcbName;
		static void NewProp_bAddToLevel_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddToLevel;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USoundAtomCueSheet_LoadAcb_Statics::NewProp_AcbName = { "AcbName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SoundAtomCueSheet_eventLoadAcb_Parms, AcbName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USoundAtomCueSheet_LoadAcb_Statics::NewProp_bAddToLevel_SetBit(void* Obj)
	{
		((SoundAtomCueSheet_eventLoadAcb_Parms*)Obj)->bAddToLevel = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USoundAtomCueSheet_LoadAcb_Statics::NewProp_bAddToLevel = { "bAddToLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SoundAtomCueSheet_eventLoadAcb_Parms), &Z_Construct_UFunction_USoundAtomCueSheet_LoadAcb_Statics::NewProp_bAddToLevel_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USoundAtomCueSheet_LoadAcb_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SoundAtomCueSheet_eventLoadAcb_Parms, ReturnValue), Z_Construct_UClass_USoundAtomCueSheet_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundAtomCueSheet_LoadAcb_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCueSheet_LoadAcb_Statics::NewProp_AcbName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCueSheet_LoadAcb_Statics::NewProp_bAddToLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCueSheet_LoadAcb_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundAtomCueSheet_LoadAcb_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SoundAtomCueSheet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundAtomCueSheet_LoadAcb_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomCueSheet, nullptr, "LoadAcb", nullptr, nullptr, sizeof(Z_Construct_UFunction_USoundAtomCueSheet_LoadAcb_Statics::SoundAtomCueSheet_eventLoadAcb_Parms), Z_Construct_UFunction_USoundAtomCueSheet_LoadAcb_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_LoadAcb_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundAtomCueSheet_LoadAcb_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_LoadAcb_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundAtomCueSheet_LoadAcb()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundAtomCueSheet_LoadAcb_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundAtomCueSheet_LoadAtomCueSheet_Statics
	{
		struct SoundAtomCueSheet_eventLoadAtomCueSheet_Parms
		{
			USoundAtomCueSheet* CueSheet;
			bool bAddToLevel;
			USoundAtomCueSheet* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CueSheet;
		static void NewProp_bAddToLevel_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddToLevel;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USoundAtomCueSheet_LoadAtomCueSheet_Statics::NewProp_CueSheet = { "CueSheet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SoundAtomCueSheet_eventLoadAtomCueSheet_Parms, CueSheet), Z_Construct_UClass_USoundAtomCueSheet_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USoundAtomCueSheet_LoadAtomCueSheet_Statics::NewProp_bAddToLevel_SetBit(void* Obj)
	{
		((SoundAtomCueSheet_eventLoadAtomCueSheet_Parms*)Obj)->bAddToLevel = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USoundAtomCueSheet_LoadAtomCueSheet_Statics::NewProp_bAddToLevel = { "bAddToLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SoundAtomCueSheet_eventLoadAtomCueSheet_Parms), &Z_Construct_UFunction_USoundAtomCueSheet_LoadAtomCueSheet_Statics::NewProp_bAddToLevel_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USoundAtomCueSheet_LoadAtomCueSheet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SoundAtomCueSheet_eventLoadAtomCueSheet_Parms, ReturnValue), Z_Construct_UClass_USoundAtomCueSheet_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundAtomCueSheet_LoadAtomCueSheet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCueSheet_LoadAtomCueSheet_Statics::NewProp_CueSheet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCueSheet_LoadAtomCueSheet_Statics::NewProp_bAddToLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCueSheet_LoadAtomCueSheet_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundAtomCueSheet_LoadAtomCueSheet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SoundAtomCueSheet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundAtomCueSheet_LoadAtomCueSheet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomCueSheet, nullptr, "LoadAtomCueSheet", nullptr, nullptr, sizeof(Z_Construct_UFunction_USoundAtomCueSheet_LoadAtomCueSheet_Statics::SoundAtomCueSheet_eventLoadAtomCueSheet_Parms), Z_Construct_UFunction_USoundAtomCueSheet_LoadAtomCueSheet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_LoadAtomCueSheet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundAtomCueSheet_LoadAtomCueSheet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_LoadAtomCueSheet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundAtomCueSheet_LoadAtomCueSheet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundAtomCueSheet_LoadAtomCueSheet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundAtomCueSheet_ReleaseAcb_Statics
	{
		struct SoundAtomCueSheet_eventReleaseAcb_Parms
		{
			FName AcbName;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_AcbName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USoundAtomCueSheet_ReleaseAcb_Statics::NewProp_AcbName = { "AcbName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SoundAtomCueSheet_eventReleaseAcb_Parms, AcbName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundAtomCueSheet_ReleaseAcb_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundAtomCueSheet_ReleaseAcb_Statics::NewProp_AcbName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundAtomCueSheet_ReleaseAcb_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SoundAtomCueSheet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundAtomCueSheet_ReleaseAcb_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundAtomCueSheet, nullptr, "ReleaseAcb", nullptr, nullptr, sizeof(Z_Construct_UFunction_USoundAtomCueSheet_ReleaseAcb_Statics::SoundAtomCueSheet_eventReleaseAcb_Parms), Z_Construct_UFunction_USoundAtomCueSheet_ReleaseAcb_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_ReleaseAcb_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundAtomCueSheet_ReleaseAcb_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundAtomCueSheet_ReleaseAcb_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundAtomCueSheet_ReleaseAcb()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundAtomCueSheet_ReleaseAcb_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundAtomCueSheet);
	UClass* Z_Construct_UClass_USoundAtomCueSheet_NoRegister()
	{
		return USoundAtomCueSheet::StaticClass();
	}
	struct Z_Construct_UClass_USoundAtomCueSheet_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Contains_MetaData[];
#endif
		static void NewProp_Contains_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Contains;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AcbFilePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AcbFilePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CueSheetName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CueSheetName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumSlots_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumSlots;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideAwbDirectory_MetaData[];
#endif
		static void NewProp_bOverrideAwbDirectory_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideAwbDirectory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AwbDirectory_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AwbDirectory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AdditionalData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CueInfos_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CueInfos_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CueInfos;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundAtomCueSheet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USoundAtomCueSheet_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USoundAtomCueSheet_ApplyDspBusSnapshot, "ApplyDspBusSnapshot" }, // 2869263681
		{ &Z_Construct_UFunction_USoundAtomCueSheet_AttachDspBusSetting, "AttachDspBusSetting" }, // 2277508679
		{ &Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromId, "BP_GetCueInfoFromId" }, // 2144787185
		{ &Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromIndex, "BP_GetCueInfoFromIndex" }, // 2511019807
		{ &Z_Construct_UFunction_USoundAtomCueSheet_BP_GetCueInfoFromName, "BP_GetCueInfoFromName" }, // 3948235695
		{ &Z_Construct_UFunction_USoundAtomCueSheet_DetachDspBusSetting, "DetachDspBusSetting" }, // 1850632565
		{ &Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueById, "GetAtomCueById" }, // 974409807
		{ &Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByIndex, "GetAtomCueByIndex" }, // 3869332278
		{ &Z_Construct_UFunction_USoundAtomCueSheet_GetAtomCueByName, "GetAtomCueByName" }, // 1410603932
		{ &Z_Construct_UFunction_USoundAtomCueSheet_GetNumCues, "GetNumCues" }, // 3331713000
		{ &Z_Construct_UFunction_USoundAtomCueSheet_IsLoaded, "IsLoaded" }, // 3830274073
		{ &Z_Construct_UFunction_USoundAtomCueSheet_LoadAcb, "LoadAcb" }, // 510197563
		{ &Z_Construct_UFunction_USoundAtomCueSheet_LoadAtomCueSheet, "LoadAtomCueSheet" }, // 2430734395
		{ &Z_Construct_UFunction_USoundAtomCueSheet_ReleaseAcb, "ReleaseAcb" }, // 2058277084
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomCueSheet_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SoundAtomCueSheet.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SoundAtomCueSheet.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_Contains_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SoundAtomCueSheet" },
		{ "ModuleRelativePath", "Public/SoundAtomCueSheet.h" },
	};
#endif
	void Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_Contains_SetBit(void* Obj)
	{
		((USoundAtomCueSheet*)Obj)->Contains = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_Contains = { "Contains", nullptr, (EPropertyFlags)0x0010000000002005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USoundAtomCueSheet), &Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_Contains_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_Contains_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_Contains_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_AcbFilePath_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SoundAtomCueSheet" },
		{ "ModuleRelativePath", "Public/SoundAtomCueSheet.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_AcbFilePath = { "AcbFilePath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundAtomCueSheet, AcbFilePath), METADATA_PARAMS(Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_AcbFilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_AcbFilePath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_CueSheetName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SoundAtomCueSheet" },
		{ "ModuleRelativePath", "Public/SoundAtomCueSheet.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_CueSheetName = { "CueSheetName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundAtomCueSheet, CueSheetName), METADATA_PARAMS(Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_CueSheetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_CueSheetName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_NumSlots_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SoundAtomCueSheet" },
		{ "ModuleRelativePath", "Public/SoundAtomCueSheet.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_NumSlots = { "NumSlots", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundAtomCueSheet, NumSlots), METADATA_PARAMS(Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_NumSlots_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_NumSlots_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_bOverrideAwbDirectory_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SoundAtomCueSheet" },
		{ "ModuleRelativePath", "Public/SoundAtomCueSheet.h" },
	};
#endif
	void Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_bOverrideAwbDirectory_SetBit(void* Obj)
	{
		((USoundAtomCueSheet*)Obj)->bOverrideAwbDirectory = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_bOverrideAwbDirectory = { "bOverrideAwbDirectory", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USoundAtomCueSheet), &Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_bOverrideAwbDirectory_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_bOverrideAwbDirectory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_bOverrideAwbDirectory_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_AwbDirectory_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SoundAtomCueSheet" },
		{ "ModuleRelativePath", "Public/SoundAtomCueSheet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_AwbDirectory = { "AwbDirectory", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundAtomCueSheet, AwbDirectory), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_AwbDirectory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_AwbDirectory_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_AdditionalData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SoundAtomCueSheet" },
		{ "ModuleRelativePath", "Public/SoundAtomCueSheet.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_AdditionalData = { "AdditionalData", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundAtomCueSheet, AdditionalData), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_AdditionalData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_AdditionalData_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_CueInfos_Inner = { "CueInfos", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAtomCueInfo, METADATA_PARAMS(nullptr, 0) }; // 2456355479
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_CueInfos_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SoundAtomCueSheet" },
		{ "ModuleRelativePath", "Public/SoundAtomCueSheet.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_CueInfos = { "CueInfos", nullptr, (EPropertyFlags)0x00200c0000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundAtomCueSheet, CueInfos), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_CueInfos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_CueInfos_MetaData)) }; // 2456355479
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundAtomCueSheet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_Contains,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_AcbFilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_CueSheetName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_NumSlots,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_bOverrideAwbDirectory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_AwbDirectory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_AdditionalData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_CueInfos_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAtomCueSheet_Statics::NewProp_CueInfos,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundAtomCueSheet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundAtomCueSheet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundAtomCueSheet_Statics::ClassParams = {
		&USoundAtomCueSheet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USoundAtomCueSheet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCueSheet_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USoundAtomCueSheet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAtomCueSheet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundAtomCueSheet()
	{
		if (!Z_Registration_Info_UClass_USoundAtomCueSheet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundAtomCueSheet.OuterSingleton, Z_Construct_UClass_USoundAtomCueSheet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USoundAtomCueSheet.OuterSingleton;
	}
	template<> CRIWARERUNTIME_API UClass* StaticClass<USoundAtomCueSheet>()
	{
		return USoundAtomCueSheet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundAtomCueSheet);
	USoundAtomCueSheet::~USoundAtomCueSheet() {}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_SoundAtomCueSheet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_SoundAtomCueSheet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USoundAtomCueSheet, USoundAtomCueSheet::StaticClass, TEXT("USoundAtomCueSheet"), &Z_Registration_Info_UClass_USoundAtomCueSheet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundAtomCueSheet), 2628736704U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_SoundAtomCueSheet_h_4069512656(TEXT("/Script/CriWareRuntime"),
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_SoundAtomCueSheet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_SoundAtomCueSheet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
