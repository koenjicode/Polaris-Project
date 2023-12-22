#include "KawaiiPhysicsDynamicBoneData.h"

FKawaiiPhysicsDynamicBoneData::FKawaiiPhysicsDynamicBoneData() {
    this->DampingCurve = NULL;
    this->WorldDampingLocationCurve = NULL;
    this->WorldDampingRotationCurve = NULL;
    this->StiffnessCurve = NULL;
    this->RadiusCurve = NULL;
    this->LimitAngleCurve = NULL;
    this->DummyBoneLength = 0.00f;
    this->BoneForwardAxis = EBoneForwardAxis::X_Positive;
    this->PlanarConstraint = EPlanarConstraint::None;
    this->TeleportDistanceThreshold = 0.00f;
    this->TeleportRotationThreshold = 0.00f;
    this->bEnableWind = false;
    this->WindScale = 0.00f;
}

