// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkLateReverbComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkLateReverbComponent() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAcousticTextureSetComponent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAuxBus_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkLateReverbComponent();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkLateReverbComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	DEFINE_FUNCTION(UAkLateReverbComponent::execAssociateAkTextureSetComponent)
	{
		P_GET_OBJECT(UAkAcousticTextureSetComponent,Z_Param_textureSetComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AssociateAkTextureSetComponent(Z_Param_textureSetComponent);
		P_NATIVE_END;
	}
	void UAkLateReverbComponent::StaticRegisterNativesUAkLateReverbComponent()
	{
		UClass* Class = UAkLateReverbComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AssociateAkTextureSetComponent", &UAkLateReverbComponent::execAssociateAkTextureSetComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAkLateReverbComponent_AssociateAkTextureSetComponent_Statics
	{
		struct AkLateReverbComponent_eventAssociateAkTextureSetComponent_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkLateReverbComponent_AssociateAkTextureSetComponent_Statics::NewProp_textureSetComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkLateReverbComponent_AssociateAkTextureSetComponent_Statics::NewProp_textureSetComponent = { "textureSetComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkLateReverbComponent_eventAssociateAkTextureSetComponent_Parms, textureSetComponent), Z_Construct_UClass_UAkAcousticTextureSetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAkLateReverbComponent_AssociateAkTextureSetComponent_Statics::NewProp_textureSetComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkLateReverbComponent_AssociateAkTextureSetComponent_Statics::NewProp_textureSetComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkLateReverbComponent_AssociateAkTextureSetComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkLateReverbComponent_AssociateAkTextureSetComponent_Statics::NewProp_textureSetComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkLateReverbComponent_AssociateAkTextureSetComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkLateReverbComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkLateReverbComponent_AssociateAkTextureSetComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkLateReverbComponent, nullptr, "AssociateAkTextureSetComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkLateReverbComponent_AssociateAkTextureSetComponent_Statics::AkLateReverbComponent_eventAssociateAkTextureSetComponent_Parms), Z_Construct_UFunction_UAkLateReverbComponent_AssociateAkTextureSetComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkLateReverbComponent_AssociateAkTextureSetComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkLateReverbComponent_AssociateAkTextureSetComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkLateReverbComponent_AssociateAkTextureSetComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkLateReverbComponent_AssociateAkTextureSetComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkLateReverbComponent_AssociateAkTextureSetComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkLateReverbComponent);
	UClass* Z_Construct_UClass_UAkLateReverbComponent_NoRegister()
	{
		return UAkLateReverbComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAkLateReverbComponent_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SendLevel_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SendLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FadeRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Priority;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoAssignAuxBus_MetaData[];
#endif
		static void NewProp_AutoAssignAuxBus_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AutoAssignAuxBus;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AuxBus_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AuxBus;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AuxBusName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AuxBusName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AuxBusManual_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AuxBusManual;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkLateReverbComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAkLateReverbComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAkLateReverbComponent_AssociateAkTextureSetComponent, "AssociateAkTextureSetComponent" }, // 3144788770
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkLateReverbComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "AkLateReverbComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AkLateReverbComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_bEnable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkLateReverbComponent" },
		{ "ModuleRelativePath", "Public/AkLateReverbComponent.h" },
	};
#endif
	void Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((UAkLateReverbComponent*)Obj)->bEnable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAkLateReverbComponent), &Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_bEnable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_bEnable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_SendLevel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkLateReverbComponent" },
		{ "ModuleRelativePath", "Public/AkLateReverbComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_SendLevel = { "SendLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkLateReverbComponent, SendLevel), METADATA_PARAMS(Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_SendLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_SendLevel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_FadeRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkLateReverbComponent" },
		{ "ModuleRelativePath", "Public/AkLateReverbComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_FadeRate = { "FadeRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkLateReverbComponent, FadeRate), METADATA_PARAMS(Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_FadeRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_FadeRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_Priority_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkLateReverbComponent" },
		{ "ModuleRelativePath", "Public/AkLateReverbComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkLateReverbComponent, Priority), METADATA_PARAMS(Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_Priority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_Priority_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_AutoAssignAuxBus_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkLateReverbComponent" },
		{ "ModuleRelativePath", "Public/AkLateReverbComponent.h" },
	};
#endif
	void Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_AutoAssignAuxBus_SetBit(void* Obj)
	{
		((UAkLateReverbComponent*)Obj)->AutoAssignAuxBus = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_AutoAssignAuxBus = { "AutoAssignAuxBus", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAkLateReverbComponent), &Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_AutoAssignAuxBus_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_AutoAssignAuxBus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_AutoAssignAuxBus_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_AuxBus_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkLateReverbComponent" },
		{ "ModuleRelativePath", "Public/AkLateReverbComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_AuxBus = { "AuxBus", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkLateReverbComponent, AuxBus), Z_Construct_UClass_UAkAuxBus_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_AuxBus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_AuxBus_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_AuxBusName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkLateReverbComponent" },
		{ "ModuleRelativePath", "Public/AkLateReverbComponent.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_AuxBusName = { "AuxBusName", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkLateReverbComponent, AuxBusName), METADATA_PARAMS(Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_AuxBusName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_AuxBusName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_AuxBusManual_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkLateReverbComponent" },
		{ "ModuleRelativePath", "Public/AkLateReverbComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_AuxBusManual = { "AuxBusManual", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkLateReverbComponent, AuxBusManual), Z_Construct_UClass_UAkAuxBus_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_AuxBusManual_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_AuxBusManual_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkLateReverbComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_bEnable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_SendLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_FadeRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_Priority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_AutoAssignAuxBus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_AuxBus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_AuxBusName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkLateReverbComponent_Statics::NewProp_AuxBusManual,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkLateReverbComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkLateReverbComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkLateReverbComponent_Statics::ClassParams = {
		&UAkLateReverbComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAkLateReverbComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAkLateReverbComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAkLateReverbComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkLateReverbComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkLateReverbComponent()
	{
		if (!Z_Registration_Info_UClass_UAkLateReverbComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkLateReverbComponent.OuterSingleton, Z_Construct_UClass_UAkLateReverbComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAkLateReverbComponent.OuterSingleton;
	}
	template<> AKAUDIO_API UClass* StaticClass<UAkLateReverbComponent>()
	{
		return UAkLateReverbComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkLateReverbComponent);
	UAkLateReverbComponent::~UAkLateReverbComponent() {}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkLateReverbComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkLateReverbComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAkLateReverbComponent, UAkLateReverbComponent::StaticClass, TEXT("UAkLateReverbComponent"), &Z_Registration_Info_UClass_UAkLateReverbComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkLateReverbComponent), 1539496268U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkLateReverbComponent_h_4013783862(TEXT("/Script/AkAudio"),
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkLateReverbComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkLateReverbComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
