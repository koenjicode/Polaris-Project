#include "PolarisStageGimmickWarZoneLightBeam.h"

APolarisStageGimmickWarZoneLightBeam::APolarisStageGimmickWarZoneLightBeam(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LightBeamState = EStageGimmickWarZoneLightBeamState::None;
    this->IsBroken = false;
}

void APolarisStageGimmickWarZoneLightBeam::OnInitBattle_Implementation(FEventOnInitBattleParam Param) {
}

void APolarisStageGimmickWarZoneLightBeam::OnGeneralBattleEvent_Implementation(FEventOnGeneralBattleEventParam Param) {
}


