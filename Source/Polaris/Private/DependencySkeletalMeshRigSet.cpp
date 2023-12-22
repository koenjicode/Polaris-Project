#include "DependencySkeletalMeshRigSet.h"

FDependencySkeletalMeshRigSet::FDependencySkeletalMeshRigSet() {
    this->CatwalkClothCollisionAsset = NULL;
    this->CatwalkClothCollisionOverrideDataAsset = NULL;
    this->CatwalkClothCollisionAttachmentDataAsset = NULL;
    this->CatwalkClothLcjOverrideAssetItem = NULL;
    this->CatwalkClothLcjOverrideDataAsset = NULL;
    this->IsInitializeVisibility = false;
    this->IsAlwaysLoad = false;
    this->IsUseSkeletalMesh = false;
    this->EnableSelfConstraint = false;
    this->EnableAbilityItemHandOff = false;
    this->IsShadowMesh = false;
}

