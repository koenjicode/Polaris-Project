#include "PolarisSoundPositionActor.h"
#include "Components/SceneComponent.h"

APolarisSoundPositionActor::APolarisSoundPositionActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->IsSoundPlaying = false;
    this->IsBattlePositionActor = false;
    this->IsBattleBasePositionActor = false;
    this->RootScene = (USceneComponent*)RootComponent;
}

void APolarisSoundPositionActor::KeyOnFromThisActor(UAkAudioEvent* _Event) {
}


