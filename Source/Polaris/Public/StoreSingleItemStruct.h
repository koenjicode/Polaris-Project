#pragma once
#include "CoreMinimal.h"
#include "StoreCommonSaleDataStruct.h"
#include "StoreCommonSingleItemStruct.h"
#include "StoreSingleItemStruct.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FStoreSingleItemStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStoreCommonSingleItemStruct _singleItemData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStoreCommonSaleDataStruct _commonSaleData;
    
    FStoreSingleItemStruct();
};

