// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkAcousticPortal.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkAcousticPortal() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_AAkAcousticPortal();
	AKAUDIO_API UClass* Z_Construct_UClass_AAkAcousticPortal_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkPortalComponent_NoRegister();
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_AkAcousticPortalState();
	ENGINE_API UClass* Z_Construct_UClass_AVolume();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	DEFINE_FUNCTION(AAkAcousticPortal::execClosePortal)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClosePortal();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAkAcousticPortal::execGetCurrentState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AkAcousticPortalState*)Z_Param__Result=P_THIS->GetCurrentState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAkAcousticPortal::execOpenPortal)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OpenPortal();
		P_NATIVE_END;
	}
	void AAkAcousticPortal::StaticRegisterNativesAAkAcousticPortal()
	{
		UClass* Class = AAkAcousticPortal::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClosePortal", &AAkAcousticPortal::execClosePortal },
			{ "GetCurrentState", &AAkAcousticPortal::execGetCurrentState },
			{ "OpenPortal", &AAkAcousticPortal::execOpenPortal },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAkAcousticPortal_ClosePortal_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAkAcousticPortal_ClosePortal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkAcousticPortal.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAkAcousticPortal_ClosePortal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAkAcousticPortal, nullptr, "ClosePortal", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAkAcousticPortal_ClosePortal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAkAcousticPortal_ClosePortal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAkAcousticPortal_ClosePortal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAkAcousticPortal_ClosePortal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAkAcousticPortal_GetCurrentState_Statics
	{
		struct AkAcousticPortal_eventGetCurrentState_Parms
		{
			AkAcousticPortalState ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AAkAcousticPortal_GetCurrentState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AAkAcousticPortal_GetCurrentState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkAcousticPortal_eventGetCurrentState_Parms, ReturnValue), Z_Construct_UEnum_AkAudio_AkAcousticPortalState, METADATA_PARAMS(nullptr, 0) }; // 1449190885
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAkAcousticPortal_GetCurrentState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAkAcousticPortal_GetCurrentState_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAkAcousticPortal_GetCurrentState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAkAcousticPortal_GetCurrentState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkAcousticPortal.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAkAcousticPortal_GetCurrentState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAkAcousticPortal, nullptr, "GetCurrentState", nullptr, nullptr, sizeof(Z_Construct_UFunction_AAkAcousticPortal_GetCurrentState_Statics::AkAcousticPortal_eventGetCurrentState_Parms), Z_Construct_UFunction_AAkAcousticPortal_GetCurrentState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAkAcousticPortal_GetCurrentState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAkAcousticPortal_GetCurrentState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAkAcousticPortal_GetCurrentState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAkAcousticPortal_GetCurrentState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAkAcousticPortal_GetCurrentState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAkAcousticPortal_OpenPortal_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAkAcousticPortal_OpenPortal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkAcousticPortal.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAkAcousticPortal_OpenPortal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAkAcousticPortal, nullptr, "OpenPortal", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAkAcousticPortal_OpenPortal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAkAcousticPortal_OpenPortal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAkAcousticPortal_OpenPortal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAkAcousticPortal_OpenPortal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAkAcousticPortal);
	UClass* Z_Construct_UClass_AAkAcousticPortal_NoRegister()
	{
		return AAkAcousticPortal::StaticClass();
	}
	struct Z_Construct_UClass_AAkAcousticPortal_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Portal_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Portal;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InitialState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InitialState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRequiresStateMigration_MetaData[];
#endif
		static void NewProp_bRequiresStateMigration_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequiresStateMigration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAkAcousticPortal_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAkAcousticPortal_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAkAcousticPortal_ClosePortal, "ClosePortal" }, // 1192266479
		{ &Z_Construct_UFunction_AAkAcousticPortal_GetCurrentState, "GetCurrentState" }, // 539893414
		{ &Z_Construct_UFunction_AAkAcousticPortal_OpenPortal, "OpenPortal" }, // 3592913914
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAkAcousticPortal_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "AkAcousticPortal.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AkAcousticPortal.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAkAcousticPortal_Statics::NewProp_Portal_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkAcousticPortal" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AkAcousticPortal.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAkAcousticPortal_Statics::NewProp_Portal = { "Portal", nullptr, (EPropertyFlags)0x001200000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAkAcousticPortal, Portal), Z_Construct_UClass_UAkPortalComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAkAcousticPortal_Statics::NewProp_Portal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAkAcousticPortal_Statics::NewProp_Portal_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AAkAcousticPortal_Statics::NewProp_InitialState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAkAcousticPortal_Statics::NewProp_InitialState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkAcousticPortal" },
		{ "ModuleRelativePath", "Public/AkAcousticPortal.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AAkAcousticPortal_Statics::NewProp_InitialState = { "InitialState", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AAkAcousticPortal, InitialState), Z_Construct_UEnum_AkAudio_AkAcousticPortalState, METADATA_PARAMS(Z_Construct_UClass_AAkAcousticPortal_Statics::NewProp_InitialState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAkAcousticPortal_Statics::NewProp_InitialState_MetaData)) }; // 1449190885
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAkAcousticPortal_Statics::NewProp_bRequiresStateMigration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkAcousticPortal" },
		{ "ModuleRelativePath", "Public/AkAcousticPortal.h" },
	};
#endif
	void Z_Construct_UClass_AAkAcousticPortal_Statics::NewProp_bRequiresStateMigration_SetBit(void* Obj)
	{
		((AAkAcousticPortal*)Obj)->bRequiresStateMigration = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAkAcousticPortal_Statics::NewProp_bRequiresStateMigration = { "bRequiresStateMigration", nullptr, (EPropertyFlags)0x0040000000002005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AAkAcousticPortal), &Z_Construct_UClass_AAkAcousticPortal_Statics::NewProp_bRequiresStateMigration_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAkAcousticPortal_Statics::NewProp_bRequiresStateMigration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAkAcousticPortal_Statics::NewProp_bRequiresStateMigration_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAkAcousticPortal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAkAcousticPortal_Statics::NewProp_Portal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAkAcousticPortal_Statics::NewProp_InitialState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAkAcousticPortal_Statics::NewProp_InitialState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAkAcousticPortal_Statics::NewProp_bRequiresStateMigration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAkAcousticPortal_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAkAcousticPortal>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAkAcousticPortal_Statics::ClassParams = {
		&AAkAcousticPortal::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAkAcousticPortal_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AAkAcousticPortal_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAkAcousticPortal_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAkAcousticPortal_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAkAcousticPortal()
	{
		if (!Z_Registration_Info_UClass_AAkAcousticPortal.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAkAcousticPortal.OuterSingleton, Z_Construct_UClass_AAkAcousticPortal_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAkAcousticPortal.OuterSingleton;
	}
	template<> AKAUDIO_API UClass* StaticClass<AAkAcousticPortal>()
	{
		return AAkAcousticPortal::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAkAcousticPortal);
	AAkAcousticPortal::~AAkAcousticPortal() {}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAcousticPortal_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAcousticPortal_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAkAcousticPortal, AAkAcousticPortal::StaticClass, TEXT("AAkAcousticPortal"), &Z_Registration_Info_UClass_AAkAcousticPortal, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAkAcousticPortal), 1883098731U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAcousticPortal_h_1705406761(TEXT("/Script/AkAudio"),
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAcousticPortal_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAcousticPortal_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
