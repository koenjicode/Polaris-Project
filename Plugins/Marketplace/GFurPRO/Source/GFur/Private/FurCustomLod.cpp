#include "FurCustomLod.h"

FFurCustomLod::FFurCustomLod() {
    this->bIsCustomLodEnable = false;
    this->MaxCustomLodScreenSize = 0.00f;
    this->MaxParam = 0.00f;
    this->MinCustomLodScreenSize = 0.00f;
    this->MinParam = 0.00f;
    this->LodDivNum = 0;
    this->LodPower = 0.00f;
    this->bIsContinuous = false;
}

