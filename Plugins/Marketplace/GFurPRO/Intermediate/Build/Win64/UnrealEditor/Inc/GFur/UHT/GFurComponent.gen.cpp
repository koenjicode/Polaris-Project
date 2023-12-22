// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GFur/Public/GFurComponent.h"
#include "GFur/Public/FurCustomLod.h"
#include "GFur/Public/FurLod.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGFurComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	GFUR_API UClass* Z_Construct_UClass_UFurSplines_NoRegister();
	GFUR_API UClass* Z_Construct_UClass_UGFurComponent();
	GFUR_API UClass* Z_Construct_UClass_UGFurComponent_NoRegister();
	GFUR_API UScriptStruct* Z_Construct_UScriptStruct_FFurCustomLod();
	GFUR_API UScriptStruct* Z_Construct_UScriptStruct_FFurLod();
	UPackage* Z_Construct_UPackage__Script_GFur();
// End Cross Module References
	DEFINE_FUNCTION(UGFurComponent::execCalcSpline)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CalcSpline();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGFurComponent::execRegenerateFur)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RegenerateFur();
		P_NATIVE_END;
	}
	void UGFurComponent::StaticRegisterNativesUGFurComponent()
	{
		UClass* Class = UGFurComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CalcSpline", &UGFurComponent::execCalcSpline },
			{ "RegenerateFur", &UGFurComponent::execRegenerateFur },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGFurComponent_CalcSpline_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGFurComponent_CalcSpline_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GFurComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGFurComponent_CalcSpline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGFurComponent, nullptr, "CalcSpline", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGFurComponent_CalcSpline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGFurComponent_CalcSpline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGFurComponent_CalcSpline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGFurComponent_CalcSpline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGFurComponent_RegenerateFur_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGFurComponent_RegenerateFur_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GFurComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGFurComponent_RegenerateFur_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGFurComponent, nullptr, "RegenerateFur", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGFurComponent_RegenerateFur_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGFurComponent_RegenerateFur_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGFurComponent_RegenerateFur()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGFurComponent_RegenerateFur_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGFurComponent);
	UClass* Z_Construct_UClass_UGFurComponent_NoRegister()
	{
		return UGFurComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGFurComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalGrowMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalGrowMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticGrowMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticGrowMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FurSplines_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FurSplines;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalGuideMeshes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalGuideMeshes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SkeletalGuideMeshes;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticGuideMeshes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticGuideMeshes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StaticGuideMeshes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayerCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LayerCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinScreenSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinScreenSize;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LODs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LODs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODFromParent_MetaData[];
#endif
		static void NewProp_LODFromParent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_LODFromParent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShellBias_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ShellBias;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FurLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FurLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinFurLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinFurLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemoveFacesWithoutSplines_MetaData[];
#endif
		static void NewProp_RemoveFacesWithoutSplines_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_RemoveFacesWithoutSplines;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhysicsEnabled_MetaData[];
#endif
		static void NewProp_PhysicsEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_PhysicsEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForceDistribution_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ForceDistribution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Stiffness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Stiffness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Damping_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Damping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstantForce_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConstantForce;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxForce_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxForce;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxForceTorqueFactor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxForceTorqueFactor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReferenceHairBias_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReferenceHairBias;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HairLengthForceUniformity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HairLengthForceUniformity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxPhysicsOffsetLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxPhysicsOffsetLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoiseStrength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NoiseStrength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisableMorphTargets_MetaData[];
#endif
		static void NewProp_DisableMorphTargets_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DisableMorphTargets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StreamingDistanceMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StreamingDistanceMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsExtra_MetaData[];
#endif
		static void NewProp_bIsExtra_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsExtra;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsLODEnable_MetaData[];
#endif
		static void NewProp_bIsLODEnable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLODEnable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FurPatternTiling_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FurPatternTiling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThicknessRootToTipDistribution_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ThicknessRootToTipDistribution;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGFurComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GFur,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGFurComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGFurComponent_CalcSpline, "CalcSpline" }, // 1966696419
		{ &Z_Construct_UFunction_UGFurComponent_RegenerateFur, "RegenerateFur" }, // 1073736899
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGFurComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Mobility Trigger" },
		{ "IncludePath", "GFurComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GFurComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGFurComponent_Statics::NewProp_SkeletalGrowMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GFurComponent" },
		{ "ModuleRelativePath", "Public/GFurComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGFurComponent_Statics::NewProp_SkeletalGrowMesh = { "SkeletalGrowMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGFurComponent, SkeletalGrowMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGFurComponent_Statics::NewProp_SkeletalGrowMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGFurComponent_Statics::NewProp_SkeletalGrowMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGFurComponent_Statics::NewProp_StaticGrowMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GFurComponent" },
		{ "ModuleRelativePath", "Public/GFurComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGFurComponent_Statics::NewProp_StaticGrowMesh = { "StaticGrowMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGFurComponent, StaticGrowMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGFurComponent_Statics::NewProp_StaticGrowMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGFurComponent_Statics::NewProp_StaticGrowMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGFurComponent_Statics::NewProp_FurSplines_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GFurComponent" },
		{ "ModuleRelativePath", "Public/GFurComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGFurComponent_Statics::NewProp_FurSplines = { "FurSplines", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGFurComponent, FurSplines), Z_Construct_UClass_UFurSplines_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGFurComponent_Statics::NewProp_FurSplines_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGFurComponent_Statics::NewProp_FurSplines_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGFurComponent_Statics::NewProp_SkeletalGuideMeshes_Inner = { "SkeletalGuideMeshes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGFurComponent_Statics::NewProp_SkeletalGuideMeshes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GFurComponent" },
		{ "ModuleRelativePath", "Public/GFurComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGFurComponent_Statics::NewProp_SkeletalGuideMeshes = { "SkeletalGuideMeshes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGFurComponent, SkeletalGuideMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGFurComponent_Statics::NewProp_SkeletalGuideMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGFurComponent_Statics::NewProp_SkeletalGuideMeshes_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGFurComponent_Statics::NewProp_StaticGuideMeshes_Inner = { "StaticGuideMeshes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGFurComponent_Statics::NewProp_StaticGuideMeshes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GFurComponent" },
		{ "ModuleRelativePath", "Public/GFurComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGFurComponent_Statics::NewProp_StaticGuideMeshes = { "StaticGuideMeshes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGFurComponent, StaticGuideMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGFurComponent_Statics::NewProp_StaticGuideMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGFurComponent_Statics::NewProp_StaticGuideMeshes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGFurComponent_Statics::NewProp_LayerCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GFurComponent" },
		{ "ModuleRelativePath", "Public/GFurComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGFurComponent_Statics::NewProp_LayerCount = { "LayerCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGFurComponent, LayerCount), METADATA_PARAMS(Z_Construct_UClass_UGFurComponent_Statics::NewProp_LayerCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGFurComponent_Statics::NewProp_LayerCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGFurComponent_Statics::NewProp_MinScreenSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GFurComponent" },
		{ "ModuleRelativePath", "Public/GFurComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGFurComponent_Statics::NewProp_MinScreenSize = { "MinScreenSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGFurComponent, MinScreenSize), METADATA_PARAMS(Z_Construct_UClass_UGFurComponent_Statics::NewProp_MinScreenSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGFurComponent_Statics::NewProp_MinScreenSize_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGFurComponent_Statics::NewProp_LODs_Inner = { "LODs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FFurLod, METADATA_PARAMS(nullptr, 0) }; // 2348481537
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGFurComponent_Statics::NewProp_LODs_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GFurComponent" },
		{ "ModuleRelativePath", "Public/GFurComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGFurComponent_Statics::NewProp_LODs = { "LODs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGFurComponent, LODs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGFurComponent_Statics::NewProp_LODs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGFurComponent_Statics::NewProp_LODs_MetaData)) }; // 2348481537
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGFurComponent_Statics::NewProp_LODFromParent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GFurComponent" },
		{ "ModuleRelativePath", "Public/GFurComponent.h" },
	};
#endif
	void Z_Construct_UClass_UGFurComponent_Statics::NewProp_LODFromParent_SetBit(void* Obj)
	{
		((UGFurComponent*)Obj)->LODFromParent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGFurComponent_Statics::NewProp_LODFromParent = { "LODFromParent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGFurComponent), &Z_Construct_UClass_UGFurComponent_Statics::NewProp_LODFromParent_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGFurComponent_Statics::NewProp_LODFromParent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGFurComponent_Statics::NewProp_LODFromParent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGFurComponent_Statics::NewProp_ShellBias_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GFurComponent" },
		{ "ModuleRelativePath", "Public/GFurComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGFurComponent_Statics::NewProp_ShellBias = { "ShellBias", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGFurComponent, ShellBias), METADATA_PARAMS(Z_Construct_UClass_UGFurComponent_Statics::NewProp_ShellBias_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGFurComponent_Statics::NewProp_ShellBias_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGFurComponent_Statics::NewProp_FurLength_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GFurComponent" },
		{ "ModuleRelativePath", "Public/GFurComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGFurComponent_Statics::NewProp_FurLength = { "FurLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGFurComponent, FurLength), METADATA_PARAMS(Z_Construct_UClass_UGFurComponent_Statics::NewProp_FurLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGFurComponent_Statics::NewProp_FurLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGFurComponent_Statics::NewProp_MinFurLength_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GFurComponent" },
		{ "ModuleRelativePath", "Public/GFurComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGFurComponent_Statics::NewProp_MinFurLength = { "MinFurLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGFurComponent, MinFurLength), METADATA_PARAMS(Z_Construct_UClass_UGFurComponent_Statics::NewProp_MinFurLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGFurComponent_Statics::NewProp_MinFurLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGFurComponent_Statics::NewProp_RemoveFacesWithoutSplines_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GFurComponent" },
		{ "ModuleRelativePath", "Public/GFurComponent.h" },
	};
#endif
	void Z_Construct_UClass_UGFurComponent_Statics::NewProp_RemoveFacesWithoutSplines_SetBit(void* Obj)
	{
		((UGFurComponent*)Obj)->RemoveFacesWithoutSplines = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGFurComponent_Statics::NewProp_RemoveFacesWithoutSplines = { "RemoveFacesWithoutSplines", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGFurComponent), &Z_Construct_UClass_UGFurComponent_Statics::NewProp_RemoveFacesWithoutSplines_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGFurComponent_Statics::NewProp_RemoveFacesWithoutSplines_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGFurComponent_Statics::NewProp_RemoveFacesWithoutSplines_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGFurComponent_Statics::NewProp_PhysicsEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GFurComponent" },
		{ "ModuleRelativePath", "Public/GFurComponent.h" },
	};
#endif
	void Z_Construct_UClass_UGFurComponent_Statics::NewProp_PhysicsEnabled_SetBit(void* Obj)
	{
		((UGFurComponent*)Obj)->PhysicsEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGFurComponent_Statics::NewProp_PhysicsEnabled = { "PhysicsEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGFurComponent), &Z_Construct_UClass_UGFurComponent_Statics::NewProp_PhysicsEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGFurComponent_Statics::NewProp_PhysicsEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGFurComponent_Statics::NewProp_PhysicsEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGFurComponent_Statics::NewProp_ForceDistribution_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GFurComponent" },
		{ "ModuleRelativePath", "Public/GFurComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGFurComponent_Statics::NewProp_ForceDistribution = { "ForceDistribution", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGFurComponent, ForceDistribution), METADATA_PARAMS(Z_Construct_UClass_UGFurComponent_Statics::NewProp_ForceDistribution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGFurComponent_Statics::NewProp_ForceDistribution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGFurComponent_Statics::NewProp_Stiffness_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GFurComponent" },
		{ "ModuleRelativePath", "Public/GFurComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGFurComponent_Statics::NewProp_Stiffness = { "Stiffness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGFurComponent, Stiffness), METADATA_PARAMS(Z_Construct_UClass_UGFurComponent_Statics::NewProp_Stiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGFurComponent_Statics::NewProp_Stiffness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGFurComponent_Statics::NewProp_Damping_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GFurComponent" },
		{ "ModuleRelativePath", "Public/GFurComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGFurComponent_Statics::NewProp_Damping = { "Damping", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGFurComponent, Damping), METADATA_PARAMS(Z_Construct_UClass_UGFurComponent_Statics::NewProp_Damping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGFurComponent_Statics::NewProp_Damping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGFurComponent_Statics::NewProp_ConstantForce_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GFurComponent" },
		{ "ModuleRelativePath", "Public/GFurComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGFurComponent_Statics::NewProp_ConstantForce = { "ConstantForce", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGFurComponent, ConstantForce), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UGFurComponent_Statics::NewProp_ConstantForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGFurComponent_Statics::NewProp_ConstantForce_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGFurComponent_Statics::NewProp_MaxForce_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GFurComponent" },
		{ "ModuleRelativePath", "Public/GFurComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGFurComponent_Statics::NewProp_MaxForce = { "MaxForce", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGFurComponent, MaxForce), METADATA_PARAMS(Z_Construct_UClass_UGFurComponent_Statics::NewProp_MaxForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGFurComponent_Statics::NewProp_MaxForce_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGFurComponent_Statics::NewProp_MaxForceTorqueFactor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GFurComponent" },
		{ "ModuleRelativePath", "Public/GFurComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGFurComponent_Statics::NewProp_MaxForceTorqueFactor = { "MaxForceTorqueFactor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGFurComponent, MaxForceTorqueFactor), METADATA_PARAMS(Z_Construct_UClass_UGFurComponent_Statics::NewProp_MaxForceTorqueFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGFurComponent_Statics::NewProp_MaxForceTorqueFactor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGFurComponent_Statics::NewProp_ReferenceHairBias_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GFurComponent" },
		{ "ModuleRelativePath", "Public/GFurComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGFurComponent_Statics::NewProp_ReferenceHairBias = { "ReferenceHairBias", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGFurComponent, ReferenceHairBias), METADATA_PARAMS(Z_Construct_UClass_UGFurComponent_Statics::NewProp_ReferenceHairBias_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGFurComponent_Statics::NewProp_ReferenceHairBias_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGFurComponent_Statics::NewProp_HairLengthForceUniformity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GFurComponent" },
		{ "ModuleRelativePath", "Public/GFurComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGFurComponent_Statics::NewProp_HairLengthForceUniformity = { "HairLengthForceUniformity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGFurComponent, HairLengthForceUniformity), METADATA_PARAMS(Z_Construct_UClass_UGFurComponent_Statics::NewProp_HairLengthForceUniformity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGFurComponent_Statics::NewProp_HairLengthForceUniformity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGFurComponent_Statics::NewProp_MaxPhysicsOffsetLength_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GFurComponent" },
		{ "ModuleRelativePath", "Public/GFurComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGFurComponent_Statics::NewProp_MaxPhysicsOffsetLength = { "MaxPhysicsOffsetLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGFurComponent, MaxPhysicsOffsetLength), METADATA_PARAMS(Z_Construct_UClass_UGFurComponent_Statics::NewProp_MaxPhysicsOffsetLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGFurComponent_Statics::NewProp_MaxPhysicsOffsetLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGFurComponent_Statics::NewProp_NoiseStrength_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GFurComponent" },
		{ "ModuleRelativePath", "Public/GFurComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGFurComponent_Statics::NewProp_NoiseStrength = { "NoiseStrength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGFurComponent, NoiseStrength), METADATA_PARAMS(Z_Construct_UClass_UGFurComponent_Statics::NewProp_NoiseStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGFurComponent_Statics::NewProp_NoiseStrength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGFurComponent_Statics::NewProp_DisableMorphTargets_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GFurComponent" },
		{ "ModuleRelativePath", "Public/GFurComponent.h" },
	};
#endif
	void Z_Construct_UClass_UGFurComponent_Statics::NewProp_DisableMorphTargets_SetBit(void* Obj)
	{
		((UGFurComponent*)Obj)->DisableMorphTargets = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGFurComponent_Statics::NewProp_DisableMorphTargets = { "DisableMorphTargets", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGFurComponent), &Z_Construct_UClass_UGFurComponent_Statics::NewProp_DisableMorphTargets_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGFurComponent_Statics::NewProp_DisableMorphTargets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGFurComponent_Statics::NewProp_DisableMorphTargets_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGFurComponent_Statics::NewProp_StreamingDistanceMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GFurComponent" },
		{ "ModuleRelativePath", "Public/GFurComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGFurComponent_Statics::NewProp_StreamingDistanceMultiplier = { "StreamingDistanceMultiplier", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGFurComponent, StreamingDistanceMultiplier), METADATA_PARAMS(Z_Construct_UClass_UGFurComponent_Statics::NewProp_StreamingDistanceMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGFurComponent_Statics::NewProp_StreamingDistanceMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGFurComponent_Statics::NewProp_bIsExtra_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GFurComponent" },
		{ "ModuleRelativePath", "Public/GFurComponent.h" },
	};
#endif
	void Z_Construct_UClass_UGFurComponent_Statics::NewProp_bIsExtra_SetBit(void* Obj)
	{
		((UGFurComponent*)Obj)->bIsExtra = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGFurComponent_Statics::NewProp_bIsExtra = { "bIsExtra", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGFurComponent), &Z_Construct_UClass_UGFurComponent_Statics::NewProp_bIsExtra_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGFurComponent_Statics::NewProp_bIsExtra_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGFurComponent_Statics::NewProp_bIsExtra_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGFurComponent_Statics::NewProp_bIsLODEnable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GFurComponent" },
		{ "ModuleRelativePath", "Public/GFurComponent.h" },
	};
#endif
	void Z_Construct_UClass_UGFurComponent_Statics::NewProp_bIsLODEnable_SetBit(void* Obj)
	{
		((UGFurComponent*)Obj)->bIsLODEnable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGFurComponent_Statics::NewProp_bIsLODEnable = { "bIsLODEnable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGFurComponent), &Z_Construct_UClass_UGFurComponent_Statics::NewProp_bIsLODEnable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGFurComponent_Statics::NewProp_bIsLODEnable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGFurComponent_Statics::NewProp_bIsLODEnable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGFurComponent_Statics::NewProp_FurPatternTiling_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GFurComponent" },
		{ "ModuleRelativePath", "Public/GFurComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGFurComponent_Statics::NewProp_FurPatternTiling = { "FurPatternTiling", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGFurComponent, FurPatternTiling), Z_Construct_UScriptStruct_FFurCustomLod, METADATA_PARAMS(Z_Construct_UClass_UGFurComponent_Statics::NewProp_FurPatternTiling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGFurComponent_Statics::NewProp_FurPatternTiling_MetaData)) }; // 2934652189
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGFurComponent_Statics::NewProp_ThicknessRootToTipDistribution_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GFurComponent" },
		{ "ModuleRelativePath", "Public/GFurComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGFurComponent_Statics::NewProp_ThicknessRootToTipDistribution = { "ThicknessRootToTipDistribution", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGFurComponent, ThicknessRootToTipDistribution), Z_Construct_UScriptStruct_FFurCustomLod, METADATA_PARAMS(Z_Construct_UClass_UGFurComponent_Statics::NewProp_ThicknessRootToTipDistribution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGFurComponent_Statics::NewProp_ThicknessRootToTipDistribution_MetaData)) }; // 2934652189
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGFurComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFurComponent_Statics::NewProp_SkeletalGrowMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFurComponent_Statics::NewProp_StaticGrowMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFurComponent_Statics::NewProp_FurSplines,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFurComponent_Statics::NewProp_SkeletalGuideMeshes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFurComponent_Statics::NewProp_SkeletalGuideMeshes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFurComponent_Statics::NewProp_StaticGuideMeshes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFurComponent_Statics::NewProp_StaticGuideMeshes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFurComponent_Statics::NewProp_LayerCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFurComponent_Statics::NewProp_MinScreenSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFurComponent_Statics::NewProp_LODs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFurComponent_Statics::NewProp_LODs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFurComponent_Statics::NewProp_LODFromParent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFurComponent_Statics::NewProp_ShellBias,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFurComponent_Statics::NewProp_FurLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFurComponent_Statics::NewProp_MinFurLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFurComponent_Statics::NewProp_RemoveFacesWithoutSplines,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFurComponent_Statics::NewProp_PhysicsEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFurComponent_Statics::NewProp_ForceDistribution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFurComponent_Statics::NewProp_Stiffness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFurComponent_Statics::NewProp_Damping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFurComponent_Statics::NewProp_ConstantForce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFurComponent_Statics::NewProp_MaxForce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFurComponent_Statics::NewProp_MaxForceTorqueFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFurComponent_Statics::NewProp_ReferenceHairBias,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFurComponent_Statics::NewProp_HairLengthForceUniformity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFurComponent_Statics::NewProp_MaxPhysicsOffsetLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFurComponent_Statics::NewProp_NoiseStrength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFurComponent_Statics::NewProp_DisableMorphTargets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFurComponent_Statics::NewProp_StreamingDistanceMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFurComponent_Statics::NewProp_bIsExtra,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFurComponent_Statics::NewProp_bIsLODEnable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFurComponent_Statics::NewProp_FurPatternTiling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFurComponent_Statics::NewProp_ThicknessRootToTipDistribution,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGFurComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGFurComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGFurComponent_Statics::ClassParams = {
		&UGFurComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGFurComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGFurComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGFurComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGFurComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGFurComponent()
	{
		if (!Z_Registration_Info_UClass_UGFurComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGFurComponent.OuterSingleton, Z_Construct_UClass_UGFurComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGFurComponent.OuterSingleton;
	}
	template<> GFUR_API UClass* StaticClass<UGFurComponent>()
	{
		return UGFurComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGFurComponent);
	UGFurComponent::~UGFurComponent() {}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_Marketplace_GFurPRO_Source_GFur_Public_GFurComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_Marketplace_GFurPRO_Source_GFur_Public_GFurComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGFurComponent, UGFurComponent::StaticClass, TEXT("UGFurComponent"), &Z_Registration_Info_UClass_UGFurComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGFurComponent), 3804590888U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_Marketplace_GFurPRO_Source_GFur_Public_GFurComponent_h_277288317(TEXT("/Script/GFur"),
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_Marketplace_GFurPRO_Source_GFur_Public_GFurComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_Marketplace_GFurPRO_Source_GFur_Public_GFurComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
