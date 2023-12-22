// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkGeometryComponent.h"
#include "AkAudio/Public/AkGeometryData.h"
#include "AkAudio/Public/AkGeometrySurfaceOverride.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkGeometryComponent() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAcousticTextureSetComponent();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkGeometryComponent();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkGeometryComponent_NoRegister();
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_AkMeshType();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkGeometryData();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	DEFINE_FUNCTION(UAkGeometryComponent::execConvertMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ConvertMesh();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGeometryComponent::execRemoveGeometry)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveGeometry();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGeometryComponent::execSendGeometry)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendGeometry();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGeometryComponent::execUpdateGeometry)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateGeometry();
		P_NATIVE_END;
	}
	void UAkGeometryComponent::StaticRegisterNativesUAkGeometryComponent()
	{
		UClass* Class = UAkGeometryComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConvertMesh", &UAkGeometryComponent::execConvertMesh },
			{ "RemoveGeometry", &UAkGeometryComponent::execRemoveGeometry },
			{ "SendGeometry", &UAkGeometryComponent::execSendGeometry },
			{ "UpdateGeometry", &UAkGeometryComponent::execUpdateGeometry },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAkGeometryComponent_ConvertMesh_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGeometryComponent_ConvertMesh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkGeometryComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGeometryComponent_ConvertMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGeometryComponent, nullptr, "ConvertMesh", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGeometryComponent_ConvertMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGeometryComponent_ConvertMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGeometryComponent_ConvertMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGeometryComponent_ConvertMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGeometryComponent_RemoveGeometry_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGeometryComponent_RemoveGeometry_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkGeometryComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGeometryComponent_RemoveGeometry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGeometryComponent, nullptr, "RemoveGeometry", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGeometryComponent_RemoveGeometry_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGeometryComponent_RemoveGeometry_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGeometryComponent_RemoveGeometry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGeometryComponent_RemoveGeometry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGeometryComponent_SendGeometry_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGeometryComponent_SendGeometry_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkGeometryComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGeometryComponent_SendGeometry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGeometryComponent, nullptr, "SendGeometry", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGeometryComponent_SendGeometry_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGeometryComponent_SendGeometry_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGeometryComponent_SendGeometry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGeometryComponent_SendGeometry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGeometryComponent_UpdateGeometry_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGeometryComponent_UpdateGeometry_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkGeometryComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGeometryComponent_UpdateGeometry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGeometryComponent, nullptr, "UpdateGeometry", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGeometryComponent_UpdateGeometry_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGeometryComponent_UpdateGeometry_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGeometryComponent_UpdateGeometry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkGeometryComponent_UpdateGeometry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkGeometryComponent);
	UClass* Z_Construct_UClass_UAkGeometryComponent_NoRegister()
	{
		return UAkGeometryComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAkGeometryComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_MeshType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MeshType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Lod_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Lod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeldingThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WeldingThreshold;
		static const UECodeGen_Private::FStructPropertyParams NewProp_StaticMeshSurfaceOverride_ValueProp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshSurfaceOverride_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshSurfaceOverride_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_StaticMeshSurfaceOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionMeshSurfaceOverride_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CollisionMeshSurfaceOverride;
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeometryData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GeometryData;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_SurfaceAreas_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_SurfaceAreas_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SurfaceAreas_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_SurfaceAreas;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkGeometryComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAkAcousticTextureSetComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAkGeometryComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAkGeometryComponent_ConvertMesh, "ConvertMesh" }, // 716347011
		{ &Z_Construct_UFunction_UAkGeometryComponent_RemoveGeometry, "RemoveGeometry" }, // 2330093388
		{ &Z_Construct_UFunction_UAkGeometryComponent_SendGeometry, "SendGeometry" }, // 2910297781
		{ &Z_Construct_UFunction_UAkGeometryComponent_UpdateGeometry, "UpdateGeometry" }, // 2270029410
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkGeometryComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "AkGeometryComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AkGeometryComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_MeshType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_MeshType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkGeometryComponent" },
		{ "ModuleRelativePath", "Public/AkGeometryComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_MeshType = { "MeshType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkGeometryComponent, MeshType), Z_Construct_UEnum_AkAudio_AkMeshType, METADATA_PARAMS(Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_MeshType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_MeshType_MetaData)) }; // 3171450369
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_Lod_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkGeometryComponent" },
		{ "ModuleRelativePath", "Public/AkGeometryComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_Lod = { "Lod", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkGeometryComponent, Lod), METADATA_PARAMS(Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_Lod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_Lod_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_WeldingThreshold_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkGeometryComponent" },
		{ "ModuleRelativePath", "Public/AkGeometryComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_WeldingThreshold = { "WeldingThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkGeometryComponent, WeldingThreshold), METADATA_PARAMS(Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_WeldingThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_WeldingThreshold_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_StaticMeshSurfaceOverride_ValueProp = { "StaticMeshSurfaceOverride", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride, METADATA_PARAMS(nullptr, 0) }; // 244851986
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_StaticMeshSurfaceOverride_Key_KeyProp = { "StaticMeshSurfaceOverride_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_StaticMeshSurfaceOverride_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkGeometryComponent" },
		{ "ModuleRelativePath", "Public/AkGeometryComponent.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_StaticMeshSurfaceOverride = { "StaticMeshSurfaceOverride", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkGeometryComponent, StaticMeshSurfaceOverride), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_StaticMeshSurfaceOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_StaticMeshSurfaceOverride_MetaData)) }; // 244851986
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_CollisionMeshSurfaceOverride_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkGeometryComponent" },
		{ "ModuleRelativePath", "Public/AkGeometryComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_CollisionMeshSurfaceOverride = { "CollisionMeshSurfaceOverride", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkGeometryComponent, CollisionMeshSurfaceOverride), Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride, METADATA_PARAMS(Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_CollisionMeshSurfaceOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_CollisionMeshSurfaceOverride_MetaData)) }; // 244851986
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_bEnableDiffraction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkGeometryComponent" },
		{ "ModuleRelativePath", "Public/AkGeometryComponent.h" },
	};
#endif
	void Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_bEnableDiffraction_SetBit(void* Obj)
	{
		((UAkGeometryComponent*)Obj)->bEnableDiffraction = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_bEnableDiffraction = { "bEnableDiffraction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAkGeometryComponent), &Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_bEnableDiffraction_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_bEnableDiffraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_bEnableDiffraction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_bEnableDiffractionOnBoundaryEdges_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkGeometryComponent" },
		{ "ModuleRelativePath", "Public/AkGeometryComponent.h" },
	};
#endif
	void Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_bEnableDiffractionOnBoundaryEdges_SetBit(void* Obj)
	{
		((UAkGeometryComponent*)Obj)->bEnableDiffractionOnBoundaryEdges = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_bEnableDiffractionOnBoundaryEdges = { "bEnableDiffractionOnBoundaryEdges", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAkGeometryComponent), &Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_bEnableDiffractionOnBoundaryEdges_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_bEnableDiffractionOnBoundaryEdges_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_bEnableDiffractionOnBoundaryEdges_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_AssociatedRoom_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkGeometryComponent" },
		{ "ModuleRelativePath", "Public/AkGeometryComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_AssociatedRoom = { "AssociatedRoom", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkGeometryComponent, AssociatedRoom), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_AssociatedRoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_AssociatedRoom_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_GeometryData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkGeometryComponent" },
		{ "ModuleRelativePath", "Public/AkGeometryComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_GeometryData = { "GeometryData", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkGeometryComponent, GeometryData), Z_Construct_UScriptStruct_FAkGeometryData, METADATA_PARAMS(Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_GeometryData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_GeometryData_MetaData)) }; // 2633403989
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_SurfaceAreas_ValueProp = { "SurfaceAreas", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_SurfaceAreas_Key_KeyProp = { "SurfaceAreas_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_SurfaceAreas_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkGeometryComponent" },
		{ "ModuleRelativePath", "Public/AkGeometryComponent.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_SurfaceAreas = { "SurfaceAreas", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkGeometryComponent, SurfaceAreas), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_SurfaceAreas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_SurfaceAreas_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkGeometryComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_MeshType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_MeshType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_Lod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_WeldingThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_StaticMeshSurfaceOverride_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_StaticMeshSurfaceOverride_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_StaticMeshSurfaceOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_CollisionMeshSurfaceOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_bEnableDiffraction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_bEnableDiffractionOnBoundaryEdges,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_AssociatedRoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_GeometryData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_SurfaceAreas_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_SurfaceAreas_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_SurfaceAreas,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkGeometryComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkGeometryComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkGeometryComponent_Statics::ClassParams = {
		&UAkGeometryComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAkGeometryComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAkGeometryComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAkGeometryComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkGeometryComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkGeometryComponent()
	{
		if (!Z_Registration_Info_UClass_UAkGeometryComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkGeometryComponent.OuterSingleton, Z_Construct_UClass_UAkGeometryComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAkGeometryComponent.OuterSingleton;
	}
	template<> AKAUDIO_API UClass* StaticClass<UAkGeometryComponent>()
	{
		return UAkGeometryComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkGeometryComponent);
	UAkGeometryComponent::~UAkGeometryComponent() {}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkGeometryComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkGeometryComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAkGeometryComponent, UAkGeometryComponent::StaticClass, TEXT("UAkGeometryComponent"), &Z_Registration_Info_UClass_UAkGeometryComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkGeometryComponent), 277025127U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkGeometryComponent_h_1432631901(TEXT("/Script/AkAudio"),
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkGeometryComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkGeometryComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
