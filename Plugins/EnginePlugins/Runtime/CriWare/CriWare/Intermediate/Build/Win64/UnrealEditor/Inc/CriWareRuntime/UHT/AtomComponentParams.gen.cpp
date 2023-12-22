// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/AtomComponentParams.h"
#include "CriWareRuntime/Public/AtomAisacControlParam.h"
#include "CriWareRuntime/Public/AtomSelectorParam.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomComponentParams() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomSoundObject_NoRegister();
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EAtomLoopSetting();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomAisacControlParam();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomComponentParams();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomSelectorParam();
	ENGINE_API UClass* Z_Construct_UClass_USoundAttenuation_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AtomComponentParams;
class UScriptStruct* FAtomComponentParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AtomComponentParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AtomComponentParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomComponentParams, (UObject*)Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AtomComponentParams"));
	}
	return Z_Registration_Info_UScriptStruct_AtomComponentParams.OuterSingleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FAtomComponentParams>()
{
	return FAtomComponentParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAtomComponentParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultVolume_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultVolume;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultPitchMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultPitchMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableMultipleSoundPlayback_MetaData[];
#endif
		static void NewProp_bEnableMultipleSoundPlayback_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableMultipleSoundPlayback;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUsePlaylist_MetaData[];
#endif
		static void NewProp_bUsePlaylist_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsePlaylist;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsMovable_MetaData[];
#endif
		static void NewProp_bIsMovable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsMovable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanStraddleAudioVolume_MetaData[];
#endif
		static void NewProp_bCanStraddleAudioVolume_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanStraddleAudioVolume;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseAudioVolume_MetaData[];
#endif
		static void NewProp_bUseAudioVolume_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAudioVolume;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseAreaSoundVolume_MetaData[];
#endif
		static void NewProp_bUseAreaSoundVolume_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAreaSoundVolume;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttenuationSettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttenuationSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultBlockIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DefaultBlockIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultAisacControl_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultAisacControl_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultAisacControl;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultSelectorLabel_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSelectorLabel_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultSelectorLabel;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LoopSetting_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoopSetting_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LoopSetting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomComponentParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AtomComponentParams.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomComponentParams>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_DefaultVolume_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomComponentParams" },
		{ "ModuleRelativePath", "Public/AtomComponentParams.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_DefaultVolume = { "DefaultVolume", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomComponentParams, DefaultVolume), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_DefaultVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_DefaultVolume_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_DefaultPitchMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomComponentParams" },
		{ "ModuleRelativePath", "Public/AtomComponentParams.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_DefaultPitchMultiplier = { "DefaultPitchMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomComponentParams, DefaultPitchMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_DefaultPitchMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_DefaultPitchMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_StartTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomComponentParams" },
		{ "ModuleRelativePath", "Public/AtomComponentParams.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomComponentParams, StartTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_StartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_StartTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_bEnableMultipleSoundPlayback_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomComponentParams" },
		{ "ModuleRelativePath", "Public/AtomComponentParams.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_bEnableMultipleSoundPlayback_SetBit(void* Obj)
	{
		((FAtomComponentParams*)Obj)->bEnableMultipleSoundPlayback = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_bEnableMultipleSoundPlayback = { "bEnableMultipleSoundPlayback", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FAtomComponentParams), &Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_bEnableMultipleSoundPlayback_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_bEnableMultipleSoundPlayback_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_bEnableMultipleSoundPlayback_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_bUsePlaylist_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomComponentParams" },
		{ "ModuleRelativePath", "Public/AtomComponentParams.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_bUsePlaylist_SetBit(void* Obj)
	{
		((FAtomComponentParams*)Obj)->bUsePlaylist = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_bUsePlaylist = { "bUsePlaylist", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FAtomComponentParams), &Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_bUsePlaylist_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_bUsePlaylist_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_bUsePlaylist_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_bIsMovable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomComponentParams" },
		{ "ModuleRelativePath", "Public/AtomComponentParams.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_bIsMovable_SetBit(void* Obj)
	{
		((FAtomComponentParams*)Obj)->bIsMovable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_bIsMovable = { "bIsMovable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAtomComponentParams), &Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_bIsMovable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_bIsMovable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_bIsMovable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_bCanStraddleAudioVolume_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomComponentParams" },
		{ "ModuleRelativePath", "Public/AtomComponentParams.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_bCanStraddleAudioVolume_SetBit(void* Obj)
	{
		((FAtomComponentParams*)Obj)->bCanStraddleAudioVolume = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_bCanStraddleAudioVolume = { "bCanStraddleAudioVolume", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAtomComponentParams), &Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_bCanStraddleAudioVolume_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_bCanStraddleAudioVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_bCanStraddleAudioVolume_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_bUseAudioVolume_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomComponentParams" },
		{ "ModuleRelativePath", "Public/AtomComponentParams.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_bUseAudioVolume_SetBit(void* Obj)
	{
		((FAtomComponentParams*)Obj)->bUseAudioVolume = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_bUseAudioVolume = { "bUseAudioVolume", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAtomComponentParams), &Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_bUseAudioVolume_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_bUseAudioVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_bUseAudioVolume_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_bUseAreaSoundVolume_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomComponentParams" },
		{ "ModuleRelativePath", "Public/AtomComponentParams.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_bUseAreaSoundVolume_SetBit(void* Obj)
	{
		((FAtomComponentParams*)Obj)->bUseAreaSoundVolume = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_bUseAreaSoundVolume = { "bUseAreaSoundVolume", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAtomComponentParams), &Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_bUseAreaSoundVolume_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_bUseAreaSoundVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_bUseAreaSoundVolume_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_SoundObject_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomComponentParams" },
		{ "ModuleRelativePath", "Public/AtomComponentParams.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_SoundObject = { "SoundObject", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomComponentParams, SoundObject), Z_Construct_UClass_UAtomSoundObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_SoundObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_SoundObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_AttenuationSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomComponentParams" },
		{ "ModuleRelativePath", "Public/AtomComponentParams.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_AttenuationSettings = { "AttenuationSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomComponentParams, AttenuationSettings), Z_Construct_UClass_USoundAttenuation_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_AttenuationSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_AttenuationSettings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_DefaultBlockIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomComponentParams" },
		{ "ModuleRelativePath", "Public/AtomComponentParams.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_DefaultBlockIndex = { "DefaultBlockIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomComponentParams, DefaultBlockIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_DefaultBlockIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_DefaultBlockIndex_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_DefaultAisacControl_Inner = { "DefaultAisacControl", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAtomAisacControlParam, METADATA_PARAMS(nullptr, 0) }; // 2601457874
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_DefaultAisacControl_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomComponentParams" },
		{ "ModuleRelativePath", "Public/AtomComponentParams.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_DefaultAisacControl = { "DefaultAisacControl", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomComponentParams, DefaultAisacControl), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_DefaultAisacControl_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_DefaultAisacControl_MetaData)) }; // 2601457874
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_DefaultSelectorLabel_Inner = { "DefaultSelectorLabel", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAtomSelectorParam, METADATA_PARAMS(nullptr, 0) }; // 676708554
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_DefaultSelectorLabel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomComponentParams" },
		{ "ModuleRelativePath", "Public/AtomComponentParams.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_DefaultSelectorLabel = { "DefaultSelectorLabel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomComponentParams, DefaultSelectorLabel), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_DefaultSelectorLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_DefaultSelectorLabel_MetaData)) }; // 676708554
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_LoopSetting_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_LoopSetting_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomComponentParams" },
		{ "ModuleRelativePath", "Public/AtomComponentParams.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_LoopSetting = { "LoopSetting", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomComponentParams, LoopSetting), Z_Construct_UEnum_CriWareRuntime_EAtomLoopSetting, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_LoopSetting_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_LoopSetting_MetaData)) }; // 2960216734
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_Rotation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomComponentParams" },
		{ "ModuleRelativePath", "Public/AtomComponentParams.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAtomComponentParams, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_Rotation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomComponentParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_DefaultVolume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_DefaultPitchMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_StartTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_bEnableMultipleSoundPlayback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_bUsePlaylist,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_bIsMovable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_bCanStraddleAudioVolume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_bUseAudioVolume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_bUseAreaSoundVolume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_SoundObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_AttenuationSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_DefaultBlockIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_DefaultAisacControl_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_DefaultAisacControl,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_DefaultSelectorLabel_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_DefaultSelectorLabel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_LoopSetting_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_LoopSetting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewProp_Rotation,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomComponentParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
		nullptr,
		&NewStructOps,
		"AtomComponentParams",
		sizeof(FAtomComponentParams),
		alignof(FAtomComponentParams),
		Z_Construct_UScriptStruct_FAtomComponentParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomComponentParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomComponentParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomComponentParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomComponentParams()
	{
		if (!Z_Registration_Info_UScriptStruct_AtomComponentParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AtomComponentParams.InnerSingleton, Z_Construct_UScriptStruct_FAtomComponentParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AtomComponentParams.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomComponentParams_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomComponentParams_h_Statics::ScriptStructInfo[] = {
		{ FAtomComponentParams::StaticStruct, Z_Construct_UScriptStruct_FAtomComponentParams_Statics::NewStructOps, TEXT("AtomComponentParams"), &Z_Registration_Info_UScriptStruct_AtomComponentParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAtomComponentParams), 3559961613U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomComponentParams_h_2946502375(TEXT("/Script/CriWareRuntime"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomComponentParams_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomComponentParams_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
