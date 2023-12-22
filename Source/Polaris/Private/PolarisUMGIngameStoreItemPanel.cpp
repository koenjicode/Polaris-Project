#include "PolarisUMGIngameStoreItemPanel.h"

UPolarisUMGIngameStoreItemPanel::UPolarisUMGIngameStoreItemPanel() {
    this->enable_item_info = false;
}


void UPolarisUMGIngameStoreItemPanel::RepItemInfo_Implementation(const FStoreItemPanelStruct& item_data) {
}

void UPolarisUMGIngameStoreItemPanel::RefreshItemWidget(FStoreItemPanelStruct item_data) {
}


void UPolarisUMGIngameStoreItemPanel::NotifyTransItemDetail() {
}

void UPolarisUMGIngameStoreItemPanel::NotifySelectItem() {
}

void UPolarisUMGIngameStoreItemPanel::NotifySelectCoin() {
}

void UPolarisUMGIngameStoreItemPanel::NotifyReturnMenuControl() {
}

void UPolarisUMGIngameStoreItemPanel::NotifyPurchaseItem() {
}

UTexture2D* UPolarisUMGIngameStoreItemPanel::FindItemThumbnail(FName item_id) {
    return NULL;
}


