// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/AtomCueSheetLoaderComponent.h"
#include "../../Source/Runtime/Engine/Classes/Engine/LatentActionManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomCueSheetLoaderComponent() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomCueSheetLoaderComponent();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomCueSheetLoaderComponent_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UCriFsBinderComponent_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_USoundAtomCueSheet_NoRegister();
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EAtomCueSheetLoaderComponentStatus();
	CRIWARERUNTIME_API UFunction* Z_Construct_UDelegateFunction_UAtomCueSheetLoaderComponent_OnAtomCueSheetLoaded__DelegateSignature();
	CRIWARERUNTIME_API UFunction* Z_Construct_UDelegateFunction_UAtomCueSheetLoaderComponent_OnLoadCompleted__DelegateSignature();
	CRIWARERUNTIME_API UFunction* Z_Construct_UDelegateFunction_UAtomCueSheetLoaderComponent_OnLoadError__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UAtomCueSheetLoaderComponent_OnLoadError__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UAtomCueSheetLoaderComponent_OnLoadError__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomCueSheetLoaderComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UAtomCueSheetLoaderComponent_OnLoadError__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomCueSheetLoaderComponent, nullptr, "OnLoadError__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UAtomCueSheetLoaderComponent_OnLoadError__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UAtomCueSheetLoaderComponent_OnLoadError__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UAtomCueSheetLoaderComponent_OnLoadError__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UAtomCueSheetLoaderComponent_OnLoadError__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UAtomCueSheetLoaderComponent::FOnLoadError_DelegateWrapper(const FMulticastScriptDelegate& OnLoadError)
{
	OnLoadError.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_UAtomCueSheetLoaderComponent_OnLoadCompleted__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UAtomCueSheetLoaderComponent_OnLoadCompleted__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomCueSheetLoaderComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UAtomCueSheetLoaderComponent_OnLoadCompleted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomCueSheetLoaderComponent, nullptr, "OnLoadCompleted__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UAtomCueSheetLoaderComponent_OnLoadCompleted__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UAtomCueSheetLoaderComponent_OnLoadCompleted__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UAtomCueSheetLoaderComponent_OnLoadCompleted__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UAtomCueSheetLoaderComponent_OnLoadCompleted__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UAtomCueSheetLoaderComponent::FOnLoadCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnLoadCompleted)
{
	OnLoadCompleted.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_UAtomCueSheetLoaderComponent_OnAtomCueSheetLoaded__DelegateSignature_Statics
	{
		struct AtomCueSheetLoaderComponent_eventOnAtomCueSheetLoaded_Parms
		{
			USoundAtomCueSheet* Loaded;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Loaded;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UAtomCueSheetLoaderComponent_OnAtomCueSheetLoaded__DelegateSignature_Statics::NewProp_Loaded = { "Loaded", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomCueSheetLoaderComponent_eventOnAtomCueSheetLoaded_Parms, Loaded), Z_Construct_UClass_USoundAtomCueSheet_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UAtomCueSheetLoaderComponent_OnAtomCueSheetLoaded__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UAtomCueSheetLoaderComponent_OnAtomCueSheetLoaded__DelegateSignature_Statics::NewProp_Loaded,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UAtomCueSheetLoaderComponent_OnAtomCueSheetLoaded__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomCueSheetLoaderComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UAtomCueSheetLoaderComponent_OnAtomCueSheetLoaded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomCueSheetLoaderComponent, nullptr, "OnAtomCueSheetLoaded__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UAtomCueSheetLoaderComponent_OnAtomCueSheetLoaded__DelegateSignature_Statics::AtomCueSheetLoaderComponent_eventOnAtomCueSheetLoaded_Parms), Z_Construct_UDelegateFunction_UAtomCueSheetLoaderComponent_OnAtomCueSheetLoaded__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UAtomCueSheetLoaderComponent_OnAtomCueSheetLoaded__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UAtomCueSheetLoaderComponent_OnAtomCueSheetLoaded__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UAtomCueSheetLoaderComponent_OnAtomCueSheetLoaded__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UAtomCueSheetLoaderComponent_OnAtomCueSheetLoaded__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UAtomCueSheetLoaderComponent_OnAtomCueSheetLoaded__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UAtomCueSheetLoaderComponent::FOnAtomCueSheetLoaded_DelegateWrapper(const FScriptDelegate& OnAtomCueSheetLoaded, USoundAtomCueSheet* Loaded)
{
	struct AtomCueSheetLoaderComponent_eventOnAtomCueSheetLoaded_Parms
	{
		USoundAtomCueSheet* Loaded;
	};
	AtomCueSheetLoaderComponent_eventOnAtomCueSheetLoaded_Parms Parms;
	Parms.Loaded=Loaded;
	OnAtomCueSheetLoaded.ProcessDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UAtomCueSheetLoaderComponent::execGetAtomCueSheet)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USoundAtomCueSheet**)Z_Param__Result=P_THIS->GetAtomCueSheet();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomCueSheetLoaderComponent::execGetStatus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EAtomCueSheetLoaderComponentStatus*)Z_Param__Result=P_THIS->GetStatus();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomCueSheetLoaderComponent::execLoad)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Load();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomCueSheetLoaderComponent::execLoadAtomCueSheet)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_SOFTOBJECT(TSoftObjectPtr<USoundAtomCueSheet>,Z_Param_Asset);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnLoaded);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAtomCueSheetLoaderComponent::LoadAtomCueSheet(Z_Param_WorldContextObject,Z_Param_Asset,FOnAtomCueSheetLoaded(Z_Param_OnLoaded),Z_Param_LatentInfo);
		P_NATIVE_END;
	}
	void UAtomCueSheetLoaderComponent::StaticRegisterNativesUAtomCueSheetLoaderComponent()
	{
		UClass* Class = UAtomCueSheetLoaderComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAtomCueSheet", &UAtomCueSheetLoaderComponent::execGetAtomCueSheet },
			{ "GetStatus", &UAtomCueSheetLoaderComponent::execGetStatus },
			{ "Load", &UAtomCueSheetLoaderComponent::execLoad },
			{ "LoadAtomCueSheet", &UAtomCueSheetLoaderComponent::execLoadAtomCueSheet },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAtomCueSheetLoaderComponent_GetAtomCueSheet_Statics
	{
		struct AtomCueSheetLoaderComponent_eventGetAtomCueSheet_Parms
		{
			USoundAtomCueSheet* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomCueSheetLoaderComponent_GetAtomCueSheet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomCueSheetLoaderComponent_eventGetAtomCueSheet_Parms, ReturnValue), Z_Construct_UClass_USoundAtomCueSheet_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomCueSheetLoaderComponent_GetAtomCueSheet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCueSheetLoaderComponent_GetAtomCueSheet_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomCueSheetLoaderComponent_GetAtomCueSheet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomCueSheetLoaderComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomCueSheetLoaderComponent_GetAtomCueSheet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomCueSheetLoaderComponent, nullptr, "GetAtomCueSheet", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomCueSheetLoaderComponent_GetAtomCueSheet_Statics::AtomCueSheetLoaderComponent_eventGetAtomCueSheet_Parms), Z_Construct_UFunction_UAtomCueSheetLoaderComponent_GetAtomCueSheet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCueSheetLoaderComponent_GetAtomCueSheet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomCueSheetLoaderComponent_GetAtomCueSheet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCueSheetLoaderComponent_GetAtomCueSheet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomCueSheetLoaderComponent_GetAtomCueSheet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomCueSheetLoaderComponent_GetAtomCueSheet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomCueSheetLoaderComponent_GetStatus_Statics
	{
		struct AtomCueSheetLoaderComponent_eventGetStatus_Parms
		{
			EAtomCueSheetLoaderComponentStatus ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAtomCueSheetLoaderComponent_GetStatus_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAtomCueSheetLoaderComponent_GetStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomCueSheetLoaderComponent_eventGetStatus_Parms, ReturnValue), Z_Construct_UEnum_CriWareRuntime_EAtomCueSheetLoaderComponentStatus, METADATA_PARAMS(nullptr, 0) }; // 3814301951
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomCueSheetLoaderComponent_GetStatus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCueSheetLoaderComponent_GetStatus_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCueSheetLoaderComponent_GetStatus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomCueSheetLoaderComponent_GetStatus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomCueSheetLoaderComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomCueSheetLoaderComponent_GetStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomCueSheetLoaderComponent, nullptr, "GetStatus", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomCueSheetLoaderComponent_GetStatus_Statics::AtomCueSheetLoaderComponent_eventGetStatus_Parms), Z_Construct_UFunction_UAtomCueSheetLoaderComponent_GetStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCueSheetLoaderComponent_GetStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomCueSheetLoaderComponent_GetStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCueSheetLoaderComponent_GetStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomCueSheetLoaderComponent_GetStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomCueSheetLoaderComponent_GetStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomCueSheetLoaderComponent_Load_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomCueSheetLoaderComponent_Load_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomCueSheetLoaderComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomCueSheetLoaderComponent_Load_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomCueSheetLoaderComponent, nullptr, "Load", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomCueSheetLoaderComponent_Load_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCueSheetLoaderComponent_Load_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomCueSheetLoaderComponent_Load()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomCueSheetLoaderComponent_Load_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomCueSheetLoaderComponent_LoadAtomCueSheet_Statics
	{
		struct AtomCueSheetLoaderComponent_eventLoadAtomCueSheet_Parms
		{
			UObject* WorldContextObject;
			TSoftObjectPtr<USoundAtomCueSheet> Asset;
			FScriptDelegate OnLoaded;
			FLatentActionInfo LatentInfo;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Asset;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnLoaded;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomCueSheetLoaderComponent_LoadAtomCueSheet_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomCueSheetLoaderComponent_eventLoadAtomCueSheet_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UAtomCueSheetLoaderComponent_LoadAtomCueSheet_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomCueSheetLoaderComponent_eventLoadAtomCueSheet_Parms, Asset), Z_Construct_UClass_USoundAtomCueSheet_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UAtomCueSheetLoaderComponent_LoadAtomCueSheet_Statics::NewProp_OnLoaded = { "OnLoaded", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomCueSheetLoaderComponent_eventLoadAtomCueSheet_Parms, OnLoaded), Z_Construct_UDelegateFunction_UAtomCueSheetLoaderComponent_OnAtomCueSheetLoaded__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 1119037930
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomCueSheetLoaderComponent_LoadAtomCueSheet_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomCueSheetLoaderComponent_eventLoadAtomCueSheet_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) }; // 2194022737
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomCueSheetLoaderComponent_LoadAtomCueSheet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCueSheetLoaderComponent_LoadAtomCueSheet_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCueSheetLoaderComponent_LoadAtomCueSheet_Statics::NewProp_Asset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCueSheetLoaderComponent_LoadAtomCueSheet_Statics::NewProp_OnLoaded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCueSheetLoaderComponent_LoadAtomCueSheet_Statics::NewProp_LatentInfo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomCueSheetLoaderComponent_LoadAtomCueSheet_Statics::Function_MetaDataParams[] = {
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/AtomCueSheetLoaderComponent.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomCueSheetLoaderComponent_LoadAtomCueSheet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomCueSheetLoaderComponent, nullptr, "LoadAtomCueSheet", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomCueSheetLoaderComponent_LoadAtomCueSheet_Statics::AtomCueSheetLoaderComponent_eventLoadAtomCueSheet_Parms), Z_Construct_UFunction_UAtomCueSheetLoaderComponent_LoadAtomCueSheet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCueSheetLoaderComponent_LoadAtomCueSheet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomCueSheetLoaderComponent_LoadAtomCueSheet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCueSheetLoaderComponent_LoadAtomCueSheet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomCueSheetLoaderComponent_LoadAtomCueSheet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomCueSheetLoaderComponent_LoadAtomCueSheet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomCueSheetLoaderComponent);
	UClass* Z_Construct_UClass_UAtomCueSheetLoaderComponent_NoRegister()
	{
		return UAtomCueSheetLoaderComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAtomCueSheetLoaderComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CueSheetReference_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CueSheetReference;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BinderComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BinderComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnLoadCompleted_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLoadCompleted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnLoadError_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLoadError;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CueSheet_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CueSheet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomCueSheetLoaderComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAtomCueSheetLoaderComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtomCueSheetLoaderComponent_GetAtomCueSheet, "GetAtomCueSheet" }, // 2723963374
		{ &Z_Construct_UFunction_UAtomCueSheetLoaderComponent_GetStatus, "GetStatus" }, // 3345998775
		{ &Z_Construct_UFunction_UAtomCueSheetLoaderComponent_Load, "Load" }, // 4003418703
		{ &Z_Construct_UFunction_UAtomCueSheetLoaderComponent_LoadAtomCueSheet, "LoadAtomCueSheet" }, // 2413998549
		{ &Z_Construct_UDelegateFunction_UAtomCueSheetLoaderComponent_OnAtomCueSheetLoaded__DelegateSignature, "OnAtomCueSheetLoaded__DelegateSignature" }, // 1119037930
		{ &Z_Construct_UDelegateFunction_UAtomCueSheetLoaderComponent_OnLoadCompleted__DelegateSignature, "OnLoadCompleted__DelegateSignature" }, // 4121287417
		{ &Z_Construct_UDelegateFunction_UAtomCueSheetLoaderComponent_OnLoadError__DelegateSignature, "OnLoadError__DelegateSignature" }, // 1540523924
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomCueSheetLoaderComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "AtomCueSheetLoaderComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AtomCueSheetLoaderComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomCueSheetLoaderComponent_Statics::NewProp_CueSheetReference_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomCueSheetLoaderComponent" },
		{ "ModuleRelativePath", "Public/AtomCueSheetLoaderComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAtomCueSheetLoaderComponent_Statics::NewProp_CueSheetReference = { "CueSheetReference", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomCueSheetLoaderComponent, CueSheetReference), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UAtomCueSheetLoaderComponent_Statics::NewProp_CueSheetReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomCueSheetLoaderComponent_Statics::NewProp_CueSheetReference_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomCueSheetLoaderComponent_Statics::NewProp_BinderComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomCueSheetLoaderComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AtomCueSheetLoaderComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAtomCueSheetLoaderComponent_Statics::NewProp_BinderComponent = { "BinderComponent", nullptr, (EPropertyFlags)0x001200000008200d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomCueSheetLoaderComponent, BinderComponent), Z_Construct_UClass_UCriFsBinderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtomCueSheetLoaderComponent_Statics::NewProp_BinderComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomCueSheetLoaderComponent_Statics::NewProp_BinderComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomCueSheetLoaderComponent_Statics::NewProp_OnLoadCompleted_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomCueSheetLoaderComponent" },
		{ "ModuleRelativePath", "Public/AtomCueSheetLoaderComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAtomCueSheetLoaderComponent_Statics::NewProp_OnLoadCompleted = { "OnLoadCompleted", nullptr, (EPropertyFlags)0x0010000010080005, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomCueSheetLoaderComponent, OnLoadCompleted), Z_Construct_UDelegateFunction_UAtomCueSheetLoaderComponent_OnLoadCompleted__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAtomCueSheetLoaderComponent_Statics::NewProp_OnLoadCompleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomCueSheetLoaderComponent_Statics::NewProp_OnLoadCompleted_MetaData)) }; // 4121287417
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomCueSheetLoaderComponent_Statics::NewProp_OnLoadError_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomCueSheetLoaderComponent" },
		{ "ModuleRelativePath", "Public/AtomCueSheetLoaderComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAtomCueSheetLoaderComponent_Statics::NewProp_OnLoadError = { "OnLoadError", nullptr, (EPropertyFlags)0x0010000010080005, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomCueSheetLoaderComponent, OnLoadError), Z_Construct_UDelegateFunction_UAtomCueSheetLoaderComponent_OnLoadError__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAtomCueSheetLoaderComponent_Statics::NewProp_OnLoadError_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomCueSheetLoaderComponent_Statics::NewProp_OnLoadError_MetaData)) }; // 1540523924
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomCueSheetLoaderComponent_Statics::NewProp_CueSheet_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomCueSheetLoaderComponent" },
		{ "ModuleRelativePath", "Public/AtomCueSheetLoaderComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAtomCueSheetLoaderComponent_Statics::NewProp_CueSheet = { "CueSheet", nullptr, (EPropertyFlags)0x0040000000002005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomCueSheetLoaderComponent, CueSheet), Z_Construct_UClass_USoundAtomCueSheet_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtomCueSheetLoaderComponent_Statics::NewProp_CueSheet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomCueSheetLoaderComponent_Statics::NewProp_CueSheet_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtomCueSheetLoaderComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomCueSheetLoaderComponent_Statics::NewProp_CueSheetReference,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomCueSheetLoaderComponent_Statics::NewProp_BinderComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomCueSheetLoaderComponent_Statics::NewProp_OnLoadCompleted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomCueSheetLoaderComponent_Statics::NewProp_OnLoadError,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomCueSheetLoaderComponent_Statics::NewProp_CueSheet,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomCueSheetLoaderComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomCueSheetLoaderComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomCueSheetLoaderComponent_Statics::ClassParams = {
		&UAtomCueSheetLoaderComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAtomCueSheetLoaderComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtomCueSheetLoaderComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomCueSheetLoaderComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomCueSheetLoaderComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomCueSheetLoaderComponent()
	{
		if (!Z_Registration_Info_UClass_UAtomCueSheetLoaderComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomCueSheetLoaderComponent.OuterSingleton, Z_Construct_UClass_UAtomCueSheetLoaderComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomCueSheetLoaderComponent.OuterSingleton;
	}
	template<> CRIWARERUNTIME_API UClass* StaticClass<UAtomCueSheetLoaderComponent>()
	{
		return UAtomCueSheetLoaderComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomCueSheetLoaderComponent);
	UAtomCueSheetLoaderComponent::~UAtomCueSheetLoaderComponent() {}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCueSheetLoaderComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCueSheetLoaderComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAtomCueSheetLoaderComponent, UAtomCueSheetLoaderComponent::StaticClass, TEXT("UAtomCueSheetLoaderComponent"), &Z_Registration_Info_UClass_UAtomCueSheetLoaderComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomCueSheetLoaderComponent), 737817465U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCueSheetLoaderComponent_h_2922404039(TEXT("/Script/CriWareRuntime"),
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCueSheetLoaderComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCueSheetLoaderComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
