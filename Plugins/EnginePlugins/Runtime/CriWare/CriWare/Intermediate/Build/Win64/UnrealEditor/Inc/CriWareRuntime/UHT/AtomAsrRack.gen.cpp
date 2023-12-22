// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/AtomAsrRack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomAsrRack() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomAsrRack();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomAsrRack_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	DEFINE_FUNCTION(UAtomAsrRack::execApplyDspBusSnapshot)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SnapshotName);
		P_GET_PROPERTY(FIntProperty,Z_Param_Milliseconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyDspBusSnapshot(Z_Param_SnapshotName,Z_Param_Milliseconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomAsrRack::execAttachDspBusSetting)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SettingName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AttachDspBusSetting(Z_Param_SettingName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomAsrRack::execConnectToPadSpeaker)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_UserIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ConnectToPadSpeaker(Z_Param_UserIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomAsrRack::execConnectToPadVibrator)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_UserIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ConnectToPadVibrator(Z_Param_UserIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomAsrRack::execDetachDspBusSetting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DetachDspBusSetting();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomAsrRack::execEnableBinauralizer)
	{
		P_GET_UBOOL(Z_Param_bIsEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAtomAsrRack::EnableBinauralizer(Z_Param_bIsEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomAsrRack::execGetAsrRack)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AsrRackID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAtomAsrRack**)Z_Param__Result=UAtomAsrRack::GetAsrRack(Z_Param_AsrRackID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomAsrRack::execGetBusAnalyzerInfo)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_DspBusName);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_num_channels);
		P_GET_TARRAY_REF(float,Z_Param_Out_rms_levels);
		P_GET_TARRAY_REF(float,Z_Param_Out_peak_levels);
		P_GET_TARRAY_REF(float,Z_Param_Out_peak_hold_levels);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetBusAnalyzerInfo(Z_Param_DspBusName,Z_Param_Out_num_channels,Z_Param_Out_rms_levels,Z_Param_Out_peak_levels,Z_Param_Out_peak_hold_levels);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomAsrRack::execGetCurrentAppliedSnapshot)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AsrRackID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetCurrentAppliedSnapshot(Z_Param_AsrRackID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomAsrRack::execGetDefaultAsrRack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAtomAsrRack**)Z_Param__Result=UAtomAsrRack::GetDefaultAsrRack();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomAsrRack::execIsEnabledBinauralizer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAtomAsrRack::IsEnabledBinauralizer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomAsrRack::execSetAisacControlByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_control_name);
		P_GET_PROPERTY(FFloatProperty,Z_Param_control_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAisacControlByName(Z_Param_control_name,Z_Param_control_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomAsrRack::execSetBusSendLevelByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SourceBusName);
		P_GET_PROPERTY(FStrProperty,Z_Param_DestBusName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Level);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBusSendLevelByName(Z_Param_SourceBusName,Z_Param_DestBusName,Z_Param_Level);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomAsrRack::execSetBusVolumeByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_BusName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Volume);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBusVolumeByName(Z_Param_BusName,Z_Param_Volume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomAsrRack::execSetEffectBypass)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_BusName);
		P_GET_PROPERTY(FStrProperty,Z_Param_EffectName);
		P_GET_UBOOL(Z_Param_Bypasses);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEffectBypass(Z_Param_BusName,Z_Param_EffectName,Z_Param_Bypasses);
		P_NATIVE_END;
	}
	void UAtomAsrRack::StaticRegisterNativesUAtomAsrRack()
	{
		UClass* Class = UAtomAsrRack::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyDspBusSnapshot", &UAtomAsrRack::execApplyDspBusSnapshot },
			{ "AttachDspBusSetting", &UAtomAsrRack::execAttachDspBusSetting },
			{ "ConnectToPadSpeaker", &UAtomAsrRack::execConnectToPadSpeaker },
			{ "ConnectToPadVibrator", &UAtomAsrRack::execConnectToPadVibrator },
			{ "DetachDspBusSetting", &UAtomAsrRack::execDetachDspBusSetting },
			{ "EnableBinauralizer", &UAtomAsrRack::execEnableBinauralizer },
			{ "GetAsrRack", &UAtomAsrRack::execGetAsrRack },
			{ "GetBusAnalyzerInfo", &UAtomAsrRack::execGetBusAnalyzerInfo },
			{ "GetCurrentAppliedSnapshot", &UAtomAsrRack::execGetCurrentAppliedSnapshot },
			{ "GetDefaultAsrRack", &UAtomAsrRack::execGetDefaultAsrRack },
			{ "IsEnabledBinauralizer", &UAtomAsrRack::execIsEnabledBinauralizer },
			{ "SetAisacControlByName", &UAtomAsrRack::execSetAisacControlByName },
			{ "SetBusSendLevelByName", &UAtomAsrRack::execSetBusSendLevelByName },
			{ "SetBusVolumeByName", &UAtomAsrRack::execSetBusVolumeByName },
			{ "SetEffectBypass", &UAtomAsrRack::execSetEffectBypass },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAtomAsrRack_ApplyDspBusSnapshot_Statics
	{
		struct AtomAsrRack_eventApplyDspBusSnapshot_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomAsrRack_ApplyDspBusSnapshot_Statics::NewProp_SnapshotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtomAsrRack_ApplyDspBusSnapshot_Statics::NewProp_SnapshotName = { "SnapshotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomAsrRack_eventApplyDspBusSnapshot_Parms, SnapshotName), METADATA_PARAMS(Z_Construct_UFunction_UAtomAsrRack_ApplyDspBusSnapshot_Statics::NewProp_SnapshotName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomAsrRack_ApplyDspBusSnapshot_Statics::NewProp_SnapshotName_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtomAsrRack_ApplyDspBusSnapshot_Statics::NewProp_Milliseconds = { "Milliseconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomAsrRack_eventApplyDspBusSnapshot_Parms, Milliseconds), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomAsrRack_ApplyDspBusSnapshot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomAsrRack_ApplyDspBusSnapshot_Statics::NewProp_SnapshotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomAsrRack_ApplyDspBusSnapshot_Statics::NewProp_Milliseconds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomAsrRack_ApplyDspBusSnapshot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomAsrRack.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomAsrRack_ApplyDspBusSnapshot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomAsrRack, nullptr, "ApplyDspBusSnapshot", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomAsrRack_ApplyDspBusSnapshot_Statics::AtomAsrRack_eventApplyDspBusSnapshot_Parms), Z_Construct_UFunction_UAtomAsrRack_ApplyDspBusSnapshot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomAsrRack_ApplyDspBusSnapshot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomAsrRack_ApplyDspBusSnapshot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomAsrRack_ApplyDspBusSnapshot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomAsrRack_ApplyDspBusSnapshot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomAsrRack_ApplyDspBusSnapshot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomAsrRack_AttachDspBusSetting_Statics
	{
		struct AtomAsrRack_eventAttachDspBusSetting_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomAsrRack_AttachDspBusSetting_Statics::NewProp_SettingName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtomAsrRack_AttachDspBusSetting_Statics::NewProp_SettingName = { "SettingName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomAsrRack_eventAttachDspBusSetting_Parms, SettingName), METADATA_PARAMS(Z_Construct_UFunction_UAtomAsrRack_AttachDspBusSetting_Statics::NewProp_SettingName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomAsrRack_AttachDspBusSetting_Statics::NewProp_SettingName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomAsrRack_AttachDspBusSetting_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomAsrRack_AttachDspBusSetting_Statics::NewProp_SettingName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomAsrRack_AttachDspBusSetting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomAsrRack.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomAsrRack_AttachDspBusSetting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomAsrRack, nullptr, "AttachDspBusSetting", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomAsrRack_AttachDspBusSetting_Statics::AtomAsrRack_eventAttachDspBusSetting_Parms), Z_Construct_UFunction_UAtomAsrRack_AttachDspBusSetting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomAsrRack_AttachDspBusSetting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomAsrRack_AttachDspBusSetting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomAsrRack_AttachDspBusSetting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomAsrRack_AttachDspBusSetting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomAsrRack_AttachDspBusSetting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomAsrRack_ConnectToPadSpeaker_Statics
	{
		struct AtomAsrRack_eventConnectToPadSpeaker_Parms
		{
			int32 UserIndex;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_UserIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtomAsrRack_ConnectToPadSpeaker_Statics::NewProp_UserIndex = { "UserIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomAsrRack_eventConnectToPadSpeaker_Parms, UserIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomAsrRack_ConnectToPadSpeaker_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomAsrRack_ConnectToPadSpeaker_Statics::NewProp_UserIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomAsrRack_ConnectToPadSpeaker_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomAsrRack.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomAsrRack_ConnectToPadSpeaker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomAsrRack, nullptr, "ConnectToPadSpeaker", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomAsrRack_ConnectToPadSpeaker_Statics::AtomAsrRack_eventConnectToPadSpeaker_Parms), Z_Construct_UFunction_UAtomAsrRack_ConnectToPadSpeaker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomAsrRack_ConnectToPadSpeaker_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomAsrRack_ConnectToPadSpeaker_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomAsrRack_ConnectToPadSpeaker_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomAsrRack_ConnectToPadSpeaker()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomAsrRack_ConnectToPadSpeaker_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomAsrRack_ConnectToPadVibrator_Statics
	{
		struct AtomAsrRack_eventConnectToPadVibrator_Parms
		{
			int32 UserIndex;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_UserIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtomAsrRack_ConnectToPadVibrator_Statics::NewProp_UserIndex = { "UserIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomAsrRack_eventConnectToPadVibrator_Parms, UserIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomAsrRack_ConnectToPadVibrator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomAsrRack_ConnectToPadVibrator_Statics::NewProp_UserIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomAsrRack_ConnectToPadVibrator_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomAsrRack.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomAsrRack_ConnectToPadVibrator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomAsrRack, nullptr, "ConnectToPadVibrator", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomAsrRack_ConnectToPadVibrator_Statics::AtomAsrRack_eventConnectToPadVibrator_Parms), Z_Construct_UFunction_UAtomAsrRack_ConnectToPadVibrator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomAsrRack_ConnectToPadVibrator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomAsrRack_ConnectToPadVibrator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomAsrRack_ConnectToPadVibrator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomAsrRack_ConnectToPadVibrator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomAsrRack_ConnectToPadVibrator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomAsrRack_DetachDspBusSetting_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomAsrRack_DetachDspBusSetting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomAsrRack.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomAsrRack_DetachDspBusSetting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomAsrRack, nullptr, "DetachDspBusSetting", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomAsrRack_DetachDspBusSetting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomAsrRack_DetachDspBusSetting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomAsrRack_DetachDspBusSetting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomAsrRack_DetachDspBusSetting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomAsrRack_EnableBinauralizer_Statics
	{
		struct AtomAsrRack_eventEnableBinauralizer_Parms
		{
			bool bIsEnabled;
		};
		static void NewProp_bIsEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAtomAsrRack_EnableBinauralizer_Statics::NewProp_bIsEnabled_SetBit(void* Obj)
	{
		((AtomAsrRack_eventEnableBinauralizer_Parms*)Obj)->bIsEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomAsrRack_EnableBinauralizer_Statics::NewProp_bIsEnabled = { "bIsEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomAsrRack_eventEnableBinauralizer_Parms), &Z_Construct_UFunction_UAtomAsrRack_EnableBinauralizer_Statics::NewProp_bIsEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomAsrRack_EnableBinauralizer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomAsrRack_EnableBinauralizer_Statics::NewProp_bIsEnabled,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomAsrRack_EnableBinauralizer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomAsrRack.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomAsrRack_EnableBinauralizer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomAsrRack, nullptr, "EnableBinauralizer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomAsrRack_EnableBinauralizer_Statics::AtomAsrRack_eventEnableBinauralizer_Parms), Z_Construct_UFunction_UAtomAsrRack_EnableBinauralizer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomAsrRack_EnableBinauralizer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomAsrRack_EnableBinauralizer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomAsrRack_EnableBinauralizer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomAsrRack_EnableBinauralizer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomAsrRack_EnableBinauralizer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomAsrRack_GetAsrRack_Statics
	{
		struct AtomAsrRack_eventGetAsrRack_Parms
		{
			int32 AsrRackID;
			UAtomAsrRack* ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_AsrRackID;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtomAsrRack_GetAsrRack_Statics::NewProp_AsrRackID = { "AsrRackID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomAsrRack_eventGetAsrRack_Parms, AsrRackID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomAsrRack_GetAsrRack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomAsrRack_eventGetAsrRack_Parms, ReturnValue), Z_Construct_UClass_UAtomAsrRack_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomAsrRack_GetAsrRack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomAsrRack_GetAsrRack_Statics::NewProp_AsrRackID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomAsrRack_GetAsrRack_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomAsrRack_GetAsrRack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomAsrRack.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomAsrRack_GetAsrRack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomAsrRack, nullptr, "GetAsrRack", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomAsrRack_GetAsrRack_Statics::AtomAsrRack_eventGetAsrRack_Parms), Z_Construct_UFunction_UAtomAsrRack_GetAsrRack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomAsrRack_GetAsrRack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomAsrRack_GetAsrRack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomAsrRack_GetAsrRack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomAsrRack_GetAsrRack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomAsrRack_GetAsrRack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomAsrRack_GetBusAnalyzerInfo_Statics
	{
		struct AtomAsrRack_eventGetBusAnalyzerInfo_Parms
		{
			FString DspBusName;
			int32 num_channels;
			TArray<float> rms_levels;
			TArray<float> peak_levels;
			TArray<float> peak_hold_levels;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DspBusName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DspBusName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_num_channels;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_rms_levels_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_rms_levels;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_peak_levels_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_peak_levels;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_peak_hold_levels_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_peak_hold_levels;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomAsrRack_GetBusAnalyzerInfo_Statics::NewProp_DspBusName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtomAsrRack_GetBusAnalyzerInfo_Statics::NewProp_DspBusName = { "DspBusName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomAsrRack_eventGetBusAnalyzerInfo_Parms, DspBusName), METADATA_PARAMS(Z_Construct_UFunction_UAtomAsrRack_GetBusAnalyzerInfo_Statics::NewProp_DspBusName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomAsrRack_GetBusAnalyzerInfo_Statics::NewProp_DspBusName_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtomAsrRack_GetBusAnalyzerInfo_Statics::NewProp_num_channels = { "num_channels", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomAsrRack_eventGetBusAnalyzerInfo_Parms, num_channels), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomAsrRack_GetBusAnalyzerInfo_Statics::NewProp_rms_levels_Inner = { "rms_levels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAtomAsrRack_GetBusAnalyzerInfo_Statics::NewProp_rms_levels = { "rms_levels", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomAsrRack_eventGetBusAnalyzerInfo_Parms, rms_levels), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomAsrRack_GetBusAnalyzerInfo_Statics::NewProp_peak_levels_Inner = { "peak_levels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAtomAsrRack_GetBusAnalyzerInfo_Statics::NewProp_peak_levels = { "peak_levels", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomAsrRack_eventGetBusAnalyzerInfo_Parms, peak_levels), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomAsrRack_GetBusAnalyzerInfo_Statics::NewProp_peak_hold_levels_Inner = { "peak_hold_levels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAtomAsrRack_GetBusAnalyzerInfo_Statics::NewProp_peak_hold_levels = { "peak_hold_levels", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomAsrRack_eventGetBusAnalyzerInfo_Parms, peak_hold_levels), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAtomAsrRack_GetBusAnalyzerInfo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtomAsrRack_eventGetBusAnalyzerInfo_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomAsrRack_GetBusAnalyzerInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomAsrRack_eventGetBusAnalyzerInfo_Parms), &Z_Construct_UFunction_UAtomAsrRack_GetBusAnalyzerInfo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomAsrRack_GetBusAnalyzerInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomAsrRack_GetBusAnalyzerInfo_Statics::NewProp_DspBusName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomAsrRack_GetBusAnalyzerInfo_Statics::NewProp_num_channels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomAsrRack_GetBusAnalyzerInfo_Statics::NewProp_rms_levels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomAsrRack_GetBusAnalyzerInfo_Statics::NewProp_rms_levels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomAsrRack_GetBusAnalyzerInfo_Statics::NewProp_peak_levels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomAsrRack_GetBusAnalyzerInfo_Statics::NewProp_peak_levels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomAsrRack_GetBusAnalyzerInfo_Statics::NewProp_peak_hold_levels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomAsrRack_GetBusAnalyzerInfo_Statics::NewProp_peak_hold_levels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomAsrRack_GetBusAnalyzerInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomAsrRack_GetBusAnalyzerInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomAsrRack.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomAsrRack_GetBusAnalyzerInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomAsrRack, nullptr, "GetBusAnalyzerInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomAsrRack_GetBusAnalyzerInfo_Statics::AtomAsrRack_eventGetBusAnalyzerInfo_Parms), Z_Construct_UFunction_UAtomAsrRack_GetBusAnalyzerInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomAsrRack_GetBusAnalyzerInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomAsrRack_GetBusAnalyzerInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomAsrRack_GetBusAnalyzerInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomAsrRack_GetBusAnalyzerInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomAsrRack_GetBusAnalyzerInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomAsrRack_GetCurrentAppliedSnapshot_Statics
	{
		struct AtomAsrRack_eventGetCurrentAppliedSnapshot_Parms
		{
			int32 AsrRackID;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_AsrRackID;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtomAsrRack_GetCurrentAppliedSnapshot_Statics::NewProp_AsrRackID = { "AsrRackID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomAsrRack_eventGetCurrentAppliedSnapshot_Parms, AsrRackID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtomAsrRack_GetCurrentAppliedSnapshot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomAsrRack_eventGetCurrentAppliedSnapshot_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomAsrRack_GetCurrentAppliedSnapshot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomAsrRack_GetCurrentAppliedSnapshot_Statics::NewProp_AsrRackID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomAsrRack_GetCurrentAppliedSnapshot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomAsrRack_GetCurrentAppliedSnapshot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomAsrRack.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomAsrRack_GetCurrentAppliedSnapshot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomAsrRack, nullptr, "GetCurrentAppliedSnapshot", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomAsrRack_GetCurrentAppliedSnapshot_Statics::AtomAsrRack_eventGetCurrentAppliedSnapshot_Parms), Z_Construct_UFunction_UAtomAsrRack_GetCurrentAppliedSnapshot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomAsrRack_GetCurrentAppliedSnapshot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomAsrRack_GetCurrentAppliedSnapshot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomAsrRack_GetCurrentAppliedSnapshot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomAsrRack_GetCurrentAppliedSnapshot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomAsrRack_GetCurrentAppliedSnapshot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomAsrRack_GetDefaultAsrRack_Statics
	{
		struct AtomAsrRack_eventGetDefaultAsrRack_Parms
		{
			UAtomAsrRack* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomAsrRack_GetDefaultAsrRack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomAsrRack_eventGetDefaultAsrRack_Parms, ReturnValue), Z_Construct_UClass_UAtomAsrRack_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomAsrRack_GetDefaultAsrRack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomAsrRack_GetDefaultAsrRack_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomAsrRack_GetDefaultAsrRack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomAsrRack.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomAsrRack_GetDefaultAsrRack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomAsrRack, nullptr, "GetDefaultAsrRack", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomAsrRack_GetDefaultAsrRack_Statics::AtomAsrRack_eventGetDefaultAsrRack_Parms), Z_Construct_UFunction_UAtomAsrRack_GetDefaultAsrRack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomAsrRack_GetDefaultAsrRack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomAsrRack_GetDefaultAsrRack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomAsrRack_GetDefaultAsrRack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomAsrRack_GetDefaultAsrRack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomAsrRack_GetDefaultAsrRack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomAsrRack_IsEnabledBinauralizer_Statics
	{
		struct AtomAsrRack_eventIsEnabledBinauralizer_Parms
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
	void Z_Construct_UFunction_UAtomAsrRack_IsEnabledBinauralizer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtomAsrRack_eventIsEnabledBinauralizer_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomAsrRack_IsEnabledBinauralizer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomAsrRack_eventIsEnabledBinauralizer_Parms), &Z_Construct_UFunction_UAtomAsrRack_IsEnabledBinauralizer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomAsrRack_IsEnabledBinauralizer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomAsrRack_IsEnabledBinauralizer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomAsrRack_IsEnabledBinauralizer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomAsrRack.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomAsrRack_IsEnabledBinauralizer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomAsrRack, nullptr, "IsEnabledBinauralizer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomAsrRack_IsEnabledBinauralizer_Statics::AtomAsrRack_eventIsEnabledBinauralizer_Parms), Z_Construct_UFunction_UAtomAsrRack_IsEnabledBinauralizer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomAsrRack_IsEnabledBinauralizer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomAsrRack_IsEnabledBinauralizer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomAsrRack_IsEnabledBinauralizer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomAsrRack_IsEnabledBinauralizer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomAsrRack_IsEnabledBinauralizer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomAsrRack_SetAisacControlByName_Statics
	{
		struct AtomAsrRack_eventSetAisacControlByName_Parms
		{
			FString control_name;
			float control_value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_control_name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_control_name;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_control_value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomAsrRack_SetAisacControlByName_Statics::NewProp_control_name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtomAsrRack_SetAisacControlByName_Statics::NewProp_control_name = { "control_name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomAsrRack_eventSetAisacControlByName_Parms, control_name), METADATA_PARAMS(Z_Construct_UFunction_UAtomAsrRack_SetAisacControlByName_Statics::NewProp_control_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomAsrRack_SetAisacControlByName_Statics::NewProp_control_name_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomAsrRack_SetAisacControlByName_Statics::NewProp_control_value = { "control_value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomAsrRack_eventSetAisacControlByName_Parms, control_value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomAsrRack_SetAisacControlByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomAsrRack_SetAisacControlByName_Statics::NewProp_control_name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomAsrRack_SetAisacControlByName_Statics::NewProp_control_value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomAsrRack_SetAisacControlByName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomAsrRack.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomAsrRack_SetAisacControlByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomAsrRack, nullptr, "SetAisacControlByName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomAsrRack_SetAisacControlByName_Statics::AtomAsrRack_eventSetAisacControlByName_Parms), Z_Construct_UFunction_UAtomAsrRack_SetAisacControlByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomAsrRack_SetAisacControlByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomAsrRack_SetAisacControlByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomAsrRack_SetAisacControlByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomAsrRack_SetAisacControlByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomAsrRack_SetAisacControlByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomAsrRack_SetBusSendLevelByName_Statics
	{
		struct AtomAsrRack_eventSetBusSendLevelByName_Parms
		{
			FString SourceBusName;
			FString DestBusName;
			float Level;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceBusName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SourceBusName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DestBusName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DestBusName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Level;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomAsrRack_SetBusSendLevelByName_Statics::NewProp_SourceBusName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtomAsrRack_SetBusSendLevelByName_Statics::NewProp_SourceBusName = { "SourceBusName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomAsrRack_eventSetBusSendLevelByName_Parms, SourceBusName), METADATA_PARAMS(Z_Construct_UFunction_UAtomAsrRack_SetBusSendLevelByName_Statics::NewProp_SourceBusName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomAsrRack_SetBusSendLevelByName_Statics::NewProp_SourceBusName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomAsrRack_SetBusSendLevelByName_Statics::NewProp_DestBusName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtomAsrRack_SetBusSendLevelByName_Statics::NewProp_DestBusName = { "DestBusName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomAsrRack_eventSetBusSendLevelByName_Parms, DestBusName), METADATA_PARAMS(Z_Construct_UFunction_UAtomAsrRack_SetBusSendLevelByName_Statics::NewProp_DestBusName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomAsrRack_SetBusSendLevelByName_Statics::NewProp_DestBusName_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomAsrRack_SetBusSendLevelByName_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomAsrRack_eventSetBusSendLevelByName_Parms, Level), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomAsrRack_SetBusSendLevelByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomAsrRack_SetBusSendLevelByName_Statics::NewProp_SourceBusName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomAsrRack_SetBusSendLevelByName_Statics::NewProp_DestBusName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomAsrRack_SetBusSendLevelByName_Statics::NewProp_Level,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomAsrRack_SetBusSendLevelByName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomAsrRack.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomAsrRack_SetBusSendLevelByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomAsrRack, nullptr, "SetBusSendLevelByName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomAsrRack_SetBusSendLevelByName_Statics::AtomAsrRack_eventSetBusSendLevelByName_Parms), Z_Construct_UFunction_UAtomAsrRack_SetBusSendLevelByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomAsrRack_SetBusSendLevelByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomAsrRack_SetBusSendLevelByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomAsrRack_SetBusSendLevelByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomAsrRack_SetBusSendLevelByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomAsrRack_SetBusSendLevelByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomAsrRack_SetBusVolumeByName_Statics
	{
		struct AtomAsrRack_eventSetBusVolumeByName_Parms
		{
			FString BusName;
			float Volume;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BusName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_BusName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Volume;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomAsrRack_SetBusVolumeByName_Statics::NewProp_BusName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtomAsrRack_SetBusVolumeByName_Statics::NewProp_BusName = { "BusName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomAsrRack_eventSetBusVolumeByName_Parms, BusName), METADATA_PARAMS(Z_Construct_UFunction_UAtomAsrRack_SetBusVolumeByName_Statics::NewProp_BusName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomAsrRack_SetBusVolumeByName_Statics::NewProp_BusName_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomAsrRack_SetBusVolumeByName_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomAsrRack_eventSetBusVolumeByName_Parms, Volume), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomAsrRack_SetBusVolumeByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomAsrRack_SetBusVolumeByName_Statics::NewProp_BusName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomAsrRack_SetBusVolumeByName_Statics::NewProp_Volume,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomAsrRack_SetBusVolumeByName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomAsrRack.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomAsrRack_SetBusVolumeByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomAsrRack, nullptr, "SetBusVolumeByName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomAsrRack_SetBusVolumeByName_Statics::AtomAsrRack_eventSetBusVolumeByName_Parms), Z_Construct_UFunction_UAtomAsrRack_SetBusVolumeByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomAsrRack_SetBusVolumeByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomAsrRack_SetBusVolumeByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomAsrRack_SetBusVolumeByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomAsrRack_SetBusVolumeByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomAsrRack_SetBusVolumeByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomAsrRack_SetEffectBypass_Statics
	{
		struct AtomAsrRack_eventSetEffectBypass_Parms
		{
			FString BusName;
			FString EffectName;
			bool Bypasses;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BusName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_BusName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_EffectName;
		static void NewProp_Bypasses_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Bypasses;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomAsrRack_SetEffectBypass_Statics::NewProp_BusName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtomAsrRack_SetEffectBypass_Statics::NewProp_BusName = { "BusName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomAsrRack_eventSetEffectBypass_Parms, BusName), METADATA_PARAMS(Z_Construct_UFunction_UAtomAsrRack_SetEffectBypass_Statics::NewProp_BusName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomAsrRack_SetEffectBypass_Statics::NewProp_BusName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomAsrRack_SetEffectBypass_Statics::NewProp_EffectName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtomAsrRack_SetEffectBypass_Statics::NewProp_EffectName = { "EffectName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomAsrRack_eventSetEffectBypass_Parms, EffectName), METADATA_PARAMS(Z_Construct_UFunction_UAtomAsrRack_SetEffectBypass_Statics::NewProp_EffectName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomAsrRack_SetEffectBypass_Statics::NewProp_EffectName_MetaData)) };
	void Z_Construct_UFunction_UAtomAsrRack_SetEffectBypass_Statics::NewProp_Bypasses_SetBit(void* Obj)
	{
		((AtomAsrRack_eventSetEffectBypass_Parms*)Obj)->Bypasses = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtomAsrRack_SetEffectBypass_Statics::NewProp_Bypasses = { "Bypasses", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomAsrRack_eventSetEffectBypass_Parms), &Z_Construct_UFunction_UAtomAsrRack_SetEffectBypass_Statics::NewProp_Bypasses_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomAsrRack_SetEffectBypass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomAsrRack_SetEffectBypass_Statics::NewProp_BusName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomAsrRack_SetEffectBypass_Statics::NewProp_EffectName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomAsrRack_SetEffectBypass_Statics::NewProp_Bypasses,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomAsrRack_SetEffectBypass_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomAsrRack.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomAsrRack_SetEffectBypass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomAsrRack, nullptr, "SetEffectBypass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomAsrRack_SetEffectBypass_Statics::AtomAsrRack_eventSetEffectBypass_Parms), Z_Construct_UFunction_UAtomAsrRack_SetEffectBypass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomAsrRack_SetEffectBypass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomAsrRack_SetEffectBypass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomAsrRack_SetEffectBypass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomAsrRack_SetEffectBypass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomAsrRack_SetEffectBypass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomAsrRack);
	UClass* Z_Construct_UClass_UAtomAsrRack_NoRegister()
	{
		return UAtomAsrRack::StaticClass();
	}
	struct Z_Construct_UClass_UAtomAsrRack_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RackId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RackId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomAsrRack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAtomAsrRack_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtomAsrRack_ApplyDspBusSnapshot, "ApplyDspBusSnapshot" }, // 4224249337
		{ &Z_Construct_UFunction_UAtomAsrRack_AttachDspBusSetting, "AttachDspBusSetting" }, // 63864520
		{ &Z_Construct_UFunction_UAtomAsrRack_ConnectToPadSpeaker, "ConnectToPadSpeaker" }, // 4064352246
		{ &Z_Construct_UFunction_UAtomAsrRack_ConnectToPadVibrator, "ConnectToPadVibrator" }, // 124694210
		{ &Z_Construct_UFunction_UAtomAsrRack_DetachDspBusSetting, "DetachDspBusSetting" }, // 3270665419
		{ &Z_Construct_UFunction_UAtomAsrRack_EnableBinauralizer, "EnableBinauralizer" }, // 3207759441
		{ &Z_Construct_UFunction_UAtomAsrRack_GetAsrRack, "GetAsrRack" }, // 3297762334
		{ &Z_Construct_UFunction_UAtomAsrRack_GetBusAnalyzerInfo, "GetBusAnalyzerInfo" }, // 75394485
		{ &Z_Construct_UFunction_UAtomAsrRack_GetCurrentAppliedSnapshot, "GetCurrentAppliedSnapshot" }, // 4102577963
		{ &Z_Construct_UFunction_UAtomAsrRack_GetDefaultAsrRack, "GetDefaultAsrRack" }, // 3370990587
		{ &Z_Construct_UFunction_UAtomAsrRack_IsEnabledBinauralizer, "IsEnabledBinauralizer" }, // 2161704242
		{ &Z_Construct_UFunction_UAtomAsrRack_SetAisacControlByName, "SetAisacControlByName" }, // 1453908388
		{ &Z_Construct_UFunction_UAtomAsrRack_SetBusSendLevelByName, "SetBusSendLevelByName" }, // 2240989105
		{ &Z_Construct_UFunction_UAtomAsrRack_SetBusVolumeByName, "SetBusVolumeByName" }, // 2928028950
		{ &Z_Construct_UFunction_UAtomAsrRack_SetEffectBypass, "SetEffectBypass" }, // 1083609060
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomAsrRack_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AtomAsrRack.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AtomAsrRack.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomAsrRack_Statics::NewProp_RackId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAsrRack" },
		{ "ModuleRelativePath", "Public/AtomAsrRack.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAtomAsrRack_Statics::NewProp_RackId = { "RackId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomAsrRack, RackId), METADATA_PARAMS(Z_Construct_UClass_UAtomAsrRack_Statics::NewProp_RackId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomAsrRack_Statics::NewProp_RackId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtomAsrRack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomAsrRack_Statics::NewProp_RackId,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomAsrRack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomAsrRack>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomAsrRack_Statics::ClassParams = {
		&UAtomAsrRack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAtomAsrRack_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtomAsrRack_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomAsrRack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomAsrRack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomAsrRack()
	{
		if (!Z_Registration_Info_UClass_UAtomAsrRack.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomAsrRack.OuterSingleton, Z_Construct_UClass_UAtomAsrRack_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomAsrRack.OuterSingleton;
	}
	template<> CRIWARERUNTIME_API UClass* StaticClass<UAtomAsrRack>()
	{
		return UAtomAsrRack::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomAsrRack);
	UAtomAsrRack::~UAtomAsrRack() {}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAsrRack_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAsrRack_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAtomAsrRack, UAtomAsrRack::StaticClass, TEXT("UAtomAsrRack"), &Z_Registration_Info_UClass_UAtomAsrRack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomAsrRack), 3037096309U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAsrRack_h_3484047475(TEXT("/Script/CriWareRuntime"),
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAsrRack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAsrRack_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
