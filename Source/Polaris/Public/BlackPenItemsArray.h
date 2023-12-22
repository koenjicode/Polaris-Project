#pragma once
#include "CoreMinimal.h"
#include "BlackPenItem.h"
#include "BlackPenItemsArray.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FBlackPenItemsArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBlackPenItem> items;
    
    FBlackPenItemsArray();
};

