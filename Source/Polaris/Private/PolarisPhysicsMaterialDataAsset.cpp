#include "PolarisPhysicsMaterialDataAsset.h"

UPolarisPhysicsMaterialDataAsset::UPolarisPhysicsMaterialDataAsset() {
    this->SurfaceTypes = 0;
    this->CopyUpSurfaceTypes = 0;
    this->DefaultDirtColor = GA_DC_SOIL;
    this->MaxDirtyRaito = 100.00f;
    this->FootShadowAlpha = 1.00f;
}


