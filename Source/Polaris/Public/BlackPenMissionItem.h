#pragma once
#include "CoreMinimal.h"
#include "EBlackPenMissionType.h"
#include "BlackPenMissionItem.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FBlackPenMissionItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText text_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBlackPenMissionType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 target_value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 clear_value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 xp_reward_value;
    
    FBlackPenMissionItem();
};

