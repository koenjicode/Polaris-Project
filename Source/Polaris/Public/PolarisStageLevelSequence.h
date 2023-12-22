#pragma once
#include "CoreMinimal.h"
#include "PolarisStageLevelSequence.generated.h"

class ULevelSequence;

USTRUCT(BlueprintType)
struct FPolarisStageLevelSequence {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequence* LevelSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsLoop;
    
    POLARIS_API FPolarisStageLevelSequence();
};

