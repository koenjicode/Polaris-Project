#include "PolarisNiagaraActorManager.h"

APolarisNiagaraActorManager::APolarisNiagaraActorManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RespawnUserParameterName = TEXT("Callback");
    this->RespawnIdUserParameterName = TEXT("CallbackID");
    this->UseRespawnTagName = TEXT("SoundCallback");
}

void APolarisNiagaraActorManager::Respawn(UNiagaraSystem* Asset, const int32 ID, const FVector position) {
}

void APolarisNiagaraActorManager::OnChangeStageLight() {
}

void APolarisNiagaraActorManager::AddNiagaraComp(UFXSystemComponent* niagara_comp) {
}

void APolarisNiagaraActorManager::AddNiagaraActor(ANiagaraActor* niagara_actor) {
}


