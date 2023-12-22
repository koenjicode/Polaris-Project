#include "PolarisStageGimmicDeformGimmikMesh.h"

FPolarisStageGimmicDeformGimmikMesh::FPolarisStageGimmicDeformGimmikMesh() {
    this->Mesh = NULL;
    this->DestructDelayRemainTime = 0.00f;
    this->DestructDelayTime = 0.00f;
    this->DestructionProcess = EStageGimmickState::Init;
    this->IsTakeOnDamageBreakable = false;
    this->DestructionImpulseStrengthType = EStageImpulseStrengthType::None;
    this->DestructionRadialForceActor = NULL;
}

