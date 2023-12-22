#pragma once
#include "CoreMinimal.h"
#include "HiddenCommonParams.h"
#include "HiddenParamsSequenceProceeded.generated.h"

USTRUCT(BlueprintType)
struct FHiddenParamsSequenceProceeded : public FHiddenCommonParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RelatedStageSequenceId;
    
    POLARIS_API FHiddenParamsSequenceProceeded();
};

