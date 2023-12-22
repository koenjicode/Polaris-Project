#pragma once
#include "CoreMinimal.h"
#include "BlackPenReward_Core.h"
#include "BlackPenReward.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FBlackPenReward : public FBlackPenReward_Core {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool premium_flag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName icon_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBlackPenReward_Core> detail_datas;
    
    FBlackPenReward();
};

