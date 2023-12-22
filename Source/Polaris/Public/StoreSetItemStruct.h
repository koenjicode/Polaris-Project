#pragma once
#include "CoreMinimal.h"
#include "StoreCommonSaleDataStruct.h"
#include "StoreCommonSetItemStruct.h"
#include "StoreCommonSingleItemStruct.h"
#include "StoreSetItemStruct.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FStoreSetItemStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStoreCommonSetItemStruct _setItemData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStoreCommonSaleDataStruct _commonSaleData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStoreCommonSingleItemStruct> _setitemItemList;
    
    FStoreSetItemStruct();
};

