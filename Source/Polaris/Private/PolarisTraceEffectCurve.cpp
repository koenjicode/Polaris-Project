#include "PolarisTraceEffectCurve.h"

UPolarisTraceEffectCurve::UPolarisTraceEffectCurve() {
    this->CurveData.AddDefaulted(10);
}

float UPolarisTraceEffectCurve::GetParamValue(EPolarisTraceEffectCurveType CurveType, float InTime) const {
    return 0.0f;
}


