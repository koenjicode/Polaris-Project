// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/EAkMidiCcValues.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAkMidiCcValues() {}
// Cross Module References
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkMidiCcValues();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAkMidiCcValues;
	static UEnum* EAkMidiCcValues_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAkMidiCcValues.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAkMidiCcValues.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_EAkMidiCcValues, (UObject*)Z_Construct_UPackage__Script_AkAudio(), TEXT("EAkMidiCcValues"));
		}
		return Z_Registration_Info_UEnum_EAkMidiCcValues.OuterSingleton;
	}
	template<> AKAUDIO_API UEnum* StaticEnum<EAkMidiCcValues>()
	{
		return EAkMidiCcValues_StaticEnum();
	}
	struct Z_Construct_UEnum_AkAudio_EAkMidiCcValues_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AkAudio_EAkMidiCcValues_Statics::Enumerators[] = {
		{ "EAkMidiCcValues::AkMidiCcBankSelectCoarse", (int64)EAkMidiCcValues::AkMidiCcBankSelectCoarse },
		{ "EAkMidiCcValues::AkMidiCcModWheelCoarse", (int64)EAkMidiCcValues::AkMidiCcModWheelCoarse },
		{ "EAkMidiCcValues::AkMidiCcBreathCtrlCoarse", (int64)EAkMidiCcValues::AkMidiCcBreathCtrlCoarse },
		{ "EAkMidiCcValues::AkMidiCcCtrl3Coarse", (int64)EAkMidiCcValues::AkMidiCcCtrl3Coarse },
		{ "EAkMidiCcValues::AkMidiCcFootPedalCoarse", (int64)EAkMidiCcValues::AkMidiCcFootPedalCoarse },
		{ "EAkMidiCcValues::AkMidiCcPortamentoCoarse", (int64)EAkMidiCcValues::AkMidiCcPortamentoCoarse },
		{ "EAkMidiCcValues::AkMidiCcDataEntryCoarse", (int64)EAkMidiCcValues::AkMidiCcDataEntryCoarse },
		{ "EAkMidiCcValues::AkMidiCcVolumeCoarse", (int64)EAkMidiCcValues::AkMidiCcVolumeCoarse },
		{ "EAkMidiCcValues::AkMidiCcBalanceCoarse", (int64)EAkMidiCcValues::AkMidiCcBalanceCoarse },
		{ "EAkMidiCcValues::AkMidiCcCtrl9Coarse", (int64)EAkMidiCcValues::AkMidiCcCtrl9Coarse },
		{ "EAkMidiCcValues::AkMidiCcPanPositionCoarse", (int64)EAkMidiCcValues::AkMidiCcPanPositionCoarse },
		{ "EAkMidiCcValues::AkMidiCcExpressionCoarse", (int64)EAkMidiCcValues::AkMidiCcExpressionCoarse },
		{ "EAkMidiCcValues::AkMidiCcEffectCtrl1Coarse", (int64)EAkMidiCcValues::AkMidiCcEffectCtrl1Coarse },
		{ "EAkMidiCcValues::AkMidiCcEffectCtrl2Coarse", (int64)EAkMidiCcValues::AkMidiCcEffectCtrl2Coarse },
		{ "EAkMidiCcValues::AkMidiCcCtrl14Coarse", (int64)EAkMidiCcValues::AkMidiCcCtrl14Coarse },
		{ "EAkMidiCcValues::AkMidiCcCtrl15Coarse", (int64)EAkMidiCcValues::AkMidiCcCtrl15Coarse },
		{ "EAkMidiCcValues::AkMidiCcGenSlider1", (int64)EAkMidiCcValues::AkMidiCcGenSlider1 },
		{ "EAkMidiCcValues::AkMidiCcGenSlider2", (int64)EAkMidiCcValues::AkMidiCcGenSlider2 },
		{ "EAkMidiCcValues::AkMidiCcGenSlider3", (int64)EAkMidiCcValues::AkMidiCcGenSlider3 },
		{ "EAkMidiCcValues::AkMidiCcGenSlider4", (int64)EAkMidiCcValues::AkMidiCcGenSlider4 },
		{ "EAkMidiCcValues::AkMidiCcCtrl20Coarse", (int64)EAkMidiCcValues::AkMidiCcCtrl20Coarse },
		{ "EAkMidiCcValues::AkMidiCcCtrl21Coarse", (int64)EAkMidiCcValues::AkMidiCcCtrl21Coarse },
		{ "EAkMidiCcValues::AkMidiCcCtrl22Coarse", (int64)EAkMidiCcValues::AkMidiCcCtrl22Coarse },
		{ "EAkMidiCcValues::AkMidiCcCtrl23Coarse", (int64)EAkMidiCcValues::AkMidiCcCtrl23Coarse },
		{ "EAkMidiCcValues::AkMidiCcCtrl24Coarse", (int64)EAkMidiCcValues::AkMidiCcCtrl24Coarse },
		{ "EAkMidiCcValues::AkMidiCcCtrl25Coarse", (int64)EAkMidiCcValues::AkMidiCcCtrl25Coarse },
		{ "EAkMidiCcValues::AkMidiCcCtrl26Coarse", (int64)EAkMidiCcValues::AkMidiCcCtrl26Coarse },
		{ "EAkMidiCcValues::AkMidiCcCtrl27Coarse", (int64)EAkMidiCcValues::AkMidiCcCtrl27Coarse },
		{ "EAkMidiCcValues::AkMidiCcCtrl28Coarse", (int64)EAkMidiCcValues::AkMidiCcCtrl28Coarse },
		{ "EAkMidiCcValues::AkMidiCcCtrl29Coarse", (int64)EAkMidiCcValues::AkMidiCcCtrl29Coarse },
		{ "EAkMidiCcValues::AkMidiCcCtrl30Coarse", (int64)EAkMidiCcValues::AkMidiCcCtrl30Coarse },
		{ "EAkMidiCcValues::AkMidiCcCtrl31Coarse", (int64)EAkMidiCcValues::AkMidiCcCtrl31Coarse },
		{ "EAkMidiCcValues::AkMidiCcBankSelectFine", (int64)EAkMidiCcValues::AkMidiCcBankSelectFine },
		{ "EAkMidiCcValues::AkMidiCcModWheelFine", (int64)EAkMidiCcValues::AkMidiCcModWheelFine },
		{ "EAkMidiCcValues::AkMidiCcBreathCtrlFine", (int64)EAkMidiCcValues::AkMidiCcBreathCtrlFine },
		{ "EAkMidiCcValues::AkMidiCcCtrl3Fine", (int64)EAkMidiCcValues::AkMidiCcCtrl3Fine },
		{ "EAkMidiCcValues::AkMidiCcFootPedalFine", (int64)EAkMidiCcValues::AkMidiCcFootPedalFine },
		{ "EAkMidiCcValues::AkMidiCcPortamentoFine", (int64)EAkMidiCcValues::AkMidiCcPortamentoFine },
		{ "EAkMidiCcValues::AkMidiCcDataEntryFine", (int64)EAkMidiCcValues::AkMidiCcDataEntryFine },
		{ "EAkMidiCcValues::AkMidiCcVolumeFine", (int64)EAkMidiCcValues::AkMidiCcVolumeFine },
		{ "EAkMidiCcValues::AkMidiCcBalanceFine", (int64)EAkMidiCcValues::AkMidiCcBalanceFine },
		{ "EAkMidiCcValues::AkMidiCcCtrl9Fine", (int64)EAkMidiCcValues::AkMidiCcCtrl9Fine },
		{ "EAkMidiCcValues::AkMidiCcPanPositionFine", (int64)EAkMidiCcValues::AkMidiCcPanPositionFine },
		{ "EAkMidiCcValues::AkMidiCcExpressionFine", (int64)EAkMidiCcValues::AkMidiCcExpressionFine },
		{ "EAkMidiCcValues::AkMidiCcEffectCtrl1Fine", (int64)EAkMidiCcValues::AkMidiCcEffectCtrl1Fine },
		{ "EAkMidiCcValues::AkMidiCcEffectCtrl2Fine", (int64)EAkMidiCcValues::AkMidiCcEffectCtrl2Fine },
		{ "EAkMidiCcValues::AkMidiCcCtrl14Fine", (int64)EAkMidiCcValues::AkMidiCcCtrl14Fine },
		{ "EAkMidiCcValues::AkMidiCcCtrl15Fine", (int64)EAkMidiCcValues::AkMidiCcCtrl15Fine },
		{ "EAkMidiCcValues::AkMidiCcCtrl20Fine", (int64)EAkMidiCcValues::AkMidiCcCtrl20Fine },
		{ "EAkMidiCcValues::AkMidiCcCtrl21Fine", (int64)EAkMidiCcValues::AkMidiCcCtrl21Fine },
		{ "EAkMidiCcValues::AkMidiCcCtrl22Fine", (int64)EAkMidiCcValues::AkMidiCcCtrl22Fine },
		{ "EAkMidiCcValues::AkMidiCcCtrl23Fine", (int64)EAkMidiCcValues::AkMidiCcCtrl23Fine },
		{ "EAkMidiCcValues::AkMidiCcCtrl24Fine", (int64)EAkMidiCcValues::AkMidiCcCtrl24Fine },
		{ "EAkMidiCcValues::AkMidiCcCtrl25Fine", (int64)EAkMidiCcValues::AkMidiCcCtrl25Fine },
		{ "EAkMidiCcValues::AkMidiCcCtrl26Fine", (int64)EAkMidiCcValues::AkMidiCcCtrl26Fine },
		{ "EAkMidiCcValues::AkMidiCcCtrl27Fine", (int64)EAkMidiCcValues::AkMidiCcCtrl27Fine },
		{ "EAkMidiCcValues::AkMidiCcCtrl28Fine", (int64)EAkMidiCcValues::AkMidiCcCtrl28Fine },
		{ "EAkMidiCcValues::AkMidiCcCtrl29Fine", (int64)EAkMidiCcValues::AkMidiCcCtrl29Fine },
		{ "EAkMidiCcValues::AkMidiCcCtrl30Fine", (int64)EAkMidiCcValues::AkMidiCcCtrl30Fine },
		{ "EAkMidiCcValues::AkMidiCcCtrl31Fine", (int64)EAkMidiCcValues::AkMidiCcCtrl31Fine },
		{ "EAkMidiCcValues::AkMidiCcHoldPedal", (int64)EAkMidiCcValues::AkMidiCcHoldPedal },
		{ "EAkMidiCcValues::AkMidiCcPortamentoOnOff", (int64)EAkMidiCcValues::AkMidiCcPortamentoOnOff },
		{ "EAkMidiCcValues::AkMidiCcSustenutoPedal", (int64)EAkMidiCcValues::AkMidiCcSustenutoPedal },
		{ "EAkMidiCcValues::AkMidiCcSoftPedal", (int64)EAkMidiCcValues::AkMidiCcSoftPedal },
		{ "EAkMidiCcValues::AkMidiCcLegatoPedal", (int64)EAkMidiCcValues::AkMidiCcLegatoPedal },
		{ "EAkMidiCcValues::AkMidiCcHoldPedal2", (int64)EAkMidiCcValues::AkMidiCcHoldPedal2 },
		{ "EAkMidiCcValues::AkMidiCcSoundVariation", (int64)EAkMidiCcValues::AkMidiCcSoundVariation },
		{ "EAkMidiCcValues::AkMidiCcSoundTimbre", (int64)EAkMidiCcValues::AkMidiCcSoundTimbre },
		{ "EAkMidiCcValues::AkMidiCcSoundReleaseTime", (int64)EAkMidiCcValues::AkMidiCcSoundReleaseTime },
		{ "EAkMidiCcValues::AkMidiCcSoundAttackTime", (int64)EAkMidiCcValues::AkMidiCcSoundAttackTime },
		{ "EAkMidiCcValues::AkMidiCcSoundBrightness", (int64)EAkMidiCcValues::AkMidiCcSoundBrightness },
		{ "EAkMidiCcValues::AkMidiCcSoundCtrl6", (int64)EAkMidiCcValues::AkMidiCcSoundCtrl6 },
		{ "EAkMidiCcValues::AkMidiCcSoundCtrl7", (int64)EAkMidiCcValues::AkMidiCcSoundCtrl7 },
		{ "EAkMidiCcValues::AkMidiCcSoundCtrl8", (int64)EAkMidiCcValues::AkMidiCcSoundCtrl8 },
		{ "EAkMidiCcValues::AkMidiCcSoundCtrl9", (int64)EAkMidiCcValues::AkMidiCcSoundCtrl9 },
		{ "EAkMidiCcValues::AkMidiCcSoundCtrl10", (int64)EAkMidiCcValues::AkMidiCcSoundCtrl10 },
		{ "EAkMidiCcValues::AkMidiCcGeneralButton1", (int64)EAkMidiCcValues::AkMidiCcGeneralButton1 },
		{ "EAkMidiCcValues::AkMidiCcGeneralButton2", (int64)EAkMidiCcValues::AkMidiCcGeneralButton2 },
		{ "EAkMidiCcValues::AkMidiCcGeneralButton3", (int64)EAkMidiCcValues::AkMidiCcGeneralButton3 },
		{ "EAkMidiCcValues::AkMidiCcGeneralButton4", (int64)EAkMidiCcValues::AkMidiCcGeneralButton4 },
		{ "EAkMidiCcValues::AkMidiCcReverbLevel", (int64)EAkMidiCcValues::AkMidiCcReverbLevel },
		{ "EAkMidiCcValues::AkMidiCcTremoloLevel", (int64)EAkMidiCcValues::AkMidiCcTremoloLevel },
		{ "EAkMidiCcValues::AkMidiCcChorusLevel", (int64)EAkMidiCcValues::AkMidiCcChorusLevel },
		{ "EAkMidiCcValues::AkMidiCcCelesteLevel", (int64)EAkMidiCcValues::AkMidiCcCelesteLevel },
		{ "EAkMidiCcValues::AkMidiCcPhaserLevel", (int64)EAkMidiCcValues::AkMidiCcPhaserLevel },
		{ "EAkMidiCcValues::AkMidiCcDataButtonP1", (int64)EAkMidiCcValues::AkMidiCcDataButtonP1 },
		{ "EAkMidiCcValues::AkMidiCcDataButtonM1", (int64)EAkMidiCcValues::AkMidiCcDataButtonM1 },
		{ "EAkMidiCcValues::AkMidiCcNonRegisterCoarse", (int64)EAkMidiCcValues::AkMidiCcNonRegisterCoarse },
		{ "EAkMidiCcValues::AkMidiCcNonRegisterFine", (int64)EAkMidiCcValues::AkMidiCcNonRegisterFine },
		{ "EAkMidiCcValues::AkMidiCcAllSoundOff", (int64)EAkMidiCcValues::AkMidiCcAllSoundOff },
		{ "EAkMidiCcValues::AkMidiCcAllControllersOff", (int64)EAkMidiCcValues::AkMidiCcAllControllersOff },
		{ "EAkMidiCcValues::AkMidiCcLocalKeyboard", (int64)EAkMidiCcValues::AkMidiCcLocalKeyboard },
		{ "EAkMidiCcValues::AkMidiCcAllNotesOff", (int64)EAkMidiCcValues::AkMidiCcAllNotesOff },
		{ "EAkMidiCcValues::AkMidiCcOmniModeOff", (int64)EAkMidiCcValues::AkMidiCcOmniModeOff },
		{ "EAkMidiCcValues::AkMidiCcOmniModeOn", (int64)EAkMidiCcValues::AkMidiCcOmniModeOn },
		{ "EAkMidiCcValues::AkMidiCcOmniMonophonicOn", (int64)EAkMidiCcValues::AkMidiCcOmniMonophonicOn },
		{ "EAkMidiCcValues::AkMidiCcOmniPolyphonicOn", (int64)EAkMidiCcValues::AkMidiCcOmniPolyphonicOn },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AkAudio_EAkMidiCcValues_Statics::Enum_MetaDataParams[] = {
		{ "AkMidiCcAllControllersOff.Name", "EAkMidiCcValues::AkMidiCcAllControllersOff" },
		{ "AkMidiCcAllNotesOff.Name", "EAkMidiCcValues::AkMidiCcAllNotesOff" },
		{ "AkMidiCcAllSoundOff.Name", "EAkMidiCcValues::AkMidiCcAllSoundOff" },
		{ "AkMidiCcBalanceCoarse.Name", "EAkMidiCcValues::AkMidiCcBalanceCoarse" },
		{ "AkMidiCcBalanceFine.Name", "EAkMidiCcValues::AkMidiCcBalanceFine" },
		{ "AkMidiCcBankSelectCoarse.Name", "EAkMidiCcValues::AkMidiCcBankSelectCoarse" },
		{ "AkMidiCcBankSelectFine.Name", "EAkMidiCcValues::AkMidiCcBankSelectFine" },
		{ "AkMidiCcBreathCtrlCoarse.Name", "EAkMidiCcValues::AkMidiCcBreathCtrlCoarse" },
		{ "AkMidiCcBreathCtrlFine.Name", "EAkMidiCcValues::AkMidiCcBreathCtrlFine" },
		{ "AkMidiCcCelesteLevel.Name", "EAkMidiCcValues::AkMidiCcCelesteLevel" },
		{ "AkMidiCcChorusLevel.Name", "EAkMidiCcValues::AkMidiCcChorusLevel" },
		{ "AkMidiCcCtrl14Coarse.Name", "EAkMidiCcValues::AkMidiCcCtrl14Coarse" },
		{ "AkMidiCcCtrl14Fine.Name", "EAkMidiCcValues::AkMidiCcCtrl14Fine" },
		{ "AkMidiCcCtrl15Coarse.Name", "EAkMidiCcValues::AkMidiCcCtrl15Coarse" },
		{ "AkMidiCcCtrl15Fine.Name", "EAkMidiCcValues::AkMidiCcCtrl15Fine" },
		{ "AkMidiCcCtrl20Coarse.Name", "EAkMidiCcValues::AkMidiCcCtrl20Coarse" },
		{ "AkMidiCcCtrl20Fine.Name", "EAkMidiCcValues::AkMidiCcCtrl20Fine" },
		{ "AkMidiCcCtrl21Coarse.Name", "EAkMidiCcValues::AkMidiCcCtrl21Coarse" },
		{ "AkMidiCcCtrl21Fine.Name", "EAkMidiCcValues::AkMidiCcCtrl21Fine" },
		{ "AkMidiCcCtrl22Coarse.Name", "EAkMidiCcValues::AkMidiCcCtrl22Coarse" },
		{ "AkMidiCcCtrl22Fine.Name", "EAkMidiCcValues::AkMidiCcCtrl22Fine" },
		{ "AkMidiCcCtrl23Coarse.Name", "EAkMidiCcValues::AkMidiCcCtrl23Coarse" },
		{ "AkMidiCcCtrl23Fine.Name", "EAkMidiCcValues::AkMidiCcCtrl23Fine" },
		{ "AkMidiCcCtrl24Coarse.Name", "EAkMidiCcValues::AkMidiCcCtrl24Coarse" },
		{ "AkMidiCcCtrl24Fine.Name", "EAkMidiCcValues::AkMidiCcCtrl24Fine" },
		{ "AkMidiCcCtrl25Coarse.Name", "EAkMidiCcValues::AkMidiCcCtrl25Coarse" },
		{ "AkMidiCcCtrl25Fine.Name", "EAkMidiCcValues::AkMidiCcCtrl25Fine" },
		{ "AkMidiCcCtrl26Coarse.Name", "EAkMidiCcValues::AkMidiCcCtrl26Coarse" },
		{ "AkMidiCcCtrl26Fine.Name", "EAkMidiCcValues::AkMidiCcCtrl26Fine" },
		{ "AkMidiCcCtrl27Coarse.Name", "EAkMidiCcValues::AkMidiCcCtrl27Coarse" },
		{ "AkMidiCcCtrl27Fine.Name", "EAkMidiCcValues::AkMidiCcCtrl27Fine" },
		{ "AkMidiCcCtrl28Coarse.Name", "EAkMidiCcValues::AkMidiCcCtrl28Coarse" },
		{ "AkMidiCcCtrl28Fine.Name", "EAkMidiCcValues::AkMidiCcCtrl28Fine" },
		{ "AkMidiCcCtrl29Coarse.Name", "EAkMidiCcValues::AkMidiCcCtrl29Coarse" },
		{ "AkMidiCcCtrl29Fine.Name", "EAkMidiCcValues::AkMidiCcCtrl29Fine" },
		{ "AkMidiCcCtrl30Coarse.Name", "EAkMidiCcValues::AkMidiCcCtrl30Coarse" },
		{ "AkMidiCcCtrl30Fine.Name", "EAkMidiCcValues::AkMidiCcCtrl30Fine" },
		{ "AkMidiCcCtrl31Coarse.Name", "EAkMidiCcValues::AkMidiCcCtrl31Coarse" },
		{ "AkMidiCcCtrl31Fine.Name", "EAkMidiCcValues::AkMidiCcCtrl31Fine" },
		{ "AkMidiCcCtrl3Coarse.Name", "EAkMidiCcValues::AkMidiCcCtrl3Coarse" },
		{ "AkMidiCcCtrl3Fine.Name", "EAkMidiCcValues::AkMidiCcCtrl3Fine" },
		{ "AkMidiCcCtrl9Coarse.Name", "EAkMidiCcValues::AkMidiCcCtrl9Coarse" },
		{ "AkMidiCcCtrl9Fine.Name", "EAkMidiCcValues::AkMidiCcCtrl9Fine" },
		{ "AkMidiCcDataButtonM1.Name", "EAkMidiCcValues::AkMidiCcDataButtonM1" },
		{ "AkMidiCcDataButtonP1.Name", "EAkMidiCcValues::AkMidiCcDataButtonP1" },
		{ "AkMidiCcDataEntryCoarse.Name", "EAkMidiCcValues::AkMidiCcDataEntryCoarse" },
		{ "AkMidiCcDataEntryFine.Name", "EAkMidiCcValues::AkMidiCcDataEntryFine" },
		{ "AkMidiCcEffectCtrl1Coarse.Name", "EAkMidiCcValues::AkMidiCcEffectCtrl1Coarse" },
		{ "AkMidiCcEffectCtrl1Fine.Name", "EAkMidiCcValues::AkMidiCcEffectCtrl1Fine" },
		{ "AkMidiCcEffectCtrl2Coarse.Name", "EAkMidiCcValues::AkMidiCcEffectCtrl2Coarse" },
		{ "AkMidiCcEffectCtrl2Fine.Name", "EAkMidiCcValues::AkMidiCcEffectCtrl2Fine" },
		{ "AkMidiCcExpressionCoarse.Name", "EAkMidiCcValues::AkMidiCcExpressionCoarse" },
		{ "AkMidiCcExpressionFine.Name", "EAkMidiCcValues::AkMidiCcExpressionFine" },
		{ "AkMidiCcFootPedalCoarse.Name", "EAkMidiCcValues::AkMidiCcFootPedalCoarse" },
		{ "AkMidiCcFootPedalFine.Name", "EAkMidiCcValues::AkMidiCcFootPedalFine" },
		{ "AkMidiCcGeneralButton1.Name", "EAkMidiCcValues::AkMidiCcGeneralButton1" },
		{ "AkMidiCcGeneralButton2.Name", "EAkMidiCcValues::AkMidiCcGeneralButton2" },
		{ "AkMidiCcGeneralButton3.Name", "EAkMidiCcValues::AkMidiCcGeneralButton3" },
		{ "AkMidiCcGeneralButton4.Name", "EAkMidiCcValues::AkMidiCcGeneralButton4" },
		{ "AkMidiCcGenSlider1.Name", "EAkMidiCcValues::AkMidiCcGenSlider1" },
		{ "AkMidiCcGenSlider2.Name", "EAkMidiCcValues::AkMidiCcGenSlider2" },
		{ "AkMidiCcGenSlider3.Name", "EAkMidiCcValues::AkMidiCcGenSlider3" },
		{ "AkMidiCcGenSlider4.Name", "EAkMidiCcValues::AkMidiCcGenSlider4" },
		{ "AkMidiCcHoldPedal.Name", "EAkMidiCcValues::AkMidiCcHoldPedal" },
		{ "AkMidiCcHoldPedal2.Name", "EAkMidiCcValues::AkMidiCcHoldPedal2" },
		{ "AkMidiCcLegatoPedal.Name", "EAkMidiCcValues::AkMidiCcLegatoPedal" },
		{ "AkMidiCcLocalKeyboard.Name", "EAkMidiCcValues::AkMidiCcLocalKeyboard" },
		{ "AkMidiCcModWheelCoarse.Name", "EAkMidiCcValues::AkMidiCcModWheelCoarse" },
		{ "AkMidiCcModWheelFine.Name", "EAkMidiCcValues::AkMidiCcModWheelFine" },
		{ "AkMidiCcNonRegisterCoarse.Name", "EAkMidiCcValues::AkMidiCcNonRegisterCoarse" },
		{ "AkMidiCcNonRegisterFine.Name", "EAkMidiCcValues::AkMidiCcNonRegisterFine" },
		{ "AkMidiCcOmniModeOff.Name", "EAkMidiCcValues::AkMidiCcOmniModeOff" },
		{ "AkMidiCcOmniModeOn.Name", "EAkMidiCcValues::AkMidiCcOmniModeOn" },
		{ "AkMidiCcOmniMonophonicOn.Name", "EAkMidiCcValues::AkMidiCcOmniMonophonicOn" },
		{ "AkMidiCcOmniPolyphonicOn.Name", "EAkMidiCcValues::AkMidiCcOmniPolyphonicOn" },
		{ "AkMidiCcPanPositionCoarse.Name", "EAkMidiCcValues::AkMidiCcPanPositionCoarse" },
		{ "AkMidiCcPanPositionFine.Name", "EAkMidiCcValues::AkMidiCcPanPositionFine" },
		{ "AkMidiCcPhaserLevel.Name", "EAkMidiCcValues::AkMidiCcPhaserLevel" },
		{ "AkMidiCcPortamentoCoarse.Name", "EAkMidiCcValues::AkMidiCcPortamentoCoarse" },
		{ "AkMidiCcPortamentoFine.Name", "EAkMidiCcValues::AkMidiCcPortamentoFine" },
		{ "AkMidiCcPortamentoOnOff.Name", "EAkMidiCcValues::AkMidiCcPortamentoOnOff" },
		{ "AkMidiCcReverbLevel.Name", "EAkMidiCcValues::AkMidiCcReverbLevel" },
		{ "AkMidiCcSoftPedal.Name", "EAkMidiCcValues::AkMidiCcSoftPedal" },
		{ "AkMidiCcSoundAttackTime.Name", "EAkMidiCcValues::AkMidiCcSoundAttackTime" },
		{ "AkMidiCcSoundBrightness.Name", "EAkMidiCcValues::AkMidiCcSoundBrightness" },
		{ "AkMidiCcSoundCtrl10.Name", "EAkMidiCcValues::AkMidiCcSoundCtrl10" },
		{ "AkMidiCcSoundCtrl6.Name", "EAkMidiCcValues::AkMidiCcSoundCtrl6" },
		{ "AkMidiCcSoundCtrl7.Name", "EAkMidiCcValues::AkMidiCcSoundCtrl7" },
		{ "AkMidiCcSoundCtrl8.Name", "EAkMidiCcValues::AkMidiCcSoundCtrl8" },
		{ "AkMidiCcSoundCtrl9.Name", "EAkMidiCcValues::AkMidiCcSoundCtrl9" },
		{ "AkMidiCcSoundReleaseTime.Name", "EAkMidiCcValues::AkMidiCcSoundReleaseTime" },
		{ "AkMidiCcSoundTimbre.Name", "EAkMidiCcValues::AkMidiCcSoundTimbre" },
		{ "AkMidiCcSoundVariation.Name", "EAkMidiCcValues::AkMidiCcSoundVariation" },
		{ "AkMidiCcSustenutoPedal.Name", "EAkMidiCcValues::AkMidiCcSustenutoPedal" },
		{ "AkMidiCcTremoloLevel.Name", "EAkMidiCcValues::AkMidiCcTremoloLevel" },
		{ "AkMidiCcVolumeCoarse.Name", "EAkMidiCcValues::AkMidiCcVolumeCoarse" },
		{ "AkMidiCcVolumeFine.Name", "EAkMidiCcValues::AkMidiCcVolumeFine" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EAkMidiCcValues.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AkAudio_EAkMidiCcValues_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		"EAkMidiCcValues",
		"EAkMidiCcValues",
		Z_Construct_UEnum_AkAudio_EAkMidiCcValues_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_EAkMidiCcValues_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AkAudio_EAkMidiCcValues_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AkAudio_EAkMidiCcValues_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AkAudio_EAkMidiCcValues()
	{
		if (!Z_Registration_Info_UEnum_EAkMidiCcValues.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAkMidiCcValues.InnerSingleton, Z_Construct_UEnum_AkAudio_EAkMidiCcValues_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAkMidiCcValues.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_EAkMidiCcValues_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_EAkMidiCcValues_h_Statics::EnumInfo[] = {
		{ EAkMidiCcValues_StaticEnum, TEXT("EAkMidiCcValues"), &Z_Registration_Info_UEnum_EAkMidiCcValues, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2323382756U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_EAkMidiCcValues_h_259210811(TEXT("/Script/AkAudio"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_EAkMidiCcValues_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_ModProjects_Polaris_Plugins_EnginePlugins_Wwise_Source_AkAudio_Public_EAkMidiCcValues_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
