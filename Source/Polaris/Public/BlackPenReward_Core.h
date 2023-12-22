#pragma once
#include "CoreMinimal.h"
#include "BlackPenItem_Core.h"
#include "BlackPenReward_Core.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FBlackPenReward_Core : public FBlackPenItem_Core {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 get_num;
    
    FBlackPenReward_Core();
};

