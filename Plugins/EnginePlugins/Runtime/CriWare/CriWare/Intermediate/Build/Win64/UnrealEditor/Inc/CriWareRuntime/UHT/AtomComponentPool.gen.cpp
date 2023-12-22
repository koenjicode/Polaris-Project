// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/AtomComponentPool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomComponentPool() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomComponent_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomComponentPool();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomComponentPool_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	void UAtomComponentPool::StaticRegisterNativesUAtomComponentPool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomComponentPool);
	UClass* Z_Construct_UClass_UAtomComponentPool_NoRegister()
	{
		return UAtomComponentPool::StaticClass();
	}
	struct Z_Construct_UClass_UAtomComponentPool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pool_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Pool_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pool_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Pool;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomComponentPool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponentPool_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AtomComponentPool.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AtomComponentPool.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponentPool_Statics::NewProp_Pool_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomComponentPool" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AtomComponentPool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAtomComponentPool_Statics::NewProp_Pool_Inner = { "Pool", nullptr, (EPropertyFlags)0x0002000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UAtomComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtomComponentPool_Statics::NewProp_Pool_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponentPool_Statics::NewProp_Pool_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomComponentPool_Statics::NewProp_Pool_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomComponentPool" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AtomComponentPool.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAtomComponentPool_Statics::NewProp_Pool = { "Pool", nullptr, (EPropertyFlags)0x004000800000000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomComponentPool, Pool), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAtomComponentPool_Statics::NewProp_Pool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponentPool_Statics::NewProp_Pool_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtomComponentPool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponentPool_Statics::NewProp_Pool_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomComponentPool_Statics::NewProp_Pool,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomComponentPool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomComponentPool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomComponentPool_Statics::ClassParams = {
		&UAtomComponentPool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAtomComponentPool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponentPool_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomComponentPool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomComponentPool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomComponentPool()
	{
		if (!Z_Registration_Info_UClass_UAtomComponentPool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomComponentPool.OuterSingleton, Z_Construct_UClass_UAtomComponentPool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomComponentPool.OuterSingleton;
	}
	template<> CRIWARERUNTIME_API UClass* StaticClass<UAtomComponentPool>()
	{
		return UAtomComponentPool::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomComponentPool);
	UAtomComponentPool::~UAtomComponentPool() {}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomComponentPool_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomComponentPool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAtomComponentPool, UAtomComponentPool::StaticClass, TEXT("UAtomComponentPool"), &Z_Registration_Info_UClass_UAtomComponentPool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomComponentPool), 3489514918U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomComponentPool_h_328918005(TEXT("/Script/CriWareRuntime"),
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomComponentPool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomComponentPool_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
