#include "PolarisWindDirectionalSource.h"

APolarisWindDirectionalSource::APolarisWindDirectionalSource(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bEdit = false;
    this->BaseSpeed = 0.00f;
    this->BaseStrength = 0.00f;
    this->bUseSequencer = false;
    this->Seed = 0;
    this->BaseDirection_Y = 0.00f;
    this->BaseDirection_Z = 0.00f;
    this->WindSourceAsset = NULL;
    this->bUseRandom = false;
    this->bUseModerateRandom = false;
    this->WindSpeed_ChangeTime = 0.00f;
    this->WindStrength_ChangeTime = 0.00f;
    this->WindDirection_ChangeTime = 0.00f;
    this->WindDirectionY_ChangeTime = 0.00f;
    this->WindSpeed_ChangeTimeMax = 0.00f;
    this->WindStrength_ChangeTimeMax = 0.00f;
    this->WindDirection_ChangeTimeMax = 0.00f;
    this->WindDirectionY_ChangeTimeMax = 0.00f;
    this->LinkObject = NULL;
    this->Z_IsUpeer = true;
    this->Y_IsUpeer = true;
}


