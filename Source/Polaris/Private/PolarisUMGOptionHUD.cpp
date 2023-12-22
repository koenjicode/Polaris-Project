#include "PolarisUMGOptionHUD.h"

UPolarisUMGOptionHUD::UPolarisUMGOptionHUD() {
    this->UpperHUDDefaultPositionY = 0.00f;
    this->LowerHUDDefaultPositionY = 0.00f;
    this->UpperHUDCenterLimitOffset = 0.00f;
    this->LowerHUDCenterLimitOffset = 0.00f;
}




void UPolarisUMGOptionHUD::InvokeHUDSelectCallback(bool up_side) {
}

void UPolarisUMGOptionHUD::InvokeHUDDecideCallback(bool up_side) {
}

void UPolarisUMGOptionHUD::InvokeArrowSelectCallback(bool up_side, bool arrow_up) {
}

void UPolarisUMGOptionHUD::InvokeArrowReleaseCallback(bool up_side, bool arrow_up) {
}

void UPolarisUMGOptionHUD::InvokeArrowPressCallback(bool up_side, bool arrow_up) {
}



FVector2D UPolarisUMGOptionHUD::GetViewportSize() {
    return FVector2D{};
}

float UPolarisUMGOptionHUD::GetHeightForHUD() {
    return 0.0f;
}






