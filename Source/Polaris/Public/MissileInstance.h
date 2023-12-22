#pragma once
#include "CoreMinimal.h"
#include "MissileInstance.generated.h"

class APolarisCharacterMissile;

USTRUCT(BlueprintType)
struct FMissileInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APolarisCharacterMissile* missile_;
    
    POLARIS_API FMissileInstance();
};

