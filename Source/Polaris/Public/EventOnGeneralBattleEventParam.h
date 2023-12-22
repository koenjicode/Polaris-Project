#pragma once
#include "CoreMinimal.h"
#include "EGeneralBattleEvent.h"
#include "EventOnGeneralBattleEventParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnGeneralBattleEventParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGeneralBattleEvent event_type;
    
    POLARIS_API FEventOnGeneralBattleEventParam();
};

