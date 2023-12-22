#include "PolarisCharacterSelectCameraActor.h"

APolarisCharacterSelectCameraActor::APolarisCharacterSelectCameraActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayCameraSeqSideToChara = NULL;
    this->PlayCameraSeqCharaToSide = NULL;
    this->PlayCameraSeqCharaToStage = NULL;
    this->PlayCameraSeqStageToChara = NULL;
}

void APolarisCharacterSelectCameraActor::OnLoopCheck_Implementation(ULevelSequencePlayer* _player) {
}


