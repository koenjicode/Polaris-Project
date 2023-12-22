// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/AtomListenerFocusPoint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomListenerFocusPoint() {}
// Cross Module References
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomListenerFocusPoint();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomListenerFocusPoint_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	void UAtomListenerFocusPoint::StaticRegisterNativesUAtomListenerFocusPoint()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomListenerFocusPoint);
	UClass* Z_Construct_UClass_UAtomListenerFocusPoint_NoRegister()
	{
		return UAtomListenerFocusPoint::StaticClass();
	}
	struct Z_Construct_UClass_UAtomListenerFocusPoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistanceFocusLevel_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceFocusLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DirectionFocusLevel_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DirectionFocusLevel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomListenerFocusPoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomListenerFocusPoint_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "AtomListenerFocusPoint.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AtomListenerFocusPoint.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomListenerFocusPoint_Statics::NewProp_DistanceFocusLevel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomListenerFocusPoint" },
		{ "ModuleRelativePath", "Public/AtomListenerFocusPoint.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAtomListenerFocusPoint_Statics::NewProp_DistanceFocusLevel = { "DistanceFocusLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomListenerFocusPoint, DistanceFocusLevel), METADATA_PARAMS(Z_Construct_UClass_UAtomListenerFocusPoint_Statics::NewProp_DistanceFocusLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomListenerFocusPoint_Statics::NewProp_DistanceFocusLevel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomListenerFocusPoint_Statics::NewProp_DirectionFocusLevel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomListenerFocusPoint" },
		{ "ModuleRelativePath", "Public/AtomListenerFocusPoint.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAtomListenerFocusPoint_Statics::NewProp_DirectionFocusLevel = { "DirectionFocusLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtomListenerFocusPoint, DirectionFocusLevel), METADATA_PARAMS(Z_Construct_UClass_UAtomListenerFocusPoint_Statics::NewProp_DirectionFocusLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomListenerFocusPoint_Statics::NewProp_DirectionFocusLevel_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtomListenerFocusPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomListenerFocusPoint_Statics::NewProp_DistanceFocusLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtomListenerFocusPoint_Statics::NewProp_DirectionFocusLevel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomListenerFocusPoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomListenerFocusPoint>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomListenerFocusPoint_Statics::ClassParams = {
		&UAtomListenerFocusPoint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAtomListenerFocusPoint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtomListenerFocusPoint_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomListenerFocusPoint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomListenerFocusPoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomListenerFocusPoint()
	{
		if (!Z_Registration_Info_UClass_UAtomListenerFocusPoint.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomListenerFocusPoint.OuterSingleton, Z_Construct_UClass_UAtomListenerFocusPoint_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomListenerFocusPoint.OuterSingleton;
	}
	template<> CRIWARERUNTIME_API UClass* StaticClass<UAtomListenerFocusPoint>()
	{
		return UAtomListenerFocusPoint::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomListenerFocusPoint);
	UAtomListenerFocusPoint::~UAtomListenerFocusPoint() {}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomListenerFocusPoint_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomListenerFocusPoint_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAtomListenerFocusPoint, UAtomListenerFocusPoint::StaticClass, TEXT("UAtomListenerFocusPoint"), &Z_Registration_Info_UClass_UAtomListenerFocusPoint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomListenerFocusPoint), 2558316464U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomListenerFocusPoint_h_1434951812(TEXT("/Script/CriWareRuntime"),
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomListenerFocusPoint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomListenerFocusPoint_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
