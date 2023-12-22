// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/Atom3dTransceiverComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtom3dTransceiverComponent() {}
// Cross Module References
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtom3dSourceBaseComponent();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtom3dTransceiverComponent();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtom3dTransceiverComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	void UAtom3dTransceiverComponent::StaticRegisterNativesUAtom3dTransceiverComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtom3dTransceiverComponent);
	UClass* Z_Construct_UClass_UAtom3dTransceiverComponent_NoRegister()
	{
		return UAtom3dTransceiverComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAtom3dTransceiverComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputPoint_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputPoint;
		static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultGlobalAisacs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultGlobalAisacs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultGlobalAisacs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsInputCrossfadeFieldDebugSpheresVisible_MetaData[];
#endif
		static void NewProp_bIsInputCrossfadeFieldDebugSpheresVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInputCrossfadeFieldDebugSpheresVisible;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultDirectAudioRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultDirectAudioRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultCrossfadeDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultCrossfadeDistance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAtom3dSourceBaseComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Atom3dTransceiverComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Atom3dTransceiverComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::NewProp_InputPoint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Atom3dTransceiverComponent" },
		{ "ModuleRelativePath", "Public/Atom3dTransceiverComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::NewProp_InputPoint = { "InputPoint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtom3dTransceiverComponent, InputPoint), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::NewProp_InputPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::NewProp_InputPoint_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::NewProp_DefaultGlobalAisacs_Inner = { "DefaultGlobalAisacs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::NewProp_DefaultGlobalAisacs_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Atom3dTransceiverComponent" },
		{ "ModuleRelativePath", "Public/Atom3dTransceiverComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::NewProp_DefaultGlobalAisacs = { "DefaultGlobalAisacs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtom3dTransceiverComponent, DefaultGlobalAisacs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::NewProp_DefaultGlobalAisacs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::NewProp_DefaultGlobalAisacs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::NewProp_bIsInputCrossfadeFieldDebugSpheresVisible_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Atom3dTransceiverComponent" },
		{ "ModuleRelativePath", "Public/Atom3dTransceiverComponent.h" },
	};
#endif
	void Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::NewProp_bIsInputCrossfadeFieldDebugSpheresVisible_SetBit(void* Obj)
	{
		((UAtom3dTransceiverComponent*)Obj)->bIsInputCrossfadeFieldDebugSpheresVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::NewProp_bIsInputCrossfadeFieldDebugSpheresVisible = { "bIsInputCrossfadeFieldDebugSpheresVisible", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UAtom3dTransceiverComponent), &Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::NewProp_bIsInputCrossfadeFieldDebugSpheresVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::NewProp_bIsInputCrossfadeFieldDebugSpheresVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::NewProp_bIsInputCrossfadeFieldDebugSpheresVisible_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::NewProp_DefaultDirectAudioRadius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Atom3dTransceiverComponent" },
		{ "ModuleRelativePath", "Public/Atom3dTransceiverComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::NewProp_DefaultDirectAudioRadius = { "DefaultDirectAudioRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtom3dTransceiverComponent, DefaultDirectAudioRadius), METADATA_PARAMS(Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::NewProp_DefaultDirectAudioRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::NewProp_DefaultDirectAudioRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::NewProp_DefaultCrossfadeDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Atom3dTransceiverComponent" },
		{ "ModuleRelativePath", "Public/Atom3dTransceiverComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::NewProp_DefaultCrossfadeDistance = { "DefaultCrossfadeDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtom3dTransceiverComponent, DefaultCrossfadeDistance), METADATA_PARAMS(Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::NewProp_DefaultCrossfadeDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::NewProp_DefaultCrossfadeDistance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::NewProp_InputPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::NewProp_DefaultGlobalAisacs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::NewProp_DefaultGlobalAisacs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::NewProp_bIsInputCrossfadeFieldDebugSpheresVisible,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::NewProp_DefaultDirectAudioRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::NewProp_DefaultCrossfadeDistance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtom3dTransceiverComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::ClassParams = {
		&UAtom3dTransceiverComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtom3dTransceiverComponent()
	{
		if (!Z_Registration_Info_UClass_UAtom3dTransceiverComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtom3dTransceiverComponent.OuterSingleton, Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtom3dTransceiverComponent.OuterSingleton;
	}
	template<> CRIWARERUNTIME_API UClass* StaticClass<UAtom3dTransceiverComponent>()
	{
		return UAtom3dTransceiverComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtom3dTransceiverComponent);
	UAtom3dTransceiverComponent::~UAtom3dTransceiverComponent() {}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_Atom3dTransceiverComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_Atom3dTransceiverComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAtom3dTransceiverComponent, UAtom3dTransceiverComponent::StaticClass, TEXT("UAtom3dTransceiverComponent"), &Z_Registration_Info_UClass_UAtom3dTransceiverComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtom3dTransceiverComponent), 2645499329U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_Atom3dTransceiverComponent_h_1941072981(TEXT("/Script/CriWareRuntime"),
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_Atom3dTransceiverComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_Atom3dTransceiverComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
