#include "ItemFloatingMovementComponent.h"

UItemFloatingMovementComponent::UItemFloatingMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EnableMoveInterpolation = true;
    this->ChaseRatioPerSecond = 1.00f;
    this->RotationChaseRatioPerSecond = 1.00f;
    this->EnableRotateInterpolation = true;
    this->MinMoveSpeed = 0.00f;
    this->MinRotateDegree = 0.00f;
    this->MaxMoveSpeed = 1000.00f;
    this->MaxRotateDegree = 360.00f;
    this->bLockRotatorYaw = false;
    this->bLockRotatorPitch = false;
    this->bLockRotatorRoll = true;
}

void UItemFloatingMovementComponent::Chase(float DeltaTime) {
}


