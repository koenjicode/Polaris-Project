#pragma once
#include "CoreMinimal.h"
#include "BaseMakeItemDataStruct.generated.h"

class UBaseMakeItem;

USTRUCT(BlueprintType)
struct POLARIS_API FBaseMakeItemDataStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBaseMakeItem* BaseMakeItemUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBaseMakeItem* BaseMakeItemTmp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsDispBaseMakeItemDetail;
    
    FBaseMakeItemDataStruct();
};

