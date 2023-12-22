#include "PolarisStageGimmickActor.h"

APolarisStageGimmickActor::APolarisStageGimmickActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->IsTouchBreak = 0;
    this->IsPlayerDamageBrakeFlag = false;
    this->IsPlayerDownBrakeFlag = false;
    this->IsHitBreakFlag = false;
    this->IsPhysicsAutoAttackFlag = false;
    this->IsStartPhysicsMeshFlag = false;
    this->DamageImpluseStrengthMul = 0.00f;
    this->TouchImpluseStrength = 0.00f;
    this->DestrictibleForce = NULL;
    this->DestrictibleForcePolaris = NULL;
    this->HitInvisibleImpuleseThreshold = 0.00f;
    this->DestrictibleNiagaraRBDAsset = NULL;
    this->DestrictibleStaticMeshAssset = NULL;
    this->DestrictibleEnableHardSleeping = false;
    this->IsDestrictibleWallBarrier = false;
    this->DestructibleForceRadius = 300.00f;
    this->DestructibleForceStrength = 500.00f;
    this->IsDispDestructibleForce = false;
    this->Volume = NULL;
    this->BattleSpaceWallActor = NULL;
    this->IsVanish = false;
    this->IsVanishWait = false;
    this->VanishingStartSecond = 0.00f;
    this->VanishingEndSecond = 0.00f;
    this->IsVanishingDisableBarrier = false;
    this->IsNoFadeoutDestructible = false;
    this->HitSound = NULL;
    this->ImpacterAudioEvent = NULL;
    this->ImpacterExtraMassValue = 0.00f;
    this->ImpacterExtraVelocityValue = 1.00f;
    this->ImpacterForceThreshold = 2.50f;
    this->ImpacterMassThreshold = 1.00f;
    this->ImpacterNoMultiPlayFrame = 2;
    this->RevaivalWaitSecond = 0.00f;
    this->DeformWeightDamageMul = 0.00f;
}

void APolarisStageGimmickActor::OnWallHitEventForBattleSpace(FVector HitLocation, float Damage) {
}

void APolarisStageGimmickActor::OnTakeRadialDamageEvent(AActor* DamagedActor, float Damage, const UDamageType* DamageType, FVector Origin, const FHitResult& HitInfo, AController* InstigatedBy, AActor* DamageCauser) {
}

void APolarisStageGimmickActor::OnTakePointDamageEvent(AActor* DamagedActor, float Damage, AController* InstigatedBy, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector ShotFromDirection, const UDamageType* DamageType, AActor* DamageCauser) {
}

void APolarisStageGimmickActor::OnAttackHitEvent(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

UMeshComponent* APolarisStageGimmickActor::GetMeshComponent() const {
    return NULL;
}

void APolarisStageGimmickActor::DoSpawnEffectTest() {
}


