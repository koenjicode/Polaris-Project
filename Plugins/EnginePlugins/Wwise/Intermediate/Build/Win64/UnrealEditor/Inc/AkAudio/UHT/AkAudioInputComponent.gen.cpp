// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkAudioInputComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkAudioInputComponent() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioInputComponent();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioInputComponent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkComponent();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	DEFINE_FUNCTION(UAkAudioInputComponent::execPostAssociatedAudioInputEvent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->PostAssociatedAudioInputEvent();
		P_NATIVE_END;
	}
	void UAkAudioInputComponent::StaticRegisterNativesUAkAudioInputComponent()
	{
		UClass* Class = UAkAudioInputComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PostAssociatedAudioInputEvent", &UAkAudioInputComponent::execPostAssociatedAudioInputEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAkAudioInputComponent_PostAssociatedAudioInputEvent_Statics
	{
		struct AkAudioInputComponent_eventPostAssociatedAudioInputEvent_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkAudioInputComponent_PostAssociatedAudioInputEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AkAudioInputComponent_eventPostAssociatedAudioInputEvent_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkAudioInputComponent_PostAssociatedAudioInputEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkAudioInputComponent_PostAssociatedAudioInputEvent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkAudioInputComponent_PostAssociatedAudioInputEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AkAudioInputComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkAudioInputComponent_PostAssociatedAudioInputEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkAudioInputComponent, nullptr, "PostAssociatedAudioInputEvent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAkAudioInputComponent_PostAssociatedAudioInputEvent_Statics::AkAudioInputComponent_eventPostAssociatedAudioInputEvent_Parms), Z_Construct_UFunction_UAkAudioInputComponent_PostAssociatedAudioInputEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkAudioInputComponent_PostAssociatedAudioInputEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkAudioInputComponent_PostAssociatedAudioInputEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkAudioInputComponent_PostAssociatedAudioInputEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkAudioInputComponent_PostAssociatedAudioInputEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAkAudioInputComponent_PostAssociatedAudioInputEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAkAudioInputComponent);
	UClass* Z_Construct_UClass_UAkAudioInputComponent_NoRegister()
	{
		return UAkAudioInputComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAkAudioInputComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkAudioInputComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAkComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAkAudioInputComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAkAudioInputComponent_PostAssociatedAudioInputEvent, "PostAssociatedAudioInputEvent" }, // 548514882
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAudioInputComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "AkAudioInputComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AkAudioInputComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkAudioInputComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkAudioInputComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAkAudioInputComponent_Statics::ClassParams = {
		&UAkAudioInputComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UAkAudioInputComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAudioInputComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkAudioInputComponent()
	{
		if (!Z_Registration_Info_UClass_UAkAudioInputComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAkAudioInputComponent.OuterSingleton, Z_Construct_UClass_UAkAudioInputComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAkAudioInputComponent.OuterSingleton;
	}
	template<> AKAUDIO_API UClass* StaticClass<UAkAudioInputComponent>()
	{
		return UAkAudioInputComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkAudioInputComponent);
	UAkAudioInputComponent::~UAkAudioInputComponent() {}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAudioInputComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAudioInputComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAkAudioInputComponent, UAkAudioInputComponent::StaticClass, TEXT("UAkAudioInputComponent"), &Z_Registration_Info_UClass_UAkAudioInputComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAkAudioInputComponent), 2095440329U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAudioInputComponent_h_1726318696(TEXT("/Script/AkAudio"),
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAudioInputComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_AkAudioInputComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
