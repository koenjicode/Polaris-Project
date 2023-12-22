// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Wwise/Public/WwiseAudioLinkComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWwiseAudioLinkComponent() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkComponent();
	AUDIOLINKENGINE_API UClass* Z_Construct_UClass_UAudioLinkBlueprintInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Wwise();
	WWISE_API UClass* Z_Construct_UClass_UWwiseAudioLinkComponent();
	WWISE_API UClass* Z_Construct_UClass_UWwiseAudioLinkComponent_NoRegister();
	WWISE_API UClass* Z_Construct_UClass_UWwiseAudioLinkSettings_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UWwiseAudioLinkComponent::execIsLinkPlaying)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLinkPlaying();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWwiseAudioLinkComponent::execPlayLink)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayLink(Z_Param_StartTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWwiseAudioLinkComponent::execSetLinkSound)
	{
		P_GET_OBJECT(USoundBase,Z_Param_NewSound);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLinkSound(Z_Param_NewSound);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWwiseAudioLinkComponent::execStopLink)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopLink();
		P_NATIVE_END;
	}
	void UWwiseAudioLinkComponent::StaticRegisterNativesUWwiseAudioLinkComponent()
	{
		UClass* Class = UWwiseAudioLinkComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsLinkPlaying", &UWwiseAudioLinkComponent::execIsLinkPlaying },
			{ "PlayLink", &UWwiseAudioLinkComponent::execPlayLink },
			{ "SetLinkSound", &UWwiseAudioLinkComponent::execSetLinkSound },
			{ "StopLink", &UWwiseAudioLinkComponent::execStopLink },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWwiseAudioLinkComponent_IsLinkPlaying_Statics
	{
		struct WwiseAudioLinkComponent_eventIsLinkPlaying_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UWwiseAudioLinkComponent_IsLinkPlaying_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WwiseAudioLinkComponent_eventIsLinkPlaying_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWwiseAudioLinkComponent_IsLinkPlaying_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WwiseAudioLinkComponent_eventIsLinkPlaying_Parms), &Z_Construct_UFunction_UWwiseAudioLinkComponent_IsLinkPlaying_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWwiseAudioLinkComponent_IsLinkPlaying_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseAudioLinkComponent_IsLinkPlaying_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWwiseAudioLinkComponent_IsLinkPlaying_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WwiseAudioLinkComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWwiseAudioLinkComponent_IsLinkPlaying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWwiseAudioLinkComponent, nullptr, "IsLinkPlaying", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWwiseAudioLinkComponent_IsLinkPlaying_Statics::WwiseAudioLinkComponent_eventIsLinkPlaying_Parms), Z_Construct_UFunction_UWwiseAudioLinkComponent_IsLinkPlaying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseAudioLinkComponent_IsLinkPlaying_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWwiseAudioLinkComponent_IsLinkPlaying_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseAudioLinkComponent_IsLinkPlaying_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWwiseAudioLinkComponent_IsLinkPlaying()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWwiseAudioLinkComponent_IsLinkPlaying_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWwiseAudioLinkComponent_PlayLink_Statics
	{
		struct WwiseAudioLinkComponent_eventPlayLink_Parms
		{
			float StartTime;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWwiseAudioLinkComponent_PlayLink_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WwiseAudioLinkComponent_eventPlayLink_Parms, StartTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWwiseAudioLinkComponent_PlayLink_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseAudioLinkComponent_PlayLink_Statics::NewProp_StartTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWwiseAudioLinkComponent_PlayLink_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WwiseAudioLinkComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWwiseAudioLinkComponent_PlayLink_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWwiseAudioLinkComponent, nullptr, "PlayLink", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWwiseAudioLinkComponent_PlayLink_Statics::WwiseAudioLinkComponent_eventPlayLink_Parms), Z_Construct_UFunction_UWwiseAudioLinkComponent_PlayLink_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseAudioLinkComponent_PlayLink_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWwiseAudioLinkComponent_PlayLink_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseAudioLinkComponent_PlayLink_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWwiseAudioLinkComponent_PlayLink()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWwiseAudioLinkComponent_PlayLink_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWwiseAudioLinkComponent_SetLinkSound_Statics
	{
		struct WwiseAudioLinkComponent_eventSetLinkSound_Parms
		{
			USoundBase* NewSound;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewSound;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWwiseAudioLinkComponent_SetLinkSound_Statics::NewProp_NewSound = { "NewSound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WwiseAudioLinkComponent_eventSetLinkSound_Parms, NewSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWwiseAudioLinkComponent_SetLinkSound_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWwiseAudioLinkComponent_SetLinkSound_Statics::NewProp_NewSound,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWwiseAudioLinkComponent_SetLinkSound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WwiseAudioLinkComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWwiseAudioLinkComponent_SetLinkSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWwiseAudioLinkComponent, nullptr, "SetLinkSound", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWwiseAudioLinkComponent_SetLinkSound_Statics::WwiseAudioLinkComponent_eventSetLinkSound_Parms), Z_Construct_UFunction_UWwiseAudioLinkComponent_SetLinkSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseAudioLinkComponent_SetLinkSound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWwiseAudioLinkComponent_SetLinkSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseAudioLinkComponent_SetLinkSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWwiseAudioLinkComponent_SetLinkSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWwiseAudioLinkComponent_SetLinkSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWwiseAudioLinkComponent_StopLink_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWwiseAudioLinkComponent_StopLink_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Fix for true pure virtual functions not being implemented\n" },
		{ "ModuleRelativePath", "Public/WwiseAudioLinkComponent.h" },
		{ "ToolTip", "Fix for true pure virtual functions not being implemented" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWwiseAudioLinkComponent_StopLink_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWwiseAudioLinkComponent, nullptr, "StopLink", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWwiseAudioLinkComponent_StopLink_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWwiseAudioLinkComponent_StopLink_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWwiseAudioLinkComponent_StopLink()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWwiseAudioLinkComponent_StopLink_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWwiseAudioLinkComponent);
	UClass* Z_Construct_UClass_UWwiseAudioLinkComponent_NoRegister()
	{
		return UWwiseAudioLinkComponent::StaticClass();
	}
	struct Z_Construct_UClass_UWwiseAudioLinkComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Settings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoPlay_MetaData[];
#endif
		static void NewProp_bAutoPlay_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoPlay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWwiseAudioLinkComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAkComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Wwise,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWwiseAudioLinkComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWwiseAudioLinkComponent_IsLinkPlaying, "IsLinkPlaying" }, // 2275949206
		{ &Z_Construct_UFunction_UWwiseAudioLinkComponent_PlayLink, "PlayLink" }, // 914269624
		{ &Z_Construct_UFunction_UWwiseAudioLinkComponent_SetLinkSound, "SetLinkSound" }, // 2332585352
		{ &Z_Construct_UFunction_UWwiseAudioLinkComponent_StopLink, "StopLink" }, // 32278503
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWwiseAudioLinkComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "WwiseAudioLinkComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/WwiseAudioLinkComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWwiseAudioLinkComponent_Statics::NewProp_Settings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WwiseAudioLinkComponent" },
		{ "ModuleRelativePath", "Public/WwiseAudioLinkComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWwiseAudioLinkComponent_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWwiseAudioLinkComponent, Settings), Z_Construct_UClass_UWwiseAudioLinkSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWwiseAudioLinkComponent_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseAudioLinkComponent_Statics::NewProp_Settings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWwiseAudioLinkComponent_Statics::NewProp_Sound_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WwiseAudioLinkComponent" },
		{ "ModuleRelativePath", "Public/WwiseAudioLinkComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWwiseAudioLinkComponent_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWwiseAudioLinkComponent, Sound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWwiseAudioLinkComponent_Statics::NewProp_Sound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseAudioLinkComponent_Statics::NewProp_Sound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWwiseAudioLinkComponent_Statics::NewProp_bAutoPlay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WwiseAudioLinkComponent" },
		{ "ModuleRelativePath", "Public/WwiseAudioLinkComponent.h" },
	};
#endif
	void Z_Construct_UClass_UWwiseAudioLinkComponent_Statics::NewProp_bAutoPlay_SetBit(void* Obj)
	{
		((UWwiseAudioLinkComponent*)Obj)->bAutoPlay = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWwiseAudioLinkComponent_Statics::NewProp_bAutoPlay = { "bAutoPlay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWwiseAudioLinkComponent), &Z_Construct_UClass_UWwiseAudioLinkComponent_Statics::NewProp_bAutoPlay_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWwiseAudioLinkComponent_Statics::NewProp_bAutoPlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseAudioLinkComponent_Statics::NewProp_bAutoPlay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWwiseAudioLinkComponent_Statics::NewProp_AudioComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WwiseAudioLinkComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WwiseAudioLinkComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWwiseAudioLinkComponent_Statics::NewProp_AudioComponent = { "AudioComponent", nullptr, (EPropertyFlags)0x002208000008200d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWwiseAudioLinkComponent, AudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWwiseAudioLinkComponent_Statics::NewProp_AudioComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseAudioLinkComponent_Statics::NewProp_AudioComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWwiseAudioLinkComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWwiseAudioLinkComponent_Statics::NewProp_Settings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWwiseAudioLinkComponent_Statics::NewProp_Sound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWwiseAudioLinkComponent_Statics::NewProp_bAutoPlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWwiseAudioLinkComponent_Statics::NewProp_AudioComponent,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UWwiseAudioLinkComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAudioLinkBlueprintInterface_NoRegister, (int32)VTABLE_OFFSET(UWwiseAudioLinkComponent, IAudioLinkBlueprintInterface), false },  // 4184086433
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWwiseAudioLinkComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWwiseAudioLinkComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWwiseAudioLinkComponent_Statics::ClassParams = {
		&UWwiseAudioLinkComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWwiseAudioLinkComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseAudioLinkComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UWwiseAudioLinkComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseAudioLinkComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWwiseAudioLinkComponent()
	{
		if (!Z_Registration_Info_UClass_UWwiseAudioLinkComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWwiseAudioLinkComponent.OuterSingleton, Z_Construct_UClass_UWwiseAudioLinkComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWwiseAudioLinkComponent.OuterSingleton;
	}
	template<> WWISE_API UClass* StaticClass<UWwiseAudioLinkComponent>()
	{
		return UWwiseAudioLinkComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWwiseAudioLinkComponent);
	UWwiseAudioLinkComponent::~UWwiseAudioLinkComponent() {}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_Wwise_Public_WwiseAudioLinkComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_Wwise_Public_WwiseAudioLinkComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWwiseAudioLinkComponent, UWwiseAudioLinkComponent::StaticClass, TEXT("UWwiseAudioLinkComponent"), &Z_Registration_Info_UClass_UWwiseAudioLinkComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWwiseAudioLinkComponent), 4018055424U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_Wwise_Public_WwiseAudioLinkComponent_h_4278987651(TEXT("/Script/Wwise"),
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_Wwise_Public_WwiseAudioLinkComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_Wwise_Public_WwiseAudioLinkComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
