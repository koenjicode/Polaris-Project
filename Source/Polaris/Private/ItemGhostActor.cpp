#include "ItemGhostActor.h"

AItemGhostActor::AItemGhostActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FadeOutInTimingMin = 25.00f;
    this->FadeOutInTimingMax = 50.00f;
    this->FadeOutGoOpponentRate = 0.00f;
    this->FadeOutInWaitMin = 1.00f;
    this->FadeOutInWaitMax = 3.00f;
    this->CircleMoveSpeed = 200.00f;
    this->CircleMoveRotate = 50.00f;
    this->IsCircleGhost = false;
    this->CircleMoveRadius = 50.00f;
    this->IsMoveToOpponent = false;
    this->MoveToOpponentWaitTimeMin = 1.00f;
    this->MoveToOpponentWaitTimeMax = 3.00f;
    this->IsLockForHomeRotation = false;
    this->IsSendHome = false;
    this->ChaseSpeed = 0.05f;
    this->IsEntranceChase = true;
    this->IsMoveToVicinity = false;
    this->GhostHeightOffset = 0.00f;
    this->GhostOffsetDistance = 0.00f;
    this->MoveToVicintyDirections.AddDefaulted(4);
    this->MoveToVicintyWaitTimeMin = 1.00f;
    this->MoveToVicintyWaitTimeMax = 3.00f;
}



void AItemGhostActor::OnTimeUp(FEventOnTimeUpParam Param) {
}

void AItemGhostActor::OnThrowDamage(FEventOnThrowDamageParam Param) {
}

void AItemGhostActor::OnStageBreakEvent(FEventOnStageBreakEventParam Param) {
}





void AItemGhostActor::onRageArtsEnd(FEventOnRageArtsEndParam Param) {
}

void AItemGhostActor::onRageArtsBegin(FEventOnRageArtsBeginParam Param) {
}



void AItemGhostActor::OnPreInitBattle() {
}







void AItemGhostActor::OnKO(FEventOnKOParam Param) {
}

void AItemGhostActor::OnInitBattle(FEventOnInitBattleParam Param) {
}

void AItemGhostActor::onHit(FEventOnHitParam Param) {
}



void AItemGhostActor::OnDoubleKO(FEventOnDoubleKOParam Param) {
}



void AItemGhostActor::onCriticalHit(FEventOnCriticalHitParam Param) {
}




