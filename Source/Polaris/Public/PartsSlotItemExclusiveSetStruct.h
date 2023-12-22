#pragma once
#include "CoreMinimal.h"
#include "PartsSlotItemExclusiveSetStruct.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FPartsSlotItemExclusiveSetStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExclusivePSIPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExclusivePSIPositionNum;
    
    FPartsSlotItemExclusiveSetStruct();
};

