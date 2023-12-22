#pragma once
#include "CoreMinimal.h"
#include "EBlackPenItemType.h"
#include "BlackPenItem_Core.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FBlackPenItem_Core {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName item_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText item_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBlackPenItemType item_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Num;
    
    FBlackPenItem_Core();
};

