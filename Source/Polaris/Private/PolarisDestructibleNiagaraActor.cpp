#include "PolarisDestructibleNiagaraActor.h"
#include "Components/SceneComponent.h"

APolarisDestructibleNiagaraActor::APolarisDestructibleNiagaraActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->DefaultSceneRoot = (USceneComponent*)RootComponent;
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
    this->DestructibleParticle = NULL;
}

void APolarisDestructibleNiagaraActor::OnReset() {
}

void APolarisDestructibleNiagaraActor::OnComponentFractureEvent(const FVector& HitPoint, const FVector& HitDirection) {
}

void APolarisDestructibleNiagaraActor::KeyOnImpacterSound() {
}


