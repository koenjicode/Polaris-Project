// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkReverbVolume.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkReverbVolume() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_AAkReverbVolume();
	AKAUDIO_API UClass* Z_Construct_UClass_AAkReverbVolume_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAuxBus_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkLateReverbComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AVolume();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	void AAkReverbVolume::StaticRegisterNativesAAkReverbVolume()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAkReverbVolume);
	UClass* Z_Construct_UClass_AAkReverbVolume_NoRegister()
	{
		return AAkReverbVolume::StaticClass();
	}
	struct Z_Construct_UClass_AAkReverbVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AuxBus_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AuxBus;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AuxBusName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AuxBusName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SendLevel_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SendLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FadeRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Priority;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LateReverbComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LateReverbComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAkReverbVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAkReverbVolume_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "AkReverbVolume.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AkReverbVolume.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_bEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkReverbVolume" },
		{ "ModuleRelativePath", "Public/AkReverbVolume.h" },
	};
#endif
	void Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((AAkReverbVolume*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AAkReverbVolume), &Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_bEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_AuxBus_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkReverbVolume" },
		{ "ModuleRelativePath", "Public/AkReverbVolume.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_AuxBus = { "AuxBus", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAkReverbVolume, AuxBus), Z_Construct_UClass_UAkAuxBus_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_AuxBus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_AuxBus_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_AuxBusName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkReverbVolume" },
		{ "ModuleRelativePath", "Public/AkReverbVolume.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_AuxBusName = { "AuxBusName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAkReverbVolume, AuxBusName), METADATA_PARAMS(Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_AuxBusName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_AuxBusName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_SendLevel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkReverbVolume" },
		{ "ModuleRelativePath", "Public/AkReverbVolume.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_SendLevel = { "SendLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAkReverbVolume, SendLevel), METADATA_PARAMS(Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_SendLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_SendLevel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_FadeRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkReverbVolume" },
		{ "ModuleRelativePath", "Public/AkReverbVolume.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_FadeRate = { "FadeRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAkReverbVolume, FadeRate), METADATA_PARAMS(Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_FadeRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_FadeRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_Priority_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkReverbVolume" },
		{ "ModuleRelativePath", "Public/AkReverbVolume.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAkReverbVolume, Priority), METADATA_PARAMS(Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_Priority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_Priority_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_LateReverbComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkReverbVolume" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AkReverbVolume.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_LateReverbComponent = { "LateReverbComponent", nullptr, (EPropertyFlags)0x001200000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAkReverbVolume, LateReverbComponent), Z_Construct_UClass_UAkLateReverbComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_LateReverbComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_LateReverbComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAkReverbVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_bEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_AuxBus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_AuxBusName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_SendLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_FadeRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_Priority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAkReverbVolume_Statics::NewProp_LateReverbComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAkReverbVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAkReverbVolume>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAkReverbVolume_Statics::ClassParams = {
		&AAkReverbVolume::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAkReverbVolume_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAkReverbVolume_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAkReverbVolume_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAkReverbVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAkReverbVolume()
	{
		if (!Z_Registration_Info_UClass_AAkReverbVolume.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAkReverbVolume.OuterSingleton, Z_Construct_UClass_AAkReverbVolume_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAkReverbVolume.OuterSingleton;
	}
	template<> AKAUDIO_API UClass* StaticClass<AAkReverbVolume>()
	{
		return AAkReverbVolume::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAkReverbVolume);
	AAkReverbVolume::~AAkReverbVolume() {}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkReverbVolume_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkReverbVolume_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAkReverbVolume, AAkReverbVolume::StaticClass, TEXT("AAkReverbVolume"), &Z_Registration_Info_UClass_AAkReverbVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAkReverbVolume), 2312416903U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkReverbVolume_h_3670458914(TEXT("/Script/AkAudio"),
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkReverbVolume_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkReverbVolume_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
