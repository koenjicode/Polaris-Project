#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LobbyDebugActor.generated.h"

UCLASS(Blueprintable)
class POLARIS_API ALobbyDebugActor : public AActor {
    GENERATED_BODY()
public:
    ALobbyDebugActor(const FObjectInitializer& ObjectInitializer);

};

