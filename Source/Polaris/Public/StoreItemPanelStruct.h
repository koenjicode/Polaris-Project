#pragma once
#include "CoreMinimal.h"
#include "EStoreItemType.h"
#include "StoreItemPanelStruct.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FStoreItemPanelStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName sell_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName item_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStoreItemType StoreItemType;
    
    FStoreItemPanelStruct();
};

