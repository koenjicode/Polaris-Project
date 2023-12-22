// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/CriFsLoaderComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCriFsLoaderComponent() {}
// Cross Module References
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UCriFsLoaderComponent();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UCriFsLoaderComponent_NoRegister();
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_ECriFsLoaderStatus();
	CRIWARERUNTIME_API UFunction* Z_Construct_UDelegateFunction_UCriFsLoaderComponent_OnLoadCompleted__DelegateSignature();
	CRIWARERUNTIME_API UFunction* Z_Construct_UDelegateFunction_UCriFsLoaderComponent_OnLoadError__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UCriFsLoaderComponent_OnLoadError__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UCriFsLoaderComponent_OnLoadError__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CriFsLoaderComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UCriFsLoaderComponent_OnLoadError__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCriFsLoaderComponent, nullptr, "OnLoadError__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UCriFsLoaderComponent_OnLoadError__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UCriFsLoaderComponent_OnLoadError__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UCriFsLoaderComponent_OnLoadError__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UCriFsLoaderComponent_OnLoadError__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UCriFsLoaderComponent::FOnLoadError_DelegateWrapper(const FMulticastScriptDelegate& OnLoadError)
{
	OnLoadError.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_UCriFsLoaderComponent_OnLoadCompleted__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UCriFsLoaderComponent_OnLoadCompleted__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CriFsLoaderComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UCriFsLoaderComponent_OnLoadCompleted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCriFsLoaderComponent, nullptr, "OnLoadCompleted__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UCriFsLoaderComponent_OnLoadCompleted__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UCriFsLoaderComponent_OnLoadCompleted__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UCriFsLoaderComponent_OnLoadCompleted__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UCriFsLoaderComponent_OnLoadCompleted__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UCriFsLoaderComponent::FOnLoadCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnLoadCompleted)
{
	OnLoadCompleted.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(UCriFsLoaderComponent::execGetDataArray)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<uint8>*)Z_Param__Result=P_THIS->GetDataArray();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCriFsLoaderComponent::execGetStatus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ECriFsLoaderStatus*)Z_Param__Result=P_THIS->GetStatus();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCriFsLoaderComponent::execLoad)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Load();
		P_NATIVE_END;
	}
	void UCriFsLoaderComponent::StaticRegisterNativesUCriFsLoaderComponent()
	{
		UClass* Class = UCriFsLoaderComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDataArray", &UCriFsLoaderComponent::execGetDataArray },
			{ "GetStatus", &UCriFsLoaderComponent::execGetStatus },
			{ "Load", &UCriFsLoaderComponent::execLoad },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCriFsLoaderComponent_GetDataArray_Statics
	{
		struct CriFsLoaderComponent_eventGetDataArray_Parms
		{
			TArray<uint8> ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCriFsLoaderComponent_GetDataArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCriFsLoaderComponent_GetDataArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CriFsLoaderComponent_eventGetDataArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCriFsLoaderComponent_GetDataArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCriFsLoaderComponent_GetDataArray_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCriFsLoaderComponent_GetDataArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCriFsLoaderComponent_GetDataArray_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CriFsLoaderComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCriFsLoaderComponent_GetDataArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCriFsLoaderComponent, nullptr, "GetDataArray", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCriFsLoaderComponent_GetDataArray_Statics::CriFsLoaderComponent_eventGetDataArray_Parms), Z_Construct_UFunction_UCriFsLoaderComponent_GetDataArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCriFsLoaderComponent_GetDataArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCriFsLoaderComponent_GetDataArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCriFsLoaderComponent_GetDataArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCriFsLoaderComponent_GetDataArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCriFsLoaderComponent_GetDataArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCriFsLoaderComponent_GetStatus_Statics
	{
		struct CriFsLoaderComponent_eventGetStatus_Parms
		{
			ECriFsLoaderStatus ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCriFsLoaderComponent_GetStatus_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCriFsLoaderComponent_GetStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CriFsLoaderComponent_eventGetStatus_Parms, ReturnValue), Z_Construct_UEnum_CriWareRuntime_ECriFsLoaderStatus, METADATA_PARAMS(nullptr, 0) }; // 917968879
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCriFsLoaderComponent_GetStatus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCriFsLoaderComponent_GetStatus_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCriFsLoaderComponent_GetStatus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCriFsLoaderComponent_GetStatus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CriFsLoaderComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCriFsLoaderComponent_GetStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCriFsLoaderComponent, nullptr, "GetStatus", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCriFsLoaderComponent_GetStatus_Statics::CriFsLoaderComponent_eventGetStatus_Parms), Z_Construct_UFunction_UCriFsLoaderComponent_GetStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCriFsLoaderComponent_GetStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCriFsLoaderComponent_GetStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCriFsLoaderComponent_GetStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCriFsLoaderComponent_GetStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCriFsLoaderComponent_GetStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCriFsLoaderComponent_Load_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCriFsLoaderComponent_Load_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CriFsLoaderComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCriFsLoaderComponent_Load_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCriFsLoaderComponent, nullptr, "Load", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCriFsLoaderComponent_Load_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCriFsLoaderComponent_Load_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCriFsLoaderComponent_Load()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCriFsLoaderComponent_Load_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCriFsLoaderComponent);
	UClass* Z_Construct_UClass_UCriFsLoaderComponent_NoRegister()
	{
		return UCriFsLoaderComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCriFsLoaderComponent_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnLoadCompleted_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLoadCompleted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnLoadError_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLoadError;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCriFsLoaderComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCriFsLoaderComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCriFsLoaderComponent_GetDataArray, "GetDataArray" }, // 2982281736
		{ &Z_Construct_UFunction_UCriFsLoaderComponent_GetStatus, "GetStatus" }, // 2420430212
		{ &Z_Construct_UFunction_UCriFsLoaderComponent_Load, "Load" }, // 1080221508
		{ &Z_Construct_UDelegateFunction_UCriFsLoaderComponent_OnLoadCompleted__DelegateSignature, "OnLoadCompleted__DelegateSignature" }, // 876156995
		{ &Z_Construct_UDelegateFunction_UCriFsLoaderComponent_OnLoadError__DelegateSignature, "OnLoadError__DelegateSignature" }, // 3181197392
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriFsLoaderComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "CriFsLoaderComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CriFsLoaderComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriFsLoaderComponent_Statics::NewProp_FilePath_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriFsLoaderComponent" },
		{ "ModuleRelativePath", "Public/CriFsLoaderComponent.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCriFsLoaderComponent_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCriFsLoaderComponent, FilePath), METADATA_PARAMS(Z_Construct_UClass_UCriFsLoaderComponent_Statics::NewProp_FilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriFsLoaderComponent_Statics::NewProp_FilePath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriFsLoaderComponent_Statics::NewProp_OnLoadCompleted_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriFsLoaderComponent" },
		{ "ModuleRelativePath", "Public/CriFsLoaderComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCriFsLoaderComponent_Statics::NewProp_OnLoadCompleted = { "OnLoadCompleted", nullptr, (EPropertyFlags)0x0010000010080005, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCriFsLoaderComponent, OnLoadCompleted), Z_Construct_UDelegateFunction_UCriFsLoaderComponent_OnLoadCompleted__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCriFsLoaderComponent_Statics::NewProp_OnLoadCompleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriFsLoaderComponent_Statics::NewProp_OnLoadCompleted_MetaData)) }; // 876156995
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriFsLoaderComponent_Statics::NewProp_OnLoadError_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriFsLoaderComponent" },
		{ "ModuleRelativePath", "Public/CriFsLoaderComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCriFsLoaderComponent_Statics::NewProp_OnLoadError = { "OnLoadError", nullptr, (EPropertyFlags)0x0010000010080005, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCriFsLoaderComponent, OnLoadError), Z_Construct_UDelegateFunction_UCriFsLoaderComponent_OnLoadError__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCriFsLoaderComponent_Statics::NewProp_OnLoadError_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCriFsLoaderComponent_Statics::NewProp_OnLoadError_MetaData)) }; // 3181197392
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCriFsLoaderComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriFsLoaderComponent_Statics::NewProp_FilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriFsLoaderComponent_Statics::NewProp_OnLoadCompleted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCriFsLoaderComponent_Statics::NewProp_OnLoadError,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCriFsLoaderComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCriFsLoaderComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCriFsLoaderComponent_Statics::ClassParams = {
		&UCriFsLoaderComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCriFsLoaderComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCriFsLoaderComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCriFsLoaderComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCriFsLoaderComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCriFsLoaderComponent()
	{
		if (!Z_Registration_Info_UClass_UCriFsLoaderComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCriFsLoaderComponent.OuterSingleton, Z_Construct_UClass_UCriFsLoaderComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCriFsLoaderComponent.OuterSingleton;
	}
	template<> CRIWARERUNTIME_API UClass* StaticClass<UCriFsLoaderComponent>()
	{
		return UCriFsLoaderComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCriFsLoaderComponent);
	UCriFsLoaderComponent::~UCriFsLoaderComponent() {}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriFsLoaderComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriFsLoaderComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCriFsLoaderComponent, UCriFsLoaderComponent::StaticClass, TEXT("UCriFsLoaderComponent"), &Z_Registration_Info_UClass_UCriFsLoaderComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCriFsLoaderComponent), 1101761872U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriFsLoaderComponent_h_2292537374(TEXT("/Script/CriWareRuntime"),
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriFsLoaderComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_CriFsLoaderComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
