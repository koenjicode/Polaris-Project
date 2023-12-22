#include "PolarisBakeMeshActor.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/StaticMeshComponent.h"

APolarisBakeMeshActor::APolarisBakeMeshActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->SrcSkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SrcSkeletalMeshComponent"));
    this->SrcStaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SrcStaticMeshComponent"));
    this->DefaultSceneRoot = (USceneComponent*)RootComponent;
    this->SrcItemPrefab = NULL;
    this->SrcSkeletalMeshComponent->SetupAttachment(RootComponent);
    this->SrcStaticMeshComponent->SetupAttachment(RootComponent);
}

void APolarisBakeMeshActor::SrcMeshSetting(UMeshComponent* _comp, UItemPrefab* _source_ip) {
}


