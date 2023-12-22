#include "DummyMobAction.h"

FDummyMobAction::FDummyMobAction() {
    this->ID = 0;
    this->frame = 0;
    this->bfired = false;
    this->MovePatern = EMobVATMovePatern::Idle;
    this->MoveFrameLength = 0;
    this->Anchor = 0;
    this->NextAnchor = 0;
}

