#include "PolarisStageGimmicDeformMesh.h"

FPolarisStageGimmicDeformMesh::FPolarisStageGimmicDeformMesh() {
    this->DefaultMesh = NULL;
    this->Mesh = NULL;
    this->BrokenMesh = NULL;
    this->IsCancelHitAnimation = false;
    this->HitAnimationNum = 0;
    this->DestructDelayRemainTime = 0.00f;
    this->DestructDelayTime = 0.00f;
    this->DestructionProcess = EStageGimmickState::Init;
    this->DestructionImpulseStrengthType = EStageImpulseStrengthType::None;
}

