// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/FileManaMovie.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFileManaMovie() {}
// Cross Module References
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UFileManaMovie();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UFileManaMovie_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UManaMovie();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	DEFINE_FUNCTION(UFileManaMovie::execSetFilePath)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Path);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFilePath(Z_Param_Path);
		P_NATIVE_END;
	}
	void UFileManaMovie::StaticRegisterNativesUFileManaMovie()
	{
		UClass* Class = UFileManaMovie::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetFilePath", &UFileManaMovie::execSetFilePath },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFileManaMovie_SetFilePath_Statics
	{
		struct FileManaMovie_eventSetFilePath_Parms
		{
			FString Path;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileManaMovie_SetFilePath_Statics::NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFileManaMovie_SetFilePath_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FileManaMovie_eventSetFilePath_Parms, Path), METADATA_PARAMS(Z_Construct_UFunction_UFileManaMovie_SetFilePath_Statics::NewProp_Path_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileManaMovie_SetFilePath_Statics::NewProp_Path_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFileManaMovie_SetFilePath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFileManaMovie_SetFilePath_Statics::NewProp_Path,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFileManaMovie_SetFilePath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FileManaMovie.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFileManaMovie_SetFilePath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFileManaMovie, nullptr, "SetFilePath", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFileManaMovie_SetFilePath_Statics::FileManaMovie_eventSetFilePath_Parms), Z_Construct_UFunction_UFileManaMovie_SetFilePath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileManaMovie_SetFilePath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFileManaMovie_SetFilePath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFileManaMovie_SetFilePath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFileManaMovie_SetFilePath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFileManaMovie_SetFilePath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFileManaMovie);
	UClass* Z_Construct_UClass_UFileManaMovie_NoRegister()
	{
		return UFileManaMovie::StaticClass();
	}
	struct Z_Construct_UClass_UFileManaMovie_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPrecacheFile_MetaData[];
#endif
		static void NewProp_bPrecacheFile_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrecacheFile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFileManaMovie_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UManaMovie,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFileManaMovie_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFileManaMovie_SetFilePath, "SetFilePath" }, // 2478125265
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFileManaMovie_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FileManaMovie.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FileManaMovie.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFileManaMovie_Statics::NewProp_bPrecacheFile_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FileManaMovie" },
		{ "ModuleRelativePath", "Public/FileManaMovie.h" },
	};
#endif
	void Z_Construct_UClass_UFileManaMovie_Statics::NewProp_bPrecacheFile_SetBit(void* Obj)
	{
		((UFileManaMovie*)Obj)->bPrecacheFile = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFileManaMovie_Statics::NewProp_bPrecacheFile = { "bPrecacheFile", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UFileManaMovie), &Z_Construct_UClass_UFileManaMovie_Statics::NewProp_bPrecacheFile_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFileManaMovie_Statics::NewProp_bPrecacheFile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFileManaMovie_Statics::NewProp_bPrecacheFile_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFileManaMovie_Statics::NewProp_FilePath_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "FileManaMovie" },
		{ "ModuleRelativePath", "Public/FileManaMovie.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFileManaMovie_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0020090000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFileManaMovie, FilePath), METADATA_PARAMS(Z_Construct_UClass_UFileManaMovie_Statics::NewProp_FilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFileManaMovie_Statics::NewProp_FilePath_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFileManaMovie_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFileManaMovie_Statics::NewProp_bPrecacheFile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFileManaMovie_Statics::NewProp_FilePath,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFileManaMovie_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFileManaMovie>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFileManaMovie_Statics::ClassParams = {
		&UFileManaMovie::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFileManaMovie_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UFileManaMovie_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFileManaMovie_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFileManaMovie_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFileManaMovie()
	{
		if (!Z_Registration_Info_UClass_UFileManaMovie.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFileManaMovie.OuterSingleton, Z_Construct_UClass_UFileManaMovie_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFileManaMovie.OuterSingleton;
	}
	template<> CRIWARERUNTIME_API UClass* StaticClass<UFileManaMovie>()
	{
		return UFileManaMovie::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFileManaMovie);
	UFileManaMovie::~UFileManaMovie() {}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_FileManaMovie_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_FileManaMovie_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFileManaMovie, UFileManaMovie::StaticClass, TEXT("UFileManaMovie"), &Z_Registration_Info_UClass_UFileManaMovie, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFileManaMovie), 2206521555U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_FileManaMovie_h_526493286(TEXT("/Script/CriWareRuntime"),
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_FileManaMovie_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_FileManaMovie_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
