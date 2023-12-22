// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/DataManaMovie.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataManaMovie() {}
// Cross Module References
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UDataManaMovie();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UDataManaMovie_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UManaMovie();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	DEFINE_FUNCTION(UDataManaMovie::execGetDataArray)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<uint8>*)Z_Param__Result=P_THIS->GetDataArray();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataManaMovie::execSetDataArray)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_InDataArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDataArray(Z_Param_Out_InDataArray);
		P_NATIVE_END;
	}
	void UDataManaMovie::StaticRegisterNativesUDataManaMovie()
	{
		UClass* Class = UDataManaMovie::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDataArray", &UDataManaMovie::execGetDataArray },
			{ "SetDataArray", &UDataManaMovie::execSetDataArray },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDataManaMovie_GetDataArray_Statics
	{
		struct DataManaMovie_eventGetDataArray_Parms
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDataManaMovie_GetDataArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDataManaMovie_GetDataArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataManaMovie_eventGetDataArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataManaMovie_GetDataArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataManaMovie_GetDataArray_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataManaMovie_GetDataArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataManaMovie_GetDataArray_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DataManaMovie.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataManaMovie_GetDataArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataManaMovie, nullptr, "GetDataArray", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataManaMovie_GetDataArray_Statics::DataManaMovie_eventGetDataArray_Parms), Z_Construct_UFunction_UDataManaMovie_GetDataArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataManaMovie_GetDataArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataManaMovie_GetDataArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataManaMovie_GetDataArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataManaMovie_GetDataArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataManaMovie_GetDataArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataManaMovie_SetDataArray_Statics
	{
		struct DataManaMovie_eventSetDataArray_Parms
		{
			TArray<uint8> InDataArray;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InDataArray_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InDataArray;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDataManaMovie_SetDataArray_Statics::NewProp_InDataArray_Inner = { "InDataArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDataManaMovie_SetDataArray_Statics::NewProp_InDataArray = { "InDataArray", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataManaMovie_eventSetDataArray_Parms, InDataArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataManaMovie_SetDataArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataManaMovie_SetDataArray_Statics::NewProp_InDataArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataManaMovie_SetDataArray_Statics::NewProp_InDataArray,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataManaMovie_SetDataArray_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DataManaMovie.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataManaMovie_SetDataArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataManaMovie, nullptr, "SetDataArray", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataManaMovie_SetDataArray_Statics::DataManaMovie_eventSetDataArray_Parms), Z_Construct_UFunction_UDataManaMovie_SetDataArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataManaMovie_SetDataArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataManaMovie_SetDataArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataManaMovie_SetDataArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataManaMovie_SetDataArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataManaMovie_SetDataArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataManaMovie);
	UClass* Z_Construct_UClass_UDataManaMovie_NoRegister()
	{
		return UDataManaMovie::StaticClass();
	}
	struct Z_Construct_UClass_UDataManaMovie_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataManaMovie_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UManaMovie,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDataManaMovie_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDataManaMovie_GetDataArray, "GetDataArray" }, // 1169710200
		{ &Z_Construct_UFunction_UDataManaMovie_SetDataArray, "SetDataArray" }, // 2309986335
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataManaMovie_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DataManaMovie.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DataManaMovie.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataManaMovie_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataManaMovie>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataManaMovie_Statics::ClassParams = {
		&UDataManaMovie::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDataManaMovie_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDataManaMovie_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDataManaMovie()
	{
		if (!Z_Registration_Info_UClass_UDataManaMovie.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataManaMovie.OuterSingleton, Z_Construct_UClass_UDataManaMovie_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDataManaMovie.OuterSingleton;
	}
	template<> CRIWARERUNTIME_API UClass* StaticClass<UDataManaMovie>()
	{
		return UDataManaMovie::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataManaMovie);
	UDataManaMovie::~UDataManaMovie() {}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_DataManaMovie_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_DataManaMovie_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDataManaMovie, UDataManaMovie::StaticClass, TEXT("UDataManaMovie"), &Z_Registration_Info_UClass_UDataManaMovie, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataManaMovie), 2789828849U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_DataManaMovie_h_3251522166(TEXT("/Script/CriWareRuntime"),
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_DataManaMovie_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_DataManaMovie_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
