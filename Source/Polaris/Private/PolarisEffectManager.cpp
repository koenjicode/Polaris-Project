#include "PolarisEffectManager.h"

APolarisEffectManager::APolarisEffectManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CommonEffectManagerClass = NULL;
    this->StageEffectManagerClass = NULL;
    this->ItemEffectManagerClass = NULL;
    this->NiagaraActorManagerClass = NULL;
    this->IsDummySpawnCountScale = false;
    this->MPC_Effect_LOD = NULL;
    this->NPC_Mothead = NULL;
    this->m_pPolarisCommonEffectManager = NULL;
    this->m_pPolarisStageEffectManager = NULL;
    this->m_pPolarisItemEffectManager = NULL;
    this->m_pPolarisNiagaraActorManager = NULL;
}

void APolarisEffectManager::SetParticleAssetNameHash(UNiagaraSystem* Asset) {
}




void APolarisEffectManager::SetIsIgnoreEffectSound_Implementation(bool is_dummy, float delay_time) {
}

void APolarisEffectManager::SetDummyTick(const int32 tick_count, const float delta_time) {
}

void APolarisEffectManager::SetChangeFloorFlag(bool is_change_floor) {
}

void APolarisEffectManager::ResetParticle() {
}

void APolarisEffectManager::ResetAllFlag() {
}



UNiagaraComponent* APolarisEffectManager::ReqNiagaraScalingAttached_Implementation(UNiagaraSystem* SystemTemplate, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, FVector Scale, EAttachLocation::Type LocationType, bool bAutoDestroy, bool bAutoSound) {
    return NULL;
}

UNiagaraComponent* APolarisEffectManager::ReqNiagaraAttached_Implementation(UNiagaraSystem* SystemTemplate, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, EAttachLocation::Type LocationType, bool bAutoDestroy, bool bAutoSound) {
    return NULL;
}

UNiagaraComponent* APolarisEffectManager::ReqNiagaraAtLocation_Implementation(const UObject* WorldContextObject, UNiagaraSystem* SystemTemplate, FVector Location, FRotator Rotation, FVector Scale, bool bAutoDestroy, bool bAutoActivate, bool bAutoSound) {
    return NULL;
}



void APolarisEffectManager::KeyOnSoundbyNiagaraAsset(const FVector& position, UNiagaraSystem* Asset) {
}

APolarisStageEffectManager* APolarisEffectManager::GetStageEffectManager() {
    return NULL;
}


TArray<UNiagaraSystem*> APolarisEffectManager::GetNiagaraSystemObjects() {
    return TArray<UNiagaraSystem*>();
}

APolarisNiagaraActorManager* APolarisEffectManager::GetNiagaraActorManager() {
    return NULL;
}

APolarisItemEffectManager* APolarisEffectManager::GetItemEffectManager() {
    return NULL;
}

APolarisCommonEffectManager* APolarisEffectManager::GetCommonEffectManager() {
    return NULL;
}

APolarisCharacterEffectManager* APolarisEffectManager::GetCharacterEffectManager(const int32 player_id) {
    return NULL;
}

bool APolarisEffectManager::GetChangeFloorFlag() {
    return false;
}

void APolarisEffectManager::AddParticle(UNiagaraComponent* particlem, bool over_count_check) {
}


