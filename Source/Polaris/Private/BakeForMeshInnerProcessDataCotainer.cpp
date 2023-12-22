#include "BakeForMeshInnerProcessDataCotainer.h"

FBakeForMeshInnerProcessDataCotainer::FBakeForMeshInnerProcessDataCotainer() {
    this->TIDMap = NULL;
    this->TBaseColorA = NULL;
    this->TRMAA = NULL;
    this->TBaseColorB = NULL;
    this->TNormalB = NULL;
    this->TRMAB = NULL;
    this->RTAlbedo = NULL;
    this->RTNormal = NULL;
    this->RTDetail = NULL;
    this->RTRMA = NULL;
    this->RTTempAlbedo = NULL;
    this->RTTempDetail = NULL;
    this->MasterDirtID = 0.00f;
}

