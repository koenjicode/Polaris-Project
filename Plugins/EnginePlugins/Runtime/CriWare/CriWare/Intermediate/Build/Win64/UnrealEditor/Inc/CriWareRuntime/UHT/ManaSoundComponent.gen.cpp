// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/ManaSoundComponent.h"
#include "CriWareRuntime/Public/AtomAisacControlParam.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeManaSoundComponent() {}
// Cross Module References
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UManaPlayer_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UManaSoundComponent();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UManaSoundComponent_NoRegister();
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EManaPlayerTrack();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomAisacControlParam();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	DEFINE_FUNCTION(UManaSoundComponent::execGetManaPlayer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UManaPlayer**)Z_Param__Result=P_THIS->GetManaPlayer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaSoundComponent::execRemoveAudioTrackCategory)
	{
		P_GET_ENUM(EManaPlayerTrack,Z_Param_Track);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveAudioTrackCategory(EManaPlayerTrack(Z_Param_Track));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaSoundComponent::execSetAudioTrackCategory)
	{
		P_GET_ENUM(EManaPlayerTrack,Z_Param_Track);
		P_GET_PROPERTY(FStrProperty,Z_Param_CategoryName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAudioTrackCategory(EManaPlayerTrack(Z_Param_Track),Z_Param_CategoryName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManaSoundComponent::execSetManaPlayer)
	{
		P_GET_OBJECT(UManaPlayer,Z_Param_NewManaPlayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetManaPlayer(Z_Param_NewManaPlayer);
		P_NATIVE_END;
	}
	void UManaSoundComponent::StaticRegisterNativesUManaSoundComponent()
	{
		UClass* Class = UManaSoundComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetManaPlayer", &UManaSoundComponent::execGetManaPlayer },
			{ "RemoveAudioTrackCategory", &UManaSoundComponent::execRemoveAudioTrackCategory },
			{ "SetAudioTrackCategory", &UManaSoundComponent::execSetAudioTrackCategory },
			{ "SetManaPlayer", &UManaSoundComponent::execSetManaPlayer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UManaSoundComponent_GetManaPlayer_Statics
	{
		struct ManaSoundComponent_eventGetManaPlayer_Parms
		{
			UManaPlayer* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UManaSoundComponent_GetManaPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManaSoundComponent_eventGetManaPlayer_Parms, ReturnValue), Z_Construct_UClass_UManaPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaSoundComponent_GetManaPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaSoundComponent_GetManaPlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaSoundComponent_GetManaPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaSoundComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaSoundComponent_GetManaPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaSoundComponent, nullptr, "GetManaPlayer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UManaSoundComponent_GetManaPlayer_Statics::ManaSoundComponent_eventGetManaPlayer_Parms), Z_Construct_UFunction_UManaSoundComponent_GetManaPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaSoundComponent_GetManaPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaSoundComponent_GetManaPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaSoundComponent_GetManaPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaSoundComponent_GetManaPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaSoundComponent_GetManaPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaSoundComponent_RemoveAudioTrackCategory_Statics
	{
		struct ManaSoundComponent_eventRemoveAudioTrackCategory_Parms
		{
			EManaPlayerTrack Track;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Track_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Track;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UManaSoundComponent_RemoveAudioTrackCategory_Statics::NewProp_Track_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UManaSoundComponent_RemoveAudioTrackCategory_Statics::NewProp_Track = { "Track", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManaSoundComponent_eventRemoveAudioTrackCategory_Parms, Track), Z_Construct_UEnum_CriWareRuntime_EManaPlayerTrack, METADATA_PARAMS(nullptr, 0) }; // 4225527819
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaSoundComponent_RemoveAudioTrackCategory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaSoundComponent_RemoveAudioTrackCategory_Statics::NewProp_Track_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaSoundComponent_RemoveAudioTrackCategory_Statics::NewProp_Track,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaSoundComponent_RemoveAudioTrackCategory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaSoundComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaSoundComponent_RemoveAudioTrackCategory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaSoundComponent, nullptr, "RemoveAudioTrackCategory", nullptr, nullptr, sizeof(Z_Construct_UFunction_UManaSoundComponent_RemoveAudioTrackCategory_Statics::ManaSoundComponent_eventRemoveAudioTrackCategory_Parms), Z_Construct_UFunction_UManaSoundComponent_RemoveAudioTrackCategory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaSoundComponent_RemoveAudioTrackCategory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaSoundComponent_RemoveAudioTrackCategory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaSoundComponent_RemoveAudioTrackCategory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaSoundComponent_RemoveAudioTrackCategory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaSoundComponent_RemoveAudioTrackCategory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaSoundComponent_SetAudioTrackCategory_Statics
	{
		struct ManaSoundComponent_eventSetAudioTrackCategory_Parms
		{
			EManaPlayerTrack Track;
			FString CategoryName;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Track_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Track;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CategoryName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CategoryName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UManaSoundComponent_SetAudioTrackCategory_Statics::NewProp_Track_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UManaSoundComponent_SetAudioTrackCategory_Statics::NewProp_Track = { "Track", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManaSoundComponent_eventSetAudioTrackCategory_Parms, Track), Z_Construct_UEnum_CriWareRuntime_EManaPlayerTrack, METADATA_PARAMS(nullptr, 0) }; // 4225527819
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaSoundComponent_SetAudioTrackCategory_Statics::NewProp_CategoryName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UManaSoundComponent_SetAudioTrackCategory_Statics::NewProp_CategoryName = { "CategoryName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManaSoundComponent_eventSetAudioTrackCategory_Parms, CategoryName), METADATA_PARAMS(Z_Construct_UFunction_UManaSoundComponent_SetAudioTrackCategory_Statics::NewProp_CategoryName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaSoundComponent_SetAudioTrackCategory_Statics::NewProp_CategoryName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaSoundComponent_SetAudioTrackCategory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaSoundComponent_SetAudioTrackCategory_Statics::NewProp_Track_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaSoundComponent_SetAudioTrackCategory_Statics::NewProp_Track,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaSoundComponent_SetAudioTrackCategory_Statics::NewProp_CategoryName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaSoundComponent_SetAudioTrackCategory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaSoundComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaSoundComponent_SetAudioTrackCategory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaSoundComponent, nullptr, "SetAudioTrackCategory", nullptr, nullptr, sizeof(Z_Construct_UFunction_UManaSoundComponent_SetAudioTrackCategory_Statics::ManaSoundComponent_eventSetAudioTrackCategory_Parms), Z_Construct_UFunction_UManaSoundComponent_SetAudioTrackCategory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaSoundComponent_SetAudioTrackCategory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaSoundComponent_SetAudioTrackCategory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaSoundComponent_SetAudioTrackCategory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaSoundComponent_SetAudioTrackCategory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaSoundComponent_SetAudioTrackCategory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManaSoundComponent_SetManaPlayer_Statics
	{
		struct ManaSoundComponent_eventSetManaPlayer_Parms
		{
			UManaPlayer* NewManaPlayer;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewManaPlayer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UManaSoundComponent_SetManaPlayer_Statics::NewProp_NewManaPlayer = { "NewManaPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManaSoundComponent_eventSetManaPlayer_Parms, NewManaPlayer), Z_Construct_UClass_UManaPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManaSoundComponent_SetManaPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManaSoundComponent_SetManaPlayer_Statics::NewProp_NewManaPlayer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManaSoundComponent_SetManaPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManaSoundComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManaSoundComponent_SetManaPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManaSoundComponent, nullptr, "SetManaPlayer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UManaSoundComponent_SetManaPlayer_Statics::ManaSoundComponent_eventSetManaPlayer_Parms), Z_Construct_UFunction_UManaSoundComponent_SetManaPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaSoundComponent_SetManaPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManaSoundComponent_SetManaPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManaSoundComponent_SetManaPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManaSoundComponent_SetManaPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManaSoundComponent_SetManaPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UManaSoundComponent);
	UClass* Z_Construct_UClass_UManaSoundComponent_NoRegister()
	{
		return UManaSoundComponent::StaticClass();
	}
	struct Z_Construct_UClass_UManaSoundComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoDestroy_MetaData[];
#endif
		static void NewProp_bAutoDestroy_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoDestroy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStopWhenOwnerDestroyed_MetaData[];
#endif
		static void NewProp_bStopWhenOwnerDestroyed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStopWhenOwnerDestroyed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableSpatialization_MetaData[];
#endif
		static void NewProp_bEnableSpatialization_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableSpatialization;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideVolumeMultiplier_MetaData[];
#endif
		static void NewProp_bOverrideVolumeMultiplier_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideVolumeMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableLowPassFilter_MetaData[];
#endif
		static void NewProp_bEnableLowPassFilter_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableLowPassFilter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumeMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumeMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LowPassFilterFrequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LowPassFilterFrequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PanSpread_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PanSpread;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinAttenuationDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinAttenuationDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxAttenuationDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxAttenuationDistance;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AisacControls_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AisacControls_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AisacControls;
		static const UECodeGen_Private::FStrPropertyParams NewProp_AttachedAisacs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachedAisacs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AttachedAisacs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioTrackCategory_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AudioTrackCategory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubAudioTrackCategory_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SubAudioTrackCategory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtraAudioTrackCategory_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ExtraAudioTrackCategory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ManaPlayer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ManaPlayer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UManaSoundComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UManaSoundComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UManaSoundComponent_GetManaPlayer, "GetManaPlayer" }, // 470084905
		{ &Z_Construct_UFunction_UManaSoundComponent_RemoveAudioTrackCategory, "RemoveAudioTrackCategory" }, // 1046179992
		{ &Z_Construct_UFunction_UManaSoundComponent_SetAudioTrackCategory, "SetAudioTrackCategory" }, // 416864475
		{ &Z_Construct_UFunction_UManaSoundComponent_SetManaPlayer, "SetManaPlayer" }, // 1859405496
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManaSoundComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "ManaSoundComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ManaSoundComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManaSoundComponent_Statics::NewProp_bAutoDestroy_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaSoundComponent" },
		{ "ModuleRelativePath", "Public/ManaSoundComponent.h" },
	};
#endif
	void Z_Construct_UClass_UManaSoundComponent_Statics::NewProp_bAutoDestroy_SetBit(void* Obj)
	{
		((UManaSoundComponent*)Obj)->bAutoDestroy = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UManaSoundComponent_Statics::NewProp_bAutoDestroy = { "bAutoDestroy", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UManaSoundComponent), &Z_Construct_UClass_UManaSoundComponent_Statics::NewProp_bAutoDestroy_SetBit, METADATA_PARAMS(Z_Construct_UClass_UManaSoundComponent_Statics::NewProp_bAutoDestroy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManaSoundComponent_Statics::NewProp_bAutoDestroy_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManaSoundComponent_Statics::NewProp_bStopWhenOwnerDestroyed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaSoundComponent" },
		{ "ModuleRelativePath", "Public/ManaSoundComponent.h" },
	};
#endif
	void Z_Construct_UClass_UManaSoundComponent_Statics::NewProp_bStopWhenOwnerDestroyed_SetBit(void* Obj)
	{
		((UManaSoundComponent*)Obj)->bStopWhenOwnerDestroyed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UManaSoundComponent_Statics::NewProp_bStopWhenOwnerDestroyed = { "bStopWhenOwnerDestroyed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UManaSoundComponent), &Z_Construct_UClass_UManaSoundComponent_Statics::NewProp_bStopWhenOwnerDestroyed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UManaSoundComponent_Statics::NewProp_bStopWhenOwnerDestroyed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManaSoundComponent_Statics::NewProp_bStopWhenOwnerDestroyed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManaSoundComponent_Statics::NewProp_bEnableSpatialization_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaSoundComponent" },
		{ "ModuleRelativePath", "Public/ManaSoundComponent.h" },
	};
#endif
	void Z_Construct_UClass_UManaSoundComponent_Statics::NewProp_bEnableSpatialization_SetBit(void* Obj)
	{
		((UManaSoundComponent*)Obj)->bEnableSpatialization = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UManaSoundComponent_Statics::NewProp_bEnableSpatialization = { "bEnableSpatialization", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UManaSoundComponent), &Z_Construct_UClass_UManaSoundComponent_Statics::NewProp_bEnableSpatialization_SetBit, METADATA_PARAMS(Z_Construct_UClass_UManaSoundComponent_Statics::NewProp_bEnableSpatialization_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManaSoundComponent_Statics::NewProp_bEnableSpatialization_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManaSoundComponent_Statics::NewProp_bOverrideVolumeMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaSoundComponent" },
		{ "ModuleRelativePath", "Public/ManaSoundComponent.h" },
	};
#endif
	void Z_Construct_UClass_UManaSoundComponent_Statics::NewProp_bOverrideVolumeMultiplier_SetBit(void* Obj)
	{
		((UManaSoundComponent*)Obj)->bOverrideVolumeMultiplier = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UManaSoundComponent_Statics::NewProp_bOverrideVolumeMultiplier = { "bOverrideVolumeMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UManaSoundComponent), &Z_Construct_UClass_UManaSoundComponent_Statics::NewProp_bOverrideVolumeMultiplier_SetBit, METADATA_PARAMS(Z_Construct_UClass_UManaSoundComponent_Statics::NewProp_bOverrideVolumeMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManaSoundComponent_Statics::NewProp_bOverrideVolumeMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManaSoundComponent_Statics::NewProp_bEnableLowPassFilter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaSoundComponent" },
		{ "ModuleRelativePath", "Public/ManaSoundComponent.h" },
	};
#endif
	void Z_Construct_UClass_UManaSoundComponent_Statics::NewProp_bEnableLowPassFilter_SetBit(void* Obj)
	{
		((UManaSoundComponent*)Obj)->bEnableLowPassFilter = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UManaSoundComponent_Statics::NewProp_bEnableLowPassFilter = { "bEnableLowPassFilter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UManaSoundComponent), &Z_Construct_UClass_UManaSoundComponent_Statics::NewProp_bEnableLowPassFilter_SetBit, METADATA_PARAMS(Z_Construct_UClass_UManaSoundComponent_Statics::NewProp_bEnableLowPassFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManaSoundComponent_Statics::NewProp_bEnableLowPassFilter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManaSoundComponent_Statics::NewProp_VolumeMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaSoundComponent" },
		{ "ModuleRelativePath", "Public/ManaSoundComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UManaSoundComponent_Statics::NewProp_VolumeMultiplier = { "VolumeMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UManaSoundComponent, VolumeMultiplier), METADATA_PARAMS(Z_Construct_UClass_UManaSoundComponent_Statics::NewProp_VolumeMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManaSoundComponent_Statics::NewProp_VolumeMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManaSoundComponent_Statics::NewProp_LowPassFilterFrequency_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaSoundComponent" },
		{ "ModuleRelativePath", "Public/ManaSoundComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UManaSoundComponent_Statics::NewProp_LowPassFilterFrequency = { "LowPassFilterFrequency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UManaSoundComponent, LowPassFilterFrequency), METADATA_PARAMS(Z_Construct_UClass_UManaSoundComponent_Statics::NewProp_LowPassFilterFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManaSoundComponent_Statics::NewProp_LowPassFilterFrequency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManaSoundComponent_Statics::NewProp_PanSpread_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaSoundComponent" },
		{ "ModuleRelativePath", "Public/ManaSoundComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UManaSoundComponent_Statics::NewProp_PanSpread = { "PanSpread", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UManaSoundComponent, PanSpread), METADATA_PARAMS(Z_Construct_UClass_UManaSoundComponent_Statics::NewProp_PanSpread_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManaSoundComponent_Statics::NewProp_PanSpread_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManaSoundComponent_Statics::NewProp_MinAttenuationDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaSoundComponent" },
		{ "ModuleRelativePath", "Public/ManaSoundComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UManaSoundComponent_Statics::NewProp_MinAttenuationDistance = { "MinAttenuationDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UManaSoundComponent, MinAttenuationDistance), METADATA_PARAMS(Z_Construct_UClass_UManaSoundComponent_Statics::NewProp_MinAttenuationDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManaSoundComponent_Statics::NewProp_MinAttenuationDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManaSoundComponent_Statics::NewProp_MaxAttenuationDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaSoundComponent" },
		{ "ModuleRelativePath", "Public/ManaSoundComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UManaSoundComponent_Statics::NewProp_MaxAttenuationDistance = { "MaxAttenuationDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UManaSoundComponent, MaxAttenuationDistance), METADATA_PARAMS(Z_Construct_UClass_UManaSoundComponent_Statics::NewProp_MaxAttenuationDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManaSoundComponent_Statics::NewProp_MaxAttenuationDistance_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UManaSoundComponent_Statics::NewProp_AisacControls_Inner = { "AisacControls", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAtomAisacControlParam, METADATA_PARAMS(nullptr, 0) }; // 2601457874
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManaSoundComponent_Statics::NewProp_AisacControls_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaSoundComponent" },
		{ "ModuleRelativePath", "Public/ManaSoundComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UManaSoundComponent_Statics::NewProp_AisacControls = { "AisacControls", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UManaSoundComponent, AisacControls), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UManaSoundComponent_Statics::NewProp_AisacControls_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManaSoundComponent_Statics::NewProp_AisacControls_MetaData)) }; // 2601457874
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UManaSoundComponent_Statics::NewProp_AttachedAisacs_Inner = { "AttachedAisacs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManaSoundComponent_Statics::NewProp_AttachedAisacs_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaSoundComponent" },
		{ "ModuleRelativePath", "Public/ManaSoundComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UManaSoundComponent_Statics::NewProp_AttachedAisacs = { "AttachedAisacs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UManaSoundComponent, AttachedAisacs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UManaSoundComponent_Statics::NewProp_AttachedAisacs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManaSoundComponent_Statics::NewProp_AttachedAisacs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManaSoundComponent_Statics::NewProp_AudioTrackCategory_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaSoundComponent" },
		{ "ModuleRelativePath", "Public/ManaSoundComponent.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UManaSoundComponent_Statics::NewProp_AudioTrackCategory = { "AudioTrackCategory", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UManaSoundComponent, AudioTrackCategory), METADATA_PARAMS(Z_Construct_UClass_UManaSoundComponent_Statics::NewProp_AudioTrackCategory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManaSoundComponent_Statics::NewProp_AudioTrackCategory_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManaSoundComponent_Statics::NewProp_SubAudioTrackCategory_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaSoundComponent" },
		{ "ModuleRelativePath", "Public/ManaSoundComponent.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UManaSoundComponent_Statics::NewProp_SubAudioTrackCategory = { "SubAudioTrackCategory", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UManaSoundComponent, SubAudioTrackCategory), METADATA_PARAMS(Z_Construct_UClass_UManaSoundComponent_Statics::NewProp_SubAudioTrackCategory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManaSoundComponent_Statics::NewProp_SubAudioTrackCategory_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManaSoundComponent_Statics::NewProp_ExtraAudioTrackCategory_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaSoundComponent" },
		{ "ModuleRelativePath", "Public/ManaSoundComponent.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UManaSoundComponent_Statics::NewProp_ExtraAudioTrackCategory = { "ExtraAudioTrackCategory", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UManaSoundComponent, ExtraAudioTrackCategory), METADATA_PARAMS(Z_Construct_UClass_UManaSoundComponent_Statics::NewProp_ExtraAudioTrackCategory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManaSoundComponent_Statics::NewProp_ExtraAudioTrackCategory_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManaSoundComponent_Statics::NewProp_ManaPlayer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaSoundComponent" },
		{ "ModuleRelativePath", "Public/ManaSoundComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UManaSoundComponent_Statics::NewProp_ManaPlayer = { "ManaPlayer", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UManaSoundComponent, ManaPlayer), Z_Construct_UClass_UManaPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UManaSoundComponent_Statics::NewProp_ManaPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManaSoundComponent_Statics::NewProp_ManaPlayer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UManaSoundComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaSoundComponent_Statics::NewProp_bAutoDestroy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaSoundComponent_Statics::NewProp_bStopWhenOwnerDestroyed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaSoundComponent_Statics::NewProp_bEnableSpatialization,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaSoundComponent_Statics::NewProp_bOverrideVolumeMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaSoundComponent_Statics::NewProp_bEnableLowPassFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaSoundComponent_Statics::NewProp_VolumeMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaSoundComponent_Statics::NewProp_LowPassFilterFrequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaSoundComponent_Statics::NewProp_PanSpread,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaSoundComponent_Statics::NewProp_MinAttenuationDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaSoundComponent_Statics::NewProp_MaxAttenuationDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaSoundComponent_Statics::NewProp_AisacControls_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaSoundComponent_Statics::NewProp_AisacControls,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaSoundComponent_Statics::NewProp_AttachedAisacs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaSoundComponent_Statics::NewProp_AttachedAisacs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaSoundComponent_Statics::NewProp_AudioTrackCategory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaSoundComponent_Statics::NewProp_SubAudioTrackCategory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaSoundComponent_Statics::NewProp_ExtraAudioTrackCategory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManaSoundComponent_Statics::NewProp_ManaPlayer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UManaSoundComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UManaSoundComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UManaSoundComponent_Statics::ClassParams = {
		&UManaSoundComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UManaSoundComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UManaSoundComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UManaSoundComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UManaSoundComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UManaSoundComponent()
	{
		if (!Z_Registration_Info_UClass_UManaSoundComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UManaSoundComponent.OuterSingleton, Z_Construct_UClass_UManaSoundComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UManaSoundComponent.OuterSingleton;
	}
	template<> CRIWARERUNTIME_API UClass* StaticClass<UManaSoundComponent>()
	{
		return UManaSoundComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UManaSoundComponent);
	UManaSoundComponent::~UManaSoundComponent() {}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaSoundComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaSoundComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UManaSoundComponent, UManaSoundComponent::StaticClass, TEXT("UManaSoundComponent"), &Z_Registration_Info_UClass_UManaSoundComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UManaSoundComponent), 1794251284U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaSoundComponent_h_3192194275(TEXT("/Script/CriWareRuntime"),
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaSoundComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_ManaSoundComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
