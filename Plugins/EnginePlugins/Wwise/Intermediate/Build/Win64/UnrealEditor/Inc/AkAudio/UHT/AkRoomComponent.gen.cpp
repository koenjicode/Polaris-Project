// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkRoomComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkRoomComponent() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAcousticTextureSetComponent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkGameObject();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkRoomComponent();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkRoomComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	DEFINE_FUNCTION(UAkRoomComponent::execGetPrimitiveParent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPrimitiveComponent**)Z_Param__Result=P_THIS->GetPrimitiveParent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkRoomComponent::execSetGeometryComponent)
	{
		P_GET_OBJECT(UAkAcousticTextureSetComponent,Z_Param_textureSetComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGeometryComponent(Z_Param_textureSetComponent);
		P_NATIVE_END;
	}
	void UAkRoomComponent::StaticRegisterNativesUAkRoomComponent()
	{
		UClass* Class = UAkRoomComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPrimitiveParent", &UAkRoomComponent::execGetPrimitiveParent },
			{ "SetGeometryComponent", &UAkRoomComponent::execSetGeometryComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAkRoomComponent_GetPrimitiveParent_Statics
	{
		struct AkRoomComponent_eventGetPrimitiveParent_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkRoomComponent_GetPrimitiveParent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkRoomComponent_GetPrimitiveParent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkRoomComponent_eventGetPrimitiveParent_Parms, ReturnValue), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAkRoomComponent_GetPrimitiveParent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkRoomComponent_GetPrimitiveParent_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkRoomComponent_GetPrimitiveParent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkRoomComponent_GetPrimitiveParent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkRoomComponent_GetPrimitiveParent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkRoomComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkRoomComponent_GetPrimitiveParent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkRoomComponent, nullptr, "GetPrimitiveParent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkRoomComponent_GetPrimitiveParent_Statics::AkRoomComponent_eventGetPrimitiveParent_Parms), Z_Construct_UFunction_UAkRoomComponent_GetPrimitiveParent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkRoomComponent_GetPrimitiveParent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkRoomComponent_GetPrimitiveParent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkRoomComponent_GetPrimitiveParent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkRoomComponent_GetPrimitiveParent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkRoomComponent_GetPrimitiveParent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkRoomComponent_SetGeometryComponent_Statics
	{
		struct AkRoomComponent_eventSetGeometryComponent_Parms
		{
			UAkAcousticTextureSetComponent* textureSetComponent;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_textureSetComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_textureSetComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkRoomComponent_SetGeometryComponent_Statics::NewProp_textureSetComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkRoomComponent_SetGeometryComponent_Statics::NewProp_textureSetComponent = { "textureSetComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkRoomComponent_eventSetGeometryComponent_Parms, textureSetComponent), Z_Construct_UClass_UAkAcousticTextureSetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAkRoomComponent_SetGeometryComponent_Statics::NewProp_textureSetComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkRoomComponent_SetGeometryComponent_Statics::NewProp_textureSetComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkRoomComponent_SetGeometryComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkRoomComponent_SetGeometryComponent_Statics::NewProp_textureSetComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkRoomComponent_SetGeometryComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkRoomComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkRoomComponent_SetGeometryComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkRoomComponent, nullptr, "SetGeometryComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkRoomComponent_SetGeometryComponent_Statics::AkRoomComponent_eventSetGeometryComponent_Parms), Z_Construct_UFunction_UAkRoomComponent_SetGeometryComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkRoomComponent_SetGeometryComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkRoomComponent_SetGeometryComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkRoomComponent_SetGeometryComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkRoomComponent_SetGeometryComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkRoomComponent_SetGeometryComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkRoomComponent);
	UClass* Z_Construct_UClass_UAkRoomComponent_NoRegister()
	{
		return UAkRoomComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAkRoomComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnable_MetaData[];
#endif
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDynamic_MetaData[];
#endif
		static void NewProp_bDynamic_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDynamic;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Priority;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WallOcclusion_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WallOcclusion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AuxSendLevel_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AuxSendLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoPost_MetaData[];
#endif
		static void NewProp_AutoPost_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AutoPost;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeometryComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GeometryComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkRoomComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAkGameObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAkRoomComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAkRoomComponent_GetPrimitiveParent, "GetPrimitiveParent" }, // 248183874
		{ &Z_Construct_UFunction_UAkRoomComponent_SetGeometryComponent, "SetGeometryComponent" }, // 2318997249
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkRoomComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "AkRoomComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AkRoomComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkRoomComponent_Statics::NewProp_bEnable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkRoomComponent" },
		{ "ModuleRelativePath", "Public/AkRoomComponent.h" },
	};
#endif
	void Z_Construct_UClass_UAkRoomComponent_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((UAkRoomComponent*)Obj)->bEnable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkRoomComponent_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAkRoomComponent), &Z_Construct_UClass_UAkRoomComponent_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkRoomComponent_Statics::NewProp_bEnable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkRoomComponent_Statics::NewProp_bEnable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkRoomComponent_Statics::NewProp_bDynamic_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkRoomComponent" },
		{ "ModuleRelativePath", "Public/AkRoomComponent.h" },
	};
#endif
	void Z_Construct_UClass_UAkRoomComponent_Statics::NewProp_bDynamic_SetBit(void* Obj)
	{
		((UAkRoomComponent*)Obj)->bDynamic = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkRoomComponent_Statics::NewProp_bDynamic = { "bDynamic", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAkRoomComponent), &Z_Construct_UClass_UAkRoomComponent_Statics::NewProp_bDynamic_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkRoomComponent_Statics::NewProp_bDynamic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkRoomComponent_Statics::NewProp_bDynamic_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkRoomComponent_Statics::NewProp_Priority_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkRoomComponent" },
		{ "ModuleRelativePath", "Public/AkRoomComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAkRoomComponent_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkRoomComponent, Priority), METADATA_PARAMS(Z_Construct_UClass_UAkRoomComponent_Statics::NewProp_Priority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkRoomComponent_Statics::NewProp_Priority_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkRoomComponent_Statics::NewProp_WallOcclusion_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkRoomComponent" },
		{ "ModuleRelativePath", "Public/AkRoomComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAkRoomComponent_Statics::NewProp_WallOcclusion = { "WallOcclusion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkRoomComponent, WallOcclusion), METADATA_PARAMS(Z_Construct_UClass_UAkRoomComponent_Statics::NewProp_WallOcclusion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkRoomComponent_Statics::NewProp_WallOcclusion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkRoomComponent_Statics::NewProp_AuxSendLevel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkRoomComponent" },
		{ "ModuleRelativePath", "Public/AkRoomComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAkRoomComponent_Statics::NewProp_AuxSendLevel = { "AuxSendLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkRoomComponent, AuxSendLevel), METADATA_PARAMS(Z_Construct_UClass_UAkRoomComponent_Statics::NewProp_AuxSendLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkRoomComponent_Statics::NewProp_AuxSendLevel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkRoomComponent_Statics::NewProp_AutoPost_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkRoomComponent" },
		{ "ModuleRelativePath", "Public/AkRoomComponent.h" },
	};
#endif
	void Z_Construct_UClass_UAkRoomComponent_Statics::NewProp_AutoPost_SetBit(void* Obj)
	{
		((UAkRoomComponent*)Obj)->AutoPost = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkRoomComponent_Statics::NewProp_AutoPost = { "AutoPost", nullptr, (EPropertyFlags)0x0010020000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAkRoomComponent), &Z_Construct_UClass_UAkRoomComponent_Statics::NewProp_AutoPost_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkRoomComponent_Statics::NewProp_AutoPost_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkRoomComponent_Statics::NewProp_AutoPost_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkRoomComponent_Statics::NewProp_GeometryComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkRoomComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AkRoomComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkRoomComponent_Statics::NewProp_GeometryComponent = { "GeometryComponent", nullptr, (EPropertyFlags)0x004200000008200d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkRoomComponent, GeometryComponent), Z_Construct_UClass_UAkAcousticTextureSetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAkRoomComponent_Statics::NewProp_GeometryComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkRoomComponent_Statics::NewProp_GeometryComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkRoomComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkRoomComponent_Statics::NewProp_bEnable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkRoomComponent_Statics::NewProp_bDynamic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkRoomComponent_Statics::NewProp_Priority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkRoomComponent_Statics::NewProp_WallOcclusion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkRoomComponent_Statics::NewProp_AuxSendLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkRoomComponent_Statics::NewProp_AutoPost,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkRoomComponent_Statics::NewProp_GeometryComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkRoomComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkRoomComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkRoomComponent_Statics::ClassParams = {
		&UAkRoomComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAkRoomComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAkRoomComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAkRoomComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkRoomComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkRoomComponent()
	{
		if (!Z_Registration_Info_UClass_UAkRoomComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkRoomComponent.OuterSingleton, Z_Construct_UClass_UAkRoomComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAkRoomComponent.OuterSingleton;
	}
	template<> AKAUDIO_API UClass* StaticClass<UAkRoomComponent>()
	{
		return UAkRoomComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkRoomComponent);
	UAkRoomComponent::~UAkRoomComponent() {}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkRoomComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkRoomComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAkRoomComponent, UAkRoomComponent::StaticClass, TEXT("UAkRoomComponent"), &Z_Registration_Info_UClass_UAkRoomComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkRoomComponent), 2169091567U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkRoomComponent_h_1841381903(TEXT("/Script/AkAudio"),
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkRoomComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkRoomComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
