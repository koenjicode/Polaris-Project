#pragma once
#include "CoreMinimal.h"
#include "EStoreItemType.h"
#include "StoreItemBasicData.h"
#include "BlackPenItemDetail.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FBlackPenItemDetail {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStoreItemBasicData common_data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStoreItemType StoreItemType;
    
    FBlackPenItemDetail();
};

