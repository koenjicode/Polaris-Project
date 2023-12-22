#pragma once
#include "CoreMinimal.h"
#include "GameFramework/CheatManager.h"
#include "LobbyClientCheat.generated.h"

UCLASS(Blueprintable)
class POLARIS_API ULobbyClientCheat : public UCheatManager {
    GENERATED_BODY()
public:
    ULobbyClientCheat();

    UFUNCTION(BlueprintCallable, Exec)
    void LobbyJoinServer(const FString& IpPort);
    
};

