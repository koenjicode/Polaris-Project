// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/AtomCallbackManager.h"
#include "CriWareRuntime/Public/AtomBeatSyncInfo.h"
#include "CriWareRuntime/Public/AtomSequenceInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomCallbackManager() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomCallbackManager();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomCallbackManager_NoRegister();
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EAtomSequenceEventType();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomBeatSyncInfo();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomSequenceInfo();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	DEFINE_FUNCTION(UAtomCallbackManager::execNativeBreakAtomBeatSyncInfo)
	{
		P_GET_STRUCT_REF(FAtomBeatSyncInfo,Z_Param_Out_BeatSyncInfo);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_BarCnt);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_BeatCnt);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_BeatProgress);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Bpm);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Offset);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_NumBeats);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAtomCallbackManager::NativeBreakAtomBeatSyncInfo(Z_Param_Out_BeatSyncInfo,Z_Param_Out_BarCnt,Z_Param_Out_BeatCnt,Z_Param_Out_BeatProgress,Z_Param_Out_Bpm,Z_Param_Out_Offset,Z_Param_Out_NumBeats);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtomCallbackManager::execNativeBreakAtomSequenceInfo)
	{
		P_GET_STRUCT_REF(FAtomSequenceInfo,Z_Param_Out_SequenceInfo);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Time);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_TagName);
		P_GET_ENUM_REF(EAtomSequenceEventType,Z_Param_Out_EventType);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_CallbackID);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAtomCallbackManager::NativeBreakAtomSequenceInfo(Z_Param_Out_SequenceInfo,Z_Param_Out_Time,Z_Param_Out_TagName,(EAtomSequenceEventType&)(Z_Param_Out_EventType),Z_Param_Out_CallbackID);
		P_NATIVE_END;
	}
	void UAtomCallbackManager::StaticRegisterNativesUAtomCallbackManager()
	{
		UClass* Class = UAtomCallbackManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "NativeBreakAtomBeatSyncInfo", &UAtomCallbackManager::execNativeBreakAtomBeatSyncInfo },
			{ "NativeBreakAtomSequenceInfo", &UAtomCallbackManager::execNativeBreakAtomSequenceInfo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAtomCallbackManager_NativeBreakAtomBeatSyncInfo_Statics
	{
		struct AtomCallbackManager_eventNativeBreakAtomBeatSyncInfo_Parms
		{
			FAtomBeatSyncInfo BeatSyncInfo;
			int32 BarCnt;
			int32 BeatCnt;
			float BeatProgress;
			float Bpm;
			int32 Offset;
			int32 NumBeats;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BeatSyncInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BeatSyncInfo;
		static const UECodeGen_Private::FIntPropertyParams NewProp_BarCnt;
		static const UECodeGen_Private::FIntPropertyParams NewProp_BeatCnt;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BeatProgress;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Bpm;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Offset;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumBeats;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomCallbackManager_NativeBreakAtomBeatSyncInfo_Statics::NewProp_BeatSyncInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomCallbackManager_NativeBreakAtomBeatSyncInfo_Statics::NewProp_BeatSyncInfo = { "BeatSyncInfo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomCallbackManager_eventNativeBreakAtomBeatSyncInfo_Parms, BeatSyncInfo), Z_Construct_UScriptStruct_FAtomBeatSyncInfo, METADATA_PARAMS(Z_Construct_UFunction_UAtomCallbackManager_NativeBreakAtomBeatSyncInfo_Statics::NewProp_BeatSyncInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCallbackManager_NativeBreakAtomBeatSyncInfo_Statics::NewProp_BeatSyncInfo_MetaData)) }; // 1083044465
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtomCallbackManager_NativeBreakAtomBeatSyncInfo_Statics::NewProp_BarCnt = { "BarCnt", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomCallbackManager_eventNativeBreakAtomBeatSyncInfo_Parms, BarCnt), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtomCallbackManager_NativeBreakAtomBeatSyncInfo_Statics::NewProp_BeatCnt = { "BeatCnt", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomCallbackManager_eventNativeBreakAtomBeatSyncInfo_Parms, BeatCnt), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomCallbackManager_NativeBreakAtomBeatSyncInfo_Statics::NewProp_BeatProgress = { "BeatProgress", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomCallbackManager_eventNativeBreakAtomBeatSyncInfo_Parms, BeatProgress), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomCallbackManager_NativeBreakAtomBeatSyncInfo_Statics::NewProp_Bpm = { "Bpm", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomCallbackManager_eventNativeBreakAtomBeatSyncInfo_Parms, Bpm), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtomCallbackManager_NativeBreakAtomBeatSyncInfo_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomCallbackManager_eventNativeBreakAtomBeatSyncInfo_Parms, Offset), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtomCallbackManager_NativeBreakAtomBeatSyncInfo_Statics::NewProp_NumBeats = { "NumBeats", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomCallbackManager_eventNativeBreakAtomBeatSyncInfo_Parms, NumBeats), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomCallbackManager_NativeBreakAtomBeatSyncInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCallbackManager_NativeBreakAtomBeatSyncInfo_Statics::NewProp_BeatSyncInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCallbackManager_NativeBreakAtomBeatSyncInfo_Statics::NewProp_BarCnt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCallbackManager_NativeBreakAtomBeatSyncInfo_Statics::NewProp_BeatCnt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCallbackManager_NativeBreakAtomBeatSyncInfo_Statics::NewProp_BeatProgress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCallbackManager_NativeBreakAtomBeatSyncInfo_Statics::NewProp_Bpm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCallbackManager_NativeBreakAtomBeatSyncInfo_Statics::NewProp_Offset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCallbackManager_NativeBreakAtomBeatSyncInfo_Statics::NewProp_NumBeats,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomCallbackManager_NativeBreakAtomBeatSyncInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomCallbackManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomCallbackManager_NativeBreakAtomBeatSyncInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomCallbackManager, nullptr, "NativeBreakAtomBeatSyncInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomCallbackManager_NativeBreakAtomBeatSyncInfo_Statics::AtomCallbackManager_eventNativeBreakAtomBeatSyncInfo_Parms), Z_Construct_UFunction_UAtomCallbackManager_NativeBreakAtomBeatSyncInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCallbackManager_NativeBreakAtomBeatSyncInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomCallbackManager_NativeBreakAtomBeatSyncInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCallbackManager_NativeBreakAtomBeatSyncInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomCallbackManager_NativeBreakAtomBeatSyncInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomCallbackManager_NativeBreakAtomBeatSyncInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtomCallbackManager_NativeBreakAtomSequenceInfo_Statics
	{
		struct AtomCallbackManager_eventNativeBreakAtomSequenceInfo_Parms
		{
			FAtomSequenceInfo SequenceInfo;
			float Time;
			FString TagName;
			EAtomSequenceEventType EventType;
			int32 CallbackID;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SequenceInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SequenceInfo;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UECodeGen_Private::FStrPropertyParams NewProp_TagName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_EventType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_EventType;
		static const UECodeGen_Private::FIntPropertyParams NewProp_CallbackID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomCallbackManager_NativeBreakAtomSequenceInfo_Statics::NewProp_SequenceInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtomCallbackManager_NativeBreakAtomSequenceInfo_Statics::NewProp_SequenceInfo = { "SequenceInfo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomCallbackManager_eventNativeBreakAtomSequenceInfo_Parms, SequenceInfo), Z_Construct_UScriptStruct_FAtomSequenceInfo, METADATA_PARAMS(Z_Construct_UFunction_UAtomCallbackManager_NativeBreakAtomSequenceInfo_Statics::NewProp_SequenceInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCallbackManager_NativeBreakAtomSequenceInfo_Statics::NewProp_SequenceInfo_MetaData)) }; // 3281375198
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtomCallbackManager_NativeBreakAtomSequenceInfo_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomCallbackManager_eventNativeBreakAtomSequenceInfo_Parms, Time), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAtomCallbackManager_NativeBreakAtomSequenceInfo_Statics::NewProp_TagName = { "TagName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomCallbackManager_eventNativeBreakAtomSequenceInfo_Parms, TagName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAtomCallbackManager_NativeBreakAtomSequenceInfo_Statics::NewProp_EventType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAtomCallbackManager_NativeBreakAtomSequenceInfo_Statics::NewProp_EventType = { "EventType", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomCallbackManager_eventNativeBreakAtomSequenceInfo_Parms, EventType), Z_Construct_UEnum_CriWareRuntime_EAtomSequenceEventType, METADATA_PARAMS(nullptr, 0) }; // 3786532444
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtomCallbackManager_NativeBreakAtomSequenceInfo_Statics::NewProp_CallbackID = { "CallbackID", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AtomCallbackManager_eventNativeBreakAtomSequenceInfo_Parms, CallbackID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtomCallbackManager_NativeBreakAtomSequenceInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCallbackManager_NativeBreakAtomSequenceInfo_Statics::NewProp_SequenceInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCallbackManager_NativeBreakAtomSequenceInfo_Statics::NewProp_Time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCallbackManager_NativeBreakAtomSequenceInfo_Statics::NewProp_TagName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCallbackManager_NativeBreakAtomSequenceInfo_Statics::NewProp_EventType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCallbackManager_NativeBreakAtomSequenceInfo_Statics::NewProp_EventType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtomCallbackManager_NativeBreakAtomSequenceInfo_Statics::NewProp_CallbackID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtomCallbackManager_NativeBreakAtomSequenceInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtomCallbackManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtomCallbackManager_NativeBreakAtomSequenceInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtomCallbackManager, nullptr, "NativeBreakAtomSequenceInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAtomCallbackManager_NativeBreakAtomSequenceInfo_Statics::AtomCallbackManager_eventNativeBreakAtomSequenceInfo_Parms), Z_Construct_UFunction_UAtomCallbackManager_NativeBreakAtomSequenceInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCallbackManager_NativeBreakAtomSequenceInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtomCallbackManager_NativeBreakAtomSequenceInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtomCallbackManager_NativeBreakAtomSequenceInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtomCallbackManager_NativeBreakAtomSequenceInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtomCallbackManager_NativeBreakAtomSequenceInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtomCallbackManager);
	UClass* Z_Construct_UClass_UAtomCallbackManager_NoRegister()
	{
		return UAtomCallbackManager::StaticClass();
	}
	struct Z_Construct_UClass_UAtomCallbackManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomCallbackManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAtomCallbackManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtomCallbackManager_NativeBreakAtomBeatSyncInfo, "NativeBreakAtomBeatSyncInfo" }, // 1551645305
		{ &Z_Construct_UFunction_UAtomCallbackManager_NativeBreakAtomSequenceInfo, "NativeBreakAtomSequenceInfo" }, // 1587878121
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomCallbackManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AtomCallbackManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AtomCallbackManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomCallbackManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomCallbackManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtomCallbackManager_Statics::ClassParams = {
		&UAtomCallbackManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomCallbackManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomCallbackManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomCallbackManager()
	{
		if (!Z_Registration_Info_UClass_UAtomCallbackManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtomCallbackManager.OuterSingleton, Z_Construct_UClass_UAtomCallbackManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAtomCallbackManager.OuterSingleton;
	}
	template<> CRIWARERUNTIME_API UClass* StaticClass<UAtomCallbackManager>()
	{
		return UAtomCallbackManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomCallbackManager);
	UAtomCallbackManager::~UAtomCallbackManager() {}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCallbackManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCallbackManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAtomCallbackManager, UAtomCallbackManager::StaticClass, TEXT("UAtomCallbackManager"), &Z_Registration_Info_UClass_UAtomCallbackManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtomCallbackManager), 1330138849U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCallbackManager_h_2178239043(TEXT("/Script/CriWareRuntime"),
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCallbackManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_AtomCallbackManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
