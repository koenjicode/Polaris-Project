// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/AtomSoundData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomSoundData() {}
// Cross Module References
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_AAtomSoundData();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_AAtomSoundData_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_USoundAtomCueSheet_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	void AAtomSoundData::StaticRegisterNativesAAtomSoundData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAtomSoundData);
	UClass* Z_Construct_UClass_AAtomSoundData_NoRegister()
	{
		return AAtomSoundData::StaticClass();
	}
	struct Z_Construct_UClass_AAtomSoundData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CueSheet_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CueSheet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAtomSoundData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAtomSoundData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AtomSoundData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AtomSoundData.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAtomSoundData_Statics::NewProp_CueSheet_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomSoundData" },
		{ "ModuleRelativePath", "Public/AtomSoundData.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAtomSoundData_Statics::NewProp_CueSheet = { "CueSheet", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAtomSoundData, CueSheet), Z_Construct_UClass_USoundAtomCueSheet_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAtomSoundData_Statics::NewProp_CueSheet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAtomSoundData_Statics::NewProp_CueSheet_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAtomSoundData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAtomSoundData_Statics::NewProp_CueSheet,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAtomSoundData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAtomSoundData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAtomSoundData_Statics::ClassParams = {
		&AAtomSoundData::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAtomSoundData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAtomSoundData_Statics::PropPointers),
		0,
		0x008800A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAtomSoundData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAtomSoundData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAtomSoundData()
	{
		if (!Z_Registration_Info_UClass_AAtomSoundData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAtomSoundData.OuterSingleton, Z_Construct_UClass_AAtomSoundData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAtomSoundData.OuterSingleton;
	}
	template<> CRIWARERUNTIME_API UClass* StaticClass<AAtomSoundData>()
	{
		return AAtomSoundData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAtomSoundData);
	AAtomSoundData::~AAtomSoundData() {}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomSoundData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomSoundData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAtomSoundData, AAtomSoundData::StaticClass, TEXT("AAtomSoundData"), &Z_Registration_Info_UClass_AAtomSoundData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAtomSoundData), 206301847U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomSoundData_h_3233395850(TEXT("/Script/CriWareRuntime"),
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomSoundData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomSoundData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
