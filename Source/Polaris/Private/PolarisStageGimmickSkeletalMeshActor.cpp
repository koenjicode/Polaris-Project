#include "PolarisStageGimmickSkeletalMeshActor.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/StaticMeshComponent.h"
#include "PolarisMeshDeformComponent.h"

APolarisStageGimmickSkeletalMeshActor::APolarisStageGimmickSkeletalMeshActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DefaultMeshComponent"));
    this->SkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMeshComponent"));
    this->BrokenMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BrokenMeshComponent"));
    this->PolarisMeshDeformComponent = CreateDefaultSubobject<UPolarisMeshDeformComponent>(TEXT("PolarisMeshDeformComponent"));
    this->DecalMesh = NULL;
    this->DecalMesh_Broken = NULL;
    this->decal = NULL;
    this->IsDeform = false;
    this->IsAlwaysHitReaction = false;
    this->HitInterval = 30;
    this->NoPriorityCancel = false;
    this->BreakPattern = EPolarisStageGimmickBreakPattern::None;
    this->BreakPattern2nd = EPolarisStageGimmickBreakPattern::None;
    this->IsBreakPattern2nd = false;
    this->BreakLevel = 0;
    this->VisibleSkeletalMeshFlag = 0;
    this->VisibleLightFlag = 0;
    this->VisibleEffectFlag = 0;
    this->CurrentBreakPattern = EPolarisStageGimmickBreakPattern::None;
    this->LastImpulseStrengthType = 0;
    this->DefaultMeshComponent->SetupAttachment(RootComponent);
    this->SkeletalMeshComponent->SetupAttachment(RootComponent);
    this->BrokenMeshComponent->SetupAttachment(RootComponent);
    this->PolarisMeshDeformComponent->SetupAttachment(SkeletalMeshComponent);
}


