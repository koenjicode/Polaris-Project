// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareMovieScenes/Public/MovieSceneManaSection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneManaSection() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
	CRIWAREMOVIESCENES_API UClass* Z_Construct_UClass_UMovieSceneManaSection();
	CRIWAREMOVIESCENES_API UClass* Z_Construct_UClass_UMovieSceneManaSection_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomComponent_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UManaPlayer_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UManaSource_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UManaTexture_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	UPackage* Z_Construct_UPackage__Script_CriWareMovieScenes();
// End Cross Module References
	void UMovieSceneManaSection::StaticRegisterNativesUMovieSceneManaSection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneManaSection);
	UClass* Z_Construct_UClass_UMovieSceneManaSection_NoRegister()
	{
		return UMovieSceneManaSection::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneManaSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ManaSource_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ManaSource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLooping_MetaData[];
#endif
		static void NewProp_bLooping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLooping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartFrameOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartFrameOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ManaTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ManaTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AtomComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AtomComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseExternalManaPlayer_MetaData[];
#endif
		static void NewProp_bUseExternalManaPlayer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseExternalManaPlayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExternalManaPlayer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ExternalManaPlayer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneManaSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareMovieScenes,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneManaSection_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MovieSceneManaSection.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MovieSceneManaSection.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneManaSection_Statics::NewProp_ManaSource_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovieSceneManaSection" },
		{ "ModuleRelativePath", "Public/MovieSceneManaSection.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieSceneManaSection_Statics::NewProp_ManaSource = { "ManaSource", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneManaSection, ManaSource), Z_Construct_UClass_UManaSource_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneManaSection_Statics::NewProp_ManaSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneManaSection_Statics::NewProp_ManaSource_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneManaSection_Statics::NewProp_bLooping_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovieSceneManaSection" },
		{ "ModuleRelativePath", "Public/MovieSceneManaSection.h" },
	};
#endif
	void Z_Construct_UClass_UMovieSceneManaSection_Statics::NewProp_bLooping_SetBit(void* Obj)
	{
		((UMovieSceneManaSection*)Obj)->bLooping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneManaSection_Statics::NewProp_bLooping = { "bLooping", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMovieSceneManaSection), &Z_Construct_UClass_UMovieSceneManaSection_Statics::NewProp_bLooping_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneManaSection_Statics::NewProp_bLooping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneManaSection_Statics::NewProp_bLooping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneManaSection_Statics::NewProp_StartFrameOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovieSceneManaSection" },
		{ "ModuleRelativePath", "Public/MovieSceneManaSection.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneManaSection_Statics::NewProp_StartFrameOffset = { "StartFrameOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneManaSection, StartFrameOffset), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneManaSection_Statics::NewProp_StartFrameOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneManaSection_Statics::NewProp_StartFrameOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneManaSection_Statics::NewProp_ManaTexture_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovieSceneManaSection" },
		{ "ModuleRelativePath", "Public/MovieSceneManaSection.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieSceneManaSection_Statics::NewProp_ManaTexture = { "ManaTexture", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneManaSection, ManaTexture), Z_Construct_UClass_UManaTexture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneManaSection_Statics::NewProp_ManaTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneManaSection_Statics::NewProp_ManaTexture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneManaSection_Statics::NewProp_AtomComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovieSceneManaSection" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MovieSceneManaSection.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieSceneManaSection_Statics::NewProp_AtomComponent = { "AtomComponent", nullptr, (EPropertyFlags)0x001200000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneManaSection, AtomComponent), Z_Construct_UClass_UAtomComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneManaSection_Statics::NewProp_AtomComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneManaSection_Statics::NewProp_AtomComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneManaSection_Statics::NewProp_bUseExternalManaPlayer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovieSceneManaSection" },
		{ "ModuleRelativePath", "Public/MovieSceneManaSection.h" },
	};
#endif
	void Z_Construct_UClass_UMovieSceneManaSection_Statics::NewProp_bUseExternalManaPlayer_SetBit(void* Obj)
	{
		((UMovieSceneManaSection*)Obj)->bUseExternalManaPlayer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneManaSection_Statics::NewProp_bUseExternalManaPlayer = { "bUseExternalManaPlayer", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMovieSceneManaSection), &Z_Construct_UClass_UMovieSceneManaSection_Statics::NewProp_bUseExternalManaPlayer_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneManaSection_Statics::NewProp_bUseExternalManaPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneManaSection_Statics::NewProp_bUseExternalManaPlayer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneManaSection_Statics::NewProp_ExternalManaPlayer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovieSceneManaSection" },
		{ "ModuleRelativePath", "Public/MovieSceneManaSection.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieSceneManaSection_Statics::NewProp_ExternalManaPlayer = { "ExternalManaPlayer", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneManaSection, ExternalManaPlayer), Z_Construct_UClass_UManaPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneManaSection_Statics::NewProp_ExternalManaPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneManaSection_Statics::NewProp_ExternalManaPlayer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneManaSection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneManaSection_Statics::NewProp_ManaSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneManaSection_Statics::NewProp_bLooping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneManaSection_Statics::NewProp_StartFrameOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneManaSection_Statics::NewProp_ManaTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneManaSection_Statics::NewProp_AtomComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneManaSection_Statics::NewProp_bUseExternalManaPlayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneManaSection_Statics::NewProp_ExternalManaPlayer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneManaSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneManaSection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneManaSection_Statics::ClassParams = {
		&UMovieSceneManaSection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneManaSection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneManaSection_Statics::PropPointers),
		0,
		0x00A800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneManaSection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneManaSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneManaSection()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneManaSection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneManaSection.OuterSingleton, Z_Construct_UClass_UMovieSceneManaSection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneManaSection.OuterSingleton;
	}
	template<> CRIWAREMOVIESCENES_API UClass* StaticClass<UMovieSceneManaSection>()
	{
		return UMovieSceneManaSection::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneManaSection);
	UMovieSceneManaSection::~UMovieSceneManaSection() {}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWareCinematics_Source_CriWareMovieScenes_Public_MovieSceneManaSection_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWareCinematics_Source_CriWareMovieScenes_Public_MovieSceneManaSection_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneManaSection, UMovieSceneManaSection::StaticClass, TEXT("UMovieSceneManaSection"), &Z_Registration_Info_UClass_UMovieSceneManaSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneManaSection), 3437942650U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWareCinematics_Source_CriWareMovieScenes_Public_MovieSceneManaSection_h_154859571(TEXT("/Script/CriWareMovieScenes"),
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWareCinematics_Source_CriWareMovieScenes_Public_MovieSceneManaSection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWareCinematics_Source_CriWareMovieScenes_Public_MovieSceneManaSection_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
