#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "LobbyServerGameMode.generated.h"

UCLASS(Blueprintable, NonTransient)
class POLARIS_API ALobbyServerGameMode : public AGameModeBase {
    GENERATED_BODY()
public:
    ALobbyServerGameMode(const FObjectInitializer& ObjectInitializer);

};

