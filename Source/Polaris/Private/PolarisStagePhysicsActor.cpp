#include "PolarisStagePhysicsActor.h"

APolarisStagePhysicsActor::APolarisStagePhysicsActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeInCluster = false;
    this->State = EStageGimmickState::Init;
    this->IsVanish = false;
    this->IsNoFadeout = false;
    this->IsVanishWait = false;
    this->VanishingStartSecond = 0.00f;
    this->VanishingEndSecond = 0.00f;
    this->ImpacterAudioEvent = NULL;
    this->ImpacterExtraMassValue = 0.00f;
    this->ImpacterExtraVelocityValue = 1.00f;
    this->ImpacterForceThreshold = 2.50f;
    this->ImpacterMassThreshold = 1.00f;
    this->ImpacterNoMultiPlayFrame = 2;
}

void APolarisStagePhysicsActor::OnReset() {
}

void APolarisStagePhysicsActor::OnDamage(const FVector& HitPoint, const FVector& HitDirection) {
}

void APolarisStagePhysicsActor::OnComponentFractureEvent(const FVector& HitPoint, const FVector& HitDirection) {
}

void APolarisStagePhysicsActor::KeyOnImpacterSound() {
}


