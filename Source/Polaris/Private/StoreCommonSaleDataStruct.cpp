#include "StoreCommonSaleDataStruct.h"

FStoreCommonSaleDataStruct::FStoreCommonSaleDataStruct() {
    this->_price = 0;
    this->_discountPrice = 0;
    this->_premiumPrice = 0;
    this->_discountRate = 0;
    this->_sellType = EStoreItemAttribute::None;
    this->_firstStartAt = 0;
    this->_startAt = 0;
    this->_endAt = 0;
}

