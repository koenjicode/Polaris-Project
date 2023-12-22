#include "PolarisAnotherWorldRootActor.h"
#include "Components/SceneComponent.h"

APolarisAnotherWorldRootActor::APolarisAnotherWorldRootActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultComponent"));
    this->OwnerPlayer = NULL;
}


