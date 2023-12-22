#pragma once
#include "CoreMinimal.h"
#include "BlackPenPickup.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FBlackPenPickup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool pickup_flag;
    
    FBlackPenPickup();
};

