// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/StreamManaMovie.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStreamManaMovie() {}
// Cross Module References
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UManaMovie();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UStreamManaMovie();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UStreamManaMovie_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	void UStreamManaMovie::StaticRegisterNativesUStreamManaMovie()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStreamManaMovie);
	UClass* Z_Construct_UClass_UStreamManaMovie_NoRegister()
	{
		return UStreamManaMovie::StaticClass();
	}
	struct Z_Construct_UClass_UStreamManaMovie_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StreamUrl_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_StreamUrl;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStreamManaMovie_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UManaMovie,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreamManaMovie_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "StreamManaMovie.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/StreamManaMovie.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreamManaMovie_Statics::NewProp_StreamUrl_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StreamManaMovie" },
		{ "ModuleRelativePath", "Public/StreamManaMovie.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UStreamManaMovie_Statics::NewProp_StreamUrl = { "StreamUrl", nullptr, (EPropertyFlags)0x0010010000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStreamManaMovie, StreamUrl), METADATA_PARAMS(Z_Construct_UClass_UStreamManaMovie_Statics::NewProp_StreamUrl_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStreamManaMovie_Statics::NewProp_StreamUrl_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStreamManaMovie_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamManaMovie_Statics::NewProp_StreamUrl,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStreamManaMovie_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStreamManaMovie>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStreamManaMovie_Statics::ClassParams = {
		&UStreamManaMovie::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UStreamManaMovie_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UStreamManaMovie_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UStreamManaMovie_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStreamManaMovie_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStreamManaMovie()
	{
		if (!Z_Registration_Info_UClass_UStreamManaMovie.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStreamManaMovie.OuterSingleton, Z_Construct_UClass_UStreamManaMovie_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStreamManaMovie.OuterSingleton;
	}
	template<> CRIWARERUNTIME_API UClass* StaticClass<UStreamManaMovie>()
	{
		return UStreamManaMovie::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStreamManaMovie);
	UStreamManaMovie::~UStreamManaMovie() {}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_StreamManaMovie_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_StreamManaMovie_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStreamManaMovie, UStreamManaMovie::StaticClass, TEXT("UStreamManaMovie"), &Z_Registration_Info_UClass_UStreamManaMovie, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStreamManaMovie), 4001741188U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_StreamManaMovie_h_2765486555(TEXT("/Script/CriWareRuntime"),
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_StreamManaMovie_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_StreamManaMovie_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
