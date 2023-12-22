#include "PolarisDemoCharacterComponent.h"

UPolarisDemoCharacterComponent::UPolarisDemoCharacterComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OwnerCharacterActor = NULL;
}

TArray<UMeshComponent*> UPolarisDemoCharacterComponent::GetAllDemoMeshComponent() {
    return TArray<UMeshComponent*>();
}

bool UPolarisDemoCharacterComponent::CreateMeshForDemo(TArray<FDemoSourceAssetStruct> DemoSourceAssetArray, const TArray<FDemoAttachSkeletalMeshStruct2>& SourceAttachMeshSetArray, ESupportUEAnimationMode AnimMode, bool isConstruct) {
    return false;
}

void UPolarisDemoCharacterComponent::ClearAllCreatedAsset() {
}


