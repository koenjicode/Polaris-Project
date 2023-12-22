// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/AtomAreaSoundVolume.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomAreaSoundVolume() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_AAtomAreaSoundVolume();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_AAtomAreaSoundVolume_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomComponent_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_USoundAtomCue_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AVolume();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	DEFINE_FUNCTION(AAtomAreaSoundVolume::execCreateSounds)
	{
		P_GET_STRUCT(FVector,Z_Param_listener_location);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UAtomComponent*>*)Z_Param__Result=P_THIS->CreateSounds(Z_Param_listener_location);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAtomAreaSoundVolume::execDestroySounds)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DestroySounds();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAtomAreaSoundVolume::execGetEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAtomAreaSoundVolume::execGetPriority)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetPriority();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAtomAreaSoundVolume::execOnRep_bEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_bEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAtomAreaSoundVolume::execSetEnabled)
	{
		P_GET_UBOOL(Z_Param_bNewEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEnabled(Z_Param_bNewEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAtomAreaSoundVolume::execSetPriority)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewPriority);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPriority(Z_Param_NewPriority);
		P_NATIVE_END;
	}
	void AAtomAreaSoundVolume::StaticRegisterNativesAAtomAreaSoundVolume()
	{
		UClass* Class = AAtomAreaSoundVolume::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateSounds", &AAtomAreaSoundVolume::execCreateSounds },
			{ "DestroySounds", &AAtomAreaSoundVolume::execDestroySounds },
			{ "GetEnabled", &AAtomAreaSoundVolume::execGetEnabled },
			{ "GetPriority", &AAtomAreaSoundVolume::execGetPriority },
			{ "OnRep_bEnabled", &AAtomAreaSoundVolume::execOnRep_bEnabled },
			{ "SetEnabled", &AAtomAreaSoundVolume::execSetEnabled },
			{ "SetPriority", &AAtomAreaSoundVolume::execSetPriority },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAtomAreaSoundVolume_CreateSounds_Statics
	{
		struct AtomAreaSoundVolume_eventCreateSounds_Parms
		{
			FVector listener_location;
			TArray<UAtomComponent*> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_listener_location;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAtomAreaSoundVolume_CreateSounds_Statics::NewProp_listener_location = { "listener_location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomAreaSoundVolume_eventCreateSounds_Parms, listener_location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAtomAreaSoundVolume_CreateSounds_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UAtomComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAtomAreaSoundVolume_CreateSounds_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AAtomAreaSoundVolume_CreateSounds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomAreaSoundVolume_eventCreateSounds_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_AAtomAreaSoundVolume_CreateSounds_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtomAreaSoundVolume_CreateSounds_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAtomAreaSoundVolume_CreateSounds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAtomAreaSoundVolume_CreateSounds_Statics::NewProp_listener_location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAtomAreaSoundVolume_CreateSounds_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAtomAreaSoundVolume_CreateSounds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAtomAreaSoundVolume_CreateSounds_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomAreaSoundVolume.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAtomAreaSoundVolume_CreateSounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAtomAreaSoundVolume, nullptr, "CreateSounds", nullptr, nullptr, sizeof(Z_Construct_UFunction_AAtomAreaSoundVolume_CreateSounds_Statics::AtomAreaSoundVolume_eventCreateSounds_Parms), Z_Construct_UFunction_AAtomAreaSoundVolume_CreateSounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtomAreaSoundVolume_CreateSounds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAtomAreaSoundVolume_CreateSounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtomAreaSoundVolume_CreateSounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAtomAreaSoundVolume_CreateSounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAtomAreaSoundVolume_CreateSounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAtomAreaSoundVolume_DestroySounds_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAtomAreaSoundVolume_DestroySounds_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomAreaSoundVolume.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAtomAreaSoundVolume_DestroySounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAtomAreaSoundVolume, nullptr, "DestroySounds", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAtomAreaSoundVolume_DestroySounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtomAreaSoundVolume_DestroySounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAtomAreaSoundVolume_DestroySounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAtomAreaSoundVolume_DestroySounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAtomAreaSoundVolume_GetEnabled_Statics
	{
		struct AtomAreaSoundVolume_eventGetEnabled_Parms
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
	void Z_Construct_UFunction_AAtomAreaSoundVolume_GetEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtomAreaSoundVolume_eventGetEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAtomAreaSoundVolume_GetEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomAreaSoundVolume_eventGetEnabled_Parms), &Z_Construct_UFunction_AAtomAreaSoundVolume_GetEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAtomAreaSoundVolume_GetEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAtomAreaSoundVolume_GetEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAtomAreaSoundVolume_GetEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomAreaSoundVolume.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAtomAreaSoundVolume_GetEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAtomAreaSoundVolume, nullptr, "GetEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_AAtomAreaSoundVolume_GetEnabled_Statics::AtomAreaSoundVolume_eventGetEnabled_Parms), Z_Construct_UFunction_AAtomAreaSoundVolume_GetEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtomAreaSoundVolume_GetEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAtomAreaSoundVolume_GetEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtomAreaSoundVolume_GetEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAtomAreaSoundVolume_GetEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAtomAreaSoundVolume_GetEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAtomAreaSoundVolume_GetPriority_Statics
	{
		struct AtomAreaSoundVolume_eventGetPriority_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAtomAreaSoundVolume_GetPriority_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomAreaSoundVolume_eventGetPriority_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAtomAreaSoundVolume_GetPriority_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAtomAreaSoundVolume_GetPriority_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAtomAreaSoundVolume_GetPriority_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomAreaSoundVolume.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAtomAreaSoundVolume_GetPriority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAtomAreaSoundVolume, nullptr, "GetPriority", nullptr, nullptr, sizeof(Z_Construct_UFunction_AAtomAreaSoundVolume_GetPriority_Statics::AtomAreaSoundVolume_eventGetPriority_Parms), Z_Construct_UFunction_AAtomAreaSoundVolume_GetPriority_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtomAreaSoundVolume_GetPriority_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAtomAreaSoundVolume_GetPriority_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtomAreaSoundVolume_GetPriority_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAtomAreaSoundVolume_GetPriority()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAtomAreaSoundVolume_GetPriority_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAtomAreaSoundVolume_OnRep_bEnabled_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAtomAreaSoundVolume_OnRep_bEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomAreaSoundVolume.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAtomAreaSoundVolume_OnRep_bEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAtomAreaSoundVolume, nullptr, "OnRep_bEnabled", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAtomAreaSoundVolume_OnRep_bEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtomAreaSoundVolume_OnRep_bEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAtomAreaSoundVolume_OnRep_bEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAtomAreaSoundVolume_OnRep_bEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAtomAreaSoundVolume_SetEnabled_Statics
	{
		struct AtomAreaSoundVolume_eventSetEnabled_Parms
		{
			bool bNewEnabled;
		};
		static void NewProp_bNewEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AAtomAreaSoundVolume_SetEnabled_Statics::NewProp_bNewEnabled_SetBit(void* Obj)
	{
		((AtomAreaSoundVolume_eventSetEnabled_Parms*)Obj)->bNewEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAtomAreaSoundVolume_SetEnabled_Statics::NewProp_bNewEnabled = { "bNewEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomAreaSoundVolume_eventSetEnabled_Parms), &Z_Construct_UFunction_AAtomAreaSoundVolume_SetEnabled_Statics::NewProp_bNewEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAtomAreaSoundVolume_SetEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAtomAreaSoundVolume_SetEnabled_Statics::NewProp_bNewEnabled,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAtomAreaSoundVolume_SetEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomAreaSoundVolume.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAtomAreaSoundVolume_SetEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAtomAreaSoundVolume, nullptr, "SetEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_AAtomAreaSoundVolume_SetEnabled_Statics::AtomAreaSoundVolume_eventSetEnabled_Parms), Z_Construct_UFunction_AAtomAreaSoundVolume_SetEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtomAreaSoundVolume_SetEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAtomAreaSoundVolume_SetEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtomAreaSoundVolume_SetEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAtomAreaSoundVolume_SetEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAtomAreaSoundVolume_SetEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAtomAreaSoundVolume_SetPriority_Statics
	{
		struct AtomAreaSoundVolume_eventSetPriority_Parms
		{
			float NewPriority;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewPriority;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAtomAreaSoundVolume_SetPriority_Statics::NewProp_NewPriority = { "NewPriority", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomAreaSoundVolume_eventSetPriority_Parms, NewPriority), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAtomAreaSoundVolume_SetPriority_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAtomAreaSoundVolume_SetPriority_Statics::NewProp_NewPriority,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAtomAreaSoundVolume_SetPriority_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomAreaSoundVolume.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAtomAreaSoundVolume_SetPriority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAtomAreaSoundVolume, nullptr, "SetPriority", nullptr, nullptr, sizeof(Z_Construct_UFunction_AAtomAreaSoundVolume_SetPriority_Statics::AtomAreaSoundVolume_eventSetPriority_Parms), Z_Construct_UFunction_AAtomAreaSoundVolume_SetPriority_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtomAreaSoundVolume_SetPriority_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAtomAreaSoundVolume_SetPriority_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtomAreaSoundVolume_SetPriority_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAtomAreaSoundVolume_SetPriority()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAtomAreaSoundVolume_SetPriority_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAtomAreaSoundVolume);
	UClass* Z_Construct_UClass_AAtomAreaSoundVolume_NoRegister()
	{
		return AAtomAreaSoundVolume::StaticClass();
	}
	struct Z_Construct_UClass_AAtomAreaSoundVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Priority;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionProfile_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_CollisionProfile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundStopDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SoundStopDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsEnableAtomCompoentPack_MetaData[];
#endif
		static void NewProp_bIsEnableAtomCompoentPack_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEnableAtomCompoentPack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsAutoPlaySound_MetaData[];
#endif
		static void NewProp_bIsAutoPlaySound_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAutoPlaySound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsDeterminationFromVolumeBoundaryPlane_MetaData[];
#endif
		static void NewProp_bIsDeterminationFromVolumeBoundaryPlane_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDeterminationFromVolumeBoundaryPlane;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableRepeatPlayWhenSoundStop_MetaData[];
#endif
		static void NewProp_bEnableRepeatPlayWhenSoundStop_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableRepeatPlayWhenSoundStop;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AtomComponents_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AtomComponents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AtomComponents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AtomComponents;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sounds_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sounds_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Sounds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAtomAreaSoundVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAtomAreaSoundVolume_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAtomAreaSoundVolume_CreateSounds, "CreateSounds" }, // 2178928787
		{ &Z_Construct_UFunction_AAtomAreaSoundVolume_DestroySounds, "DestroySounds" }, // 794261289
		{ &Z_Construct_UFunction_AAtomAreaSoundVolume_GetEnabled, "GetEnabled" }, // 274043051
		{ &Z_Construct_UFunction_AAtomAreaSoundVolume_GetPriority, "GetPriority" }, // 381370509
		{ &Z_Construct_UFunction_AAtomAreaSoundVolume_OnRep_bEnabled, "OnRep_bEnabled" }, // 4274775104
		{ &Z_Construct_UFunction_AAtomAreaSoundVolume_SetEnabled, "SetEnabled" }, // 1475264585
		{ &Z_Construct_UFunction_AAtomAreaSoundVolume_SetPriority, "SetPriority" }, // 2022290456
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAtomAreaSoundVolume_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "AtomAreaSoundVolume.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AtomAreaSoundVolume.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_Priority_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAreaSoundVolume" },
		{ "ModuleRelativePath", "Public/AtomAreaSoundVolume.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAtomAreaSoundVolume, Priority), METADATA_PARAMS(Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_Priority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_Priority_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_bEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAreaSoundVolume" },
		{ "ModuleRelativePath", "Public/AtomAreaSoundVolume.h" },
	};
#endif
	void Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((AAtomAreaSoundVolume*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_bEnabled = { "bEnabled", "OnRep_bEnabled", (EPropertyFlags)0x0040000100000025, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(AAtomAreaSoundVolume), &Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_bEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_CollisionProfile_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAreaSoundVolume" },
		{ "ModuleRelativePath", "Public/AtomAreaSoundVolume.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_CollisionProfile = { "CollisionProfile", nullptr, (EPropertyFlags)0x0040040000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAtomAreaSoundVolume, CollisionProfile), METADATA_PARAMS(Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_CollisionProfile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_CollisionProfile_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_SoundStopDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAreaSoundVolume" },
		{ "ModuleRelativePath", "Public/AtomAreaSoundVolume.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_SoundStopDistance = { "SoundStopDistance", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAtomAreaSoundVolume, SoundStopDistance), METADATA_PARAMS(Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_SoundStopDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_SoundStopDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_bIsEnableAtomCompoentPack_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAreaSoundVolume" },
		{ "ModuleRelativePath", "Public/AtomAreaSoundVolume.h" },
	};
#endif
	void Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_bIsEnableAtomCompoentPack_SetBit(void* Obj)
	{
		((AAtomAreaSoundVolume*)Obj)->bIsEnableAtomCompoentPack = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_bIsEnableAtomCompoentPack = { "bIsEnableAtomCompoentPack", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AAtomAreaSoundVolume), &Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_bIsEnableAtomCompoentPack_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_bIsEnableAtomCompoentPack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_bIsEnableAtomCompoentPack_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_bIsAutoPlaySound_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAreaSoundVolume" },
		{ "ModuleRelativePath", "Public/AtomAreaSoundVolume.h" },
	};
#endif
	void Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_bIsAutoPlaySound_SetBit(void* Obj)
	{
		((AAtomAreaSoundVolume*)Obj)->bIsAutoPlaySound = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_bIsAutoPlaySound = { "bIsAutoPlaySound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AAtomAreaSoundVolume), &Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_bIsAutoPlaySound_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_bIsAutoPlaySound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_bIsAutoPlaySound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_bIsDeterminationFromVolumeBoundaryPlane_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAreaSoundVolume" },
		{ "ModuleRelativePath", "Public/AtomAreaSoundVolume.h" },
	};
#endif
	void Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_bIsDeterminationFromVolumeBoundaryPlane_SetBit(void* Obj)
	{
		((AAtomAreaSoundVolume*)Obj)->bIsDeterminationFromVolumeBoundaryPlane = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_bIsDeterminationFromVolumeBoundaryPlane = { "bIsDeterminationFromVolumeBoundaryPlane", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AAtomAreaSoundVolume), &Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_bIsDeterminationFromVolumeBoundaryPlane_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_bIsDeterminationFromVolumeBoundaryPlane_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_bIsDeterminationFromVolumeBoundaryPlane_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_bEnableRepeatPlayWhenSoundStop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAreaSoundVolume" },
		{ "ModuleRelativePath", "Public/AtomAreaSoundVolume.h" },
	};
#endif
	void Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_bEnableRepeatPlayWhenSoundStop_SetBit(void* Obj)
	{
		((AAtomAreaSoundVolume*)Obj)->bEnableRepeatPlayWhenSoundStop = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_bEnableRepeatPlayWhenSoundStop = { "bEnableRepeatPlayWhenSoundStop", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AAtomAreaSoundVolume), &Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_bEnableRepeatPlayWhenSoundStop_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_bEnableRepeatPlayWhenSoundStop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_bEnableRepeatPlayWhenSoundStop_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_AtomComponents_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAreaSoundVolume" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AtomAreaSoundVolume.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_AtomComponents_Inner = { "AtomComponents", nullptr, (EPropertyFlags)0x0002000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UAtomComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_AtomComponents_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_AtomComponents_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_AtomComponents_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAreaSoundVolume" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AtomAreaSoundVolume.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_AtomComponents = { "AtomComponents", nullptr, (EPropertyFlags)0x001000800000200d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAtomAreaSoundVolume, AtomComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_AtomComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_AtomComponents_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_Sounds_Inner = { "Sounds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_Sounds_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAreaSoundVolume" },
		{ "ModuleRelativePath", "Public/AtomAreaSoundVolume.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_Sounds = { "Sounds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAtomAreaSoundVolume, Sounds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_Sounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_Sounds_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAtomAreaSoundVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_Priority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_bEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_CollisionProfile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_SoundStopDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_bIsEnableAtomCompoentPack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_bIsAutoPlaySound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_bIsDeterminationFromVolumeBoundaryPlane,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_bEnableRepeatPlayWhenSoundStop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_AtomComponents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_AtomComponents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_Sounds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAtomAreaSoundVolume_Statics::NewProp_Sounds,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAtomAreaSoundVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAtomAreaSoundVolume>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAtomAreaSoundVolume_Statics::ClassParams = {
		&AAtomAreaSoundVolume::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAtomAreaSoundVolume_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AAtomAreaSoundVolume_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAtomAreaSoundVolume_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAtomAreaSoundVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAtomAreaSoundVolume()
	{
		if (!Z_Registration_Info_UClass_AAtomAreaSoundVolume.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAtomAreaSoundVolume.OuterSingleton, Z_Construct_UClass_AAtomAreaSoundVolume_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAtomAreaSoundVolume.OuterSingleton;
	}
	template<> CRIWARERUNTIME_API UClass* StaticClass<AAtomAreaSoundVolume>()
	{
		return AAtomAreaSoundVolume::StaticClass();
	}

	void AAtomAreaSoundVolume::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_bEnabled(TEXT("bEnabled"));

		const bool bIsValid = true
			&& Name_bEnabled == ClassReps[(int32)ENetFields_Private::bEnabled].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AAtomAreaSoundVolume"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAtomAreaSoundVolume);
	AAtomAreaSoundVolume::~AAtomAreaSoundVolume() {}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAreaSoundVolume_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAreaSoundVolume_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAtomAreaSoundVolume, AAtomAreaSoundVolume::StaticClass, TEXT("AAtomAreaSoundVolume"), &Z_Registration_Info_UClass_AAtomAreaSoundVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAtomAreaSoundVolume), 1119305957U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAreaSoundVolume_h_962213441(TEXT("/Script/CriWareRuntime"),
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAreaSoundVolume_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomAreaSoundVolume_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
