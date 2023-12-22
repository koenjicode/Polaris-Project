#pragma once
#include "CoreMinimal.h"
#include "EStageImpulseStrengthType.h"
#include "PolarisStageGimmickReactionData.h"
#include "PolarisStageGimmickReaction.generated.h"

USTRUCT(BlueprintType)
struct FPolarisStageGimmickReaction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EStageImpulseStrengthType, FPolarisStageGimmickReactionData> ReactionData;
    
    POLARIS_API FPolarisStageGimmickReaction();
};

