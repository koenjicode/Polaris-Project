#include "PolarisDemoCharacterActor.h"

APolarisDemoCharacterActor::APolarisDemoCharacterActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClothRootMotionBone = TEXT("Top");
    this->DemoCatwalkClothSettingArray.AddDefaulted(17);
    this->IsCreateSkeletonOnConstruction = false;
    this->DemoSlaveMeshSettingArray.AddDefaulted(10);
    this->DemoCustomizeSetForLoad = NULL;
}

TArray<USkeletalMeshComponent*> APolarisDemoCharacterActor::GetAllDemoMeshComponent() const {
    return TArray<USkeletalMeshComponent*>();
}



