#pragma once
#include "CoreMinimal.h"
#include "PolarisStageForcusCamera.generated.h"

class ULevelSequence;

USTRUCT(BlueprintType)
struct FPolarisStageForcusCamera {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequence* Camera1P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequence* Camera2P;
    
    POLARIS_API FPolarisStageForcusCamera();
};

