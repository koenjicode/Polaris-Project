#include "PolarisBattlePlayerStart.h"

APolarisBattlePlayerStart::APolarisBattlePlayerStart(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StageSequenceId = 0;
    this->StageBrokenHistory = 0;
    this->StagePositionTypeId = EStagePositionTypeId::GameStart;
    this->FloorId = 0;
    this->StageLightType = EStageLightType::Term;
    this->Distance = 0.00f;
    this->IsWallAdjust = false;
}


