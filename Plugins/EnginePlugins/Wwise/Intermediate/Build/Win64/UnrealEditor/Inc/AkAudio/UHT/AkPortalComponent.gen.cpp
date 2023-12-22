// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkPortalComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkPortalComponent() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkPortalComponent();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkPortalComponent_NoRegister();
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_AkAcousticPortalState();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	DEFINE_FUNCTION(UAkPortalComponent::execClosePortal)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClosePortal();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkPortalComponent::execGetCurrentState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AkAcousticPortalState*)Z_Param__Result=P_THIS->GetCurrentState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkPortalComponent::execGetPrimitiveParent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPrimitiveComponent**)Z_Param__Result=P_THIS->GetPrimitiveParent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkPortalComponent::execOpenPortal)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OpenPortal();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkPortalComponent::execPortalPlacementValid)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->PortalPlacementValid();
		P_NATIVE_END;
	}
	void UAkPortalComponent::StaticRegisterNativesUAkPortalComponent()
	{
		UClass* Class = UAkPortalComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClosePortal", &UAkPortalComponent::execClosePortal },
			{ "GetCurrentState", &UAkPortalComponent::execGetCurrentState },
			{ "GetPrimitiveParent", &UAkPortalComponent::execGetPrimitiveParent },
			{ "OpenPortal", &UAkPortalComponent::execOpenPortal },
			{ "PortalPlacementValid", &UAkPortalComponent::execPortalPlacementValid },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAkPortalComponent_ClosePortal_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkPortalComponent_ClosePortal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkPortalComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkPortalComponent_ClosePortal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkPortalComponent, nullptr, "ClosePortal", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkPortalComponent_ClosePortal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkPortalComponent_ClosePortal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkPortalComponent_ClosePortal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkPortalComponent_ClosePortal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkPortalComponent_GetCurrentState_Statics
	{
		struct AkPortalComponent_eventGetCurrentState_Parms
		{
			AkAcousticPortalState ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAkPortalComponent_GetCurrentState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAkPortalComponent_GetCurrentState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkPortalComponent_eventGetCurrentState_Parms, ReturnValue), Z_Construct_UEnum_AkAudio_AkAcousticPortalState, METADATA_PARAMS(nullptr, 0) }; // 1449190885
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkPortalComponent_GetCurrentState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkPortalComponent_GetCurrentState_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkPortalComponent_GetCurrentState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkPortalComponent_GetCurrentState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkPortalComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkPortalComponent_GetCurrentState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkPortalComponent, nullptr, "GetCurrentState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkPortalComponent_GetCurrentState_Statics::AkPortalComponent_eventGetCurrentState_Parms), Z_Construct_UFunction_UAkPortalComponent_GetCurrentState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkPortalComponent_GetCurrentState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkPortalComponent_GetCurrentState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkPortalComponent_GetCurrentState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkPortalComponent_GetCurrentState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkPortalComponent_GetCurrentState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkPortalComponent_GetPrimitiveParent_Statics
	{
		struct AkPortalComponent_eventGetPrimitiveParent_Parms
		{
			UPrimitiveComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkPortalComponent_GetPrimitiveParent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkPortalComponent_GetPrimitiveParent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkPortalComponent_eventGetPrimitiveParent_Parms, ReturnValue), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAkPortalComponent_GetPrimitiveParent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkPortalComponent_GetPrimitiveParent_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkPortalComponent_GetPrimitiveParent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkPortalComponent_GetPrimitiveParent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkPortalComponent_GetPrimitiveParent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkPortalComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkPortalComponent_GetPrimitiveParent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkPortalComponent, nullptr, "GetPrimitiveParent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkPortalComponent_GetPrimitiveParent_Statics::AkPortalComponent_eventGetPrimitiveParent_Parms), Z_Construct_UFunction_UAkPortalComponent_GetPrimitiveParent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkPortalComponent_GetPrimitiveParent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkPortalComponent_GetPrimitiveParent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkPortalComponent_GetPrimitiveParent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkPortalComponent_GetPrimitiveParent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkPortalComponent_GetPrimitiveParent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkPortalComponent_OpenPortal_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkPortalComponent_OpenPortal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkPortalComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkPortalComponent_OpenPortal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkPortalComponent, nullptr, "OpenPortal", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkPortalComponent_OpenPortal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkPortalComponent_OpenPortal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkPortalComponent_OpenPortal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkPortalComponent_OpenPortal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkPortalComponent_PortalPlacementValid_Statics
	{
		struct AkPortalComponent_eventPortalPlacementValid_Parms
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
	void Z_Construct_UFunction_UAkPortalComponent_PortalPlacementValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AkPortalComponent_eventPortalPlacementValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkPortalComponent_PortalPlacementValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AkPortalComponent_eventPortalPlacementValid_Parms), &Z_Construct_UFunction_UAkPortalComponent_PortalPlacementValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkPortalComponent_PortalPlacementValid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkPortalComponent_PortalPlacementValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkPortalComponent_PortalPlacementValid_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkPortalComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkPortalComponent_PortalPlacementValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkPortalComponent, nullptr, "PortalPlacementValid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkPortalComponent_PortalPlacementValid_Statics::AkPortalComponent_eventPortalPlacementValid_Parms), Z_Construct_UFunction_UAkPortalComponent_PortalPlacementValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkPortalComponent_PortalPlacementValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkPortalComponent_PortalPlacementValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkPortalComponent_PortalPlacementValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkPortalComponent_PortalPlacementValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkPortalComponent_PortalPlacementValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkPortalComponent);
	UClass* Z_Construct_UClass_UAkPortalComponent_NoRegister()
	{
		return UAkPortalComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAkPortalComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDynamic_MetaData[];
#endif
		static void NewProp_bDynamic_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDynamic;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InitialState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InitialState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObstructionRefreshInterval_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ObstructionRefreshInterval;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObstructionCollisionChannel_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ObstructionCollisionChannel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkPortalComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAkPortalComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAkPortalComponent_ClosePortal, "ClosePortal" }, // 190213805
		{ &Z_Construct_UFunction_UAkPortalComponent_GetCurrentState, "GetCurrentState" }, // 3547048658
		{ &Z_Construct_UFunction_UAkPortalComponent_GetPrimitiveParent, "GetPrimitiveParent" }, // 203853095
		{ &Z_Construct_UFunction_UAkPortalComponent_OpenPortal, "OpenPortal" }, // 2724377168
		{ &Z_Construct_UFunction_UAkPortalComponent_PortalPlacementValid, "PortalPlacementValid" }, // 831483388
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkPortalComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "AkPortalComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AkPortalComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkPortalComponent_Statics::NewProp_bDynamic_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkPortalComponent" },
		{ "ModuleRelativePath", "Public/AkPortalComponent.h" },
	};
#endif
	void Z_Construct_UClass_UAkPortalComponent_Statics::NewProp_bDynamic_SetBit(void* Obj)
	{
		((UAkPortalComponent*)Obj)->bDynamic = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkPortalComponent_Statics::NewProp_bDynamic = { "bDynamic", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAkPortalComponent), &Z_Construct_UClass_UAkPortalComponent_Statics::NewProp_bDynamic_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkPortalComponent_Statics::NewProp_bDynamic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkPortalComponent_Statics::NewProp_bDynamic_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAkPortalComponent_Statics::NewProp_InitialState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkPortalComponent_Statics::NewProp_InitialState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkPortalComponent" },
		{ "ModuleRelativePath", "Public/AkPortalComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAkPortalComponent_Statics::NewProp_InitialState = { "InitialState", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkPortalComponent, InitialState), Z_Construct_UEnum_AkAudio_AkAcousticPortalState, METADATA_PARAMS(Z_Construct_UClass_UAkPortalComponent_Statics::NewProp_InitialState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkPortalComponent_Statics::NewProp_InitialState_MetaData)) }; // 1449190885
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkPortalComponent_Statics::NewProp_ObstructionRefreshInterval_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkPortalComponent" },
		{ "ModuleRelativePath", "Public/AkPortalComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAkPortalComponent_Statics::NewProp_ObstructionRefreshInterval = { "ObstructionRefreshInterval", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkPortalComponent, ObstructionRefreshInterval), METADATA_PARAMS(Z_Construct_UClass_UAkPortalComponent_Statics::NewProp_ObstructionRefreshInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkPortalComponent_Statics::NewProp_ObstructionRefreshInterval_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkPortalComponent_Statics::NewProp_ObstructionCollisionChannel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkPortalComponent" },
		{ "ModuleRelativePath", "Public/AkPortalComponent.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAkPortalComponent_Statics::NewProp_ObstructionCollisionChannel = { "ObstructionCollisionChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkPortalComponent, ObstructionCollisionChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(Z_Construct_UClass_UAkPortalComponent_Statics::NewProp_ObstructionCollisionChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkPortalComponent_Statics::NewProp_ObstructionCollisionChannel_MetaData)) }; // 727872708
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkPortalComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkPortalComponent_Statics::NewProp_bDynamic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkPortalComponent_Statics::NewProp_InitialState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkPortalComponent_Statics::NewProp_InitialState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkPortalComponent_Statics::NewProp_ObstructionRefreshInterval,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkPortalComponent_Statics::NewProp_ObstructionCollisionChannel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkPortalComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkPortalComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkPortalComponent_Statics::ClassParams = {
		&UAkPortalComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAkPortalComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAkPortalComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAkPortalComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkPortalComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkPortalComponent()
	{
		if (!Z_Registration_Info_UClass_UAkPortalComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkPortalComponent.OuterSingleton, Z_Construct_UClass_UAkPortalComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAkPortalComponent.OuterSingleton;
	}
	template<> AKAUDIO_API UClass* StaticClass<UAkPortalComponent>()
	{
		return UAkPortalComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkPortalComponent);
	UAkPortalComponent::~UAkPortalComponent() {}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkPortalComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkPortalComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAkPortalComponent, UAkPortalComponent::StaticClass, TEXT("UAkPortalComponent"), &Z_Registration_Info_UClass_UAkPortalComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkPortalComponent), 2829475103U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkPortalComponent_h_1512606595(TEXT("/Script/AkAudio"),
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkPortalComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkPortalComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
