#include "PolarisInGameStoreHomeArea.h"

UPolarisInGameStoreHomeArea::UPolarisInGameStoreHomeArea() {
    this->m_line_num = 0;
    this->m_column_num = 0;
    this->showcase_type = EShowcaseType::None;
    this->GridPanelWidget = NULL;
    this->UniformGridPanelWidget = NULL;
    this->max_column_num = 4;
}

int32 UPolarisInGameStoreHomeArea::GetLineNum() const {
    return 0;
}

int32 UPolarisInGameStoreHomeArea::GetItemNumInLine(int32 target_y) const {
    return 0;
}

UPolarisUMGIngameStoreItemPanel* UPolarisInGameStoreHomeArea::GetItemInLine(int32 target_x, int32 target_y) {
    return NULL;
}

int32 UPolarisInGameStoreHomeArea::GetColumnNum() const {
    return 0;
}

TArray<UWidget*> UPolarisInGameStoreHomeArea::GetAllChildrenInGridPanel() const {
    return TArray<UWidget*>();
}

int32 UPolarisInGameStoreHomeArea::GetAllChildNum() const {
    return 0;
}

TArray<UPolarisUMGIngameStoreItemPanel*> UPolarisInGameStoreHomeArea::FindAllButtons() {
    return TArray<UPolarisUMGIngameStoreItemPanel*>();
}

UPolarisUMGIngameStoreItemPanel* UPolarisInGameStoreHomeArea::CreateOtherPanelData(UClass* loaded_class) {
    return NULL;
}

void UPolarisInGameStoreHomeArea::CreateItemsPanelData(const TArray<FStoreItemPanelStruct>& panel_infos, UClass* loaded_class) {
}


