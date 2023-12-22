#include "PolarisIngameStoreMenuPanelData.h"

UPolarisIngameStoreMenuPanelData::UPolarisIngameStoreMenuPanelData() {
    this->select_type_ = EStoreItemType::E_CHR;
    this->texture_ = NULL;
    this->reference_button = NULL;
}

void UPolarisIngameStoreMenuPanelData::Unselect_Implementation() {
}

void UPolarisIngameStoreMenuPanelData::Select_Implementation() {
}

void UPolarisIngameStoreMenuPanelData::Decide_Implementation() {
}

void UPolarisIngameStoreMenuPanelData::CreatePanelData(EStoreItemType select_type, UTexture2D* Texture, const FText& title_text) {
}

void UPolarisIngameStoreMenuPanelData::Configure(int32 ID, UPolarisIngameStoreMenuPanelData::FAction OnDecide, UPolarisIngameStoreMenuPanelData::FAction onSelect, UPolarisIngameStoreMenuPanelData::FAction onUnselect) {
}


