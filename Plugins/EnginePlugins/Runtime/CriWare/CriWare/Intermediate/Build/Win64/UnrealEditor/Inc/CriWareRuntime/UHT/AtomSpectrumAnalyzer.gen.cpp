// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/AtomSpectrumAnalyzer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomSpectrumAnalyzer() {}
// Cross Module References
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomAsrRack_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomSpectrumAnalyzer();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomSpectrumAnalyzer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	DEFINE_FUNCTION(UAtomSpectrumAnalyzer::execCreateDspSpectra)
	{
		P_GET_OBJECT(UAtomAsrRack,Z_Param_asr_rack);
		P_GET_PROPERTY(FStrProperty,Z_Param_bus_name);
		P_GET_PROPERTY(FIntProperty,Z_Param_num_bands);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAtomSpectrumAnalyzer::CreateDspSpectra(Z_Param_asr_rack,Z_Param_bus_name,Z_Param_num_bands);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomSpectrumAnalyzer::execDestroyDspSpectra)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UAtomSpectrumAnalyzer::DestroyDspSpectra();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomSpectrumAnalyzer::execGetLevels)
	{
		P_GET_TARRAY_REF(float,Z_Param_Out_spectra);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAtomSpectrumAnalyzer::GetLevels(Z_Param_Out_spectra);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomSpectrumAnalyzer::execGetLevelsDB)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_display_range);
		P_GET_TARRAY_REF(float,Z_Param_Out_spectra);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAtomSpectrumAnalyzer::GetLevelsDB(Z_Param_display_range,Z_Param_Out_spectra);
		P_NATIVE_END;
	}
	void UAtomSpectrumAnalyzer::StaticRegisterNativesUAtomSpectrumAnalyzer()
	{
		UClass* Class = UAtomSpectrumAnalyzer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateDspSpectra", &UAtomSpectrumAnalyzer::execCreateDspSpectra },
			{ "DestroyDspSpectra", &UAtomSpectrumAnalyzer::execDestroyDspSpectra },
			{ "GetLevels", &UAtomSpectrumAnalyzer::execGetLevels },
			{ "GetLevelsDB", &UAtomSpectrumAnalyzer::execGetLevelsDB },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAtomSpectrumAnalyzer_CreateDspSpectra_Statics
	{
		struct AtomSpectrumAnalyzer_eventCreateDspSpectra_Parms
		{
			UAtomAsrRack* asr_rack;
			FString bus_name;
			int32 num_bands;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_asr_rack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bus_name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_bus_name;
		static const UECodeGen_Private::FIntPropertyParams NewProp_num_bands;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtomSpectrumAnalyzer_CreateDspSpectra_Statics::NewProp_asr_rack = { "asr_rack", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomSpectrumAnalyzer_eventCreateDspSpectra_Parms, asr_rack), Z_Construct_UClass_UAtomAsrRack_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomSpectrumAnalyzer_CreateDspSpectra_Statics::NewProp_bus_name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtomSpectrumAnalyzer_CreateDspSpectra_Statics::NewProp_bus_name = { "bus_name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomSpectrumAnalyzer_eventCreateDspSpectra_Parms, bus_name), METADATA_PARAMS(Z_Construct_UFunction_UAtomSpectrumAnalyzer_CreateDspSpectra_Statics::NewProp_bus_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomSpectrumAnalyzer_CreateDspSpectra_Statics::NewProp_bus_name_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtomSpectrumAnalyzer_CreateDspSpectra_Statics::NewProp_num_bands = { "num_bands", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomSpectrumAnalyzer_eventCreateDspSpectra_Parms, num_bands), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomSpectrumAnalyzer_CreateDspSpectra_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomSpectrumAnalyzer_CreateDspSpectra_Statics::NewProp_asr_rack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomSpectrumAnalyzer_CreateDspSpectra_Statics::NewProp_bus_name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomSpectrumAnalyzer_CreateDspSpectra_Statics::NewProp_num_bands,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomSpectrumAnalyzer_CreateDspSpectra_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomSpectrumAnalyzer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomSpectrumAnalyzer_CreateDspSpectra_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomSpectrumAnalyzer, nullptr, "CreateDspSpectra", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomSpectrumAnalyzer_CreateDspSpectra_Statics::AtomSpectrumAnalyzer_eventCreateDspSpectra_Parms), Z_Construct_UFunction_UAtomSpectrumAnalyzer_CreateDspSpectra_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomSpectrumAnalyzer_CreateDspSpectra_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomSpectrumAnalyzer_CreateDspSpectra_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomSpectrumAnalyzer_CreateDspSpectra_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomSpectrumAnalyzer_CreateDspSpectra()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomSpectrumAnalyzer_CreateDspSpectra_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomSpectrumAnalyzer_DestroyDspSpectra_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomSpectrumAnalyzer_DestroyDspSpectra_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomSpectrumAnalyzer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomSpectrumAnalyzer_DestroyDspSpectra_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomSpectrumAnalyzer, nullptr, "DestroyDspSpectra", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomSpectrumAnalyzer_DestroyDspSpectra_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomSpectrumAnalyzer_DestroyDspSpectra_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomSpectrumAnalyzer_DestroyDspSpectra()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomSpectrumAnalyzer_DestroyDspSpectra_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomSpectrumAnalyzer_GetLevels_Statics
	{
		struct AtomSpectrumAnalyzer_eventGetLevels_Parms
		{
			TArray<float> spectra;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_spectra_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_spectra;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomSpectrumAnalyzer_GetLevels_Statics::NewProp_spectra_Inner = { "spectra", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAtomSpectrumAnalyzer_GetLevels_Statics::NewProp_spectra = { "spectra", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomSpectrumAnalyzer_eventGetLevels_Parms, spectra), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomSpectrumAnalyzer_GetLevels_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomSpectrumAnalyzer_GetLevels_Statics::NewProp_spectra_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomSpectrumAnalyzer_GetLevels_Statics::NewProp_spectra,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomSpectrumAnalyzer_GetLevels_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomSpectrumAnalyzer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomSpectrumAnalyzer_GetLevels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomSpectrumAnalyzer, nullptr, "GetLevels", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomSpectrumAnalyzer_GetLevels_Statics::AtomSpectrumAnalyzer_eventGetLevels_Parms), Z_Construct_UFunction_UAtomSpectrumAnalyzer_GetLevels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomSpectrumAnalyzer_GetLevels_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomSpectrumAnalyzer_GetLevels_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomSpectrumAnalyzer_GetLevels_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomSpectrumAnalyzer_GetLevels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomSpectrumAnalyzer_GetLevels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomSpectrumAnalyzer_GetLevelsDB_Statics
	{
		struct AtomSpectrumAnalyzer_eventGetLevelsDB_Parms
		{
			float display_range;
			TArray<float> spectra;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_display_range;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_spectra_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_spectra;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomSpectrumAnalyzer_GetLevelsDB_Statics::NewProp_display_range = { "display_range", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomSpectrumAnalyzer_eventGetLevelsDB_Parms, display_range), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomSpectrumAnalyzer_GetLevelsDB_Statics::NewProp_spectra_Inner = { "spectra", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAtomSpectrumAnalyzer_GetLevelsDB_Statics::NewProp_spectra = { "spectra", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomSpectrumAnalyzer_eventGetLevelsDB_Parms, spectra), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomSpectrumAnalyzer_GetLevelsDB_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomSpectrumAnalyzer_GetLevelsDB_Statics::NewProp_display_range,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomSpectrumAnalyzer_GetLevelsDB_Statics::NewProp_spectra_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomSpectrumAnalyzer_GetLevelsDB_Statics::NewProp_spectra,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomSpectrumAnalyzer_GetLevelsDB_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomSpectrumAnalyzer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomSpectrumAnalyzer_GetLevelsDB_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomSpectrumAnalyzer, nullptr, "GetLevelsDB", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomSpectrumAnalyzer_GetLevelsDB_Statics::AtomSpectrumAnalyzer_eventGetLevelsDB_Parms), Z_Construct_UFunction_UAtomSpectrumAnalyzer_GetLevelsDB_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomSpectrumAnalyzer_GetLevelsDB_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomSpectrumAnalyzer_GetLevelsDB_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomSpectrumAnalyzer_GetLevelsDB_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomSpectrumAnalyzer_GetLevelsDB()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomSpectrumAnalyzer_GetLevelsDB_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomSpectrumAnalyzer);
	UClass* Z_Construct_UClass_UAtomSpectrumAnalyzer_NoRegister()
	{
		return UAtomSpectrumAnalyzer::StaticClass();
	}
	struct Z_Construct_UClass_UAtomSpectrumAnalyzer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomSpectrumAnalyzer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAtomSpectrumAnalyzer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtomSpectrumAnalyzer_CreateDspSpectra, "CreateDspSpectra" }, // 3804221780
		{ &Z_Construct_UFunction_UAtomSpectrumAnalyzer_DestroyDspSpectra, "DestroyDspSpectra" }, // 3229858739
		{ &Z_Construct_UFunction_UAtomSpectrumAnalyzer_GetLevels, "GetLevels" }, // 1936683003
		{ &Z_Construct_UFunction_UAtomSpectrumAnalyzer_GetLevelsDB, "GetLevelsDB" }, // 363263937
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomSpectrumAnalyzer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AtomSpectrumAnalyzer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AtomSpectrumAnalyzer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomSpectrumAnalyzer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomSpectrumAnalyzer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomSpectrumAnalyzer_Statics::ClassParams = {
		&UAtomSpectrumAnalyzer::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAtomSpectrumAnalyzer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomSpectrumAnalyzer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomSpectrumAnalyzer()
	{
		if (!Z_Registration_Info_UClass_UAtomSpectrumAnalyzer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomSpectrumAnalyzer.OuterSingleton, Z_Construct_UClass_UAtomSpectrumAnalyzer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomSpectrumAnalyzer.OuterSingleton;
	}
	template<> CRIWARERUNTIME_API UClass* StaticClass<UAtomSpectrumAnalyzer>()
	{
		return UAtomSpectrumAnalyzer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomSpectrumAnalyzer);
	UAtomSpectrumAnalyzer::~UAtomSpectrumAnalyzer() {}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomSpectrumAnalyzer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomSpectrumAnalyzer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAtomSpectrumAnalyzer, UAtomSpectrumAnalyzer::StaticClass, TEXT("UAtomSpectrumAnalyzer"), &Z_Registration_Info_UClass_UAtomSpectrumAnalyzer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomSpectrumAnalyzer), 3225146890U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomSpectrumAnalyzer_h_1575695741(TEXT("/Script/CriWareRuntime"),
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomSpectrumAnalyzer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomSpectrumAnalyzer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
