#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "PolarisPSOCacheInstance.generated.h"

UCLASS(Blueprintable)
class POLARIS_API UPolarisPSOCacheInstance : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPolarisPSOCacheInstance();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumPrecompilesRemaining();
    
};

