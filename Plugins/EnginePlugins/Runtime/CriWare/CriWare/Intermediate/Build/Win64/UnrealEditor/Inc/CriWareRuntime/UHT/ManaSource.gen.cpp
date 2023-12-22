// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/ManaSource.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeManaSource() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UManaSource();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UManaSource_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	void UManaSource::StaticRegisterNativesUManaSource()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UManaSource);
	UClass* Z_Construct_UClass_UManaSource_NoRegister()
	{
		return UManaSource::StaticClass();
	}
	struct Z_Construct_UClass_UManaSource_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UManaSource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManaSource_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ManaSource.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ManaSource.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UManaSource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UManaSource>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UManaSource_Statics::ClassParams = {
		&UManaSource::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UManaSource_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UManaSource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UManaSource()
	{
		if (!Z_Registration_Info_UClass_UManaSource.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UManaSource.OuterSingleton, Z_Construct_UClass_UManaSource_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UManaSource.OuterSingleton;
	}
	template<> CRIWARERUNTIME_API UClass* StaticClass<UManaSource>()
	{
		return UManaSource::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UManaSource);
	UManaSource::~UManaSource() {}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaSource_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaSource_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UManaSource, UManaSource::StaticClass, TEXT("UManaSource"), &Z_Registration_Info_UClass_UManaSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UManaSource), 745069031U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaSource_h_1736269153(TEXT("/Script/CriWareRuntime"),
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaSource_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaSource_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
