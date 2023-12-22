#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LobbySaveData.generated.h"

UCLASS(Blueprintable)
class POLARIS_API ULobbySaveData : public UObject {
    GENERATED_BODY()
public:
    ULobbySaveData();

    UFUNCTION(BlueprintCallable)
    void Save();
    
};

