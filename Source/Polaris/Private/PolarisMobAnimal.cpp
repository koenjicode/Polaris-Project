#include "PolarisMobAnimal.h"

APolarisMobAnimal::APolarisMobAnimal(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DissableByDrama = false;
}

void APolarisMobAnimal::SetDramaParameter_Implementation() {
}


void APolarisMobAnimal::PlaySound_Implementation() {
}

void APolarisMobAnimal::OnStageReset_Implementation() {
}

void APolarisMobAnimal::OnInitBattle_Implementation(FEventOnInitBattleParam Param) {
}


void APolarisMobAnimal::OnGeneralBattleEvent_Implementation(FEventOnGeneralBattleEventParam Param) {
}

bool APolarisMobAnimal::IsStoryMode_Implementation() {
    return false;
}

bool APolarisMobAnimal::IsMakuai(FString& SequenceName, FString& sceneName) {
    return false;
}

bool APolarisMobAnimal::IsCurrentSeqence(const FString& seqName) {
    return false;
}


void APolarisMobAnimal::GetCuurentSequenceName(FString& SequenceName, FString& sceneName) {
}

bool APolarisMobAnimal::CheckSoundPlayable_Implementation() {
    return false;
}


