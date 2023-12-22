#include "PolarisStageGimmickBaseActor.h"
#include "Components/SceneComponent.h"

APolarisStageGimmickBaseActor::APolarisStageGimmickBaseActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->State = EStageGimmickState::Init;
    this->FloorNo = 0;
    this->RelatedStageSequenceId = 0;
    this->ImpluseStrengthS_Threshold = 0.00f;
    this->IsTakeWallHit = false;
    this->IsTakeFloorHit = false;
    this->IsTakeForceLowerFloorHit = false;
    this->IsTakeForceUpperFloorHit = false;
    this->IsDurableBreakFlag = false;
    this->IsOwnerGroundActorFlag = false;
    this->IsKamuiActor = false;
    this->IsCollisionBattle = false;
    this->IsCollisionSystem = false;
    this->IsHiddenBattle = false;
    this->IsHiddenSystem = false;
    this->IsHiddenCullBack = false;
}

void APolarisStageGimmickBaseActor::SetVisibleCullBack(bool Status) {
}





bool APolarisStageGimmickBaseActor::IsPlayerDown(int32 player_id) const {
    return false;
}


