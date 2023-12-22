#include "KawaiiPhysicsDynamicBoneDataAsset.h"

UKawaiiPhysicsDynamicBoneDataAsset::UKawaiiPhysicsDynamicBoneDataAsset() {
    this->DummyBoneLength = 0.00f;
    this->BoneForwardAxis = EBoneForwardAxis::X_Positive;
    this->PlanarConstraint = EPlanarConstraint::None;
    this->TeleportDistanceThreshold = 300.00f;
    this->TeleportRotationThreshold = 10.00f;
    this->bEnableWind = false;
    this->WindScale = 1.00f;
}


