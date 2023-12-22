#include "AnimNode_MotHead.h"

FAnimNode_MotHead::FAnimNode_MotHead() {
    this->MotHeadMatrixSpace = MHM_WorldSpace;
    this->ControlSpace = BCS_WorldSpace;
    this->PlayerId = 0;
    this->SupportUEAnimation = ESupportUEAnimationMode::None;
    this->bForceFirstUpdatePhoenix = false;
}

