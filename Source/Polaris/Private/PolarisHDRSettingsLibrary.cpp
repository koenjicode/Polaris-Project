#include "PolarisHDRSettingsLibrary.h"

UPolarisHDRSettingsLibrary::UPolarisHDRSettingsLibrary() {
}

bool UPolarisHDRSettingsLibrary::SupportsHDRDisplayOutput() {
    return false;
}

void UPolarisHDRSettingsLibrary::SetUIBrightness(int32 Level) {
}

void UPolarisHDRSettingsLibrary::SetToneCurvePoint(FVector2f p1, FVector2f p2, FVector2f p3) {
}

void UPolarisHDRSettingsLibrary::SetToneCurveParam(float ParamH) {
}

void UPolarisHDRSettingsLibrary::SetSDRScreenBrightness(int32 Level) {
}

void UPolarisHDRSettingsLibrary::SetScreenSaturation(int32 Level) {
}

void UPolarisHDRSettingsLibrary::SetHDRScreenBrightness(int32 Level) {
}

void UPolarisHDRSettingsLibrary::SetHDRDisplayNits(int32 DisplayNits) {
}

bool UPolarisHDRSettingsLibrary::IsHDREnabled() {
    return false;
}

float UPolarisHDRSettingsLibrary::GetToneCurveParam() {
    return 0.0f;
}

void UPolarisHDRSettingsLibrary::EnableHDRDisplayOutput(bool bEnable, int32 DisplayNits) {
}


