// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/ManaComponentTexture.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeManaComponentTexture() {}
// Cross Module References
	COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EPixelFormat();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UManaComponentTexture();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UManaComponentTexture_NoRegister();
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EManaComponentTextureType();
	ENGINE_API UClass* Z_Construct_UClass_UTexture();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureAddress();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	void UManaComponentTexture::StaticRegisterNativesUManaComponentTexture()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UManaComponentTexture);
	UClass* Z_Construct_UClass_UManaComponentTexture_NoRegister()
	{
		return UManaComponentTexture::StaticClass();
	}
	struct Z_Construct_UClass_UManaComponentTexture_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SizeX_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SizeX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SizeY_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SizeY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Format_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Format;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ComponentType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ComponentType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AddressX_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_AddressX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AddressY_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_AddressY;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UManaComponentTexture_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTexture,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManaComponentTexture_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ManaComponentTexture.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ManaComponentTexture.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManaComponentTexture_Statics::NewProp_SizeX_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaComponentTexture" },
		{ "ModuleRelativePath", "Public/ManaComponentTexture.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UManaComponentTexture_Statics::NewProp_SizeX = { "SizeX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UManaComponentTexture, SizeX), METADATA_PARAMS(Z_Construct_UClass_UManaComponentTexture_Statics::NewProp_SizeX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManaComponentTexture_Statics::NewProp_SizeX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManaComponentTexture_Statics::NewProp_SizeY_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaComponentTexture" },
		{ "ModuleRelativePath", "Public/ManaComponentTexture.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UManaComponentTexture_Statics::NewProp_SizeY = { "SizeY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UManaComponentTexture, SizeY), METADATA_PARAMS(Z_Construct_UClass_UManaComponentTexture_Statics::NewProp_SizeY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManaComponentTexture_Statics::NewProp_SizeY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManaComponentTexture_Statics::NewProp_Format_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaComponentTexture" },
		{ "ModuleRelativePath", "Public/ManaComponentTexture.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UManaComponentTexture_Statics::NewProp_Format = { "Format", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UManaComponentTexture, Format), Z_Construct_UEnum_CoreUObject_EPixelFormat, METADATA_PARAMS(Z_Construct_UClass_UManaComponentTexture_Statics::NewProp_Format_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManaComponentTexture_Statics::NewProp_Format_MetaData)) }; // 2651536151
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UManaComponentTexture_Statics::NewProp_ComponentType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManaComponentTexture_Statics::NewProp_ComponentType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaComponentTexture" },
		{ "ModuleRelativePath", "Public/ManaComponentTexture.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UManaComponentTexture_Statics::NewProp_ComponentType = { "ComponentType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UManaComponentTexture, ComponentType), Z_Construct_UEnum_CriWareRuntime_EManaComponentTextureType, METADATA_PARAMS(Z_Construct_UClass_UManaComponentTexture_Statics::NewProp_ComponentType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManaComponentTexture_Statics::NewProp_ComponentType_MetaData)) }; // 313436480
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManaComponentTexture_Statics::NewProp_AddressX_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaComponentTexture" },
		{ "ModuleRelativePath", "Public/ManaComponentTexture.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UManaComponentTexture_Statics::NewProp_AddressX = { "AddressX", nullptr, (EPropertyFlags)0x0010050000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UManaComponentTexture, AddressX), Z_Construct_UEnum_Engine_TextureAddress, METADATA_PARAMS(Z_Construct_UClass_UManaComponentTexture_Statics::NewProp_AddressX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManaComponentTexture_Statics::NewProp_AddressX_MetaData)) }; // 1462649072
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManaComponentTexture_Statics::NewProp_AddressY_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaComponentTexture" },
		{ "ModuleRelativePath", "Public/ManaComponentTexture.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UManaComponentTexture_Statics::NewProp_AddressY = { "AddressY", nullptr, (EPropertyFlags)0x0010050000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UManaComponentTexture, AddressY), Z_Construct_UEnum_Engine_TextureAddress, METADATA_PARAMS(Z_Construct_UClass_UManaComponentTexture_Statics::NewProp_AddressY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManaComponentTexture_Statics::NewProp_AddressY_MetaData)) }; // 1462649072
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UManaComponentTexture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaComponentTexture_Statics::NewProp_SizeX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaComponentTexture_Statics::NewProp_SizeY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaComponentTexture_Statics::NewProp_Format,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaComponentTexture_Statics::NewProp_ComponentType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaComponentTexture_Statics::NewProp_ComponentType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaComponentTexture_Statics::NewProp_AddressX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaComponentTexture_Statics::NewProp_AddressY,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UManaComponentTexture_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UManaComponentTexture>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UManaComponentTexture_Statics::ClassParams = {
		&UManaComponentTexture::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UManaComponentTexture_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UManaComponentTexture_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UManaComponentTexture_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UManaComponentTexture_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UManaComponentTexture()
	{
		if (!Z_Registration_Info_UClass_UManaComponentTexture.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UManaComponentTexture.OuterSingleton, Z_Construct_UClass_UManaComponentTexture_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UManaComponentTexture.OuterSingleton;
	}
	template<> CRIWARERUNTIME_API UClass* StaticClass<UManaComponentTexture>()
	{
		return UManaComponentTexture::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UManaComponentTexture);
	UManaComponentTexture::~UManaComponentTexture() {}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaComponentTexture_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaComponentTexture_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UManaComponentTexture, UManaComponentTexture::StaticClass, TEXT("UManaComponentTexture"), &Z_Registration_Info_UClass_UManaComponentTexture, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UManaComponentTexture), 530197526U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaComponentTexture_h_2511242510(TEXT("/Script/CriWareRuntime"),
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaComponentTexture_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaComponentTexture_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
