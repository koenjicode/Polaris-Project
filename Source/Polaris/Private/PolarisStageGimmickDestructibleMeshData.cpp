#include "PolarisStageGimmickDestructibleMeshData.h"

FPolarisStageGimmickDestructibleMeshData::FPolarisStageGimmickDestructibleMeshData() {
    this->DestrictibleNiagaraRBDAsset = NULL;
    this->DestrictibleStaticMeshAssset = NULL;
    this->DestrictibleEnableHardSleeping = false;
    this->DestrictibleImpulseStrength = 0.00f;
    this->DestrictibleForce = NULL;
    this->IsVanish = false;
    this->IsNoFadeout = false;
    this->VanishingStartSecond = 0.00f;
    this->VanishingEndSecond = 0.00f;
    this->IsWallBarrier = false;
}

