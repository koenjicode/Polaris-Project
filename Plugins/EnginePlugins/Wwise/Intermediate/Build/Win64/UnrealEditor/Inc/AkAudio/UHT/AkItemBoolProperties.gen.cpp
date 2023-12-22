// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkItemBoolProperties.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkItemBoolProperties() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkItemBoolProperties();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkItemBoolProperties_NoRegister();
	AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_OnItemBoolPropertyDragDetected__DelegateSignature();
	AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_OnItemBoolPropertySelectionChanged__DelegateSignature();
	UMG_API UClass* Z_Construct_UClass_UWidget();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	DEFINE_FUNCTION(UAkItemBoolProperties::execGetSearchText)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetSearchText();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkItemBoolProperties::execGetSelectedProperty)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetSelectedProperty();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkItemBoolProperties::execSetSearchText)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_newText);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSearchText(Z_Param_newText);
		P_NATIVE_END;
	}
	void UAkItemBoolProperties::StaticRegisterNativesUAkItemBoolProperties()
	{
		UClass* Class = UAkItemBoolProperties::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSearchText", &UAkItemBoolProperties::execGetSearchText },
			{ "GetSelectedProperty", &UAkItemBoolProperties::execGetSelectedProperty },
			{ "SetSearchText", &UAkItemBoolProperties::execSetSearchText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAkItemBoolProperties_GetSearchText_Statics
	{
		struct AkItemBoolProperties_eventGetSearchText_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkItemBoolProperties_GetSearchText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkItemBoolProperties_eventGetSearchText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkItemBoolProperties_GetSearchText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkItemBoolProperties_GetSearchText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkItemBoolProperties_GetSearchText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkItemBoolProperties.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkItemBoolProperties_GetSearchText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkItemBoolProperties, nullptr, "GetSearchText", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkItemBoolProperties_GetSearchText_Statics::AkItemBoolProperties_eventGetSearchText_Parms), Z_Construct_UFunction_UAkItemBoolProperties_GetSearchText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkItemBoolProperties_GetSearchText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkItemBoolProperties_GetSearchText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkItemBoolProperties_GetSearchText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkItemBoolProperties_GetSearchText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkItemBoolProperties_GetSearchText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkItemBoolProperties_GetSelectedProperty_Statics
	{
		struct AkItemBoolProperties_eventGetSelectedProperty_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkItemBoolProperties_GetSelectedProperty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkItemBoolProperties_eventGetSelectedProperty_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkItemBoolProperties_GetSelectedProperty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkItemBoolProperties_GetSelectedProperty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkItemBoolProperties_GetSelectedProperty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkItemBoolProperties.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkItemBoolProperties_GetSelectedProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkItemBoolProperties, nullptr, "GetSelectedProperty", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkItemBoolProperties_GetSelectedProperty_Statics::AkItemBoolProperties_eventGetSelectedProperty_Parms), Z_Construct_UFunction_UAkItemBoolProperties_GetSelectedProperty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkItemBoolProperties_GetSelectedProperty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkItemBoolProperties_GetSelectedProperty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkItemBoolProperties_GetSelectedProperty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkItemBoolProperties_GetSelectedProperty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkItemBoolProperties_GetSelectedProperty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkItemBoolProperties_SetSearchText_Statics
	{
		struct AkItemBoolProperties_eventSetSearchText_Parms
		{
			FString newText;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_newText_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_newText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkItemBoolProperties_SetSearchText_Statics::NewProp_newText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkItemBoolProperties_SetSearchText_Statics::NewProp_newText = { "newText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkItemBoolProperties_eventSetSearchText_Parms, newText), METADATA_PARAMS(Z_Construct_UFunction_UAkItemBoolProperties_SetSearchText_Statics::NewProp_newText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkItemBoolProperties_SetSearchText_Statics::NewProp_newText_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkItemBoolProperties_SetSearchText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkItemBoolProperties_SetSearchText_Statics::NewProp_newText,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkItemBoolProperties_SetSearchText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkItemBoolProperties.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkItemBoolProperties_SetSearchText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkItemBoolProperties, nullptr, "SetSearchText", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkItemBoolProperties_SetSearchText_Statics::AkItemBoolProperties_eventSetSearchText_Parms), Z_Construct_UFunction_UAkItemBoolProperties_SetSearchText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkItemBoolProperties_SetSearchText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkItemBoolProperties_SetSearchText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkItemBoolProperties_SetSearchText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkItemBoolProperties_SetSearchText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkItemBoolProperties_SetSearchText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkItemBoolProperties);
	UClass* Z_Construct_UClass_UAkItemBoolProperties_NoRegister()
	{
		return UAkItemBoolProperties::StaticClass();
	}
	struct Z_Construct_UClass_UAkItemBoolProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSelectionChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSelectionChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPropertyDragged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPropertyDragged;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkItemBoolProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAkItemBoolProperties_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAkItemBoolProperties_GetSearchText, "GetSearchText" }, // 2572241612
		{ &Z_Construct_UFunction_UAkItemBoolProperties_GetSelectedProperty, "GetSelectedProperty" }, // 2108651762
		{ &Z_Construct_UFunction_UAkItemBoolProperties_SetSearchText, "SetSearchText" }, // 701902343
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkItemBoolProperties_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AkItemBoolProperties.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AkItemBoolProperties.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkItemBoolProperties_Statics::NewProp_OnSelectionChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkItemBoolProperties" },
		{ "ModuleRelativePath", "Public/AkItemBoolProperties.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAkItemBoolProperties_Statics::NewProp_OnSelectionChanged = { "OnSelectionChanged", nullptr, (EPropertyFlags)0x0010000010080005, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkItemBoolProperties, OnSelectionChanged), Z_Construct_UDelegateFunction_AkAudio_OnItemBoolPropertySelectionChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAkItemBoolProperties_Statics::NewProp_OnSelectionChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkItemBoolProperties_Statics::NewProp_OnSelectionChanged_MetaData)) }; // 3010922437
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkItemBoolProperties_Statics::NewProp_OnPropertyDragged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AkItemBoolProperties" },
		{ "ModuleRelativePath", "Public/AkItemBoolProperties.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAkItemBoolProperties_Statics::NewProp_OnPropertyDragged = { "OnPropertyDragged", nullptr, (EPropertyFlags)0x0010000010080005, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAkItemBoolProperties, OnPropertyDragged), Z_Construct_UDelegateFunction_AkAudio_OnItemBoolPropertyDragDetected__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAkItemBoolProperties_Statics::NewProp_OnPropertyDragged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkItemBoolProperties_Statics::NewProp_OnPropertyDragged_MetaData)) }; // 2386128275
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkItemBoolProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkItemBoolProperties_Statics::NewProp_OnSelectionChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkItemBoolProperties_Statics::NewProp_OnPropertyDragged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkItemBoolProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkItemBoolProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkItemBoolProperties_Statics::ClassParams = {
		&UAkItemBoolProperties::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAkItemBoolProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAkItemBoolProperties_Statics::PropPointers),
		0,
		0x00B000A2u,
		METADATA_PARAMS(Z_Construct_UClass_UAkItemBoolProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkItemBoolProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkItemBoolProperties()
	{
		if (!Z_Registration_Info_UClass_UAkItemBoolProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkItemBoolProperties.OuterSingleton, Z_Construct_UClass_UAkItemBoolProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAkItemBoolProperties.OuterSingleton;
	}
	template<> AKAUDIO_API UClass* StaticClass<UAkItemBoolProperties>()
	{
		return UAkItemBoolProperties::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkItemBoolProperties);
	UAkItemBoolProperties::~UAkItemBoolProperties() {}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkItemBoolProperties_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkItemBoolProperties_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAkItemBoolProperties, UAkItemBoolProperties::StaticClass, TEXT("UAkItemBoolProperties"), &Z_Registration_Info_UClass_UAkItemBoolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkItemBoolProperties), 3177617937U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkItemBoolProperties_h_1797722023(TEXT("/Script/AkAudio"),
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkItemBoolProperties_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkItemBoolProperties_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
