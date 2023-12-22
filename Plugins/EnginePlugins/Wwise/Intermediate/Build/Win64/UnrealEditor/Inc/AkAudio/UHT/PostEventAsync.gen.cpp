// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/PostEventAsync.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePostEventAsync() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UPostEventAsync();
	AKAUDIO_API UClass* Z_Construct_UClass_UPostEventAsync_NoRegister();
	AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_OnAkPostEventCallback__DelegateSignature();
	AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_PostEventAsyncOutputPin__DelegateSignature();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	DEFINE_FUNCTION(UPostEventAsync::execPollPostEventFuture)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PollPostEventFuture();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPostEventAsync::execPostEventAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UAkAudioEvent,Z_Param_AkEvent);
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_PROPERTY(FIntProperty,Z_Param_CallbackMask);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_PostEventCallback);
		P_GET_UBOOL(Z_Param_bStopWhenAttachedToDestroyed);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPostEventAsync**)Z_Param__Result=UPostEventAsync::PostEventAsync(Z_Param_WorldContextObject,Z_Param_AkEvent,Z_Param_Actor,Z_Param_CallbackMask,FOnAkPostEventCallback(Z_Param_Out_PostEventCallback),Z_Param_bStopWhenAttachedToDestroyed);
		P_NATIVE_END;
	}
	void UPostEventAsync::StaticRegisterNativesUPostEventAsync()
	{
		UClass* Class = UPostEventAsync::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PollPostEventFuture", &UPostEventAsync::execPollPostEventFuture },
			{ "PostEventAsync", &UPostEventAsync::execPostEventAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPostEventAsync_PollPostEventFuture_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPostEventAsync_PollPostEventFuture_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PostEventAsync.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPostEventAsync_PollPostEventFuture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPostEventAsync, nullptr, "PollPostEventFuture", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPostEventAsync_PollPostEventFuture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPostEventAsync_PollPostEventFuture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPostEventAsync_PollPostEventFuture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPostEventAsync_PollPostEventFuture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPostEventAsync_PostEventAsync_Statics
	{
		struct PostEventAsync_eventPostEventAsync_Parms
		{
			const UObject* WorldContextObject;
			UAkAudioEvent* AkEvent;
			AActor* Actor;
			int32 CallbackMask;
			FScriptDelegate PostEventCallback;
			bool bStopWhenAttachedToDestroyed;
			UPostEventAsync* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AkEvent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FIntPropertyParams NewProp_CallbackMask;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PostEventCallback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_PostEventCallback;
		static void NewProp_bStopWhenAttachedToDestroyed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStopWhenAttachedToDestroyed;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPostEventAsync_PostEventAsync_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPostEventAsync_PostEventAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PostEventAsync_eventPostEventAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPostEventAsync_PostEventAsync_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPostEventAsync_PostEventAsync_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPostEventAsync_PostEventAsync_Statics::NewProp_AkEvent = { "AkEvent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PostEventAsync_eventPostEventAsync_Parms, AkEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPostEventAsync_PostEventAsync_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PostEventAsync_eventPostEventAsync_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPostEventAsync_PostEventAsync_Statics::NewProp_CallbackMask = { "CallbackMask", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PostEventAsync_eventPostEventAsync_Parms, CallbackMask), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPostEventAsync_PostEventAsync_Statics::NewProp_PostEventCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPostEventAsync_PostEventAsync_Statics::NewProp_PostEventCallback = { "PostEventCallback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PostEventAsync_eventPostEventAsync_Parms, PostEventCallback), Z_Construct_UDelegateFunction_AkAudio_OnAkPostEventCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UPostEventAsync_PostEventAsync_Statics::NewProp_PostEventCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPostEventAsync_PostEventAsync_Statics::NewProp_PostEventCallback_MetaData)) }; // 1290465881
	void Z_Construct_UFunction_UPostEventAsync_PostEventAsync_Statics::NewProp_bStopWhenAttachedToDestroyed_SetBit(void* Obj)
	{
		((PostEventAsync_eventPostEventAsync_Parms*)Obj)->bStopWhenAttachedToDestroyed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPostEventAsync_PostEventAsync_Statics::NewProp_bStopWhenAttachedToDestroyed = { "bStopWhenAttachedToDestroyed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PostEventAsync_eventPostEventAsync_Parms), &Z_Construct_UFunction_UPostEventAsync_PostEventAsync_Statics::NewProp_bStopWhenAttachedToDestroyed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPostEventAsync_PostEventAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PostEventAsync_eventPostEventAsync_Parms, ReturnValue), Z_Construct_UClass_UPostEventAsync_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPostEventAsync_PostEventAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPostEventAsync_PostEventAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPostEventAsync_PostEventAsync_Statics::NewProp_AkEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPostEventAsync_PostEventAsync_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPostEventAsync_PostEventAsync_Statics::NewProp_CallbackMask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPostEventAsync_PostEventAsync_Statics::NewProp_PostEventCallback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPostEventAsync_PostEventAsync_Statics::NewProp_bStopWhenAttachedToDestroyed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPostEventAsync_PostEventAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPostEventAsync_PostEventAsync_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PostEventAsync.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPostEventAsync_PostEventAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPostEventAsync, nullptr, "PostEventAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPostEventAsync_PostEventAsync_Statics::PostEventAsync_eventPostEventAsync_Parms), Z_Construct_UFunction_UPostEventAsync_PostEventAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPostEventAsync_PostEventAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPostEventAsync_PostEventAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPostEventAsync_PostEventAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPostEventAsync_PostEventAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPostEventAsync_PostEventAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPostEventAsync);
	UClass* Z_Construct_UClass_UPostEventAsync_NoRegister()
	{
		return UPostEventAsync::StaticClass();
	}
	struct Z_Construct_UClass_UPostEventAsync_Statics
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
	UObject* (*const Z_Construct_UClass_UPostEventAsync_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPostEventAsync_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPostEventAsync_PollPostEventFuture, "PollPostEventFuture" }, // 1187866448
		{ &Z_Construct_UFunction_UPostEventAsync_PostEventAsync, "PostEventAsync" }, // 895122529
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPostEventAsync_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PostEventAsync.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PostEventAsync.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPostEventAsync_Statics::NewProp_Completed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PostEventAsync" },
		{ "ModuleRelativePath", "Public/PostEventAsync.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPostEventAsync_Statics::NewProp_Completed = { "Completed", nullptr, (EPropertyFlags)0x0010000010080005, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPostEventAsync, Completed), Z_Construct_UDelegateFunction_AkAudio_PostEventAsyncOutputPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPostEventAsync_Statics::NewProp_Completed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPostEventAsync_Statics::NewProp_Completed_MetaData)) }; // 1262409100
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPostEventAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPostEventAsync_Statics::NewProp_Completed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPostEventAsync_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPostEventAsync>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPostEventAsync_Statics::ClassParams = {
		&UPostEventAsync::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPostEventAsync_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPostEventAsync_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPostEventAsync_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPostEventAsync_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPostEventAsync()
	{
		if (!Z_Registration_Info_UClass_UPostEventAsync.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPostEventAsync.OuterSingleton, Z_Construct_UClass_UPostEventAsync_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPostEventAsync.OuterSingleton;
	}
	template<> AKAUDIO_API UClass* StaticClass<UPostEventAsync>()
	{
		return UPostEventAsync::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPostEventAsync);
	UPostEventAsync::~UPostEventAsync() {}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_PostEventAsync_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_PostEventAsync_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPostEventAsync, UPostEventAsync::StaticClass, TEXT("UPostEventAsync"), &Z_Registration_Info_UClass_UPostEventAsync, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPostEventAsync), 3831065955U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_PostEventAsync_h_1971407844(TEXT("/Script/AkAudio"),
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_PostEventAsync_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_PostEventAsync_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
