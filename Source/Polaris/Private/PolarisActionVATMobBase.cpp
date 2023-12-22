#include "PolarisActionVATMobBase.h"

APolarisActionVATMobBase::APolarisActionVATMobBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ElapsedFrameInThisLoop = 0;
    this->bStartAnimToPlay = false;
    this->totalframe = 787;
    this->AnimationDelayTime = 0.00f;
    this->SpeedGen = 0.08f;
    this->RotationSpeedRate = 100000.00f;
    this->DisableSpeed = 0.10f;
    this->AppearSpeed = 0.00f;
    this->OpacityIntensity = 20.00f;
    this->bUseInitByLoop = true;
    this->bFixWalkRotation = false;
    this->bUseDisable = false;
    this->nowMovePatern = EMobVATMovePatern::Idle;
    this->nowDitherPatern = EMobVATMovePatern::Idle;
    this->GeneralVATSpeedRate = 1.50f;
    this->nowActionIndex = 0;
    this->bUseNativeTick = true;
    this->bThisFrameJumpedByNative = false;
}

float APolarisActionVATMobBase::WalkNative(FVector source_location, FVector target_location, bool fixActorRotation, float speedRate, float Delta, float WalkProgress) {
    return 0.0f;
}

void APolarisActionVATMobBase::UpdateVATActionTimeline_Implementation() {
}

void APolarisActionVATMobBase::SetDMIScalerTotalFrame_Implementation(float Val) {
}

void APolarisActionVATMobBase::SetDMIScalerSpeedGen_Implementation(float Val) {
}

void APolarisActionVATMobBase::SetDMIScalerOpacityIntensity_Implementation(float Val) {
}

void APolarisActionVATMobBase::SetDMIScalerDelay_Implementation(float Val) {
}

void APolarisActionVATMobBase::PlayEffectNative(UNiagaraSystem* FX, FDummyMobEffect _effect) {
}

void APolarisActionVATMobBase::InitByLoopNative() {
}

void APolarisActionVATMobBase::InitByLoop_Implementation() {
}

float APolarisActionVATMobBase::GetDMIScalerTotalFrame_Implementation() {
    return 0.0f;
}

float APolarisActionVATMobBase::GetDMIScalerSpeedGen_Implementation() {
    return 0.0f;
}

float APolarisActionVATMobBase::GetDMIScalerOpacityIntensity_Implementation() {
    return 0.0f;
}

float APolarisActionVATMobBase::FirstWalkToOnRailNative(FVector source_location, FVector target_location, bool fixActorRotation, float speedRate, float Delta, float WalkProgress) {
    return 0.0f;
}

bool APolarisActionVATMobBase::CheckStartOffset(float Delta) {
    return false;
}

void APolarisActionVATMobBase::CheckMovePatern(float Delta, int32 action_index) {
}




