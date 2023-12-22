#pragma once
#include "CoreMinimal.h"
#include "EventOnShowItemOutlineParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnShowItemOutlineParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 player_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 item_pos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 acc_num;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Enable;
    
    POLARIS_API FEventOnShowItemOutlineParam();
};

