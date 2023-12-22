#include "CatwalkClothComponentBase.h"

UCatwalkClothComponentBase::UCatwalkClothComponentBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CancelDistanceThreshold = 300.00f;
    this->CancelAngleThreshold = 150.00f;
    this->bEnableSimulation = true;
    this->CwcMaxDistanceRatio = 1.00f;
    this->bForceMotionCancellation = false;
    this->bUseBoneScalingModeFromAsset = false;
    this->BoneScalingMode = ECwClothBoneScalingMode::Disabled;
    this->CwcTimeDilation = 1.00f;
    this->NumStepsToSettleAfterReset = 0;
    this->Wetness = 0.00f;
    this->NumStepsToBlendFromBindPose = 0;
    this->CollisionOverride = NULL;
    this->AttachmentCollision = NULL;
}

void UCatwalkClothComponentBase::SetCollisionOverride(UCatwalkClothCollisionAsset* InCollisionOverride) {
}

void UCatwalkClothComponentBase::SetAttachmentCollision(UCatwalkClothCollisionAsset* InAttachmentCollision, USkinnedMeshComponent* InAttachedPoseComponent) {
}

void UCatwalkClothComponentBase::ResetClothVertices() {
}

void UCatwalkClothComponentBase::InitializeExternalSimulatonMeshSlots() {
}

UCatwalkClothCollisionAsset* UCatwalkClothComponentBase::GetCollisionOverride() const {
    return NULL;
}

UCatwalkClothCollisionAsset* UCatwalkClothComponentBase::GetAttachmentCollision() const {
    return NULL;
}


