#include "SurfaceData.h"

FSurfaceData::FSurfaceData() {
    this->Assign_Detail_AO_Normal_Map = NULL;
    this->Assign_Detail_AO_Pow = 0.00f;
    this->Assign_Detail_Normal_Pow = 0.00f;
    this->Assign_Detail_U = 0.00f;
    this->Assign_Detail_V = 0.00f;
    this->Assign_Metalness_Max = 0.00f;
    this->Assign_Metalness_Min = 0.00f;
    this->Assign_Roughness_Max = 0.00f;
    this->Assign_Roughness_Min = 0.00f;
}

