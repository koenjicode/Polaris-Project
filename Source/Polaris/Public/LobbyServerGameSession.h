#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameSession.h"
#include "LobbyServerGameSession.generated.h"

UCLASS(Blueprintable)
class POLARIS_API ALobbyServerGameSession : public AGameSession {
    GENERATED_BODY()
public:
    ALobbyServerGameSession(const FObjectInitializer& ObjectInitializer);

};

