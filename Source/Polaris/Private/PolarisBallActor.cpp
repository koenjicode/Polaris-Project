#include "PolarisBallActor.h"
#include "PolarisBallMeshComponent.h"

APolarisBallActor::APolarisBallActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BallId = 0;
    this->IsVisibleActor = true;
    this->MainMesh = CreateDefaultSubobject<UPolarisBallMeshComponent>(TEXT("MainMesh"));
}

UPolarisBallMeshComponent* APolarisBallActor::GetMeshComponent() const {
    return NULL;
}


