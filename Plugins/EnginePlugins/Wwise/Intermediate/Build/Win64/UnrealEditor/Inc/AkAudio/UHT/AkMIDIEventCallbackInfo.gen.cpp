// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkMIDIEventCallbackInfo.h"
#include "AkAudio/Public/AkMidiCc.h"
#include "AkAudio/Public/AkMidiChannelAftertouch.h"
#include "AkAudio/Public/AkMidiGeneric.h"
#include "AkAudio/Public/AkMidiNoteAftertouch.h"
#include "AkAudio/Public/AkMidiNoteOnOff.h"
#include "AkAudio/Public/AkMidiPitchBend.h"
#include "AkAudio/Public/AkMidiProgramChange.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkMIDIEventCallbackInfo() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkEventCallbackInfo();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkMIDIEventCallbackInfo();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkMIDIEventCallbackInfo_NoRegister();
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkMidiEventType();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkMidiCc();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkMidiChannelAftertouch();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkMidiGeneric();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkMidiNoteAftertouch();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkMidiNoteOnOff();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkMidiPitchBend();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkMidiProgramChange();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	DEFINE_FUNCTION(UAkMIDIEventCallbackInfo::execGetCc)
	{
		P_GET_STRUCT_REF(FAkMidiCc,Z_Param_Out_AsCc);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCc(Z_Param_Out_AsCc);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkMIDIEventCallbackInfo::execGetChannel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(uint8*)Z_Param__Result=P_THIS->GetChannel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkMIDIEventCallbackInfo::execGetChannelAftertouch)
	{
		P_GET_STRUCT_REF(FAkMidiChannelAftertouch,Z_Param_Out_AsChannelAftertouch);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetChannelAftertouch(Z_Param_Out_AsChannelAftertouch);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkMIDIEventCallbackInfo::execGetGeneric)
	{
		P_GET_STRUCT_REF(FAkMidiGeneric,Z_Param_Out_AsGeneric);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetGeneric(Z_Param_Out_AsGeneric);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkMIDIEventCallbackInfo::execGetNoteAftertouch)
	{
		P_GET_STRUCT_REF(FAkMidiNoteAftertouch,Z_Param_Out_AsNoteAftertouch);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetNoteAftertouch(Z_Param_Out_AsNoteAftertouch);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkMIDIEventCallbackInfo::execGetNoteOff)
	{
		P_GET_STRUCT_REF(FAkMidiNoteOnOff,Z_Param_Out_AsNoteOff);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetNoteOff(Z_Param_Out_AsNoteOff);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkMIDIEventCallbackInfo::execGetNoteOn)
	{
		P_GET_STRUCT_REF(FAkMidiNoteOnOff,Z_Param_Out_AsNoteOn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetNoteOn(Z_Param_Out_AsNoteOn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkMIDIEventCallbackInfo::execGetPitchBend)
	{
		P_GET_STRUCT_REF(FAkMidiPitchBend,Z_Param_Out_AsPitchBend);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetPitchBend(Z_Param_Out_AsPitchBend);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkMIDIEventCallbackInfo::execGetProgramChange)
	{
		P_GET_STRUCT_REF(FAkMidiProgramChange,Z_Param_Out_AsProgramChange);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetProgramChange(Z_Param_Out_AsProgramChange);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkMIDIEventCallbackInfo::execGetType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EAkMidiEventType*)Z_Param__Result=P_THIS->GetType();
		P_NATIVE_END;
	}
	void UAkMIDIEventCallbackInfo::StaticRegisterNativesUAkMIDIEventCallbackInfo()
	{
		UClass* Class = UAkMIDIEventCallbackInfo::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCc", &UAkMIDIEventCallbackInfo::execGetCc },
			{ "GetChannel", &UAkMIDIEventCallbackInfo::execGetChannel },
			{ "GetChannelAftertouch", &UAkMIDIEventCallbackInfo::execGetChannelAftertouch },
			{ "GetGeneric", &UAkMIDIEventCallbackInfo::execGetGeneric },
			{ "GetNoteAftertouch", &UAkMIDIEventCallbackInfo::execGetNoteAftertouch },
			{ "GetNoteOff", &UAkMIDIEventCallbackInfo::execGetNoteOff },
			{ "GetNoteOn", &UAkMIDIEventCallbackInfo::execGetNoteOn },
			{ "GetPitchBend", &UAkMIDIEventCallbackInfo::execGetPitchBend },
			{ "GetProgramChange", &UAkMIDIEventCallbackInfo::execGetProgramChange },
			{ "GetType", &UAkMIDIEventCallbackInfo::execGetType },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetCc_Statics
	{
		struct AkMIDIEventCallbackInfo_eventGetCc_Parms
		{
			FAkMidiCc AsCc;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_AsCc;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetCc_Statics::NewProp_AsCc = { "AsCc", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkMIDIEventCallbackInfo_eventGetCc_Parms, AsCc), Z_Construct_UScriptStruct_FAkMidiCc, METADATA_PARAMS(nullptr, 0) }; // 4106275771
	void Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetCc_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AkMIDIEventCallbackInfo_eventGetCc_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetCc_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AkMIDIEventCallbackInfo_eventGetCc_Parms), &Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetCc_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetCc_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetCc_Statics::NewProp_AsCc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetCc_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetCc_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkMIDIEventCallbackInfo.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetCc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkMIDIEventCallbackInfo, nullptr, "GetCc", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetCc_Statics::AkMIDIEventCallbackInfo_eventGetCc_Parms), Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetCc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetCc_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetCc_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetCc_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetCc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetCc_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetChannel_Statics
	{
		struct AkMIDIEventCallbackInfo_eventGetChannel_Parms
		{
			uint8 ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetChannel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkMIDIEventCallbackInfo_eventGetChannel_Parms, ReturnValue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetChannel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetChannel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetChannel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkMIDIEventCallbackInfo.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkMIDIEventCallbackInfo, nullptr, "GetChannel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetChannel_Statics::AkMIDIEventCallbackInfo_eventGetChannel_Parms), Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetChannel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetChannel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetChannel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetChannelAftertouch_Statics
	{
		struct AkMIDIEventCallbackInfo_eventGetChannelAftertouch_Parms
		{
			FAkMidiChannelAftertouch AsChannelAftertouch;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_AsChannelAftertouch;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetChannelAftertouch_Statics::NewProp_AsChannelAftertouch = { "AsChannelAftertouch", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkMIDIEventCallbackInfo_eventGetChannelAftertouch_Parms, AsChannelAftertouch), Z_Construct_UScriptStruct_FAkMidiChannelAftertouch, METADATA_PARAMS(nullptr, 0) }; // 2324997025
	void Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetChannelAftertouch_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AkMIDIEventCallbackInfo_eventGetChannelAftertouch_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetChannelAftertouch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AkMIDIEventCallbackInfo_eventGetChannelAftertouch_Parms), &Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetChannelAftertouch_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetChannelAftertouch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetChannelAftertouch_Statics::NewProp_AsChannelAftertouch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetChannelAftertouch_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetChannelAftertouch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkMIDIEventCallbackInfo.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetChannelAftertouch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkMIDIEventCallbackInfo, nullptr, "GetChannelAftertouch", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetChannelAftertouch_Statics::AkMIDIEventCallbackInfo_eventGetChannelAftertouch_Parms), Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetChannelAftertouch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetChannelAftertouch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetChannelAftertouch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetChannelAftertouch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetChannelAftertouch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetChannelAftertouch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetGeneric_Statics
	{
		struct AkMIDIEventCallbackInfo_eventGetGeneric_Parms
		{
			FAkMidiGeneric AsGeneric;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_AsGeneric;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetGeneric_Statics::NewProp_AsGeneric = { "AsGeneric", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkMIDIEventCallbackInfo_eventGetGeneric_Parms, AsGeneric), Z_Construct_UScriptStruct_FAkMidiGeneric, METADATA_PARAMS(nullptr, 0) }; // 3525655979
	void Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetGeneric_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AkMIDIEventCallbackInfo_eventGetGeneric_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetGeneric_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AkMIDIEventCallbackInfo_eventGetGeneric_Parms), &Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetGeneric_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetGeneric_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetGeneric_Statics::NewProp_AsGeneric,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetGeneric_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetGeneric_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkMIDIEventCallbackInfo.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetGeneric_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkMIDIEventCallbackInfo, nullptr, "GetGeneric", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetGeneric_Statics::AkMIDIEventCallbackInfo_eventGetGeneric_Parms), Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetGeneric_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetGeneric_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetGeneric_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetGeneric_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetGeneric()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetGeneric_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteAftertouch_Statics
	{
		struct AkMIDIEventCallbackInfo_eventGetNoteAftertouch_Parms
		{
			FAkMidiNoteAftertouch AsNoteAftertouch;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_AsNoteAftertouch;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteAftertouch_Statics::NewProp_AsNoteAftertouch = { "AsNoteAftertouch", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkMIDIEventCallbackInfo_eventGetNoteAftertouch_Parms, AsNoteAftertouch), Z_Construct_UScriptStruct_FAkMidiNoteAftertouch, METADATA_PARAMS(nullptr, 0) }; // 694811589
	void Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteAftertouch_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AkMIDIEventCallbackInfo_eventGetNoteAftertouch_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteAftertouch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AkMIDIEventCallbackInfo_eventGetNoteAftertouch_Parms), &Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteAftertouch_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteAftertouch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteAftertouch_Statics::NewProp_AsNoteAftertouch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteAftertouch_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteAftertouch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkMIDIEventCallbackInfo.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteAftertouch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkMIDIEventCallbackInfo, nullptr, "GetNoteAftertouch", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteAftertouch_Statics::AkMIDIEventCallbackInfo_eventGetNoteAftertouch_Parms), Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteAftertouch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteAftertouch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteAftertouch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteAftertouch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteAftertouch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteAftertouch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteOff_Statics
	{
		struct AkMIDIEventCallbackInfo_eventGetNoteOff_Parms
		{
			FAkMidiNoteOnOff AsNoteOff;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_AsNoteOff;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteOff_Statics::NewProp_AsNoteOff = { "AsNoteOff", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkMIDIEventCallbackInfo_eventGetNoteOff_Parms, AsNoteOff), Z_Construct_UScriptStruct_FAkMidiNoteOnOff, METADATA_PARAMS(nullptr, 0) }; // 2013898154
	void Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteOff_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AkMIDIEventCallbackInfo_eventGetNoteOff_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteOff_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AkMIDIEventCallbackInfo_eventGetNoteOff_Parms), &Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteOff_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteOff_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteOff_Statics::NewProp_AsNoteOff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteOff_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteOff_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkMIDIEventCallbackInfo.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteOff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkMIDIEventCallbackInfo, nullptr, "GetNoteOff", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteOff_Statics::AkMIDIEventCallbackInfo_eventGetNoteOff_Parms), Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteOff_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteOff_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteOff_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteOff_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteOff()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteOff_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteOn_Statics
	{
		struct AkMIDIEventCallbackInfo_eventGetNoteOn_Parms
		{
			FAkMidiNoteOnOff AsNoteOn;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_AsNoteOn;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteOn_Statics::NewProp_AsNoteOn = { "AsNoteOn", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkMIDIEventCallbackInfo_eventGetNoteOn_Parms, AsNoteOn), Z_Construct_UScriptStruct_FAkMidiNoteOnOff, METADATA_PARAMS(nullptr, 0) }; // 2013898154
	void Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteOn_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AkMIDIEventCallbackInfo_eventGetNoteOn_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteOn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AkMIDIEventCallbackInfo_eventGetNoteOn_Parms), &Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteOn_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteOn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteOn_Statics::NewProp_AsNoteOn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteOn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteOn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkMIDIEventCallbackInfo.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteOn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkMIDIEventCallbackInfo, nullptr, "GetNoteOn", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteOn_Statics::AkMIDIEventCallbackInfo_eventGetNoteOn_Parms), Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteOn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteOn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteOn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteOn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteOn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteOn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetPitchBend_Statics
	{
		struct AkMIDIEventCallbackInfo_eventGetPitchBend_Parms
		{
			FAkMidiPitchBend AsPitchBend;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_AsPitchBend;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetPitchBend_Statics::NewProp_AsPitchBend = { "AsPitchBend", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkMIDIEventCallbackInfo_eventGetPitchBend_Parms, AsPitchBend), Z_Construct_UScriptStruct_FAkMidiPitchBend, METADATA_PARAMS(nullptr, 0) }; // 3527768836
	void Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetPitchBend_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AkMIDIEventCallbackInfo_eventGetPitchBend_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetPitchBend_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AkMIDIEventCallbackInfo_eventGetPitchBend_Parms), &Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetPitchBend_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetPitchBend_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetPitchBend_Statics::NewProp_AsPitchBend,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetPitchBend_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetPitchBend_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkMIDIEventCallbackInfo.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetPitchBend_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkMIDIEventCallbackInfo, nullptr, "GetPitchBend", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetPitchBend_Statics::AkMIDIEventCallbackInfo_eventGetPitchBend_Parms), Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetPitchBend_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetPitchBend_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetPitchBend_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetPitchBend_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetPitchBend()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetPitchBend_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetProgramChange_Statics
	{
		struct AkMIDIEventCallbackInfo_eventGetProgramChange_Parms
		{
			FAkMidiProgramChange AsProgramChange;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_AsProgramChange;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetProgramChange_Statics::NewProp_AsProgramChange = { "AsProgramChange", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkMIDIEventCallbackInfo_eventGetProgramChange_Parms, AsProgramChange), Z_Construct_UScriptStruct_FAkMidiProgramChange, METADATA_PARAMS(nullptr, 0) }; // 1889525778
	void Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetProgramChange_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AkMIDIEventCallbackInfo_eventGetProgramChange_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetProgramChange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AkMIDIEventCallbackInfo_eventGetProgramChange_Parms), &Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetProgramChange_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetProgramChange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetProgramChange_Statics::NewProp_AsProgramChange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetProgramChange_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetProgramChange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkMIDIEventCallbackInfo.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetProgramChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkMIDIEventCallbackInfo, nullptr, "GetProgramChange", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetProgramChange_Statics::AkMIDIEventCallbackInfo_eventGetProgramChange_Parms), Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetProgramChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetProgramChange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetProgramChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetProgramChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetProgramChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetProgramChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetType_Statics
	{
		struct AkMIDIEventCallbackInfo_eventGetType_Parms
		{
			EAkMidiEventType ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkMIDIEventCallbackInfo_eventGetType_Parms, ReturnValue), Z_Construct_UEnum_AkAudio_EAkMidiEventType, METADATA_PARAMS(nullptr, 0) }; // 3038257817
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetType_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkMIDIEventCallbackInfo.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkMIDIEventCallbackInfo, nullptr, "GetType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetType_Statics::AkMIDIEventCallbackInfo_eventGetType_Parms), Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkMIDIEventCallbackInfo);
	UClass* Z_Construct_UClass_UAkMIDIEventCallbackInfo_NoRegister()
	{
		return UAkMIDIEventCallbackInfo::StaticClass();
	}
	struct Z_Construct_UClass_UAkMIDIEventCallbackInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkMIDIEventCallbackInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAkEventCallbackInfo,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAkMIDIEventCallbackInfo_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetCc, "GetCc" }, // 3398670654
		{ &Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetChannel, "GetChannel" }, // 3557010864
		{ &Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetChannelAftertouch, "GetChannelAftertouch" }, // 1451230594
		{ &Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetGeneric, "GetGeneric" }, // 1269439124
		{ &Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteAftertouch, "GetNoteAftertouch" }, // 959227269
		{ &Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteOff, "GetNoteOff" }, // 19019540
		{ &Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetNoteOn, "GetNoteOn" }, // 485421682
		{ &Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetPitchBend, "GetPitchBend" }, // 180100976
		{ &Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetProgramChange, "GetProgramChange" }, // 2913871070
		{ &Z_Construct_UFunction_UAkMIDIEventCallbackInfo_GetType, "GetType" }, // 971785056
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkMIDIEventCallbackInfo_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AkMIDIEventCallbackInfo.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AkMIDIEventCallbackInfo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkMIDIEventCallbackInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkMIDIEventCallbackInfo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkMIDIEventCallbackInfo_Statics::ClassParams = {
		&UAkMIDIEventCallbackInfo::StaticClass,
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
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAkMIDIEventCallbackInfo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkMIDIEventCallbackInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkMIDIEventCallbackInfo()
	{
		if (!Z_Registration_Info_UClass_UAkMIDIEventCallbackInfo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkMIDIEventCallbackInfo.OuterSingleton, Z_Construct_UClass_UAkMIDIEventCallbackInfo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAkMIDIEventCallbackInfo.OuterSingleton;
	}
	template<> AKAUDIO_API UClass* StaticClass<UAkMIDIEventCallbackInfo>()
	{
		return UAkMIDIEventCallbackInfo::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkMIDIEventCallbackInfo);
	UAkMIDIEventCallbackInfo::~UAkMIDIEventCallbackInfo() {}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkMIDIEventCallbackInfo_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkMIDIEventCallbackInfo_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAkMIDIEventCallbackInfo, UAkMIDIEventCallbackInfo::StaticClass, TEXT("UAkMIDIEventCallbackInfo"), &Z_Registration_Info_UClass_UAkMIDIEventCallbackInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkMIDIEventCallbackInfo), 3941193747U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkMIDIEventCallbackInfo_h_364107655(TEXT("/Script/AkAudio"),
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkMIDIEventCallbackInfo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkMIDIEventCallbackInfo_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
