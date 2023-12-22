#include "CatwalkClothComponentStruct.h"

FCatwalkClothComponentStruct::FCatwalkClothComponentStruct() {
    this->Component = NULL;
    this->IsDisableSimulation = false;
    this->BodyRegionType = EMeshBodyRegionType::E_MeshBodyRegionType_None;
}

