#include "PolarisRootControllerActor.h"
#include "Components/SkeletalMeshComponent.h"

APolarisRootControllerActor::APolarisRootControllerActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FarRootComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMeshComponent"));
    this->ProgMoveEndTime = 0.00f;
    this->bReversePlay = false;
    this->bPlay = false;
    this->ProgMoveTime = 0.00f;
    this->FarRootComponent->SetupAttachment(RootComponent);
}


