#include "ItemPrefabDataStruct.h"

FItemPrefabDataStruct::FItemPrefabDataStruct() {
    this->ItemPrefabUse = NULL;
    this->BaseItemUse = NULL;
    this->BaseCharacterItemUse = NULL;
    this->CustomizeItemUse = NULL;
    this->DebugItemUse = NULL;
    this->ItemPrefabTmp = NULL;
    this->BaseItemTmp = NULL;
    this->BaseCharacterItemTmp = NULL;
    this->CustomizeItemTmp = NULL;
    this->DebugItemTmp = NULL;
    this->IsDispBaseItemDetail = false;
    this->IsDispBaseCharacterItemDetail = false;
    this->IsDispCustomizeItemDetail = false;
    this->IsDispDebugItemDetail = false;
}

