// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniNiagara/Public/HoudiniEvent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniEvent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	HOUDININIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniEvent();
	UPackage* Z_Construct_UPackage__Script_HoudiniNiagara();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniEvent;
class UScriptStruct* FHoudiniEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniEvent, (UObject*)Z_Construct_UPackage__Script_HoudiniNiagara(), TEXT("HoudiniEvent"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniEvent.OuterSingleton;
}
template<> HOUDININIAGARA_API UScriptStruct* StaticStruct<FHoudiniEvent>()
{
	return FHoudiniEvent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHoudiniEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_position;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Normal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Impulse_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Impulse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Velocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_POINTID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_POINTID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LIFE_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LIFE;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Type;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniEvent_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/HoudiniEvent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoudiniEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniEvent>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniEvent_Statics::NewProp_position_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniEvent" },
		{ "ModuleRelativePath", "Public/HoudiniEvent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniEvent_Statics::NewProp_position = { "position", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniEvent, position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniEvent_Statics::NewProp_position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniEvent_Statics::NewProp_position_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniEvent_Statics::NewProp_Normal_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniEvent" },
		{ "ModuleRelativePath", "Public/HoudiniEvent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniEvent_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniEvent, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniEvent_Statics::NewProp_Normal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniEvent_Statics::NewProp_Normal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniEvent_Statics::NewProp_Impulse_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniEvent" },
		{ "ModuleRelativePath", "Public/HoudiniEvent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHoudiniEvent_Statics::NewProp_Impulse = { "Impulse", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniEvent, Impulse), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniEvent_Statics::NewProp_Impulse_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniEvent_Statics::NewProp_Impulse_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniEvent_Statics::NewProp_Velocity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniEvent" },
		{ "ModuleRelativePath", "Public/HoudiniEvent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniEvent_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniEvent, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniEvent_Statics::NewProp_Velocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniEvent_Statics::NewProp_Velocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniEvent_Statics::NewProp_POINTID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniEvent" },
		{ "ModuleRelativePath", "Public/HoudiniEvent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniEvent_Statics::NewProp_POINTID = { "POINTID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniEvent, POINTID), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniEvent_Statics::NewProp_POINTID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniEvent_Statics::NewProp_POINTID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniEvent_Statics::NewProp_Time_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniEvent" },
		{ "ModuleRelativePath", "Public/HoudiniEvent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHoudiniEvent_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniEvent, Time), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniEvent_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniEvent_Statics::NewProp_Time_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniEvent_Statics::NewProp_LIFE_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniEvent" },
		{ "ModuleRelativePath", "Public/HoudiniEvent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHoudiniEvent_Statics::NewProp_LIFE = { "LIFE", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniEvent, LIFE), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniEvent_Statics::NewProp_LIFE_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniEvent_Statics::NewProp_LIFE_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniEvent_Statics::NewProp_Color_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniEvent" },
		{ "ModuleRelativePath", "Public/HoudiniEvent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniEvent_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniEvent, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniEvent_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniEvent_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniEvent_Statics::NewProp_Type_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HoudiniEvent" },
		{ "ModuleRelativePath", "Public/HoudiniEvent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniEvent_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniEvent, Type), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniEvent_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniEvent_Statics::NewProp_Type_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniEvent_Statics::NewProp_position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniEvent_Statics::NewProp_Normal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniEvent_Statics::NewProp_Impulse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniEvent_Statics::NewProp_Velocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniEvent_Statics::NewProp_POINTID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniEvent_Statics::NewProp_Time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniEvent_Statics::NewProp_LIFE,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniEvent_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniEvent_Statics::NewProp_Type,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniNiagara,
		nullptr,
		&NewStructOps,
		"HoudiniEvent",
		sizeof(FHoudiniEvent),
		alignof(FHoudiniEvent),
		Z_Construct_UScriptStruct_FHoudiniEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHoudiniEvent()
	{
		if (!Z_Registration_Info_UScriptStruct_HoudiniEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniEvent.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniEvent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HoudiniEvent.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_FX_HoudiniNiagara_Source_HoudiniNiagara_Public_HoudiniEvent_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_FX_HoudiniNiagara_Source_HoudiniNiagara_Public_HoudiniEvent_h_Statics::ScriptStructInfo[] = {
		{ FHoudiniEvent::StaticStruct, Z_Construct_UScriptStruct_FHoudiniEvent_Statics::NewStructOps, TEXT("HoudiniEvent"), &Z_Registration_Info_UScriptStruct_HoudiniEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniEvent), 1947090092U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_FX_HoudiniNiagara_Source_HoudiniNiagara_Public_HoudiniEvent_h_905700506(TEXT("/Script/HoudiniNiagara"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_FX_HoudiniNiagara_Source_HoudiniNiagara_Public_HoudiniEvent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_FX_HoudiniNiagara_Source_HoudiniNiagara_Public_HoudiniEvent_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
