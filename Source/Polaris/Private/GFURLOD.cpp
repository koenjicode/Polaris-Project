#include "GFURLOD.h"

FGFURLOD::FGFURLOD() {
    this->MinDrawDistance = 0.00f;
    this->LDMaxDrawDistance = 0.00f;
    this->CachedMaxDrawDistance = 0.00f;
    this->bNeverDistanceCull = false;
    this->bAllowCullDistanceVolume = false;
    this->DetailMode = DM_Low;
}

