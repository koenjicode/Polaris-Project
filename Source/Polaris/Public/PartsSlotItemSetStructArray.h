#pragma once
#include "CoreMinimal.h"
#include "PartsSlotItemSetStruct.h"
#include "PartsSlotItemSetStructArray.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FPartsSlotItemSetStructArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPartsSlotItemSetStruct> PartsSlotItemSetArray;
    
    FPartsSlotItemSetStructArray();
};

