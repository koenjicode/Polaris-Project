#include "PolarisTracePartsSetting.h"

FPolarisTracePartsSetting::FPolarisTracePartsSetting() {
    this->ScaleType = ETraceScaleType::FromFirstSocket;
    this->Width = 0.00f;
    this->FrameScale = NULL;
    this->KindDataAssetList = NULL;
}

