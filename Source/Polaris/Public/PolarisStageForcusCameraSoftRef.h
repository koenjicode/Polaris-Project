#pragma once
#include "CoreMinimal.h"
#include "PolarisStageForcusCameraSoftRef.generated.h"

class ULevelSequence;

USTRUCT(BlueprintType)
struct FPolarisStageForcusCameraSoftRef {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> Camera1P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> Camera2P;
    
    POLARIS_API FPolarisStageForcusCameraSoftRef();
};

