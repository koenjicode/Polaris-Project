// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/AtomEntranceVolume.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomEntranceVolume() {}
// Cross Module References
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_AAtomAudioVolume_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_AAtomEntranceVolume();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_AAtomEntranceVolume_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AVolume();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	DEFINE_FUNCTION(AAtomEntranceVolume::execGetEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAtomEntranceVolume::execGetPriority)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetPriority();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAtomEntranceVolume::execOnRep_bEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_bEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAtomEntranceVolume::execSetEnabled)
	{
		P_GET_UBOOL(Z_Param_bNewEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEnabled(Z_Param_bNewEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAtomEntranceVolume::execSetPriority)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewPriority);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPriority(Z_Param_NewPriority);
		P_NATIVE_END;
	}
	void AAtomEntranceVolume::StaticRegisterNativesAAtomEntranceVolume()
	{
		UClass* Class = AAtomEntranceVolume::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetEnabled", &AAtomEntranceVolume::execGetEnabled },
			{ "GetPriority", &AAtomEntranceVolume::execGetPriority },
			{ "OnRep_bEnabled", &AAtomEntranceVolume::execOnRep_bEnabled },
			{ "SetEnabled", &AAtomEntranceVolume::execSetEnabled },
			{ "SetPriority", &AAtomEntranceVolume::execSetPriority },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAtomEntranceVolume_GetEnabled_Statics
	{
		struct AtomEntranceVolume_eventGetEnabled_Parms
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
	void Z_Construct_UFunction_AAtomEntranceVolume_GetEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AtomEntranceVolume_eventGetEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAtomEntranceVolume_GetEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomEntranceVolume_eventGetEnabled_Parms), &Z_Construct_UFunction_AAtomEntranceVolume_GetEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAtomEntranceVolume_GetEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAtomEntranceVolume_GetEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAtomEntranceVolume_GetEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomEntranceVolume.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAtomEntranceVolume_GetEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAtomEntranceVolume, nullptr, "GetEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_AAtomEntranceVolume_GetEnabled_Statics::AtomEntranceVolume_eventGetEnabled_Parms), Z_Construct_UFunction_AAtomEntranceVolume_GetEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtomEntranceVolume_GetEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAtomEntranceVolume_GetEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtomEntranceVolume_GetEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAtomEntranceVolume_GetEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAtomEntranceVolume_GetEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAtomEntranceVolume_GetPriority_Statics
	{
		struct AtomEntranceVolume_eventGetPriority_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAtomEntranceVolume_GetPriority_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomEntranceVolume_eventGetPriority_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAtomEntranceVolume_GetPriority_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAtomEntranceVolume_GetPriority_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAtomEntranceVolume_GetPriority_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomEntranceVolume.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAtomEntranceVolume_GetPriority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAtomEntranceVolume, nullptr, "GetPriority", nullptr, nullptr, sizeof(Z_Construct_UFunction_AAtomEntranceVolume_GetPriority_Statics::AtomEntranceVolume_eventGetPriority_Parms), Z_Construct_UFunction_AAtomEntranceVolume_GetPriority_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtomEntranceVolume_GetPriority_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAtomEntranceVolume_GetPriority_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtomEntranceVolume_GetPriority_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAtomEntranceVolume_GetPriority()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAtomEntranceVolume_GetPriority_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAtomEntranceVolume_OnRep_bEnabled_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAtomEntranceVolume_OnRep_bEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomEntranceVolume.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAtomEntranceVolume_OnRep_bEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAtomEntranceVolume, nullptr, "OnRep_bEnabled", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAtomEntranceVolume_OnRep_bEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtomEntranceVolume_OnRep_bEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAtomEntranceVolume_OnRep_bEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAtomEntranceVolume_OnRep_bEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAtomEntranceVolume_SetEnabled_Statics
	{
		struct AtomEntranceVolume_eventSetEnabled_Parms
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
	void Z_Construct_UFunction_AAtomEntranceVolume_SetEnabled_Statics::NewProp_bNewEnabled_SetBit(void* Obj)
	{
		((AtomEntranceVolume_eventSetEnabled_Parms*)Obj)->bNewEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAtomEntranceVolume_SetEnabled_Statics::NewProp_bNewEnabled = { "bNewEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AtomEntranceVolume_eventSetEnabled_Parms), &Z_Construct_UFunction_AAtomEntranceVolume_SetEnabled_Statics::NewProp_bNewEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAtomEntranceVolume_SetEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAtomEntranceVolume_SetEnabled_Statics::NewProp_bNewEnabled,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAtomEntranceVolume_SetEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomEntranceVolume.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAtomEntranceVolume_SetEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAtomEntranceVolume, nullptr, "SetEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_AAtomEntranceVolume_SetEnabled_Statics::AtomEntranceVolume_eventSetEnabled_Parms), Z_Construct_UFunction_AAtomEntranceVolume_SetEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtomEntranceVolume_SetEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAtomEntranceVolume_SetEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtomEntranceVolume_SetEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAtomEntranceVolume_SetEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAtomEntranceVolume_SetEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAtomEntranceVolume_SetPriority_Statics
	{
		struct AtomEntranceVolume_eventSetPriority_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAtomEntranceVolume_SetPriority_Statics::NewProp_NewPriority = { "NewPriority", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomEntranceVolume_eventSetPriority_Parms, NewPriority), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAtomEntranceVolume_SetPriority_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAtomEntranceVolume_SetPriority_Statics::NewProp_NewPriority,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAtomEntranceVolume_SetPriority_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomEntranceVolume.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAtomEntranceVolume_SetPriority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAtomEntranceVolume, nullptr, "SetPriority", nullptr, nullptr, sizeof(Z_Construct_UFunction_AAtomEntranceVolume_SetPriority_Statics::AtomEntranceVolume_eventSetPriority_Parms), Z_Construct_UFunction_AAtomEntranceVolume_SetPriority_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtomEntranceVolume_SetPriority_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAtomEntranceVolume_SetPriority_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAtomEntranceVolume_SetPriority_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAtomEntranceVolume_SetPriority()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAtomEntranceVolume_SetPriority_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAtomEntranceVolume);
	UClass* Z_Construct_UClass_AAtomEntranceVolume_NoRegister()
	{
		return AAtomEntranceVolume::StaticClass();
	}
	struct Z_Construct_UClass_AAtomEntranceVolume_Statics
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
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_NeighbourhoodAudioVolumeArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NeighbourhoodAudioVolumeArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NeighbourhoodAudioVolumeArray;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAtomEntranceVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAtomEntranceVolume_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAtomEntranceVolume_GetEnabled, "GetEnabled" }, // 3288466285
		{ &Z_Construct_UFunction_AAtomEntranceVolume_GetPriority, "GetPriority" }, // 1821363413
		{ &Z_Construct_UFunction_AAtomEntranceVolume_OnRep_bEnabled, "OnRep_bEnabled" }, // 1995530987
		{ &Z_Construct_UFunction_AAtomEntranceVolume_SetEnabled, "SetEnabled" }, // 123420209
		{ &Z_Construct_UFunction_AAtomEntranceVolume_SetPriority, "SetPriority" }, // 1766306505
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAtomEntranceVolume_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "AtomEntranceVolume.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AtomEntranceVolume.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAtomEntranceVolume_Statics::NewProp_Priority_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomEntranceVolume" },
		{ "ModuleRelativePath", "Public/AtomEntranceVolume.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAtomEntranceVolume_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAtomEntranceVolume, Priority), METADATA_PARAMS(Z_Construct_UClass_AAtomEntranceVolume_Statics::NewProp_Priority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAtomEntranceVolume_Statics::NewProp_Priority_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAtomEntranceVolume_Statics::NewProp_bEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomEntranceVolume" },
		{ "ModuleRelativePath", "Public/AtomEntranceVolume.h" },
	};
#endif
	void Z_Construct_UClass_AAtomEntranceVolume_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((AAtomEntranceVolume*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAtomEntranceVolume_Statics::NewProp_bEnabled = { "bEnabled", "OnRep_bEnabled", (EPropertyFlags)0x0040000100000025, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(AAtomEntranceVolume), &Z_Construct_UClass_AAtomEntranceVolume_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAtomEntranceVolume_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAtomEntranceVolume_Statics::NewProp_bEnabled_MetaData)) };
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_AAtomEntranceVolume_Statics::NewProp_NeighbourhoodAudioVolumeArray_Inner = { "NeighbourhoodAudioVolumeArray", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AAtomAudioVolume_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAtomEntranceVolume_Statics::NewProp_NeighbourhoodAudioVolumeArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomEntranceVolume" },
		{ "ModuleRelativePath", "Public/AtomEntranceVolume.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAtomEntranceVolume_Statics::NewProp_NeighbourhoodAudioVolumeArray = { "NeighbourhoodAudioVolumeArray", "OnRep_bEnabled", (EPropertyFlags)0x0014000100000021, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAtomEntranceVolume, NeighbourhoodAudioVolumeArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AAtomEntranceVolume_Statics::NewProp_NeighbourhoodAudioVolumeArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAtomEntranceVolume_Statics::NewProp_NeighbourhoodAudioVolumeArray_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAtomEntranceVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAtomEntranceVolume_Statics::NewProp_Priority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAtomEntranceVolume_Statics::NewProp_bEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAtomEntranceVolume_Statics::NewProp_NeighbourhoodAudioVolumeArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAtomEntranceVolume_Statics::NewProp_NeighbourhoodAudioVolumeArray,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAtomEntranceVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAtomEntranceVolume>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAtomEntranceVolume_Statics::ClassParams = {
		&AAtomEntranceVolume::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAtomEntranceVolume_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AAtomEntranceVolume_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAtomEntranceVolume_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAtomEntranceVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAtomEntranceVolume()
	{
		if (!Z_Registration_Info_UClass_AAtomEntranceVolume.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAtomEntranceVolume.OuterSingleton, Z_Construct_UClass_AAtomEntranceVolume_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAtomEntranceVolume.OuterSingleton;
	}
	template<> CRIWARERUNTIME_API UClass* StaticClass<AAtomEntranceVolume>()
	{
		return AAtomEntranceVolume::StaticClass();
	}

	void AAtomEntranceVolume::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_bEnabled(TEXT("bEnabled"));
		static const FName Name_NeighbourhoodAudioVolumeArray(TEXT("NeighbourhoodAudioVolumeArray"));

		const bool bIsValid = true
			&& Name_bEnabled == ClassReps[(int32)ENetFields_Private::bEnabled].Property->GetFName()
			&& Name_NeighbourhoodAudioVolumeArray == ClassReps[(int32)ENetFields_Private::NeighbourhoodAudioVolumeArray].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AAtomEntranceVolume"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAtomEntranceVolume);
	AAtomEntranceVolume::~AAtomEntranceVolume() {}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomEntranceVolume_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomEntranceVolume_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAtomEntranceVolume, AAtomEntranceVolume::StaticClass, TEXT("AAtomEntranceVolume"), &Z_Registration_Info_UClass_AAtomEntranceVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAtomEntranceVolume), 3018243980U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomEntranceVolume_h_3879457701(TEXT("/Script/CriWareRuntime"),
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomEntranceVolume_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomEntranceVolume_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
