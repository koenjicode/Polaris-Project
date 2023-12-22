#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "LobbyClientGameMode.generated.h"

UCLASS(Blueprintable, NonTransient)
class POLARIS_API ALobbyClientGameMode : public AGameModeBase {
    GENERATED_BODY()
public:
    ALobbyClientGameMode(const FObjectInitializer& ObjectInitializer);

};

