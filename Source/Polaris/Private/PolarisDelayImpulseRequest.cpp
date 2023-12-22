#include "PolarisDelayImpulseRequest.h"

FPolarisDelayImpulseRequest::FPolarisDelayImpulseRequest() {
    this->Target = NULL;
    this->ImpulseStrength = 0.00f;
    this->ImpulseStrengthType = EStageImpulseStrengthType::None;
    this->DestructibleDamage = 0.00f;
    this->Distance = 0.00f;
}

