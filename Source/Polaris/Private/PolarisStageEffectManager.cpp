#include "PolarisStageEffectManager.h"

APolarisStageEffectManager::APolarisStageEffectManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaxDecal = 20;
    this->MaxDestructibleMesh = 10;
    this->MaxBoneStepDecal = 10;
    this->IsMultipleCpuMode = false;
}

void APolarisStageEffectManager::SetVisibilityDecal(bool IsVisible) {
}

void APolarisStageEffectManager::SetVisibilityDebris(bool IsVisible) {
}

void APolarisStageEffectManager::SetVisibilityAll(bool IsVisible) {
}

void APolarisStageEffectManager::SetStageGimmickParticleAsset(UNiagaraSystem* Asset) {
}

void APolarisStageEffectManager::SetAnotherWorldType(EStageAnotherWorldType wolrd_type) {
}

void APolarisStageEffectManager::ResetStageSmoke() {
}

void APolarisStageEffectManager::ResetParticle() {
}

void APolarisStageEffectManager::ResetDecal() {
}

void APolarisStageEffectManager::ResetDebris() {
}

void APolarisStageEffectManager::ResetAllEffect(bool is_floor_break) {
}

void APolarisStageEffectManager::RequestStageFloorSmoke_Implementation(const FVector& position, const FRotator& Rotation, int32 FloorId, const int32 EffectId, const int32 PlayerId, const FName BoneName) {
}

void APolarisStageEffectManager::RequestSoundFootstepKeyOn(const int32 surface_type, int32 PlayerIndex, int32 FighterId, bool IsLeft) {
}



TArray<FHitResult> APolarisStageEffectManager::RequestMultiTrace(const int32 player_id, TEnumAsByte<ETraceTypeQuery> trace_channel, const TArray<AActor*>& actors_ignore, const FVector& Start, const FVector& End, FVector start_offset, FVector end_offset, bool is_trace_comprex, bool is_use_frame_data) {
    return TArray<FHitResult>();
}


void APolarisStageEffectManager::RequestFootstep_Implementation(int32 PlayerIndex, const FVector& position, const FRotator& Rotation, const bool IsLeft, const bool isRight, const bool bSound) {
}


void APolarisStageEffectManager::RequestBonestep_Implementation(int32 PlayerIndex, const int32 EffectId, const FName BoneName, const FVector& position, const FRotator& Rotation, const bool bSound, const FVector& Offset) {
}


void APolarisStageEffectManager::LatestDebrisUpdate(const int32 tick_count) {
}

FVector APolarisStageEffectManager::GetFootShadowScale() {
    return FVector{};
}

float APolarisStageEffectManager::GetFootShadowAlpha() {
    return 0.0f;
}


void APolarisStageEffectManager::AddParticle(UNiagaraComponent* Particle) {
}

void APolarisStageEffectManager::AddDestructibleParticle(UNiagaraComponent* Particle) {
}

void APolarisStageEffectManager::AddBreakDecal(UDecalComponent* decal) {
}

void APolarisStageEffectManager::AddBoneDecal(UDecalComponent* decal) {
}


