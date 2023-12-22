// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/Atom3dSourceBaseComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtom3dSourceBaseComponent() {}
// Cross Module References
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtom3dRegion_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtom3dSourceBaseComponent();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtom3dSourceBaseComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	DEFINE_FUNCTION(UAtom3dSourceBaseComponent::execSetRegion)
	{
		P_GET_OBJECT(UAtom3dRegion,Z_Param_InRegion);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRegion(Z_Param_InRegion);
		P_NATIVE_END;
	}
	void UAtom3dSourceBaseComponent::StaticRegisterNativesUAtom3dSourceBaseComponent()
	{
		UClass* Class = UAtom3dSourceBaseComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetRegion", &UAtom3dSourceBaseComponent::execSetRegion },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAtom3dSourceBaseComponent_SetRegion_Statics
	{
		struct Atom3dSourceBaseComponent_eventSetRegion_Parms
		{
			UAtom3dRegion* InRegion;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InRegion;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtom3dSourceBaseComponent_SetRegion_Statics::NewProp_InRegion = { "InRegion", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Atom3dSourceBaseComponent_eventSetRegion_Parms, InRegion), Z_Construct_UClass_UAtom3dRegion_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtom3dSourceBaseComponent_SetRegion_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtom3dSourceBaseComponent_SetRegion_Statics::NewProp_InRegion,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtom3dSourceBaseComponent_SetRegion_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Atom3dSourceBaseComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtom3dSourceBaseComponent_SetRegion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtom3dSourceBaseComponent, nullptr, "SetRegion", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtom3dSourceBaseComponent_SetRegion_Statics::Atom3dSourceBaseComponent_eventSetRegion_Parms), Z_Construct_UFunction_UAtom3dSourceBaseComponent_SetRegion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtom3dSourceBaseComponent_SetRegion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtom3dSourceBaseComponent_SetRegion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtom3dSourceBaseComponent_SetRegion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtom3dSourceBaseComponent_SetRegion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtom3dSourceBaseComponent_SetRegion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtom3dSourceBaseComponent);
	UClass* Z_Construct_UClass_UAtom3dSourceBaseComponent_NoRegister()
	{
		return UAtom3dSourceBaseComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultOutputVolumeScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultOutputVolumeScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultRegion_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultRegion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsAttenuationDistanceDebugSpheresVisible_MetaData[];
#endif
		static void NewProp_bIsAttenuationDistanceDebugSpheresVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAttenuationDistanceDebugSpheresVisible;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMinAttenuationDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultMinAttenuationDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMaxAttenuationDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultMaxAttenuationDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsOutputInteriorPanFieldDebugSpheresVisible_MetaData[];
#endif
		static void NewProp_bIsOutputInteriorPanFieldDebugSpheresVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsOutputInteriorPanFieldDebugSpheresVisible;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSourceRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultSourceRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultInteriorDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultInteriorDistance;
		static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultDistanceAisacControls_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultDistanceAisacControls_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultDistanceAisacControls;
		static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultOutputBasedAzimuthAngleAisacControls_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultOutputBasedAzimuthAngleAisacControls_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultOutputBasedAzimuthAngleAisacControls;
		static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultOutputBasedElevationAngleAisacControls_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultOutputBasedElevationAngleAisacControls_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultOutputBasedElevationAngleAisacControls;
		static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultListenerBasedAzimuthAngleAisacControls_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultListenerBasedAzimuthAngleAisacControls_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultListenerBasedAzimuthAngleAisacControls;
		static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultListenerBasedElevationAngleAisacControls_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultListenerBasedElevationAngleAisacControls_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultListenerBasedElevationAngleAisacControls;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsDebugStringsForDetailsVisible_MetaData[];
#endif
		static void NewProp_bIsDebugStringsForDetailsVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDebugStringsForDetailsVisible;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtom3dSourceBaseComponent_SetRegion, "SetRegion" }, // 3520774332
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Atom3dSourceBaseComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Atom3dSourceBaseComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultOutputVolumeScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Atom3dSourceBaseComponent" },
		{ "ModuleRelativePath", "Public/Atom3dSourceBaseComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultOutputVolumeScale = { "DefaultOutputVolumeScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtom3dSourceBaseComponent, DefaultOutputVolumeScale), METADATA_PARAMS(Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultOutputVolumeScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultOutputVolumeScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultRegion_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Atom3dSourceBaseComponent" },
		{ "ModuleRelativePath", "Public/Atom3dSourceBaseComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultRegion = { "DefaultRegion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtom3dSourceBaseComponent, DefaultRegion), Z_Construct_UClass_UAtom3dRegion_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultRegion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultRegion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_bIsAttenuationDistanceDebugSpheresVisible_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Atom3dSourceBaseComponent" },
		{ "ModuleRelativePath", "Public/Atom3dSourceBaseComponent.h" },
	};
#endif
	void Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_bIsAttenuationDistanceDebugSpheresVisible_SetBit(void* Obj)
	{
		((UAtom3dSourceBaseComponent*)Obj)->bIsAttenuationDistanceDebugSpheresVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_bIsAttenuationDistanceDebugSpheresVisible = { "bIsAttenuationDistanceDebugSpheresVisible", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UAtom3dSourceBaseComponent), &Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_bIsAttenuationDistanceDebugSpheresVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_bIsAttenuationDistanceDebugSpheresVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_bIsAttenuationDistanceDebugSpheresVisible_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultMinAttenuationDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Atom3dSourceBaseComponent" },
		{ "ModuleRelativePath", "Public/Atom3dSourceBaseComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultMinAttenuationDistance = { "DefaultMinAttenuationDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtom3dSourceBaseComponent, DefaultMinAttenuationDistance), METADATA_PARAMS(Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultMinAttenuationDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultMinAttenuationDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultMaxAttenuationDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Atom3dSourceBaseComponent" },
		{ "ModuleRelativePath", "Public/Atom3dSourceBaseComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultMaxAttenuationDistance = { "DefaultMaxAttenuationDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtom3dSourceBaseComponent, DefaultMaxAttenuationDistance), METADATA_PARAMS(Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultMaxAttenuationDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultMaxAttenuationDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_bIsOutputInteriorPanFieldDebugSpheresVisible_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Atom3dSourceBaseComponent" },
		{ "ModuleRelativePath", "Public/Atom3dSourceBaseComponent.h" },
	};
#endif
	void Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_bIsOutputInteriorPanFieldDebugSpheresVisible_SetBit(void* Obj)
	{
		((UAtom3dSourceBaseComponent*)Obj)->bIsOutputInteriorPanFieldDebugSpheresVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_bIsOutputInteriorPanFieldDebugSpheresVisible = { "bIsOutputInteriorPanFieldDebugSpheresVisible", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UAtom3dSourceBaseComponent), &Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_bIsOutputInteriorPanFieldDebugSpheresVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_bIsOutputInteriorPanFieldDebugSpheresVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_bIsOutputInteriorPanFieldDebugSpheresVisible_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultSourceRadius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Atom3dSourceBaseComponent" },
		{ "ModuleRelativePath", "Public/Atom3dSourceBaseComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultSourceRadius = { "DefaultSourceRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtom3dSourceBaseComponent, DefaultSourceRadius), METADATA_PARAMS(Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultSourceRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultSourceRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultInteriorDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Atom3dSourceBaseComponent" },
		{ "ModuleRelativePath", "Public/Atom3dSourceBaseComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultInteriorDistance = { "DefaultInteriorDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtom3dSourceBaseComponent, DefaultInteriorDistance), METADATA_PARAMS(Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultInteriorDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultInteriorDistance_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultDistanceAisacControls_Inner = { "DefaultDistanceAisacControls", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultDistanceAisacControls_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Atom3dSourceBaseComponent" },
		{ "ModuleRelativePath", "Public/Atom3dSourceBaseComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultDistanceAisacControls = { "DefaultDistanceAisacControls", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtom3dSourceBaseComponent, DefaultDistanceAisacControls), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultDistanceAisacControls_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultDistanceAisacControls_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultOutputBasedAzimuthAngleAisacControls_Inner = { "DefaultOutputBasedAzimuthAngleAisacControls", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultOutputBasedAzimuthAngleAisacControls_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Atom3dSourceBaseComponent" },
		{ "ModuleRelativePath", "Public/Atom3dSourceBaseComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultOutputBasedAzimuthAngleAisacControls = { "DefaultOutputBasedAzimuthAngleAisacControls", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtom3dSourceBaseComponent, DefaultOutputBasedAzimuthAngleAisacControls), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultOutputBasedAzimuthAngleAisacControls_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultOutputBasedAzimuthAngleAisacControls_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultOutputBasedElevationAngleAisacControls_Inner = { "DefaultOutputBasedElevationAngleAisacControls", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultOutputBasedElevationAngleAisacControls_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Atom3dSourceBaseComponent" },
		{ "ModuleRelativePath", "Public/Atom3dSourceBaseComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultOutputBasedElevationAngleAisacControls = { "DefaultOutputBasedElevationAngleAisacControls", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtom3dSourceBaseComponent, DefaultOutputBasedElevationAngleAisacControls), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultOutputBasedElevationAngleAisacControls_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultOutputBasedElevationAngleAisacControls_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultListenerBasedAzimuthAngleAisacControls_Inner = { "DefaultListenerBasedAzimuthAngleAisacControls", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultListenerBasedAzimuthAngleAisacControls_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Atom3dSourceBaseComponent" },
		{ "ModuleRelativePath", "Public/Atom3dSourceBaseComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultListenerBasedAzimuthAngleAisacControls = { "DefaultListenerBasedAzimuthAngleAisacControls", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtom3dSourceBaseComponent, DefaultListenerBasedAzimuthAngleAisacControls), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultListenerBasedAzimuthAngleAisacControls_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultListenerBasedAzimuthAngleAisacControls_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultListenerBasedElevationAngleAisacControls_Inner = { "DefaultListenerBasedElevationAngleAisacControls", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultListenerBasedElevationAngleAisacControls_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Atom3dSourceBaseComponent" },
		{ "ModuleRelativePath", "Public/Atom3dSourceBaseComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultListenerBasedElevationAngleAisacControls = { "DefaultListenerBasedElevationAngleAisacControls", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtom3dSourceBaseComponent, DefaultListenerBasedElevationAngleAisacControls), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultListenerBasedElevationAngleAisacControls_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultListenerBasedElevationAngleAisacControls_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_bIsDebugStringsForDetailsVisible_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Atom3dSourceBaseComponent" },
		{ "ModuleRelativePath", "Public/Atom3dSourceBaseComponent.h" },
	};
#endif
	void Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_bIsDebugStringsForDetailsVisible_SetBit(void* Obj)
	{
		((UAtom3dSourceBaseComponent*)Obj)->bIsDebugStringsForDetailsVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_bIsDebugStringsForDetailsVisible = { "bIsDebugStringsForDetailsVisible", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UAtom3dSourceBaseComponent), &Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_bIsDebugStringsForDetailsVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_bIsDebugStringsForDetailsVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_bIsDebugStringsForDetailsVisible_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultOutputVolumeScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultRegion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_bIsAttenuationDistanceDebugSpheresVisible,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultMinAttenuationDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultMaxAttenuationDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_bIsOutputInteriorPanFieldDebugSpheresVisible,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultSourceRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultInteriorDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultDistanceAisacControls_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultDistanceAisacControls,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultOutputBasedAzimuthAngleAisacControls_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultOutputBasedAzimuthAngleAisacControls,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultOutputBasedElevationAngleAisacControls_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultOutputBasedElevationAngleAisacControls,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultListenerBasedAzimuthAngleAisacControls_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultListenerBasedAzimuthAngleAisacControls,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultListenerBasedElevationAngleAisacControls_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_DefaultListenerBasedElevationAngleAisacControls,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::NewProp_bIsDebugStringsForDetailsVisible,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtom3dSourceBaseComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::ClassParams = {
		&UAtom3dSourceBaseComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtom3dSourceBaseComponent()
	{
		if (!Z_Registration_Info_UClass_UAtom3dSourceBaseComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtom3dSourceBaseComponent.OuterSingleton, Z_Construct_UClass_UAtom3dSourceBaseComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtom3dSourceBaseComponent.OuterSingleton;
	}
	template<> CRIWARERUNTIME_API UClass* StaticClass<UAtom3dSourceBaseComponent>()
	{
		return UAtom3dSourceBaseComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtom3dSourceBaseComponent);
	UAtom3dSourceBaseComponent::~UAtom3dSourceBaseComponent() {}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_Atom3dSourceBaseComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_Atom3dSourceBaseComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAtom3dSourceBaseComponent, UAtom3dSourceBaseComponent::StaticClass, TEXT("UAtom3dSourceBaseComponent"), &Z_Registration_Info_UClass_UAtom3dSourceBaseComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtom3dSourceBaseComponent), 3866760626U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_Atom3dSourceBaseComponent_h_789646784(TEXT("/Script/CriWareRuntime"),
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_Atom3dSourceBaseComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_Atom3dSourceBaseComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
