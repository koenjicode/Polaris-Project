// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkAudioType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkAudioType() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioType();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioType_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	DEFINE_FUNCTION(UAkAudioType::execGetWwiseShortID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetWwiseShortID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkAudioType::execLoadData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkAudioType::execUnloadData)
	{
		P_GET_UBOOL(Z_Param_bAsync);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnloadData(Z_Param_bAsync);
		P_NATIVE_END;
	}
	void UAkAudioType::StaticRegisterNativesUAkAudioType()
	{
		UClass* Class = UAkAudioType::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetWwiseShortID", &UAkAudioType::execGetWwiseShortID },
			{ "LoadData", &UAkAudioType::execLoadData },
			{ "UnloadData", &UAkAudioType::execUnloadData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAkAudioType_GetWwiseShortID_Statics
	{
		struct AkAudioType_eventGetWwiseShortID_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkAudioType_GetWwiseShortID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkAudioType_eventGetWwiseShortID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkAudioType_GetWwiseShortID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkAudioType_GetWwiseShortID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkAudioType_GetWwiseShortID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkAudioType.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkAudioType_GetWwiseShortID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkAudioType, nullptr, "GetWwiseShortID", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkAudioType_GetWwiseShortID_Statics::AkAudioType_eventGetWwiseShortID_Parms), Z_Construct_UFunction_UAkAudioType_GetWwiseShortID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkAudioType_GetWwiseShortID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkAudioType_GetWwiseShortID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkAudioType_GetWwiseShortID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkAudioType_GetWwiseShortID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkAudioType_GetWwiseShortID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkAudioType_LoadData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkAudioType_LoadData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkAudioType.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkAudioType_LoadData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkAudioType, nullptr, "LoadData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkAudioType_LoadData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkAudioType_LoadData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkAudioType_LoadData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkAudioType_LoadData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkAudioType_UnloadData_Statics
	{
		struct AkAudioType_eventUnloadData_Parms
		{
			bool bAsync;
		};
		static void NewProp_bAsync_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAsync;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAkAudioType_UnloadData_Statics::NewProp_bAsync_SetBit(void* Obj)
	{
		((AkAudioType_eventUnloadData_Parms*)Obj)->bAsync = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkAudioType_UnloadData_Statics::NewProp_bAsync = { "bAsync", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AkAudioType_eventUnloadData_Parms), &Z_Construct_UFunction_UAkAudioType_UnloadData_Statics::NewProp_bAsync_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkAudioType_UnloadData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkAudioType_UnloadData_Statics::NewProp_bAsync,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkAudioType_UnloadData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkAudioType.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkAudioType_UnloadData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkAudioType, nullptr, "UnloadData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkAudioType_UnloadData_Statics::AkAudioType_eventUnloadData_Parms), Z_Construct_UFunction_UAkAudioType_UnloadData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkAudioType_UnloadData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkAudioType_UnloadData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkAudioType_UnloadData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkAudioType_UnloadData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkAudioType_UnloadData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkAudioType);
	UClass* Z_Construct_UClass_UAkAudioType_NoRegister()
	{
		return UAkAudioType::StaticClass();
	}
	struct Z_Construct_UClass_UAkAudioType_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoLoad_MetaData[];
#endif
		static void NewProp_bAutoLoad_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoLoad;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_UserData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UserData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkAudioType_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAkAudioType_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAkAudioType_GetWwiseShortID, "GetWwiseShortID" }, // 557148737
		{ &Z_Construct_UFunction_UAkAudioType_LoadData, "LoadData" }, // 3658804686
		{ &Z_Construct_UFunction_UAkAudioType_UnloadData, "UnloadData" }, // 145187575
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAudioType_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AkAudioType.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AkAudioType.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAudioType_Statics::NewProp_bAutoLoad_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkAudioType" },
		{ "ModuleRelativePath", "Public/AkAudioType.h" },
	};
#endif
	void Z_Construct_UClass_UAkAudioType_Statics::NewProp_bAutoLoad_SetBit(void* Obj)
	{
		((UAkAudioType*)Obj)->bAutoLoad = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkAudioType_Statics::NewProp_bAutoLoad = { "bAutoLoad", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAkAudioType), &Z_Construct_UClass_UAkAudioType_Statics::NewProp_bAutoLoad_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkAudioType_Statics::NewProp_bAutoLoad_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAudioType_Statics::NewProp_bAutoLoad_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkAudioType_Statics::NewProp_UserData_Inner = { "UserData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAudioType_Statics::NewProp_UserData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkAudioType" },
		{ "ModuleRelativePath", "Public/AkAudioType.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAkAudioType_Statics::NewProp_UserData = { "UserData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkAudioType, UserData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAkAudioType_Statics::NewProp_UserData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAudioType_Statics::NewProp_UserData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkAudioType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAudioType_Statics::NewProp_bAutoLoad,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAudioType_Statics::NewProp_UserData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAudioType_Statics::NewProp_UserData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkAudioType_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkAudioType>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkAudioType_Statics::ClassParams = {
		&UAkAudioType::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAkAudioType_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAkAudioType_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAkAudioType_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAudioType_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkAudioType()
	{
		if (!Z_Registration_Info_UClass_UAkAudioType.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkAudioType.OuterSingleton, Z_Construct_UClass_UAkAudioType_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAkAudioType.OuterSingleton;
	}
	template<> AKAUDIO_API UClass* StaticClass<UAkAudioType>()
	{
		return UAkAudioType::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkAudioType);
	UAkAudioType::~UAkAudioType() {}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAudioType_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAudioType_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAkAudioType, UAkAudioType::StaticClass, TEXT("UAkAudioType"), &Z_Registration_Info_UClass_UAkAudioType, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkAudioType), 3070400248U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAudioType_h_3668773599(TEXT("/Script/AkAudio"),
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAudioType_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAudioType_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
