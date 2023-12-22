#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LobbyMachineManager.generated.h"

class ULobbyMachineManager;

UCLASS(Blueprintable)
class POLARIS_API ULobbyMachineManager : public UObject {
    GENERATED_BODY()
public:
    ULobbyMachineManager();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ULobbyMachineManager* LobbyMachineManager();
    
};

