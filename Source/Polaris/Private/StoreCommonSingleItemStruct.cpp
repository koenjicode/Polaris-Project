#include "StoreCommonSingleItemStruct.h"

FStoreCommonSingleItemStruct::FStoreCommonSingleItemStruct() {
    this->_consumableFlag = false;
    this->_capacity = 0;
    this->_sellNum = 0;
    this->_itemType = EStoreItemType::E_CHR;
}

