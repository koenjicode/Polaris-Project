#include "DeerAction.h"

FDeerAction::FDeerAction() {
    this->Action = EDeerAction::Idle;
    this->ToAnchor = 0;
    this->FromAnchor = 0;
    this->Time = 0.00f;
    this->MoveSpeedRate = 0.00f;
    this->AnimspeedRate = 0.00f;
}

