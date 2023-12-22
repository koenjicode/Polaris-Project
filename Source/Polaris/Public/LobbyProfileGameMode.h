#pragma once
#include "CoreMinimal.h"
#include "PolarisCharacterGameMode.h"
#include "LobbyProfileGameMode.generated.h"

class AActor;

UCLASS(Blueprintable, NonTransient)
class POLARIS_API ALobbyProfileGameMode : public APolarisCharacterGameMode {
    GENERATED_BODY()
public:
    ALobbyProfileGameMode(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    AActor* ImplGetColorDataAssetRespository();
    
};

