#include "PolarisTestInterface.h"

UPolarisTestInterface::UPolarisTestInterface() {
    this->LocalState = 0;
    this->LocalCounter = 0;
}

void UPolarisTestInterface::Wait(int32 frame, FLatentActionInfo LatentInfo) {
}


void UPolarisTestInterface::Done() {
}

void UPolarisTestInterface::Delay(float Time, FLatentActionInfo LatentInfo) {
}


