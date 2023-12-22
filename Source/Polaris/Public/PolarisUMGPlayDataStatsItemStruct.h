#pragma once
#include "CoreMinimal.h"
#include "PolarisUMGPlayDataStatsItemStruct.generated.h"

USTRUCT(BlueprintType)
struct FPolarisUMGPlayDataStatsItemStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString text_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Rate;
    
    POLARIS_API FPolarisUMGPlayDataStatsItemStruct();
};

