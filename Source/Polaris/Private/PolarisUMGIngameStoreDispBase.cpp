#include "PolarisUMGIngameStoreDispBase.h"

UPolarisUMGIngameStoreDispBase::UPolarisUMGIngameStoreDispBase() {
    this->panel_widget = NULL;
    this->current_button_id = 0;
}

void UPolarisUMGIngameStoreDispBase::UpdateCousor_Implementation(int32 cousor_x, int32 cousor_y) {
}


void UPolarisUMGIngameStoreDispBase::RegisterCursorNoToAllButtons() {
}


void UPolarisUMGIngameStoreDispBase::PlayDecideSE() {
}

void UPolarisUMGIngameStoreDispBase::PlayCursorSE() {
}

void UPolarisUMGIngameStoreDispBase::PlayCancelSE() {
}

bool UPolarisUMGIngameStoreDispBase::IsPlayingAnimOut_Implementation() const {
    return false;
}

bool UPolarisUMGIngameStoreDispBase::IsPlayingAnimIn_Implementation() const {
    return false;
}

UPolarisUMGStoreButton* UPolarisUMGIngameStoreDispBase::GetTargetButton_Implementation(int32 corsor_x, int32 corsor_y) {
    return NULL;
}

int32 UPolarisUMGIngameStoreDispBase::GetLineNum() const {
    return 0;
}

UPolarisUMGStoreButton* UPolarisUMGIngameStoreDispBase::GetCurrentButton() {
    return NULL;
}


int32 UPolarisUMGIngameStoreDispBase::GetCloumNum(int32 cousor_y) const {
    return 0;
}

void UPolarisUMGIngameStoreDispBase::DecideEvent_Implementation() {
}



void UPolarisUMGIngameStoreDispBase::CommonCallButtonUnselect_Implementation(int32 ID) {
}

void UPolarisUMGIngameStoreDispBase::CommonCallButtonSelect_Implementation(int32 ID) {
}

void UPolarisUMGIngameStoreDispBase::CommonCallButtonDecide_Implementation(int32 ID) {
}

void UPolarisUMGIngameStoreDispBase::CancelEvent_Implementation() {
}

void UPolarisUMGIngameStoreDispBase::AnimStoreMenuOut_Implementation() {
}

void UPolarisUMGIngameStoreDispBase::AnimStoreMenuIn_Implementation() {
}



