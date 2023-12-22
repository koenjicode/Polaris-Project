#include "PolarisCharacterEffectManager.h"

APolarisCharacterEffectManager::APolarisCharacterEffectManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

UNiagaraComponent* APolarisCharacterEffectManager::SpawnWorld(const int32& EffectId, const FVector& position, const FRotator& Rotation, const int32& historyNumber, const int32& PlayerNumber) {
    return NULL;
}

UNiagaraComponent* APolarisCharacterEffectManager::SpawnOnBall(const int32& EffectId, const FVector& position, const FRotator& Rotation, const FVector& Scale, const int32& SortPriority, const int32& historyNumber, const int32& PlayerNumber, bool forceOnBall) {
    return NULL;
}

UNiagaraComponent* APolarisCharacterEffectManager::SpawnBone(const int32& EffectId, const int32& PlayerNumber, const int32& bonePlayerNumber, const int32& boneID, const FName& BoneName, const int32& historyNumber, const FVector& position, const FRotator& Rotation, bool isAite, const FVector& Offset) {
    return NULL;
}

void APolarisCharacterEffectManager::SetVisibilityAll(bool IsVisible) {
}

void APolarisCharacterEffectManager::SetDummyTick(const int32 tick_count, const float delta_time) {
}

void APolarisCharacterEffectManager::SetAuraParameter() {
}

void APolarisCharacterEffectManager::RemoveVisibilityAllParticles() {
}

void APolarisCharacterEffectManager::RemoveAllParticles() {
}


void APolarisCharacterEffectManager::AddParticleSystem(int32 PlayerNumber, int32 EffectId, UNiagaraComponent* Emitter) {
}


