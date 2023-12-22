#pragma once
#include "CoreMinimal.h"
#include "PolarisUMGPlayDataStageItemStruct.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FPolarisUMGPlayDataStageItemStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString text_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Rate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Icon;
    
    POLARIS_API FPolarisUMGPlayDataStageItemStruct();
};

