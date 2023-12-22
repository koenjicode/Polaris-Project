#include "PolarisButton.h"

UPolarisButton::UPolarisButton() : UUserWidget(FObjectInitializer::Get()) {
    this->ButtonName = TEXT("Button_Input");
}

void UPolarisButton::Unselect_Implementation() {
}

void UPolarisButton::SetPressReleaseEnable(bool flag) {
}

void UPolarisButton::SetEnable(bool flag) {
}

void UPolarisButton::Select_Implementation() {
}

void UPolarisButton::Release_Implementation() {
}

void UPolarisButton::Press_Implementation() {
}

int32 UPolarisButton::GetId() const {
    return 0;
}



void UPolarisButton::DecideArrow_Implementation() {
}

void UPolarisButton::Decide_Implementation() {
}

void UPolarisButton::ConfigurePressRelease(int32 ID, UPolarisButton::FAction onPress, UPolarisButton::FAction OnRelease) {
}

void UPolarisButton::ConfigureDecideArrow(int32 ID, UPolarisButton::FAction onDecideArrow) {
}

void UPolarisButton::Configure(int32 ID, UPolarisButton::FAction OnDecide, UPolarisButton::FAction onSelect, UPolarisButton::FAction onUnselect) {
}


