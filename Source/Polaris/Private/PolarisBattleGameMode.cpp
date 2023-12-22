#include "PolarisBattleGameMode.h"
#include "PolarisBattleCameraPawn.h"
#include "PolarisBattleHUD.h"
#include "PolarisBattlePlayerController.h"

APolarisBattleGameMode::APolarisBattleGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayerControllerClass = APolarisBattlePlayerController::StaticClass();
    this->HUDClass = APolarisBattleHUD::StaticClass();
    this->DefaultPawnClass = APolarisBattleCameraPawn::StaticClass();
    this->EffectManagerClass = NULL;
    this->BattleEventManagerClass = NULL;
    this->StageManagerClass = NULL;
    this->DramaManagerClass = NULL;
    this->MobManagerClass = NULL;
    this->BallManagerClass = NULL;
    this->PhotoModeActorClass = NULL;
}

bool APolarisBattleGameMode::WaitAndProcessSublevelReady_Implementation() {
    return false;
}

void APolarisBattleGameMode::OnSpawnDummyEffect_Implementation(int32 category_number, float Numerator, float Denominator) {
}


