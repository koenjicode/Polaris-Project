// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/CriFsBinderComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCriFsBinderComponent() {}
// Cross Module References
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UCriFsBinderComponent();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UCriFsBinderComponent_NoRegister();
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_ECriFsBinderStatus();
	CRIWARERUNTIME_API UFunction* Z_Construct_UDelegateFunction_UCriFsBinderComponent_OnBindCompleted__DelegateSignature();
	CRIWARERUNTIME_API UFunction* Z_Construct_UDelegateFunction_UCriFsBinderComponent_OnBindError__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UCriFsBinderComponent_OnBindError__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UCriFsBinderComponent_OnBindError__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CriFsBinderComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UCriFsBinderComponent_OnBindError__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCriFsBinderComponent, nullptr, "OnBindError__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UCriFsBinderComponent_OnBindError__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UCriFsBinderComponent_OnBindError__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UCriFsBinderComponent_OnBindError__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UCriFsBinderComponent_OnBindError__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UCriFsBinderComponent::FOnBindError_DelegateWrapper(const FMulticastScriptDelegate& OnBindError)
{
	OnBindError.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_UCriFsBinderComponent_OnBindCompleted__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UCriFsBinderComponent_OnBindCompleted__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CriFsBinderComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UCriFsBinderComponent_OnBindCompleted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCriFsBinderComponent, nullptr, "OnBindCompleted__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UCriFsBinderComponent_OnBindCompleted__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UCriFsBinderComponent_OnBindCompleted__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UCriFsBinderComponent_OnBindCompleted__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UCriFsBinderComponent_OnBindCompleted__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UCriFsBinderComponent::FOnBindCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnBindCompleted)
{
	OnBindCompleted.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(UCriFsBinderComponent::execBind)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Bind();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCriFsBinderComponent::execGetStatus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ECriFsBinderStatus*)Z_Param__Result=P_THIS->GetStatus();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCriFsBinderComponent::execStop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Stop();
		P_NATIVE_END;
	}
	void UCriFsBinderComponent::StaticRegisterNativesUCriFsBinderComponent()
	{
		UClass* Class = UCriFsBinderComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Bind", &UCriFsBinderComponent::execBind },
			{ "GetStatus", &UCriFsBinderComponent::execGetStatus },
			{ "Stop", &UCriFsBinderComponent::execStop },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCriFsBinderComponent_Bind_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCriFsBinderComponent_Bind_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CriFsBinderComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCriFsBinderComponent_Bind_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCriFsBinderComponent, nullptr, "Bind", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCriFsBinderComponent_Bind_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCriFsBinderComponent_Bind_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCriFsBinderComponent_Bind()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCriFsBinderComponent_Bind_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCriFsBinderComponent_GetStatus_Statics
	{
		struct CriFsBinderComponent_eventGetStatus_Parms
		{
			ECriFsBinderStatus ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCriFsBinderComponent_GetStatus_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCriFsBinderComponent_GetStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CriFsBinderComponent_eventGetStatus_Parms, ReturnValue), Z_Construct_UEnum_CriWareRuntime_ECriFsBinderStatus, METADATA_PARAMS(nullptr, 0) }; // 3389336626
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCriFsBinderComponent_GetStatus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCriFsBinderComponent_GetStatus_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCriFsBinderComponent_GetStatus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCriFsBinderComponent_GetStatus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CriFsBinderComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCriFsBinderComponent_GetStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCriFsBinderComponent, nullptr, "GetStatus", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCriFsBinderComponent_GetStatus_Statics::CriFsBinderComponent_eventGetStatus_Parms), Z_Construct_UFunction_UCriFsBinderComponent_GetStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCriFsBinderComponent_GetStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCriFsBinderComponent_GetStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCriFsBinderComponent_GetStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCriFsBinderComponent_GetStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCriFsBinderComponent_GetStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCriFsBinderComponent_Stop_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCriFsBinderComponent_Stop_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CriFsBinderComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCriFsBinderComponent_Stop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCriFsBinderComponent, nullptr, "Stop", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCriFsBinderComponent_Stop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCriFsBinderComponent_Stop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCriFsBinderComponent_Stop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCriFsBinderComponent_Stop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCriFsBinderComponent);
	UClass* Z_Construct_UClass_UCriFsBinderComponent_NoRegister()
	{
		return UCriFsBinderComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCriFsBinderComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnBindCompleted_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBindCompleted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnBindError_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBindError;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCriFsBinderComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCriFsBinderComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCriFsBinderComponent_Bind, "Bind" }, // 900306877
		{ &Z_Construct_UFunction_UCriFsBinderComponent_GetStatus, "GetStatus" }, // 1391861735
		{ &Z_Construct_UDelegateFunction_UCriFsBinderComponent_OnBindCompleted__DelegateSignature, "OnBindCompleted__DelegateSignature" }, // 1531166073
		{ &Z_Construct_UDelegateFunction_UCriFsBinderComponent_OnBindError__DelegateSignature, "OnBindError__DelegateSignature" }, // 1753485611
		{ &Z_Construct_UFunction_UCriFsBinderComponent_Stop, "Stop" }, // 254353056
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriFsBinderComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "CriFsBinderComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CriFsBinderComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriFsBinderComponent_Statics::NewProp_FilePath_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriFsBinderComponent" },
		{ "ModuleRelativePath", "Public/CriFsBinderComponent.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCriFsBinderComponent_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCriFsBinderComponent, FilePath), METADATA_PARAMS(Z_Construct_UClass_UCriFsBinderComponent_Statics::NewProp_FilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriFsBinderComponent_Statics::NewProp_FilePath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriFsBinderComponent_Statics::NewProp_OnBindCompleted_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriFsBinderComponent" },
		{ "ModuleRelativePath", "Public/CriFsBinderComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCriFsBinderComponent_Statics::NewProp_OnBindCompleted = { "OnBindCompleted", nullptr, (EPropertyFlags)0x0010000010080005, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCriFsBinderComponent, OnBindCompleted), Z_Construct_UDelegateFunction_UCriFsBinderComponent_OnBindCompleted__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCriFsBinderComponent_Statics::NewProp_OnBindCompleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriFsBinderComponent_Statics::NewProp_OnBindCompleted_MetaData)) }; // 1531166073
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriFsBinderComponent_Statics::NewProp_OnBindError_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriFsBinderComponent" },
		{ "ModuleRelativePath", "Public/CriFsBinderComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCriFsBinderComponent_Statics::NewProp_OnBindError = { "OnBindError", nullptr, (EPropertyFlags)0x0010000010080005, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCriFsBinderComponent, OnBindError), Z_Construct_UDelegateFunction_UCriFsBinderComponent_OnBindError__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCriFsBinderComponent_Statics::NewProp_OnBindError_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriFsBinderComponent_Statics::NewProp_OnBindError_MetaData)) }; // 1753485611
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCriFsBinderComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriFsBinderComponent_Statics::NewProp_FilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriFsBinderComponent_Statics::NewProp_OnBindCompleted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriFsBinderComponent_Statics::NewProp_OnBindError,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCriFsBinderComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCriFsBinderComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCriFsBinderComponent_Statics::ClassParams = {
		&UCriFsBinderComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCriFsBinderComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCriFsBinderComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCriFsBinderComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCriFsBinderComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCriFsBinderComponent()
	{
		if (!Z_Registration_Info_UClass_UCriFsBinderComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCriFsBinderComponent.OuterSingleton, Z_Construct_UClass_UCriFsBinderComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCriFsBinderComponent.OuterSingleton;
	}
	template<> CRIWARERUNTIME_API UClass* StaticClass<UCriFsBinderComponent>()
	{
		return UCriFsBinderComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCriFsBinderComponent);
	UCriFsBinderComponent::~UCriFsBinderComponent() {}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriFsBinderComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriFsBinderComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCriFsBinderComponent, UCriFsBinderComponent::StaticClass, TEXT("UCriFsBinderComponent"), &Z_Registration_Info_UClass_UCriFsBinderComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCriFsBinderComponent), 503848284U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriFsBinderComponent_h_967611337(TEXT("/Script/CriWareRuntime"),
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriFsBinderComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriFsBinderComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
