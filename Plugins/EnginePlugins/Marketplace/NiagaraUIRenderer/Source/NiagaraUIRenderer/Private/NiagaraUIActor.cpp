#include "NiagaraUIActor.h"
#include "Components/SceneComponent.h"

ANiagaraUIActor::ANiagaraUIActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
}


