#pragma once
#include "CoreMinimal.h"
#include "BaseEyeItemDataStruct.generated.h"

class UBaseEyeItem;

USTRUCT(BlueprintType)
struct POLARIS_API FBaseEyeItemDataStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBaseEyeItem* BaseEyeItemUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBaseEyeItem* BaseEyeItemTmp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsDispBaseEyeItemDetail;
    
    FBaseEyeItemDataStruct();
};

