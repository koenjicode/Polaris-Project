// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/Atom3dRegion.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtom3dRegion() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtom3dRegion();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtom3dRegion_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtom3dRegionHandle_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	DEFINE_FUNCTION(UAtom3dRegion::execGetHandle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAtom3dRegionHandle**)Z_Param__Result=P_THIS->GetHandle();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtom3dRegion::execSetHandle)
	{
		P_GET_OBJECT(UAtom3dRegionHandle,Z_Param_InHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHandle(Z_Param_InHandle);
		P_NATIVE_END;
	}
	void UAtom3dRegion::StaticRegisterNativesUAtom3dRegion()
	{
		UClass* Class = UAtom3dRegion::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetHandle", &UAtom3dRegion::execGetHandle },
			{ "SetHandle", &UAtom3dRegion::execSetHandle },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAtom3dRegion_GetHandle_Statics
	{
		struct Atom3dRegion_eventGetHandle_Parms
		{
			UAtom3dRegionHandle* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtom3dRegion_GetHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Atom3dRegion_eventGetHandle_Parms, ReturnValue), Z_Construct_UClass_UAtom3dRegionHandle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtom3dRegion_GetHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtom3dRegion_GetHandle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtom3dRegion_GetHandle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Atom3dRegion.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtom3dRegion_GetHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtom3dRegion, nullptr, "GetHandle", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtom3dRegion_GetHandle_Statics::Atom3dRegion_eventGetHandle_Parms), Z_Construct_UFunction_UAtom3dRegion_GetHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtom3dRegion_GetHandle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtom3dRegion_GetHandle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtom3dRegion_GetHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtom3dRegion_GetHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtom3dRegion_GetHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtom3dRegion_SetHandle_Statics
	{
		struct Atom3dRegion_eventSetHandle_Parms
		{
			UAtom3dRegionHandle* InHandle;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InHandle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAtom3dRegion_SetHandle_Statics::NewProp_InHandle = { "InHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Atom3dRegion_eventSetHandle_Parms, InHandle), Z_Construct_UClass_UAtom3dRegionHandle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtom3dRegion_SetHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtom3dRegion_SetHandle_Statics::NewProp_InHandle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtom3dRegion_SetHandle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Atom3dRegion.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtom3dRegion_SetHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtom3dRegion, nullptr, "SetHandle", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtom3dRegion_SetHandle_Statics::Atom3dRegion_eventSetHandle_Parms), Z_Construct_UFunction_UAtom3dRegion_SetHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtom3dRegion_SetHandle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtom3dRegion_SetHandle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtom3dRegion_SetHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtom3dRegion_SetHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtom3dRegion_SetHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtom3dRegion);
	UClass* Z_Construct_UClass_UAtom3dRegion_NoRegister()
	{
		return UAtom3dRegion::StaticClass();
	}
	struct Z_Construct_UClass_UAtom3dRegion_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Handle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtom3dRegion_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAtom3dRegion_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtom3dRegion_GetHandle, "GetHandle" }, // 252083827
		{ &Z_Construct_UFunction_UAtom3dRegion_SetHandle, "SetHandle" }, // 1258408902
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtom3dRegion_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Atom3dRegion.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Atom3dRegion.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtom3dRegion_Statics::NewProp_Handle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Atom3dRegion" },
		{ "ModuleRelativePath", "Public/Atom3dRegion.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAtom3dRegion_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0040000000002005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAtom3dRegion, Handle), Z_Construct_UClass_UAtom3dRegionHandle_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtom3dRegion_Statics::NewProp_Handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtom3dRegion_Statics::NewProp_Handle_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtom3dRegion_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtom3dRegion_Statics::NewProp_Handle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtom3dRegion_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtom3dRegion>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtom3dRegion_Statics::ClassParams = {
		&UAtom3dRegion::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAtom3dRegion_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtom3dRegion_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAtom3dRegion_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtom3dRegion_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtom3dRegion()
	{
		if (!Z_Registration_Info_UClass_UAtom3dRegion.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtom3dRegion.OuterSingleton, Z_Construct_UClass_UAtom3dRegion_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtom3dRegion.OuterSingleton;
	}
	template<> CRIWARERUNTIME_API UClass* StaticClass<UAtom3dRegion>()
	{
		return UAtom3dRegion::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtom3dRegion);
	UAtom3dRegion::~UAtom3dRegion() {}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_Atom3dRegion_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_Atom3dRegion_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAtom3dRegion, UAtom3dRegion::StaticClass, TEXT("UAtom3dRegion"), &Z_Registration_Info_UClass_UAtom3dRegion, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtom3dRegion), 1025291228U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_Atom3dRegion_h_2905075069(TEXT("/Script/CriWareRuntime"),
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_Atom3dRegion_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_Atom3dRegion_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
