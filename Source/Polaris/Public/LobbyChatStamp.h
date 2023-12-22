#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LobbyChatStamp.generated.h"

UCLASS(Blueprintable)
class POLARIS_API ULobbyChatStamp : public UObject {
    GENERATED_BODY()
public:
    ULobbyChatStamp();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUnlocked(int32 InUnlockStampId) const;
    
};

