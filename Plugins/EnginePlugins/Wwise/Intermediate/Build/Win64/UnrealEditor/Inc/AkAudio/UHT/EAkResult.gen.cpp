// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/EAkResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAkResult() {}
// Cross Module References
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkResult();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAkResult;
	static UEnum* EAkResult_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAkResult.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAkResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_EAkResult, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("EAkResult"));
		}
		return Z_Registration_Info_UEnum_EAkResult.OuterSingleton;
	}
	template<> AKAUDIO_API UEnum* StaticEnum<EAkResult>()
	{
		return EAkResult_StaticEnum();
	}
	struct Z_Construct_UEnum_AkAudio_EAkResult_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AkAudio_EAkResult_Statics::Enumerators[] = {
		{ "EAkResult::NotImplemented", (int64)EAkResult::NotImplemented },
		{ "EAkResult::Success", (int64)EAkResult::Success },
		{ "EAkResult::Fail", (int64)EAkResult::Fail },
		{ "EAkResult::PartialSuccess", (int64)EAkResult::PartialSuccess },
		{ "EAkResult::NotCompatible", (int64)EAkResult::NotCompatible },
		{ "EAkResult::AlreadyConnected", (int64)EAkResult::AlreadyConnected },
		{ "EAkResult::InvalidFile", (int64)EAkResult::InvalidFile },
		{ "EAkResult::AudioFileHeaderTooLarge", (int64)EAkResult::AudioFileHeaderTooLarge },
		{ "EAkResult::MaxReached", (int64)EAkResult::MaxReached },
		{ "EAkResult::InvalidID", (int64)EAkResult::InvalidID },
		{ "EAkResult::IDNotFound", (int64)EAkResult::IDNotFound },
		{ "EAkResult::InvalidInstanceID", (int64)EAkResult::InvalidInstanceID },
		{ "EAkResult::NoMoreData", (int64)EAkResult::NoMoreData },
		{ "EAkResult::InvalidStateGroup", (int64)EAkResult::InvalidStateGroup },
		{ "EAkResult::ChildAlreadyHasAParent", (int64)EAkResult::ChildAlreadyHasAParent },
		{ "EAkResult::InvalidLanguage", (int64)EAkResult::InvalidLanguage },
		{ "EAkResult::CannotAddItseflAsAChild", (int64)EAkResult::CannotAddItseflAsAChild },
		{ "EAkResult::InvalidParameter", (int64)EAkResult::InvalidParameter },
		{ "EAkResult::ElementAlreadyInList", (int64)EAkResult::ElementAlreadyInList },
		{ "EAkResult::PathNotFound", (int64)EAkResult::PathNotFound },
		{ "EAkResult::PathNoVertices", (int64)EAkResult::PathNoVertices },
		{ "EAkResult::PathNotRunning", (int64)EAkResult::PathNotRunning },
		{ "EAkResult::PathNotPaused", (int64)EAkResult::PathNotPaused },
		{ "EAkResult::PathNodeAlreadyInList", (int64)EAkResult::PathNodeAlreadyInList },
		{ "EAkResult::PathNodeNotInList", (int64)EAkResult::PathNodeNotInList },
		{ "EAkResult::DataNeeded", (int64)EAkResult::DataNeeded },
		{ "EAkResult::NoDataNeeded", (int64)EAkResult::NoDataNeeded },
		{ "EAkResult::DataReady", (int64)EAkResult::DataReady },
		{ "EAkResult::NoDataReady", (int64)EAkResult::NoDataReady },
		{ "EAkResult::InsufficientMemory", (int64)EAkResult::InsufficientMemory },
		{ "EAkResult::Cancelled", (int64)EAkResult::Cancelled },
		{ "EAkResult::UnknownBankID", (int64)EAkResult::UnknownBankID },
		{ "EAkResult::BankReadError", (int64)EAkResult::BankReadError },
		{ "EAkResult::InvalidSwitchType", (int64)EAkResult::InvalidSwitchType },
		{ "EAkResult::FormatNotReady", (int64)EAkResult::FormatNotReady },
		{ "EAkResult::WrongBankVersion", (int64)EAkResult::WrongBankVersion },
		{ "EAkResult::FileNotFound", (int64)EAkResult::FileNotFound },
		{ "EAkResult::DeviceNotReady", (int64)EAkResult::DeviceNotReady },
		{ "EAkResult::BankAlreadyLoaded", (int64)EAkResult::BankAlreadyLoaded },
		{ "EAkResult::RenderedFX", (int64)EAkResult::RenderedFX },
		{ "EAkResult::ProcessNeeded", (int64)EAkResult::ProcessNeeded },
		{ "EAkResult::ProcessDone", (int64)EAkResult::ProcessDone },
		{ "EAkResult::MemManagerNotInitialized", (int64)EAkResult::MemManagerNotInitialized },
		{ "EAkResult::StreamMgrNotInitialized", (int64)EAkResult::StreamMgrNotInitialized },
		{ "EAkResult::SSEInstructionsNotSupported", (int64)EAkResult::SSEInstructionsNotSupported },
		{ "EAkResult::Busy", (int64)EAkResult::Busy },
		{ "EAkResult::UnsupportedChannelConfig", (int64)EAkResult::UnsupportedChannelConfig },
		{ "EAkResult::PluginMediaNotAvailable", (int64)EAkResult::PluginMediaNotAvailable },
		{ "EAkResult::MustBeVirtualized", (int64)EAkResult::MustBeVirtualized },
		{ "EAkResult::CommandTooLarge", (int64)EAkResult::CommandTooLarge },
		{ "EAkResult::RejectedByFilter", (int64)EAkResult::RejectedByFilter },
		{ "EAkResult::InvalidCustomPlatformName", (int64)EAkResult::InvalidCustomPlatformName },
		{ "EAkResult::DLLCannotLoad", (int64)EAkResult::DLLCannotLoad },
		{ "EAkResult::DLLPathNotFound", (int64)EAkResult::DLLPathNotFound },
		{ "EAkResult::NoJavaVM", (int64)EAkResult::NoJavaVM },
		{ "EAkResult::OpenSLError", (int64)EAkResult::OpenSLError },
		{ "EAkResult::PluginNotRegistered", (int64)EAkResult::PluginNotRegistered },
		{ "EAkResult::DataAlignmentError", (int64)EAkResult::DataAlignmentError },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AkAudio_EAkResult_Statics::Enum_MetaDataParams[] = {
		{ "AlreadyConnected.Name", "EAkResult::AlreadyConnected" },
		{ "AudioFileHeaderTooLarge.Name", "EAkResult::AudioFileHeaderTooLarge" },
		{ "BankAlreadyLoaded.Name", "EAkResult::BankAlreadyLoaded" },
		{ "BankReadError.Name", "EAkResult::BankReadError" },
		{ "BlueprintType", "true" },
		{ "Busy.Name", "EAkResult::Busy" },
		{ "Cancelled.Name", "EAkResult::Cancelled" },
		{ "CannotAddItseflAsAChild.Name", "EAkResult::CannotAddItseflAsAChild" },
		{ "ChildAlreadyHasAParent.Name", "EAkResult::ChildAlreadyHasAParent" },
		{ "CommandTooLarge.Name", "EAkResult::CommandTooLarge" },
		{ "DataAlignmentError.Name", "EAkResult::DataAlignmentError" },
		{ "DataNeeded.Name", "EAkResult::DataNeeded" },
		{ "DataReady.Name", "EAkResult::DataReady" },
		{ "DeviceNotReady.Name", "EAkResult::DeviceNotReady" },
		{ "DLLCannotLoad.Name", "EAkResult::DLLCannotLoad" },
		{ "DLLPathNotFound.Name", "EAkResult::DLLPathNotFound" },
		{ "ElementAlreadyInList.Name", "EAkResult::ElementAlreadyInList" },
		{ "Fail.Name", "EAkResult::Fail" },
		{ "FileNotFound.Name", "EAkResult::FileNotFound" },
		{ "FormatNotReady.Name", "EAkResult::FormatNotReady" },
		{ "IDNotFound.Name", "EAkResult::IDNotFound" },
		{ "InsufficientMemory.Name", "EAkResult::InsufficientMemory" },
		{ "InvalidCustomPlatformName.Name", "EAkResult::InvalidCustomPlatformName" },
		{ "InvalidFile.Name", "EAkResult::InvalidFile" },
		{ "InvalidID.Name", "EAkResult::InvalidID" },
		{ "InvalidInstanceID.Name", "EAkResult::InvalidInstanceID" },
		{ "InvalidLanguage.Name", "EAkResult::InvalidLanguage" },
		{ "InvalidParameter.Name", "EAkResult::InvalidParameter" },
		{ "InvalidStateGroup.Name", "EAkResult::InvalidStateGroup" },
		{ "InvalidSwitchType.Name", "EAkResult::InvalidSwitchType" },
		{ "MaxReached.Name", "EAkResult::MaxReached" },
		{ "MemManagerNotInitialized.Name", "EAkResult::MemManagerNotInitialized" },
		{ "ModuleRelativePath", "Public/EAkResult.h" },
		{ "MustBeVirtualized.Name", "EAkResult::MustBeVirtualized" },
		{ "NoDataNeeded.Name", "EAkResult::NoDataNeeded" },
		{ "NoDataReady.Name", "EAkResult::NoDataReady" },
		{ "NoJavaVM.Name", "EAkResult::NoJavaVM" },
		{ "NoMoreData.Name", "EAkResult::NoMoreData" },
		{ "NotCompatible.Name", "EAkResult::NotCompatible" },
		{ "NotImplemented.Name", "EAkResult::NotImplemented" },
		{ "OpenSLError.Name", "EAkResult::OpenSLError" },
		{ "PartialSuccess.Name", "EAkResult::PartialSuccess" },
		{ "PathNodeAlreadyInList.Name", "EAkResult::PathNodeAlreadyInList" },
		{ "PathNodeNotInList.Name", "EAkResult::PathNodeNotInList" },
		{ "PathNotFound.Name", "EAkResult::PathNotFound" },
		{ "PathNotPaused.Name", "EAkResult::PathNotPaused" },
		{ "PathNotRunning.Name", "EAkResult::PathNotRunning" },
		{ "PathNoVertices.Name", "EAkResult::PathNoVertices" },
		{ "PluginMediaNotAvailable.Name", "EAkResult::PluginMediaNotAvailable" },
		{ "PluginNotRegistered.Name", "EAkResult::PluginNotRegistered" },
		{ "ProcessDone.Name", "EAkResult::ProcessDone" },
		{ "ProcessNeeded.Name", "EAkResult::ProcessNeeded" },
		{ "RejectedByFilter.Name", "EAkResult::RejectedByFilter" },
		{ "RenderedFX.Name", "EAkResult::RenderedFX" },
		{ "SSEInstructionsNotSupported.Name", "EAkResult::SSEInstructionsNotSupported" },
		{ "StreamMgrNotInitialized.Name", "EAkResult::StreamMgrNotInitialized" },
		{ "Success.Name", "EAkResult::Success" },
		{ "UnknownBankID.Name", "EAkResult::UnknownBankID" },
		{ "UnsupportedChannelConfig.Name", "EAkResult::UnsupportedChannelConfig" },
		{ "WrongBankVersion.Name", "EAkResult::WrongBankVersion" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AkAudio_EAkResult_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		"EAkResult",
		"EAkResult",
		Z_Construct_UEnum_AkAudio_EAkResult_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_EAkResult_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AkAudio_EAkResult_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_EAkResult_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AkAudio_EAkResult()
	{
		if (!Z_Registration_Info_UEnum_EAkResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAkResult.InnerSingleton, Z_Construct_UEnum_AkAudio_EAkResult_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAkResult.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_EAkResult_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_EAkResult_h_Statics::EnumInfo[] = {
		{ EAkResult_StaticEnum, TEXT("EAkResult"), &Z_Registration_Info_UEnum_EAkResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1608396291U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_EAkResult_h_2882546122(TEXT("/Script/AkAudio"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_EAkResult_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_EAkResult_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
