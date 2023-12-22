#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LobbyPlayerStatus.generated.h"

UCLASS(Blueprintable)
class POLARIS_API ULobbyPlayerStatus : public UObject {
    GENERATED_BODY()
public:
    ULobbyPlayerStatus();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool LobbyStateToTextId(int32 Index, FName& Result);
    
};

