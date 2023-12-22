#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "LobbyServerPlayerController.generated.h"

UCLASS(Blueprintable)
class POLARIS_API ALobbyServerPlayerController : public APlayerController {
    GENERATED_BODY()
public:
    ALobbyServerPlayerController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SendTextChat(const FText& Message);
    
};

