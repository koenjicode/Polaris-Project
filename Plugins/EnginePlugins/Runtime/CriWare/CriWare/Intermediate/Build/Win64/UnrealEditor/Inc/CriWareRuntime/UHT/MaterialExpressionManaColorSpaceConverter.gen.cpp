// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/MaterialExpressionManaColorSpaceConverter.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionManaColorSpaceConverter() {}
// Cross Module References
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UMaterialExpressionManaColorSpaceConverter();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UMaterialExpressionManaColorSpaceConverter_NoRegister();
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EManaColorSpace();
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EManaMovieType();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	void UMaterialExpressionManaColorSpaceConverter::StaticRegisterNativesUMaterialExpressionManaColorSpaceConverter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionManaColorSpaceConverter);
	UClass* Z_Construct_UClass_UMaterialExpressionManaColorSpaceConverter_NoRegister()
	{
		return UMaterialExpressionManaColorSpaceConverter::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionManaColorSpaceConverter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Luma_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Luma;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChromaB_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChromaB;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChromaR_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChromaR;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ALPHA_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ALPHA;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Gamma_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Gamma;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bH264_MetaData[];
#endif
		static void NewProp_bH264_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bH264;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MovieType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovieType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MovieType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ColorSpace_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorSpace_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ColorSpace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseGammaExponent_MetaData[];
#endif
		static void NewProp_bUseGammaExponent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseGammaExponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstGamma_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ConstGamma;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionManaColorSpaceConverter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionManaColorSpaceConverter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "MaterialExpressionManaColorSpaceConverter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MaterialExpressionManaColorSpaceConverter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionManaColorSpaceConverter_Statics::NewProp_Luma_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MaterialExpressionManaColorSpaceConverter" },
		{ "ModuleRelativePath", "Public/MaterialExpressionManaColorSpaceConverter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionManaColorSpaceConverter_Statics::NewProp_Luma = { "Luma", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionManaColorSpaceConverter, Luma), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionManaColorSpaceConverter_Statics::NewProp_Luma_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionManaColorSpaceConverter_Statics::NewProp_Luma_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionManaColorSpaceConverter_Statics::NewProp_ChromaB_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MaterialExpressionManaColorSpaceConverter" },
		{ "ModuleRelativePath", "Public/MaterialExpressionManaColorSpaceConverter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionManaColorSpaceConverter_Statics::NewProp_ChromaB = { "ChromaB", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionManaColorSpaceConverter, ChromaB), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionManaColorSpaceConverter_Statics::NewProp_ChromaB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionManaColorSpaceConverter_Statics::NewProp_ChromaB_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionManaColorSpaceConverter_Statics::NewProp_ChromaR_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MaterialExpressionManaColorSpaceConverter" },
		{ "ModuleRelativePath", "Public/MaterialExpressionManaColorSpaceConverter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionManaColorSpaceConverter_Statics::NewProp_ChromaR = { "ChromaR", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionManaColorSpaceConverter, ChromaR), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionManaColorSpaceConverter_Statics::NewProp_ChromaR_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionManaColorSpaceConverter_Statics::NewProp_ChromaR_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionManaColorSpaceConverter_Statics::NewProp_ALPHA_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MaterialExpressionManaColorSpaceConverter" },
		{ "ModuleRelativePath", "Public/MaterialExpressionManaColorSpaceConverter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionManaColorSpaceConverter_Statics::NewProp_ALPHA = { "ALPHA", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionManaColorSpaceConverter, ALPHA), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionManaColorSpaceConverter_Statics::NewProp_ALPHA_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionManaColorSpaceConverter_Statics::NewProp_ALPHA_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionManaColorSpaceConverter_Statics::NewProp_Gamma_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MaterialExpressionManaColorSpaceConverter" },
		{ "ModuleRelativePath", "Public/MaterialExpressionManaColorSpaceConverter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionManaColorSpaceConverter_Statics::NewProp_Gamma = { "Gamma", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionManaColorSpaceConverter, Gamma), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionManaColorSpaceConverter_Statics::NewProp_Gamma_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionManaColorSpaceConverter_Statics::NewProp_Gamma_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionManaColorSpaceConverter_Statics::NewProp_bH264_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MaterialExpressionManaColorSpaceConverter" },
		{ "ModuleRelativePath", "Public/MaterialExpressionManaColorSpaceConverter.h" },
	};
#endif
	void Z_Construct_UClass_UMaterialExpressionManaColorSpaceConverter_Statics::NewProp_bH264_SetBit(void* Obj)
	{
		((UMaterialExpressionManaColorSpaceConverter*)Obj)->bH264 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpressionManaColorSpaceConverter_Statics::NewProp_bH264 = { "bH264", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMaterialExpressionManaColorSpaceConverter), &Z_Construct_UClass_UMaterialExpressionManaColorSpaceConverter_Statics::NewProp_bH264_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionManaColorSpaceConverter_Statics::NewProp_bH264_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionManaColorSpaceConverter_Statics::NewProp_bH264_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionManaColorSpaceConverter_Statics::NewProp_MovieType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionManaColorSpaceConverter_Statics::NewProp_MovieType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MaterialExpressionManaColorSpaceConverter" },
		{ "ModuleRelativePath", "Public/MaterialExpressionManaColorSpaceConverter.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMaterialExpressionManaColorSpaceConverter_Statics::NewProp_MovieType = { "MovieType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionManaColorSpaceConverter, MovieType), Z_Construct_UEnum_CriWareRuntime_EManaMovieType, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionManaColorSpaceConverter_Statics::NewProp_MovieType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionManaColorSpaceConverter_Statics::NewProp_MovieType_MetaData)) }; // 2434398798
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionManaColorSpaceConverter_Statics::NewProp_ColorSpace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionManaColorSpaceConverter_Statics::NewProp_ColorSpace_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MaterialExpressionManaColorSpaceConverter" },
		{ "ModuleRelativePath", "Public/MaterialExpressionManaColorSpaceConverter.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMaterialExpressionManaColorSpaceConverter_Statics::NewProp_ColorSpace = { "ColorSpace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionManaColorSpaceConverter, ColorSpace), Z_Construct_UEnum_CriWareRuntime_EManaColorSpace, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionManaColorSpaceConverter_Statics::NewProp_ColorSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionManaColorSpaceConverter_Statics::NewProp_ColorSpace_MetaData)) }; // 610621938
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionManaColorSpaceConverter_Statics::NewProp_bUseGammaExponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MaterialExpressionManaColorSpaceConverter" },
		{ "ModuleRelativePath", "Public/MaterialExpressionManaColorSpaceConverter.h" },
	};
#endif
	void Z_Construct_UClass_UMaterialExpressionManaColorSpaceConverter_Statics::NewProp_bUseGammaExponent_SetBit(void* Obj)
	{
		((UMaterialExpressionManaColorSpaceConverter*)Obj)->bUseGammaExponent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpressionManaColorSpaceConverter_Statics::NewProp_bUseGammaExponent = { "bUseGammaExponent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMaterialExpressionManaColorSpaceConverter), &Z_Construct_UClass_UMaterialExpressionManaColorSpaceConverter_Statics::NewProp_bUseGammaExponent_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionManaColorSpaceConverter_Statics::NewProp_bUseGammaExponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionManaColorSpaceConverter_Statics::NewProp_bUseGammaExponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionManaColorSpaceConverter_Statics::NewProp_ConstGamma_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MaterialExpressionManaColorSpaceConverter" },
		{ "ModuleRelativePath", "Public/MaterialExpressionManaColorSpaceConverter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionManaColorSpaceConverter_Statics::NewProp_ConstGamma = { "ConstGamma", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionManaColorSpaceConverter, ConstGamma), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionManaColorSpaceConverter_Statics::NewProp_ConstGamma_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionManaColorSpaceConverter_Statics::NewProp_ConstGamma_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionManaColorSpaceConverter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionManaColorSpaceConverter_Statics::NewProp_Luma,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionManaColorSpaceConverter_Statics::NewProp_ChromaB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionManaColorSpaceConverter_Statics::NewProp_ChromaR,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionManaColorSpaceConverter_Statics::NewProp_ALPHA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionManaColorSpaceConverter_Statics::NewProp_Gamma,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionManaColorSpaceConverter_Statics::NewProp_bH264,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionManaColorSpaceConverter_Statics::NewProp_MovieType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionManaColorSpaceConverter_Statics::NewProp_MovieType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionManaColorSpaceConverter_Statics::NewProp_ColorSpace_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionManaColorSpaceConverter_Statics::NewProp_ColorSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionManaColorSpaceConverter_Statics::NewProp_bUseGammaExponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionManaColorSpaceConverter_Statics::NewProp_ConstGamma,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionManaColorSpaceConverter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionManaColorSpaceConverter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionManaColorSpaceConverter_Statics::ClassParams = {
		&UMaterialExpressionManaColorSpaceConverter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionManaColorSpaceConverter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionManaColorSpaceConverter_Statics::PropPointers),
		0,
		0x001020B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionManaColorSpaceConverter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionManaColorSpaceConverter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionManaColorSpaceConverter()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionManaColorSpaceConverter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionManaColorSpaceConverter.OuterSingleton, Z_Construct_UClass_UMaterialExpressionManaColorSpaceConverter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionManaColorSpaceConverter.OuterSingleton;
	}
	template<> CRIWARERUNTIME_API UClass* StaticClass<UMaterialExpressionManaColorSpaceConverter>()
	{
		return UMaterialExpressionManaColorSpaceConverter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionManaColorSpaceConverter);
	UMaterialExpressionManaColorSpaceConverter::~UMaterialExpressionManaColorSpaceConverter() {}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_MaterialExpressionManaColorSpaceConverter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_MaterialExpressionManaColorSpaceConverter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionManaColorSpaceConverter, UMaterialExpressionManaColorSpaceConverter::StaticClass, TEXT("UMaterialExpressionManaColorSpaceConverter"), &Z_Registration_Info_UClass_UMaterialExpressionManaColorSpaceConverter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionManaColorSpaceConverter), 917578744U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_MaterialExpressionManaColorSpaceConverter_h_3447718103(TEXT("/Script/CriWareRuntime"),
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_MaterialExpressionManaColorSpaceConverter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_MaterialExpressionManaColorSpaceConverter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
