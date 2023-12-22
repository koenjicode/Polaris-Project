#pragma once
#include "CoreMinimal.h"
#include "EInitBattleMode.h"
#include "EventOnInitBattleParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnInitBattleParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInitBattleMode Mode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 param32;
    
    POLARIS_API FEventOnInitBattleParam();
};

