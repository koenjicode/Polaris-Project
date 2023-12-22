// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/PlatformManaMovie.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlatformManaMovie() {}
// Cross Module References
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UManaMovie();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UManaMovie_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UPlatformManaMovie();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UPlatformManaMovie_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	void UPlatformManaMovie::StaticRegisterNativesUPlatformManaMovie()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlatformManaMovie);
	UClass* Z_Construct_UClass_UPlatformManaMovie_NoRegister()
	{
		return UPlatformManaMovie::StaticClass();
	}
	struct Z_Construct_UClass_UPlatformManaMovie_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ManaMovie_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ManaMovie;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlatformManaMovie_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UManaMovie,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlatformManaMovie_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PlatformManaMovie.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PlatformManaMovie.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlatformManaMovie_Statics::NewProp_ManaMovie_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlatformManaMovie" },
		{ "ModuleRelativePath", "Public/PlatformManaMovie.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlatformManaMovie_Statics::NewProp_ManaMovie = { "ManaMovie", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlatformManaMovie, ManaMovie), Z_Construct_UClass_UManaMovie_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlatformManaMovie_Statics::NewProp_ManaMovie_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlatformManaMovie_Statics::NewProp_ManaMovie_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlatformManaMovie_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformManaMovie_Statics::NewProp_ManaMovie,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlatformManaMovie_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlatformManaMovie>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlatformManaMovie_Statics::ClassParams = {
		&UPlatformManaMovie::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPlatformManaMovie_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlatformManaMovie_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlatformManaMovie_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlatformManaMovie_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlatformManaMovie()
	{
		if (!Z_Registration_Info_UClass_UPlatformManaMovie.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlatformManaMovie.OuterSingleton, Z_Construct_UClass_UPlatformManaMovie_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlatformManaMovie.OuterSingleton;
	}
	template<> CRIWARERUNTIME_API UClass* StaticClass<UPlatformManaMovie>()
	{
		return UPlatformManaMovie::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlatformManaMovie);
	UPlatformManaMovie::~UPlatformManaMovie() {}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_PlatformManaMovie_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_PlatformManaMovie_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlatformManaMovie, UPlatformManaMovie::StaticClass, TEXT("UPlatformManaMovie"), &Z_Registration_Info_UClass_UPlatformManaMovie, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlatformManaMovie), 3740114178U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_PlatformManaMovie_h_1084151340(TEXT("/Script/CriWareRuntime"),
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_PlatformManaMovie_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_PlatformManaMovie_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
