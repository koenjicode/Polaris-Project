#include "PolarisUMGIngameStoreBlackPen.h"

UPolarisUMGIngameStoreBlackPen::UPolarisUMGIngameStoreBlackPen() {
    this->item_list_width = 8;
}


int32 UPolarisUMGIngameStoreBlackPen::RightX(int32 Y, int32 Offset) {
    return 0;
}

UPolarisUMGStoreButton* UPolarisUMGIngameStoreBlackPen::GetTargetButtonVertical_Implementation(int32 cursor_x, int32 cursor_y, bool adv) {
    return NULL;
}

UPolarisUMGStoreButton* UPolarisUMGIngameStoreBlackPen::GetTargetButtonHorizontal_Implementation(int32 cursor_x, int32 cursor_y, bool adv) {
    return NULL;
}


FBlackPenLevelItemFlatList UPolarisUMGIngameStoreBlackPen::DebugSetSourceList(FBlackPenItemsArray pdata, FBlackPenItemsArray fdata) {
    return FBlackPenLevelItemFlatList{};
}


int32 UPolarisUMGIngameStoreBlackPen::CenterX(int32 Y, int32 Offset) {
    return 0;
}

void UPolarisUMGIngameStoreBlackPen::AssignRectGrid(UPolarisUMGStoreButton* Button, int32 x1, int32 x2, int32 y1, int32 y2) {
}

void UPolarisUMGIngameStoreBlackPen::AssignGrid(UPolarisUMGStoreButton* Button, int32 X, int32 Y) {
}


