#include "PolarisTracePartsDataAsset.h"

UPolarisTracePartsDataAsset::UPolarisTracePartsDataAsset() {
    this->TracePartsId = EPolarisTracePartsId::TRC_PT_ARMS1;
    this->bOverrideEvent = false;
    this->LifeTime = 1.00f;
    this->bLifeStop = false;
    this->MaxKeyFrameNum = 2;
    this->Brightness = 1.00f;
    this->KeyFrameStopFrame = 0.00f;
    this->BrightnessFrame = 12.00f;
    this->RefractionFrame = 12.00f;
}


