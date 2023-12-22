#pragma once
#include "CoreMinimal.h"
#include "StoreCommonSetItemStruct.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FStoreCommonSetItemStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName _storeItemSetId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText _name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName _iconId;
    
    FStoreCommonSetItemStruct();
};

