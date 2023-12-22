#include "LobbySoundManager.h"

ALobbySoundManager::ALobbySoundManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LobbyFootStepSoundEvent = NULL;
    this->LobbyJumpSoundEvent = NULL;
    this->LobbyLandingSoundEvent = NULL;
    this->IsPlayingSequencer = false;
    this->IsDebugDraw = false;
}


void ALobbySoundManager::StopLobbyAmbientSound() {
}


void ALobbySoundManager::StartLobbyAmbientSound() {
}

void ALobbySoundManager::SetObjectOcclusion(UAkComponent* EmitterAkComponent, float OccusionValue) {
}

void ALobbySoundManager::SetIsPlayingSequencer(bool _IsPlaying) {
}


void ALobbySoundManager::KeyOnLobbyLanding(uint8 surfaceType, AActor* characterActor) {
}

void ALobbySoundManager::KeyOnLobbyJump(uint8 surfaceType, AActor* characterActor) {
}

void ALobbySoundManager::KeyOnLobbyFootStep(uint8 surfaceType, AActor* characterActor, float characterSpeed) {
}


