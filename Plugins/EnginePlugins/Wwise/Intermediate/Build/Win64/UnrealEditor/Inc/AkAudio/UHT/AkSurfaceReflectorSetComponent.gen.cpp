// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkSurfaceReflectorSetComponent.h"
#include "AkAudio/Public/AkSurfacePoly.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkSurfaceReflectorSetComponent() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAcousticTextureSetComponent();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkSurfaceReflectorSetComponent();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkSurfaceReflectorSetComponent_NoRegister();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkSurfacePoly();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	DEFINE_FUNCTION(UAkSurfaceReflectorSetComponent::execRemoveSurfaceReflectorSet)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveSurfaceReflectorSet();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkSurfaceReflectorSetComponent::execSendSurfaceReflectorSet)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendSurfaceReflectorSet();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkSurfaceReflectorSetComponent::execUpdateAcousticProperties)
	{
		P_GET_TARRAY(FAkSurfacePoly,Z_Param_in_AcousticPolys);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateAcousticProperties(Z_Param_in_AcousticPolys);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkSurfaceReflectorSetComponent::execUpdateSurfaceReflectorSet)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateSurfaceReflectorSet();
		P_NATIVE_END;
	}
	void UAkSurfaceReflectorSetComponent::StaticRegisterNativesUAkSurfaceReflectorSetComponent()
	{
		UClass* Class = UAkSurfaceReflectorSetComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RemoveSurfaceReflectorSet", &UAkSurfaceReflectorSetComponent::execRemoveSurfaceReflectorSet },
			{ "SendSurfaceReflectorSet", &UAkSurfaceReflectorSetComponent::execSendSurfaceReflectorSet },
			{ "UpdateAcousticProperties", &UAkSurfaceReflectorSetComponent::execUpdateAcousticProperties },
			{ "UpdateSurfaceReflectorSet", &UAkSurfaceReflectorSetComponent::execUpdateSurfaceReflectorSet },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_RemoveSurfaceReflectorSet_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_RemoveSurfaceReflectorSet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkSurfaceReflectorSetComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_RemoveSurfaceReflectorSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkSurfaceReflectorSetComponent, nullptr, "RemoveSurfaceReflectorSet", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_RemoveSurfaceReflectorSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_RemoveSurfaceReflectorSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_RemoveSurfaceReflectorSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_RemoveSurfaceReflectorSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SendSurfaceReflectorSet_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SendSurfaceReflectorSet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkSurfaceReflectorSetComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SendSurfaceReflectorSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkSurfaceReflectorSetComponent, nullptr, "SendSurfaceReflectorSet", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SendSurfaceReflectorSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SendSurfaceReflectorSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SendSurfaceReflectorSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SendSurfaceReflectorSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_UpdateAcousticProperties_Statics
	{
		struct AkSurfaceReflectorSetComponent_eventUpdateAcousticProperties_Parms
		{
			TArray<FAkSurfacePoly> in_AcousticPolys;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_in_AcousticPolys_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_in_AcousticPolys;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_UpdateAcousticProperties_Statics::NewProp_in_AcousticPolys_Inner = { "in_AcousticPolys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAkSurfacePoly, METADATA_PARAMS(nullptr, 0) }; // 3623265455
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_UpdateAcousticProperties_Statics::NewProp_in_AcousticPolys = { "in_AcousticPolys", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkSurfaceReflectorSetComponent_eventUpdateAcousticProperties_Parms, in_AcousticPolys), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3623265455
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_UpdateAcousticProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_UpdateAcousticProperties_Statics::NewProp_in_AcousticPolys_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_UpdateAcousticProperties_Statics::NewProp_in_AcousticPolys,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_UpdateAcousticProperties_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkSurfaceReflectorSetComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_UpdateAcousticProperties_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkSurfaceReflectorSetComponent, nullptr, "UpdateAcousticProperties", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_UpdateAcousticProperties_Statics::AkSurfaceReflectorSetComponent_eventUpdateAcousticProperties_Parms), Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_UpdateAcousticProperties_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_UpdateAcousticProperties_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_UpdateAcousticProperties_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_UpdateAcousticProperties_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_UpdateAcousticProperties()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_UpdateAcousticProperties_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_UpdateSurfaceReflectorSet_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_UpdateSurfaceReflectorSet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkSurfaceReflectorSetComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_UpdateSurfaceReflectorSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkSurfaceReflectorSetComponent, nullptr, "UpdateSurfaceReflectorSet", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_UpdateSurfaceReflectorSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_UpdateSurfaceReflectorSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_UpdateSurfaceReflectorSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_UpdateSurfaceReflectorSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkSurfaceReflectorSetComponent);
	UClass* Z_Construct_UClass_UAkSurfaceReflectorSetComponent_NoRegister()
	{
		return UAkSurfaceReflectorSetComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableSurfaceReflectors_MetaData[];
#endif
		static void NewProp_bEnableSurfaceReflectors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableSurfaceReflectors;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AcousticPolys_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AcousticPolys_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AcousticPolys;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDiffraction_MetaData[];
#endif
		static void NewProp_bEnableDiffraction_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDiffraction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDiffractionOnBoundaryEdges_MetaData[];
#endif
		static void NewProp_bEnableDiffractionOnBoundaryEdges_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDiffractionOnBoundaryEdges;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssociatedRoom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AssociatedRoom;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAkAcousticTextureSetComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_RemoveSurfaceReflectorSet, "RemoveSurfaceReflectorSet" }, // 3476823828
		{ &Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_SendSurfaceReflectorSet, "SendSurfaceReflectorSet" }, // 1333985745
		{ &Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_UpdateAcousticProperties, "UpdateAcousticProperties" }, // 3295037861
		{ &Z_Construct_UFunction_UAkSurfaceReflectorSetComponent_UpdateSurfaceReflectorSet, "UpdateSurfaceReflectorSet" }, // 2738557206
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "AkSurfaceReflectorSetComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AkSurfaceReflectorSetComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bEnableSurfaceReflectors_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkSurfaceReflectorSetComponent" },
		{ "ModuleRelativePath", "Public/AkSurfaceReflectorSetComponent.h" },
	};
#endif
	void Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bEnableSurfaceReflectors_SetBit(void* Obj)
	{
		((UAkSurfaceReflectorSetComponent*)Obj)->bEnableSurfaceReflectors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bEnableSurfaceReflectors = { "bEnableSurfaceReflectors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAkSurfaceReflectorSetComponent), &Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bEnableSurfaceReflectors_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bEnableSurfaceReflectors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bEnableSurfaceReflectors_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_AcousticPolys_Inner = { "AcousticPolys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAkSurfacePoly, METADATA_PARAMS(nullptr, 0) }; // 3623265455
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_AcousticPolys_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkSurfaceReflectorSetComponent" },
		{ "ModuleRelativePath", "Public/AkSurfaceReflectorSetComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_AcousticPolys = { "AcousticPolys", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkSurfaceReflectorSetComponent, AcousticPolys), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_AcousticPolys_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_AcousticPolys_MetaData)) }; // 3623265455
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bEnableDiffraction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkSurfaceReflectorSetComponent" },
		{ "ModuleRelativePath", "Public/AkSurfaceReflectorSetComponent.h" },
	};
#endif
	void Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bEnableDiffraction_SetBit(void* Obj)
	{
		((UAkSurfaceReflectorSetComponent*)Obj)->bEnableDiffraction = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bEnableDiffraction = { "bEnableDiffraction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAkSurfaceReflectorSetComponent), &Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bEnableDiffraction_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bEnableDiffraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bEnableDiffraction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bEnableDiffractionOnBoundaryEdges_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkSurfaceReflectorSetComponent" },
		{ "ModuleRelativePath", "Public/AkSurfaceReflectorSetComponent.h" },
	};
#endif
	void Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bEnableDiffractionOnBoundaryEdges_SetBit(void* Obj)
	{
		((UAkSurfaceReflectorSetComponent*)Obj)->bEnableDiffractionOnBoundaryEdges = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bEnableDiffractionOnBoundaryEdges = { "bEnableDiffractionOnBoundaryEdges", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAkSurfaceReflectorSetComponent), &Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bEnableDiffractionOnBoundaryEdges_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bEnableDiffractionOnBoundaryEdges_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bEnableDiffractionOnBoundaryEdges_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_AssociatedRoom_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkSurfaceReflectorSetComponent" },
		{ "ModuleRelativePath", "Public/AkSurfaceReflectorSetComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_AssociatedRoom = { "AssociatedRoom", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkSurfaceReflectorSetComponent, AssociatedRoom), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_AssociatedRoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_AssociatedRoom_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bEnableSurfaceReflectors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_AcousticPolys_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_AcousticPolys,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bEnableDiffraction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_bEnableDiffractionOnBoundaryEdges,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::NewProp_AssociatedRoom,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkSurfaceReflectorSetComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::ClassParams = {
		&UAkSurfaceReflectorSetComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkSurfaceReflectorSetComponent()
	{
		if (!Z_Registration_Info_UClass_UAkSurfaceReflectorSetComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkSurfaceReflectorSetComponent.OuterSingleton, Z_Construct_UClass_UAkSurfaceReflectorSetComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAkSurfaceReflectorSetComponent.OuterSingleton;
	}
	template<> AKAUDIO_API UClass* StaticClass<UAkSurfaceReflectorSetComponent>()
	{
		return UAkSurfaceReflectorSetComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkSurfaceReflectorSetComponent);
	UAkSurfaceReflectorSetComponent::~UAkSurfaceReflectorSetComponent() {}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkSurfaceReflectorSetComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkSurfaceReflectorSetComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAkSurfaceReflectorSetComponent, UAkSurfaceReflectorSetComponent::StaticClass, TEXT("UAkSurfaceReflectorSetComponent"), &Z_Registration_Info_UClass_UAkSurfaceReflectorSetComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkSurfaceReflectorSetComponent), 1455436833U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkSurfaceReflectorSetComponent_h_1847460183(TEXT("/Script/AkAudio"),
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkSurfaceReflectorSetComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkSurfaceReflectorSetComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
