// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniNiagara/Public/NiagaraDataInterfaceHoudini.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceHoudini() {}
// Cross Module References
	HOUDININIAGARA_API UClass* Z_Construct_UClass_UHoudiniPointCache_NoRegister();
	HOUDININIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceHoudini();
	HOUDININIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceHoudini_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterface();
	UPackage* Z_Construct_UPackage__Script_HoudiniNiagara();
// End Cross Module References
	void UNiagaraDataInterfaceHoudini::StaticRegisterNativesUNiagaraDataInterfaceHoudini()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataInterfaceHoudini);
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceHoudini_NoRegister()
	{
		return UNiagaraDataInterfaceHoudini::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraDataInterfaceHoudini_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HoudiniPointCacheAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HoudiniPointCacheAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceHoudini_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniNiagara,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceHoudini_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "NiagaraDataInterfaceHoudini.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/NiagaraDataInterfaceHoudini.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceHoudini_Statics::NewProp_HoudiniPointCacheAsset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "NiagaraDataInterfaceHoudini" },
		{ "ModuleRelativePath", "Public/NiagaraDataInterfaceHoudini.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceHoudini_Statics::NewProp_HoudiniPointCacheAsset = { "HoudiniPointCacheAsset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceHoudini, HoudiniPointCacheAsset), Z_Construct_UClass_UHoudiniPointCache_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceHoudini_Statics::NewProp_HoudiniPointCacheAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceHoudini_Statics::NewProp_HoudiniPointCacheAsset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceHoudini_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceHoudini_Statics::NewProp_HoudiniPointCacheAsset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraDataInterfaceHoudini_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceHoudini>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceHoudini_Statics::ClassParams = {
		&UNiagaraDataInterfaceHoudini::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraDataInterfaceHoudini_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceHoudini_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceHoudini_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceHoudini_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceHoudini()
	{
		if (!Z_Registration_Info_UClass_UNiagaraDataInterfaceHoudini.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataInterfaceHoudini.OuterSingleton, Z_Construct_UClass_UNiagaraDataInterfaceHoudini_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraDataInterfaceHoudini.OuterSingleton;
	}
	template<> HOUDININIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceHoudini>()
	{
		return UNiagaraDataInterfaceHoudini::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceHoudini);
	UNiagaraDataInterfaceHoudini::~UNiagaraDataInterfaceHoudini() {}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_FX_HoudiniNiagara_Source_HoudiniNiagara_Public_NiagaraDataInterfaceHoudini_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_FX_HoudiniNiagara_Source_HoudiniNiagara_Public_NiagaraDataInterfaceHoudini_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraDataInterfaceHoudini, UNiagaraDataInterfaceHoudini::StaticClass, TEXT("UNiagaraDataInterfaceHoudini"), &Z_Registration_Info_UClass_UNiagaraDataInterfaceHoudini, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataInterfaceHoudini), 1246657313U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_FX_HoudiniNiagara_Source_HoudiniNiagara_Public_NiagaraDataInterfaceHoudini_h_1835323721(TEXT("/Script/HoudiniNiagara"),
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_FX_HoudiniNiagara_Source_HoudiniNiagara_Public_NiagaraDataInterfaceHoudini_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_FX_HoudiniNiagara_Source_HoudiniNiagara_Public_NiagaraDataInterfaceHoudini_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
