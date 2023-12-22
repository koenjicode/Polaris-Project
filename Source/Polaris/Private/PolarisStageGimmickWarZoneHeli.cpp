#include "PolarisStageGimmickWarZoneHeli.h"

APolarisStageGimmickWarZoneHeli::APolarisStageGimmickWarZoneHeli(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HeliState = EStageGimmickWarZoneHeliState::None;
}

void APolarisStageGimmickWarZoneHeli::OnInitBattle_Implementation(FEventOnInitBattleParam Param) {
}

void APolarisStageGimmickWarZoneHeli::OnGeneralBattleEvent_Implementation(FEventOnGeneralBattleEventParam Param) {
}


