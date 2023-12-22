#include "BlackPenProfCustViewerController.h"

ABlackPenProfCustViewerController::ABlackPenProfCustViewerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BGTexture = NULL;
    this->CharacterSpawnRoot = NULL;
}

void ABlackPenProfCustViewerController::StartLoadCharacter(int32 FighterId, FTransform position) {
}

void ABlackPenProfCustViewerController::StartDeleteCharacter() {
}




void ABlackPenProfCustViewerController::PlayAnimationBySequencer(ULevelSequence* sequencer, int32 light_variation_id) {
}




