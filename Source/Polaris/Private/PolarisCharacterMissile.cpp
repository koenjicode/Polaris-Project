#include "PolarisCharacterMissile.h"
#include "Components/ChildActorComponent.h"
#include "Components/SceneComponent.h"

APolarisCharacterMissile::APolarisCharacterMissile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
    this->MissileState = EMissileStateType::MissileStateType_Stop;
    this->Handle = 0;
    this->PlayerId = -1;
    this->EffectId = -1;
    this->AttachSoundPosBone = TEXT("Root");
    this->ParticleComp = NULL;
    this->NextEffectQueued = MissileHitTypeEffect_Unassigned;
    this->IsAttathOwnerBaseTrans = false;
    this->IsSyncPlayerSpeed = false;
    this->MissileItemActor = NULL;
    this->SoundPosActor_Missile = CreateDefaultSubobject<UChildActorComponent>(TEXT("SoundPosActor_Missile"));
}

void APolarisCharacterMissile::TerminateMissile() {
}

void APolarisCharacterMissile::Spawn_Implementation(const FMissileSpawnDesc& Desc) {
}

void APolarisCharacterMissile::SetVisible_Implementation(bool IsVisible) {
}

void APolarisCharacterMissile::SetNextEffectQueued(TEnumAsByte<EMissileHitType> EffectType) {
}


void APolarisCharacterMissile::OnUpdate_Implementation(const FVector& position, const FVector& Direction) {
}

void APolarisCharacterMissile::onHit_Implementation(bool bHitFloor, bool bHitWall) {
}

void APolarisCharacterMissile::OnGuarded_Implementation() {
}

void APolarisCharacterMissile::OnExpired_Implementation() {
}

void APolarisCharacterMissile::OnClashed_Implementation() {
}

void APolarisCharacterMissile::MissileHit(const FVector SpawnLocation, FRotator SpawnRotation, FHitResult HitResult, TEnumAsByte<EMissileHitType> HitType) {
}

bool APolarisCharacterMissile::IsFinish_Implementation() const {
    return false;
}

TEnumAsByte<EMissileHitType> APolarisCharacterMissile::GetNextEffectQueued() const {
    return MissileHitTypeEffect_Unassigned;
}

float APolarisCharacterMissile::GePlayerFrameSpeed() const {
    return 0.0f;
}

void APolarisCharacterMissile::End() {
}

void APolarisCharacterMissile::DestroyMissile() {
}


