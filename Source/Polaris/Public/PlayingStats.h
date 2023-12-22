#pragma once
#include "CoreMinimal.h"
#include "TopStats.h"
#include "PlayingStats.generated.h"

USTRUCT(BlueprintType)
struct FPlayingStats {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> CategoryStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTopStats> TopStats;
    
    POLARIS_API FPlayingStats();
};

