#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EPostEffectType.h"
#include "EventOnRequestPostEffectParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnRequestPostEffectParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 player_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPostEffectType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 frame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector position;
    
    POLARIS_API FEventOnRequestPostEffectParam();
};

