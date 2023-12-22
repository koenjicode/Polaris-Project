#include "PolarisStageGimmickStaticMeshActor.h"
#include "Components/StaticMeshComponent.h"

APolarisStageGimmickStaticMeshActor::APolarisStageGimmickStaticMeshActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
    this->StaticMeshComponent->SetupAttachment(RootComponent);
}


