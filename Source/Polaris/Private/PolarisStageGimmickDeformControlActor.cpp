#include "PolarisStageGimmickDeformControlActor.h"
#include "Components/BoxComponent.h"

APolarisStageGimmickDeformControlActor::APolarisStageGimmickDeformControlActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BoxCollisionComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollisionComponent"));
    this->IsTakeDamage = false;
    this->DestructDelayMaxTime = 0.00f;
    this->WeightDamageMul = 0.00f;
    this->IsVanish = false;
    this->VanishingStartSecond = 0.00f;
    this->VanishingEndSecond = 0.00f;
    this->IsVanishingDisableBarrier = true;
    this->LastImpulseStrengthType = -1;
    this->BoxCollisionComponent->SetupAttachment(RootComponent);
}

void APolarisStageGimmickDeformControlActor::OnTakeRadialDamageEvent(AActor* DamagedActor, float Damage, const UDamageType* DamageType, FVector Origin, const FHitResult& HitInfo, AController* InstigatedBy, AActor* DamageCauser) {
}

void APolarisStageGimmickDeformControlActor::OnTakePointDamageEvent(AActor* DamagedActor, float Damage, AController* InstigatedBy, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector ShotFromDirection, const UDamageType* DamageType, AActor* DamageCauser) {
}


