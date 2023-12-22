#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LobbyNpc.generated.h"

UCLASS(Blueprintable)
class POLARIS_API ALobbyNpc : public AActor {
    GENERATED_BODY()
public:
    ALobbyNpc(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ImplAccess();
    
};

