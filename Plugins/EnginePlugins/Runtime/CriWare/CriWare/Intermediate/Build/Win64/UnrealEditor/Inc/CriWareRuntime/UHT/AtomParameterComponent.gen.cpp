// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/AtomParameterComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomParameterComponent() {}
// Cross Module References
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtom3dRegion_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomParameterComponent();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomParameterComponent_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomSoundObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	void UAtomParameterComponent::StaticRegisterNativesUAtomParameterComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomParameterComponent);
	UClass* Z_Construct_UClass_UAtomParameterComponent_NoRegister()
	{
		return UAtomParameterComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAtomParameterComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Region_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Region;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomParameterComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomParameterComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "AtomParameterComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AtomParameterComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomParameterComponent_Statics::NewProp_SoundObject_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomParameterComponent" },
		{ "ModuleRelativePath", "Public/AtomParameterComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAtomParameterComponent_Statics::NewProp_SoundObject = { "SoundObject", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomParameterComponent, SoundObject), Z_Construct_UClass_UAtomSoundObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtomParameterComponent_Statics::NewProp_SoundObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomParameterComponent_Statics::NewProp_SoundObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomParameterComponent_Statics::NewProp_Region_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomParameterComponent" },
		{ "ModuleRelativePath", "Public/AtomParameterComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAtomParameterComponent_Statics::NewProp_Region = { "Region", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomParameterComponent, Region), Z_Construct_UClass_UAtom3dRegion_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtomParameterComponent_Statics::NewProp_Region_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomParameterComponent_Statics::NewProp_Region_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtomParameterComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomParameterComponent_Statics::NewProp_SoundObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomParameterComponent_Statics::NewProp_Region,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomParameterComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomParameterComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomParameterComponent_Statics::ClassParams = {
		&UAtomParameterComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAtomParameterComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtomParameterComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomParameterComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomParameterComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomParameterComponent()
	{
		if (!Z_Registration_Info_UClass_UAtomParameterComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomParameterComponent.OuterSingleton, Z_Construct_UClass_UAtomParameterComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomParameterComponent.OuterSingleton;
	}
	template<> CRIWARERUNTIME_API UClass* StaticClass<UAtomParameterComponent>()
	{
		return UAtomParameterComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomParameterComponent);
	UAtomParameterComponent::~UAtomParameterComponent() {}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomParameterComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomParameterComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAtomParameterComponent, UAtomParameterComponent::StaticClass, TEXT("UAtomParameterComponent"), &Z_Registration_Info_UClass_UAtomParameterComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomParameterComponent), 488514636U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomParameterComponent_h_658294384(TEXT("/Script/CriWareRuntime"),
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomParameterComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomParameterComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
