#include "PolarisLandCollidStaticMeshActor.h"

APolarisLandCollidStaticMeshActor::APolarisLandCollidStaticMeshActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeInCluster = false;
    this->FloorNo = 0;
}


