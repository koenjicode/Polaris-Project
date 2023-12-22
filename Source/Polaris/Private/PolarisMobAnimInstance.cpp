#include "PolarisMobAnimInstance.h"

UPolarisMobAnimInstance::UPolarisMobAnimInstance() {
    this->BaseMobstate = EMobState::Idle_State;
    this->IdleAnimationID = 0;
    this->TerrorAnimationID = 0;
    this->CheerAnimationID = 0;
    this->InitAnimBP = false;
    this->IdleAnimationFromActor = NULL;
    this->TerrorAnimationFromActor = NULL;
    this->CheerAnimationFromActor = NULL;
    this->AnimationAssetFromActor = NULL;
}


