#include "PolarisRadialForceComponent.h"

UPolarisRadialForceComponent::UPolarisRadialForceComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ObjectTypesToAffect.AddDefaulted(5);
    this->ImpulseStrengthType = EStageImpulseStrengthType::W;
    this->TargetMask = 0;
    this->IsCheckCulling = false;
    this->DelayImpluseMaxCount = 0;
    this->DelayImpluseFrame = 0;
    this->DelayImpluseInterval = 0;
}


