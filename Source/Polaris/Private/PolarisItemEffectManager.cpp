#include "PolarisItemEffectManager.h"

APolarisItemEffectManager::APolarisItemEffectManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void APolarisItemEffectManager::ToggleAuraVisibility(const int32 player_id, const bool Visible) {
}

void APolarisItemEffectManager::SetAuraVisibility(int32 player_id, bool IsVisible) {
}

void APolarisItemEffectManager::RemoveVisibilityAllParticles() {
}

void APolarisItemEffectManager::RemoveAllParticles() {
}


void APolarisItemEffectManager::InitAuraItem(const int32 player_id) {
}

TArray<UNiagaraComponent*> APolarisItemEffectManager::GetAuraItem(const int32 player_id) {
    return TArray<UNiagaraComponent*>();
}

void APolarisItemEffectManager::DestroyAura(const int32 player_id) {
}

void APolarisItemEffectManager::AddWorldParticle(UNiagaraComponent* Particle) {
}

void APolarisItemEffectManager::AddTickAuraItem(const int32 player_id, const int32 tick_count) {
}

void APolarisItemEffectManager::AddParticleSystem(int32 player_id, int32 ItemId, int32 EffectId, UNiagaraComponent* Particle) {
}


