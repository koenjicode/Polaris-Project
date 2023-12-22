// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/PostEventAtLocationAsync.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePostEventAtLocationAsync() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UPostEventAtLocationAsync();
	AKAUDIO_API UClass* Z_Construct_UClass_UPostEventAtLocationAsync_NoRegister();
	AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_PostEventAtLocationAsyncOutputPin__DelegateSignature();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	DEFINE_FUNCTION(UPostEventAtLocationAsync::execPollPostEventFuture)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PollPostEventFuture();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPostEventAtLocationAsync::execPostEventAtLocationAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UAkAudioEvent,Z_Param_AkEvent);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_STRUCT(FRotator,Z_Param_Orientation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPostEventAtLocationAsync**)Z_Param__Result=UPostEventAtLocationAsync::PostEventAtLocationAsync(Z_Param_WorldContextObject,Z_Param_AkEvent,Z_Param_Location,Z_Param_Orientation);
		P_NATIVE_END;
	}
	void UPostEventAtLocationAsync::StaticRegisterNativesUPostEventAtLocationAsync()
	{
		UClass* Class = UPostEventAtLocationAsync::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PollPostEventFuture", &UPostEventAtLocationAsync::execPollPostEventFuture },
			{ "PostEventAtLocationAsync", &UPostEventAtLocationAsync::execPostEventAtLocationAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPostEventAtLocationAsync_PollPostEventFuture_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPostEventAtLocationAsync_PollPostEventFuture_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PostEventAtLocationAsync.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPostEventAtLocationAsync_PollPostEventFuture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPostEventAtLocationAsync, nullptr, "PollPostEventFuture", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPostEventAtLocationAsync_PollPostEventFuture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPostEventAtLocationAsync_PollPostEventFuture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPostEventAtLocationAsync_PollPostEventFuture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPostEventAtLocationAsync_PollPostEventFuture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPostEventAtLocationAsync_PostEventAtLocationAsync_Statics
	{
		struct PostEventAtLocationAsync_eventPostEventAtLocationAsync_Parms
		{
			const UObject* WorldContextObject;
			UAkAudioEvent* AkEvent;
			FVector Location;
			FRotator Orientation;
			UPostEventAtLocationAsync* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AkEvent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Orientation;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPostEventAtLocationAsync_PostEventAtLocationAsync_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPostEventAtLocationAsync_PostEventAtLocationAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PostEventAtLocationAsync_eventPostEventAtLocationAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPostEventAtLocationAsync_PostEventAtLocationAsync_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPostEventAtLocationAsync_PostEventAtLocationAsync_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPostEventAtLocationAsync_PostEventAtLocationAsync_Statics::NewProp_AkEvent = { "AkEvent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PostEventAtLocationAsync_eventPostEventAtLocationAsync_Parms, AkEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPostEventAtLocationAsync_PostEventAtLocationAsync_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PostEventAtLocationAsync_eventPostEventAtLocationAsync_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPostEventAtLocationAsync_PostEventAtLocationAsync_Statics::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PostEventAtLocationAsync_eventPostEventAtLocationAsync_Parms, Orientation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPostEventAtLocationAsync_PostEventAtLocationAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PostEventAtLocationAsync_eventPostEventAtLocationAsync_Parms, ReturnValue), Z_Construct_UClass_UPostEventAtLocationAsync_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPostEventAtLocationAsync_PostEventAtLocationAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPostEventAtLocationAsync_PostEventAtLocationAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPostEventAtLocationAsync_PostEventAtLocationAsync_Statics::NewProp_AkEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPostEventAtLocationAsync_PostEventAtLocationAsync_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPostEventAtLocationAsync_PostEventAtLocationAsync_Statics::NewProp_Orientation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPostEventAtLocationAsync_PostEventAtLocationAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPostEventAtLocationAsync_PostEventAtLocationAsync_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PostEventAtLocationAsync.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPostEventAtLocationAsync_PostEventAtLocationAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPostEventAtLocationAsync, nullptr, "PostEventAtLocationAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPostEventAtLocationAsync_PostEventAtLocationAsync_Statics::PostEventAtLocationAsync_eventPostEventAtLocationAsync_Parms), Z_Construct_UFunction_UPostEventAtLocationAsync_PostEventAtLocationAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPostEventAtLocationAsync_PostEventAtLocationAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPostEventAtLocationAsync_PostEventAtLocationAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPostEventAtLocationAsync_PostEventAtLocationAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPostEventAtLocationAsync_PostEventAtLocationAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPostEventAtLocationAsync_PostEventAtLocationAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPostEventAtLocationAsync);
	UClass* Z_Construct_UClass_UPostEventAtLocationAsync_NoRegister()
	{
		return UPostEventAtLocationAsync::StaticClass();
	}
	struct Z_Construct_UClass_UPostEventAtLocationAsync_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Completed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Completed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPostEventAtLocationAsync_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPostEventAtLocationAsync_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPostEventAtLocationAsync_PollPostEventFuture, "PollPostEventFuture" }, // 3259125743
		{ &Z_Construct_UFunction_UPostEventAtLocationAsync_PostEventAtLocationAsync, "PostEventAtLocationAsync" }, // 1566119601
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPostEventAtLocationAsync_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PostEventAtLocationAsync.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PostEventAtLocationAsync.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPostEventAtLocationAsync_Statics::NewProp_Completed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PostEventAtLocationAsync" },
		{ "ModuleRelativePath", "Public/PostEventAtLocationAsync.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPostEventAtLocationAsync_Statics::NewProp_Completed = { "Completed", nullptr, (EPropertyFlags)0x0010000010080005, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPostEventAtLocationAsync, Completed), Z_Construct_UDelegateFunction_AkAudio_PostEventAtLocationAsyncOutputPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPostEventAtLocationAsync_Statics::NewProp_Completed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPostEventAtLocationAsync_Statics::NewProp_Completed_MetaData)) }; // 3666191394
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPostEventAtLocationAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPostEventAtLocationAsync_Statics::NewProp_Completed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPostEventAtLocationAsync_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPostEventAtLocationAsync>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPostEventAtLocationAsync_Statics::ClassParams = {
		&UPostEventAtLocationAsync::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPostEventAtLocationAsync_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPostEventAtLocationAsync_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPostEventAtLocationAsync_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPostEventAtLocationAsync_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPostEventAtLocationAsync()
	{
		if (!Z_Registration_Info_UClass_UPostEventAtLocationAsync.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPostEventAtLocationAsync.OuterSingleton, Z_Construct_UClass_UPostEventAtLocationAsync_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPostEventAtLocationAsync.OuterSingleton;
	}
	template<> AKAUDIO_API UClass* StaticClass<UPostEventAtLocationAsync>()
	{
		return UPostEventAtLocationAsync::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPostEventAtLocationAsync);
	UPostEventAtLocationAsync::~UPostEventAtLocationAsync() {}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_PostEventAtLocationAsync_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_PostEventAtLocationAsync_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPostEventAtLocationAsync, UPostEventAtLocationAsync::StaticClass, TEXT("UPostEventAtLocationAsync"), &Z_Registration_Info_UClass_UPostEventAtLocationAsync, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPostEventAtLocationAsync), 2082523679U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_PostEventAtLocationAsync_h_3616794379(TEXT("/Script/AkAudio"),
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_PostEventAtLocationAsync_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_PostEventAtLocationAsync_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
