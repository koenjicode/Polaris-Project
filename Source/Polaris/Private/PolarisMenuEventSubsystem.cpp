#include "PolarisMenuEventSubsystem.h"

UPolarisMenuEventSubsystem::UPolarisMenuEventSubsystem() {
    this->bImmediate = false;
    this->bBlack = false;
    this->bUseLatestSequenceNo = false;
    this->LatestSequenceNo = -1;
    this->LatestFocusOut = false;
}

void UPolarisMenuEventSubsystem::GetAnalogAxisRight(float& X, float& Y) const {
}


