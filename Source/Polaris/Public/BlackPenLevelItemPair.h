#pragma once
#include "CoreMinimal.h"
#include "BlackPenItem.h"
#include "BlackPenLevelItemPair.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FBlackPenLevelItemPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackPenItem item_premium;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackPenItem item_free;
    
    FBlackPenLevelItemPair();
};

