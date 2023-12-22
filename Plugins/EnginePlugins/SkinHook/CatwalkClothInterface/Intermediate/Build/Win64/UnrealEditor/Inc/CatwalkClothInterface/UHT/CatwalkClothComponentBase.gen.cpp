// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CatwalkClothInterface/Public/CatwalkClothComponentBase.h"
#include "CatwalkClothInterface/Public/CatwalkClothExternalSimulationMeshSlot.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCatwalkClothComponentBase() {}
// Cross Module References
	CATWALKCLOTHINTERFACE_API UClass* Z_Construct_UClass_UCatwalkClothCollisionAsset_NoRegister();
	CATWALKCLOTHINTERFACE_API UClass* Z_Construct_UClass_UCatwalkClothComponentBase();
	CATWALKCLOTHINTERFACE_API UClass* Z_Construct_UClass_UCatwalkClothComponentBase_NoRegister();
	CATWALKCLOTHINTERFACE_API UEnum* Z_Construct_UEnum_CatwalkClothInterface_ECwClothBoneScalingMode();
	CATWALKCLOTHINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FCatwalkClothExternalSimulationMeshSlot();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	ENGINE_API UClass* Z_Construct_UClass_USkinnedMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CatwalkClothInterface();
// End Cross Module References
	DEFINE_FUNCTION(UCatwalkClothComponentBase::execGetAttachmentCollision)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCatwalkClothCollisionAsset**)Z_Param__Result=P_THIS->GetAttachmentCollision();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCatwalkClothComponentBase::execGetCollisionOverride)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCatwalkClothCollisionAsset**)Z_Param__Result=P_THIS->GetCollisionOverride();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCatwalkClothComponentBase::execInitializeExternalSimulatonMeshSlots)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeExternalSimulatonMeshSlots();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCatwalkClothComponentBase::execResetClothVertices)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetClothVertices();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCatwalkClothComponentBase::execSetAttachmentCollision)
	{
		P_GET_OBJECT(UCatwalkClothCollisionAsset,Z_Param_InAttachmentCollision);
		P_GET_OBJECT(USkinnedMeshComponent,Z_Param_InAttachedPoseComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAttachmentCollision(Z_Param_InAttachmentCollision,Z_Param_InAttachedPoseComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCatwalkClothComponentBase::execSetCollisionOverride)
	{
		P_GET_OBJECT(UCatwalkClothCollisionAsset,Z_Param_InCollisionOverride);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCollisionOverride(Z_Param_InCollisionOverride);
		P_NATIVE_END;
	}
	void UCatwalkClothComponentBase::StaticRegisterNativesUCatwalkClothComponentBase()
	{
		UClass* Class = UCatwalkClothComponentBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAttachmentCollision", &UCatwalkClothComponentBase::execGetAttachmentCollision },
			{ "GetCollisionOverride", &UCatwalkClothComponentBase::execGetCollisionOverride },
			{ "InitializeExternalSimulatonMeshSlots", &UCatwalkClothComponentBase::execInitializeExternalSimulatonMeshSlots },
			{ "ResetClothVertices", &UCatwalkClothComponentBase::execResetClothVertices },
			{ "SetAttachmentCollision", &UCatwalkClothComponentBase::execSetAttachmentCollision },
			{ "SetCollisionOverride", &UCatwalkClothComponentBase::execSetCollisionOverride },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCatwalkClothComponentBase_GetAttachmentCollision_Statics
	{
		struct CatwalkClothComponentBase_eventGetAttachmentCollision_Parms
		{
			UCatwalkClothCollisionAsset* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCatwalkClothComponentBase_GetAttachmentCollision_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CatwalkClothComponentBase_eventGetAttachmentCollision_Parms, ReturnValue), Z_Construct_UClass_UCatwalkClothCollisionAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCatwalkClothComponentBase_GetAttachmentCollision_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCatwalkClothComponentBase_GetAttachmentCollision_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCatwalkClothComponentBase_GetAttachmentCollision_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CatwalkClothComponentBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCatwalkClothComponentBase_GetAttachmentCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCatwalkClothComponentBase, nullptr, "GetAttachmentCollision", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCatwalkClothComponentBase_GetAttachmentCollision_Statics::CatwalkClothComponentBase_eventGetAttachmentCollision_Parms), Z_Construct_UFunction_UCatwalkClothComponentBase_GetAttachmentCollision_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCatwalkClothComponentBase_GetAttachmentCollision_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCatwalkClothComponentBase_GetAttachmentCollision_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCatwalkClothComponentBase_GetAttachmentCollision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCatwalkClothComponentBase_GetAttachmentCollision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCatwalkClothComponentBase_GetAttachmentCollision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCatwalkClothComponentBase_GetCollisionOverride_Statics
	{
		struct CatwalkClothComponentBase_eventGetCollisionOverride_Parms
		{
			UCatwalkClothCollisionAsset* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCatwalkClothComponentBase_GetCollisionOverride_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CatwalkClothComponentBase_eventGetCollisionOverride_Parms, ReturnValue), Z_Construct_UClass_UCatwalkClothCollisionAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCatwalkClothComponentBase_GetCollisionOverride_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCatwalkClothComponentBase_GetCollisionOverride_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCatwalkClothComponentBase_GetCollisionOverride_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CatwalkClothComponentBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCatwalkClothComponentBase_GetCollisionOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCatwalkClothComponentBase, nullptr, "GetCollisionOverride", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCatwalkClothComponentBase_GetCollisionOverride_Statics::CatwalkClothComponentBase_eventGetCollisionOverride_Parms), Z_Construct_UFunction_UCatwalkClothComponentBase_GetCollisionOverride_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCatwalkClothComponentBase_GetCollisionOverride_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCatwalkClothComponentBase_GetCollisionOverride_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCatwalkClothComponentBase_GetCollisionOverride_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCatwalkClothComponentBase_GetCollisionOverride()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCatwalkClothComponentBase_GetCollisionOverride_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCatwalkClothComponentBase_InitializeExternalSimulatonMeshSlots_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCatwalkClothComponentBase_InitializeExternalSimulatonMeshSlots_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CatwalkClothComponentBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCatwalkClothComponentBase_InitializeExternalSimulatonMeshSlots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCatwalkClothComponentBase, nullptr, "InitializeExternalSimulatonMeshSlots", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCatwalkClothComponentBase_InitializeExternalSimulatonMeshSlots_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCatwalkClothComponentBase_InitializeExternalSimulatonMeshSlots_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCatwalkClothComponentBase_InitializeExternalSimulatonMeshSlots()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCatwalkClothComponentBase_InitializeExternalSimulatonMeshSlots_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCatwalkClothComponentBase_ResetClothVertices_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCatwalkClothComponentBase_ResetClothVertices_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CatwalkClothComponentBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCatwalkClothComponentBase_ResetClothVertices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCatwalkClothComponentBase, nullptr, "ResetClothVertices", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCatwalkClothComponentBase_ResetClothVertices_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCatwalkClothComponentBase_ResetClothVertices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCatwalkClothComponentBase_ResetClothVertices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCatwalkClothComponentBase_ResetClothVertices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCatwalkClothComponentBase_SetAttachmentCollision_Statics
	{
		struct CatwalkClothComponentBase_eventSetAttachmentCollision_Parms
		{
			UCatwalkClothCollisionAsset* InAttachmentCollision;
			USkinnedMeshComponent* InAttachedPoseComponent;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InAttachmentCollision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InAttachedPoseComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InAttachedPoseComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCatwalkClothComponentBase_SetAttachmentCollision_Statics::NewProp_InAttachmentCollision = { "InAttachmentCollision", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CatwalkClothComponentBase_eventSetAttachmentCollision_Parms, InAttachmentCollision), Z_Construct_UClass_UCatwalkClothCollisionAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCatwalkClothComponentBase_SetAttachmentCollision_Statics::NewProp_InAttachedPoseComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCatwalkClothComponentBase_SetAttachmentCollision_Statics::NewProp_InAttachedPoseComponent = { "InAttachedPoseComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CatwalkClothComponentBase_eventSetAttachmentCollision_Parms, InAttachedPoseComponent), Z_Construct_UClass_USkinnedMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCatwalkClothComponentBase_SetAttachmentCollision_Statics::NewProp_InAttachedPoseComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCatwalkClothComponentBase_SetAttachmentCollision_Statics::NewProp_InAttachedPoseComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCatwalkClothComponentBase_SetAttachmentCollision_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCatwalkClothComponentBase_SetAttachmentCollision_Statics::NewProp_InAttachmentCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCatwalkClothComponentBase_SetAttachmentCollision_Statics::NewProp_InAttachedPoseComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCatwalkClothComponentBase_SetAttachmentCollision_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CatwalkClothComponentBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCatwalkClothComponentBase_SetAttachmentCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCatwalkClothComponentBase, nullptr, "SetAttachmentCollision", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCatwalkClothComponentBase_SetAttachmentCollision_Statics::CatwalkClothComponentBase_eventSetAttachmentCollision_Parms), Z_Construct_UFunction_UCatwalkClothComponentBase_SetAttachmentCollision_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCatwalkClothComponentBase_SetAttachmentCollision_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCatwalkClothComponentBase_SetAttachmentCollision_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCatwalkClothComponentBase_SetAttachmentCollision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCatwalkClothComponentBase_SetAttachmentCollision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCatwalkClothComponentBase_SetAttachmentCollision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCatwalkClothComponentBase_SetCollisionOverride_Statics
	{
		struct CatwalkClothComponentBase_eventSetCollisionOverride_Parms
		{
			UCatwalkClothCollisionAsset* InCollisionOverride;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InCollisionOverride;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCatwalkClothComponentBase_SetCollisionOverride_Statics::NewProp_InCollisionOverride = { "InCollisionOverride", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CatwalkClothComponentBase_eventSetCollisionOverride_Parms, InCollisionOverride), Z_Construct_UClass_UCatwalkClothCollisionAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCatwalkClothComponentBase_SetCollisionOverride_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCatwalkClothComponentBase_SetCollisionOverride_Statics::NewProp_InCollisionOverride,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCatwalkClothComponentBase_SetCollisionOverride_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CatwalkClothComponentBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCatwalkClothComponentBase_SetCollisionOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCatwalkClothComponentBase, nullptr, "SetCollisionOverride", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCatwalkClothComponentBase_SetCollisionOverride_Statics::CatwalkClothComponentBase_eventSetCollisionOverride_Parms), Z_Construct_UFunction_UCatwalkClothComponentBase_SetCollisionOverride_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCatwalkClothComponentBase_SetCollisionOverride_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCatwalkClothComponentBase_SetCollisionOverride_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCatwalkClothComponentBase_SetCollisionOverride_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCatwalkClothComponentBase_SetCollisionOverride()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCatwalkClothComponentBase_SetCollisionOverride_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCatwalkClothComponentBase);
	UClass* Z_Construct_UClass_UCatwalkClothComponentBase_NoRegister()
	{
		return UCatwalkClothComponentBase::StaticClass();
	}
	struct Z_Construct_UClass_UCatwalkClothComponentBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CancelDistanceThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CancelDistanceThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CancelAngleThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CancelAngleThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableSimulation_MetaData[];
#endif
		static void NewProp_bEnableSimulation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableSimulation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CwcMaxDistanceRatio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CwcMaxDistanceRatio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bForceMotionCancellation_MetaData[];
#endif
		static void NewProp_bForceMotionCancellation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceMotionCancellation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseBoneScalingModeFromAsset_MetaData[];
#endif
		static void NewProp_bUseBoneScalingModeFromAsset_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseBoneScalingModeFromAsset;
		static const UECodeGen_Private::FBytePropertyParams NewProp_BoneScalingMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneScalingMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BoneScalingMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CwcTimeDilation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CwcTimeDilation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExternalSimulationMeshSlots_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ExternalSimulationMeshSlots_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExternalSimulationMeshSlots_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ExternalSimulationMeshSlots;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClothVariationName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ClothVariationName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumStepsToSettleAfterReset_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumStepsToSettleAfterReset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalWind_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AdditionalWind;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Wetness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Wetness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootMotionBone_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_RootMotionBone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumStepsToBlendFromBindPose_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumStepsToBlendFromBindPose;
		static const UECodeGen_Private::FStrPropertyParams NewProp_DisabledSimulationMeshTags_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisabledSimulationMeshTags_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_DisabledSimulationMeshTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachedPoseComponent_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_AttachedPoseComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionOverride_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachmentCollision_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttachmentCollision;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCatwalkClothComponentBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CatwalkClothInterface,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCatwalkClothComponentBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCatwalkClothComponentBase_GetAttachmentCollision, "GetAttachmentCollision" }, // 1650572177
		{ &Z_Construct_UFunction_UCatwalkClothComponentBase_GetCollisionOverride, "GetCollisionOverride" }, // 1886648635
		{ &Z_Construct_UFunction_UCatwalkClothComponentBase_InitializeExternalSimulatonMeshSlots, "InitializeExternalSimulatonMeshSlots" }, // 1031578395
		{ &Z_Construct_UFunction_UCatwalkClothComponentBase_ResetClothVertices, "ResetClothVertices" }, // 804284223
		{ &Z_Construct_UFunction_UCatwalkClothComponentBase_SetAttachmentCollision, "SetAttachmentCollision" }, // 4225309841
		{ &Z_Construct_UFunction_UCatwalkClothComponentBase_SetCollisionOverride, "SetCollisionOverride" }, // 968583324
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCatwalkClothComponentBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "CatwalkClothComponentBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CatwalkClothComponentBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCatwalkClothComponentBase_Statics::NewProp_CancelDistanceThreshold_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatwalkClothComponentBase" },
		{ "ModuleRelativePath", "Public/CatwalkClothComponentBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCatwalkClothComponentBase_Statics::NewProp_CancelDistanceThreshold = { "CancelDistanceThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCatwalkClothComponentBase, CancelDistanceThreshold), METADATA_PARAMS(Z_Construct_UClass_UCatwalkClothComponentBase_Statics::NewProp_CancelDistanceThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCatwalkClothComponentBase_Statics::NewProp_CancelDistanceThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCatwalkClothComponentBase_Statics::NewProp_CancelAngleThreshold_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatwalkClothComponentBase" },
		{ "ModuleRelativePath", "Public/CatwalkClothComponentBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCatwalkClothComponentBase_Statics::NewProp_CancelAngleThreshold = { "CancelAngleThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCatwalkClothComponentBase, CancelAngleThreshold), METADATA_PARAMS(Z_Construct_UClass_UCatwalkClothComponentBase_Statics::NewProp_CancelAngleThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCatwalkClothComponentBase_Statics::NewProp_CancelAngleThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCatwalkClothComponentBase_Statics::NewProp_bEnableSimulation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatwalkClothComponentBase" },
		{ "ModuleRelativePath", "Public/CatwalkClothComponentBase.h" },
	};
#endif
	void Z_Construct_UClass_UCatwalkClothComponentBase_Statics::NewProp_bEnableSimulation_SetBit(void* Obj)
	{
		((UCatwalkClothComponentBase*)Obj)->bEnableSimulation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCatwalkClothComponentBase_Statics::NewProp_bEnableSimulation = { "bEnableSimulation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCatwalkClothComponentBase), &Z_Construct_UClass_UCatwalkClothComponentBase_Statics::NewProp_bEnableSimulation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCatwalkClothComponentBase_Statics::NewProp_bEnableSimulation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCatwalkClothComponentBase_Statics::NewProp_bEnableSimulation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCatwalkClothComponentBase_Statics::NewProp_CwcMaxDistanceRatio_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatwalkClothComponentBase" },
		{ "ModuleRelativePath", "Public/CatwalkClothComponentBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCatwalkClothComponentBase_Statics::NewProp_CwcMaxDistanceRatio = { "CwcMaxDistanceRatio", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCatwalkClothComponentBase, CwcMaxDistanceRatio), METADATA_PARAMS(Z_Construct_UClass_UCatwalkClothComponentBase_Statics::NewProp_CwcMaxDistanceRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCatwalkClothComponentBase_Statics::NewProp_CwcMaxDistanceRatio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCatwalkClothComponentBase_Statics::NewProp_bForceMotionCancellation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatwalkClothComponentBase" },
		{ "ModuleRelativePath", "Public/CatwalkClothComponentBase.h" },
	};
#endif
	void Z_Construct_UClass_UCatwalkClothComponentBase_Statics::NewProp_bForceMotionCancellation_SetBit(void* Obj)
	{
		((UCatwalkClothComponentBase*)Obj)->bForceMotionCancellation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCatwalkClothComponentBase_Statics::NewProp_bForceMotionCancellation = { "bForceMotionCancellation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCatwalkClothComponentBase), &Z_Construct_UClass_UCatwalkClothComponentBase_Statics::NewProp_bForceMotionCancellation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCatwalkClothComponentBase_Statics::NewProp_bForceMotionCancellation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCatwalkClothComponentBase_Statics::NewProp_bForceMotionCancellation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCatwalkClothComponentBase_Statics::NewProp_bUseBoneScalingModeFromAsset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatwalkClothComponentBase" },
		{ "ModuleRelativePath", "Public/CatwalkClothComponentBase.h" },
	};
#endif
	void Z_Construct_UClass_UCatwalkClothComponentBase_Statics::NewProp_bUseBoneScalingModeFromAsset_SetBit(void* Obj)
	{
		((UCatwalkClothComponentBase*)Obj)->bUseBoneScalingModeFromAsset = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCatwalkClothComponentBase_Statics::NewProp_bUseBoneScalingModeFromAsset = { "bUseBoneScalingModeFromAsset", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCatwalkClothComponentBase), &Z_Construct_UClass_UCatwalkClothComponentBase_Statics::NewProp_bUseBoneScalingModeFromAsset_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCatwalkClothComponentBase_Statics::NewProp_bUseBoneScalingModeFromAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCatwalkClothComponentBase_Statics::NewProp_bUseBoneScalingModeFromAsset_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCatwalkClothComponentBase_Statics::NewProp_BoneScalingMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCatwalkClothComponentBase_Statics::NewProp_BoneScalingMode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatwalkClothComponentBase" },
		{ "ModuleRelativePath", "Public/CatwalkClothComponentBase.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCatwalkClothComponentBase_Statics::NewProp_BoneScalingMode = { "BoneScalingMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCatwalkClothComponentBase, BoneScalingMode), Z_Construct_UEnum_CatwalkClothInterface_ECwClothBoneScalingMode, METADATA_PARAMS(Z_Construct_UClass_UCatwalkClothComponentBase_Statics::NewProp_BoneScalingMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCatwalkClothComponentBase_Statics::NewProp_BoneScalingMode_MetaData)) }; // 1621771225
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCatwalkClothComponentBase_Statics::NewProp_CwcTimeDilation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatwalkClothComponentBase" },
		{ "ModuleRelativePath", "Public/CatwalkClothComponentBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCatwalkClothComponentBase_Statics::NewProp_CwcTimeDilation = { "CwcTimeDilation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCatwalkClothComponentBase, CwcTimeDilation), METADATA_PARAMS(Z_Construct_UClass_UCatwalkClothComponentBase_Statics::NewProp_CwcTimeDilation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCatwalkClothComponentBase_Statics::NewProp_CwcTimeDilation_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCatwalkClothComponentBase_Statics::NewProp_ExternalSimulationMeshSlots_ValueProp = { "ExternalSimulationMeshSlots", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FCatwalkClothExternalSimulationMeshSlot, METADATA_PARAMS(nullptr, 0) }; // 3997532246
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCatwalkClothComponentBase_Statics::NewProp_ExternalSimulationMeshSlots_Key_KeyProp = { "ExternalSimulationMeshSlots_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCatwalkClothComponentBase_Statics::NewProp_ExternalSimulationMeshSlots_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatwalkClothComponentBase" },
		{ "ModuleRelativePath", "Public/CatwalkClothComponentBase.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCatwalkClothComponentBase_Statics::NewProp_ExternalSimulationMeshSlots = { "ExternalSimulationMeshSlots", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCatwalkClothComponentBase, ExternalSimulationMeshSlots), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCatwalkClothComponentBase_Statics::NewProp_ExternalSimulationMeshSlots_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCatwalkClothComponentBase_Statics::NewProp_ExternalSimulationMeshSlots_MetaData)) }; // 3997532246
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCatwalkClothComponentBase_Statics::NewProp_ClothVariationName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatwalkClothComponentBase" },
		{ "ModuleRelativePath", "Public/CatwalkClothComponentBase.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCatwalkClothComponentBase_Statics::NewProp_ClothVariationName = { "ClothVariationName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCatwalkClothComponentBase, ClothVariationName), METADATA_PARAMS(Z_Construct_UClass_UCatwalkClothComponentBase_Statics::NewProp_ClothVariationName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCatwalkClothComponentBase_Statics::NewProp_ClothVariationName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCatwalkClothComponentBase_Statics::NewProp_NumStepsToSettleAfterReset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatwalkClothComponentBase" },
		{ "ModuleRelativePath", "Public/CatwalkClothComponentBase.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCatwalkClothComponentBase_Statics::NewProp_NumStepsToSettleAfterReset = { "NumStepsToSettleAfterReset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCatwalkClothComponentBase, NumStepsToSettleAfterReset), METADATA_PARAMS(Z_Construct_UClass_UCatwalkClothComponentBase_Statics::NewProp_NumStepsToSettleAfterReset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCatwalkClothComponentBase_Statics::NewProp_NumStepsToSettleAfterReset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCatwalkClothComponentBase_Statics::NewProp_AdditionalWind_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatwalkClothComponentBase" },
		{ "ModuleRelativePath", "Public/CatwalkClothComponentBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCatwalkClothComponentBase_Statics::NewProp_AdditionalWind = { "AdditionalWind", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCatwalkClothComponentBase, AdditionalWind), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UCatwalkClothComponentBase_Statics::NewProp_AdditionalWind_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCatwalkClothComponentBase_Statics::NewProp_AdditionalWind_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCatwalkClothComponentBase_Statics::NewProp_Wetness_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatwalkClothComponentBase" },
		{ "ModuleRelativePath", "Public/CatwalkClothComponentBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCatwalkClothComponentBase_Statics::NewProp_Wetness = { "Wetness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCatwalkClothComponentBase, Wetness), METADATA_PARAMS(Z_Construct_UClass_UCatwalkClothComponentBase_Statics::NewProp_Wetness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCatwalkClothComponentBase_Statics::NewProp_Wetness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCatwalkClothComponentBase_Statics::NewProp_RootMotionBone_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatwalkClothComponentBase" },
		{ "ModuleRelativePath", "Public/CatwalkClothComponentBase.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCatwalkClothComponentBase_Statics::NewProp_RootMotionBone = { "RootMotionBone", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCatwalkClothComponentBase, RootMotionBone), METADATA_PARAMS(Z_Construct_UClass_UCatwalkClothComponentBase_Statics::NewProp_RootMotionBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCatwalkClothComponentBase_Statics::NewProp_RootMotionBone_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCatwalkClothComponentBase_Statics::NewProp_NumStepsToBlendFromBindPose_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatwalkClothComponentBase" },
		{ "ModuleRelativePath", "Public/CatwalkClothComponentBase.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCatwalkClothComponentBase_Statics::NewProp_NumStepsToBlendFromBindPose = { "NumStepsToBlendFromBindPose", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCatwalkClothComponentBase, NumStepsToBlendFromBindPose), METADATA_PARAMS(Z_Construct_UClass_UCatwalkClothComponentBase_Statics::NewProp_NumStepsToBlendFromBindPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCatwalkClothComponentBase_Statics::NewProp_NumStepsToBlendFromBindPose_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCatwalkClothComponentBase_Statics::NewProp_DisabledSimulationMeshTags_ElementProp = { "DisabledSimulationMeshTags", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCatwalkClothComponentBase_Statics::NewProp_DisabledSimulationMeshTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatwalkClothComponentBase" },
		{ "ModuleRelativePath", "Public/CatwalkClothComponentBase.h" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UCatwalkClothComponentBase_Statics::NewProp_DisabledSimulationMeshTags = { "DisabledSimulationMeshTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCatwalkClothComponentBase, DisabledSimulationMeshTags), METADATA_PARAMS(Z_Construct_UClass_UCatwalkClothComponentBase_Statics::NewProp_DisabledSimulationMeshTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCatwalkClothComponentBase_Statics::NewProp_DisabledSimulationMeshTags_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCatwalkClothComponentBase_Statics::NewProp_AttachedPoseComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatwalkClothComponentBase" },
		{ "ModuleRelativePath", "Public/CatwalkClothComponentBase.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UCatwalkClothComponentBase_Statics::NewProp_AttachedPoseComponent = { "AttachedPoseComponent", nullptr, (EPropertyFlags)0x001400000008000d, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCatwalkClothComponentBase, AttachedPoseComponent), Z_Construct_UClass_USkinnedMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCatwalkClothComponentBase_Statics::NewProp_AttachedPoseComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCatwalkClothComponentBase_Statics::NewProp_AttachedPoseComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCatwalkClothComponentBase_Statics::NewProp_CollisionOverride_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatwalkClothComponentBase" },
		{ "ModuleRelativePath", "Public/CatwalkClothComponentBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCatwalkClothComponentBase_Statics::NewProp_CollisionOverride = { "CollisionOverride", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCatwalkClothComponentBase, CollisionOverride), Z_Construct_UClass_UCatwalkClothCollisionAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCatwalkClothComponentBase_Statics::NewProp_CollisionOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCatwalkClothComponentBase_Statics::NewProp_CollisionOverride_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCatwalkClothComponentBase_Statics::NewProp_AttachmentCollision_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CatwalkClothComponentBase" },
		{ "ModuleRelativePath", "Public/CatwalkClothComponentBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCatwalkClothComponentBase_Statics::NewProp_AttachmentCollision = { "AttachmentCollision", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCatwalkClothComponentBase, AttachmentCollision), Z_Construct_UClass_UCatwalkClothCollisionAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCatwalkClothComponentBase_Statics::NewProp_AttachmentCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCatwalkClothComponentBase_Statics::NewProp_AttachmentCollision_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCatwalkClothComponentBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCatwalkClothComponentBase_Statics::NewProp_CancelDistanceThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCatwalkClothComponentBase_Statics::NewProp_CancelAngleThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCatwalkClothComponentBase_Statics::NewProp_bEnableSimulation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCatwalkClothComponentBase_Statics::NewProp_CwcMaxDistanceRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCatwalkClothComponentBase_Statics::NewProp_bForceMotionCancellation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCatwalkClothComponentBase_Statics::NewProp_bUseBoneScalingModeFromAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCatwalkClothComponentBase_Statics::NewProp_BoneScalingMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCatwalkClothComponentBase_Statics::NewProp_BoneScalingMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCatwalkClothComponentBase_Statics::NewProp_CwcTimeDilation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCatwalkClothComponentBase_Statics::NewProp_ExternalSimulationMeshSlots_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCatwalkClothComponentBase_Statics::NewProp_ExternalSimulationMeshSlots_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCatwalkClothComponentBase_Statics::NewProp_ExternalSimulationMeshSlots,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCatwalkClothComponentBase_Statics::NewProp_ClothVariationName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCatwalkClothComponentBase_Statics::NewProp_NumStepsToSettleAfterReset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCatwalkClothComponentBase_Statics::NewProp_AdditionalWind,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCatwalkClothComponentBase_Statics::NewProp_Wetness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCatwalkClothComponentBase_Statics::NewProp_RootMotionBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCatwalkClothComponentBase_Statics::NewProp_NumStepsToBlendFromBindPose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCatwalkClothComponentBase_Statics::NewProp_DisabledSimulationMeshTags_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCatwalkClothComponentBase_Statics::NewProp_DisabledSimulationMeshTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCatwalkClothComponentBase_Statics::NewProp_AttachedPoseComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCatwalkClothComponentBase_Statics::NewProp_CollisionOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCatwalkClothComponentBase_Statics::NewProp_AttachmentCollision,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCatwalkClothComponentBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCatwalkClothComponentBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCatwalkClothComponentBase_Statics::ClassParams = {
		&UCatwalkClothComponentBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCatwalkClothComponentBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCatwalkClothComponentBase_Statics::PropPointers),
		0,
		0x00B000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UCatwalkClothComponentBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCatwalkClothComponentBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCatwalkClothComponentBase()
	{
		if (!Z_Registration_Info_UClass_UCatwalkClothComponentBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCatwalkClothComponentBase.OuterSingleton, Z_Construct_UClass_UCatwalkClothComponentBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCatwalkClothComponentBase.OuterSingleton;
	}
	template<> CATWALKCLOTHINTERFACE_API UClass* StaticClass<UCatwalkClothComponentBase>()
	{
		return UCatwalkClothComponentBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCatwalkClothComponentBase);
	UCatwalkClothComponentBase::~UCatwalkClothComponentBase() {}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkClothInterface_Source_CatwalkClothInterface_Public_CatwalkClothComponentBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkClothInterface_Source_CatwalkClothInterface_Public_CatwalkClothComponentBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCatwalkClothComponentBase, UCatwalkClothComponentBase::StaticClass, TEXT("UCatwalkClothComponentBase"), &Z_Registration_Info_UClass_UCatwalkClothComponentBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCatwalkClothComponentBase), 363896511U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkClothInterface_Source_CatwalkClothInterface_Public_CatwalkClothComponentBase_h_2781794300(TEXT("/Script/CatwalkClothInterface"),
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkClothInterface_Source_CatwalkClothInterface_Public_CatwalkClothComponentBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_SkinHook_CatwalkClothInterface_Source_CatwalkClothInterface_Public_CatwalkClothComponentBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
