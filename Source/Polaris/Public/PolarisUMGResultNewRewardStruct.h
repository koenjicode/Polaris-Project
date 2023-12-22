#pragma once
#include "CoreMinimal.h"
#include "PolarisUMGResultNewRewardStruct.generated.h"

USTRUCT(BlueprintType)
struct FPolarisUMGResultNewRewardStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    POLARIS_API FPolarisUMGResultNewRewardStruct();
};

