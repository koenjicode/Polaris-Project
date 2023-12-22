// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkSpatialAudioVolume.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkSpatialAudioVolume() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_AAkSpatialAudioVolume();
	AKAUDIO_API UClass* Z_Construct_UClass_AAkSpatialAudioVolume_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkLateReverbComponent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkRoomComponent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkSurfaceReflectorSetComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AVolume();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	void AAkSpatialAudioVolume::StaticRegisterNativesAAkSpatialAudioVolume()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAkSpatialAudioVolume);
	UClass* Z_Construct_UClass_AAkSpatialAudioVolume_NoRegister()
	{
		return AAkSpatialAudioVolume::StaticClass();
	}
	struct Z_Construct_UClass_AAkSpatialAudioVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SurfaceReflectorSet_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SurfaceReflectorSet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LateReverb_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LateReverb;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Room_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Room;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAkSpatialAudioVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAkSpatialAudioVolume_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "AkSpatialAudioVolume.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AkSpatialAudioVolume.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAkSpatialAudioVolume_Statics::NewProp_SurfaceReflectorSet_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkSpatialAudioVolume" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AkSpatialAudioVolume.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAkSpatialAudioVolume_Statics::NewProp_SurfaceReflectorSet = { "SurfaceReflectorSet", nullptr, (EPropertyFlags)0x001200000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAkSpatialAudioVolume, SurfaceReflectorSet), Z_Construct_UClass_UAkSurfaceReflectorSetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAkSpatialAudioVolume_Statics::NewProp_SurfaceReflectorSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAkSpatialAudioVolume_Statics::NewProp_SurfaceReflectorSet_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAkSpatialAudioVolume_Statics::NewProp_LateReverb_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkSpatialAudioVolume" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AkSpatialAudioVolume.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAkSpatialAudioVolume_Statics::NewProp_LateReverb = { "LateReverb", nullptr, (EPropertyFlags)0x001200000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAkSpatialAudioVolume, LateReverb), Z_Construct_UClass_UAkLateReverbComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAkSpatialAudioVolume_Statics::NewProp_LateReverb_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAkSpatialAudioVolume_Statics::NewProp_LateReverb_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAkSpatialAudioVolume_Statics::NewProp_Room_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkSpatialAudioVolume" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AkSpatialAudioVolume.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAkSpatialAudioVolume_Statics::NewProp_Room = { "Room", nullptr, (EPropertyFlags)0x001200000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAkSpatialAudioVolume, Room), Z_Construct_UClass_UAkRoomComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAkSpatialAudioVolume_Statics::NewProp_Room_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAkSpatialAudioVolume_Statics::NewProp_Room_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAkSpatialAudioVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAkSpatialAudioVolume_Statics::NewProp_SurfaceReflectorSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAkSpatialAudioVolume_Statics::NewProp_LateReverb,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAkSpatialAudioVolume_Statics::NewProp_Room,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAkSpatialAudioVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAkSpatialAudioVolume>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAkSpatialAudioVolume_Statics::ClassParams = {
		&AAkSpatialAudioVolume::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAkSpatialAudioVolume_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAkSpatialAudioVolume_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAkSpatialAudioVolume_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAkSpatialAudioVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAkSpatialAudioVolume()
	{
		if (!Z_Registration_Info_UClass_AAkSpatialAudioVolume.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAkSpatialAudioVolume.OuterSingleton, Z_Construct_UClass_AAkSpatialAudioVolume_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAkSpatialAudioVolume.OuterSingleton;
	}
	template<> AKAUDIO_API UClass* StaticClass<AAkSpatialAudioVolume>()
	{
		return AAkSpatialAudioVolume::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAkSpatialAudioVolume);
	AAkSpatialAudioVolume::~AAkSpatialAudioVolume() {}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkSpatialAudioVolume_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkSpatialAudioVolume_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAkSpatialAudioVolume, AAkSpatialAudioVolume::StaticClass, TEXT("AAkSpatialAudioVolume"), &Z_Registration_Info_UClass_AAkSpatialAudioVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAkSpatialAudioVolume), 4118837195U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkSpatialAudioVolume_h_1746555148(TEXT("/Script/AkAudio"),
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkSpatialAudioVolume_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkSpatialAudioVolume_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
