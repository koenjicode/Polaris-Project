#include "PolarisMobActor.h"

APolarisMobActor::APolarisMobActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->VisibilityBasedAnimTickOption = EVisibilityBasedAnimTickOption::AlwaysTickPoseAndRefreshBones;
    this->myskeltalmesh = NULL;
}



void APolarisMobActor::OnInitBattle_Implementation(FEventOnInitBattleParam Param) {
}









void APolarisMobActor::ForceReactionNative_Implementation(int32 ID) {
}


