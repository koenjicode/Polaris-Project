#include "PolarisStageGroundActor.h"

APolarisStageGroundActor::APolarisStageGroundActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeInCluster = false;
    this->State = EStageGimmickState::Init;
    this->SetNo = 0;
    this->FloorNo = 0;
    this->RelatedStageSequenceId = 0;
    this->IsNextStageSequence = false;
    this->TKCollisionEnable = false;
    this->WallDamageId = 0;
    this->TotalDamage = 0;
    this->IsDurable = false;
    this->DestructLevel = 0;
    this->HitInterval = 30;
    this->DecalRegionW = 0.00f;
    this->HitDecal = NULL;
    this->HitDecal2 = NULL;
    this->HitDecal3 = NULL;
    this->BreakDecal = NULL;
    this->BreakDecal2 = NULL;
    this->BreakDecal3 = NULL;
    this->BreakDecal_Crack = NULL;
    this->BalconyMidResetPoint = NULL;
    this->BreakSound = NULL;
}

void APolarisStageGroundActor::UpdateStageSequenceVisibility(int32 StageSequenceId, bool is_hidden) {
}

void APolarisStageGroundActor::SetVisible(bool Status) {
}

void APolarisStageGroundActor::SetCollisionEnable(bool Status) {
}

void APolarisStageGroundActor::OnStopBehavior() {
}

void APolarisStageGroundActor::OnReset() {
}

void APolarisStageGroundActor::OnInit() {
}

void APolarisStageGroundActor::OnHitS(const FVector& hit_pos, float Damage) {
}

void APolarisStageGroundActor::onHit(const FVector& hit_pos, float Damage) {
}

void APolarisStageGroundActor::OnFracture() {
}

void APolarisStageGroundActor::OnDamageBreakable(const FVector& hit_pos, float Damage, float total_damage) {
}

void APolarisStageGroundActor::OnBreak(const FVector& hit_pos, float Damage, float total_damage) {
}

bool APolarisStageGroundActor::IsWall() const {
    return false;
}

bool APolarisStageGroundActor::IsBreakable() const {
    return false;
}

int32 APolarisStageGroundActor::GetWallDamageId() const {
    return 0;
}

int32 APolarisStageGroundActor::GetMaxHitPoint() const {
    return 0;
}

int32 APolarisStageGroundActor::GetHitPoint() const {
    return 0;
}

int32 APolarisStageGroundActor::GetDestructLevel() const {
    return 0;
}

void APolarisStageGroundActor::ChangeDestructLevel(int32 Level, EStageBreakType stageBreakType) {
}


