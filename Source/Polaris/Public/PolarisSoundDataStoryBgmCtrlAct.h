#pragma once
#include "CoreMinimal.h"
#include "PolarisSoundDataStoryBgmCtrl.h"
#include "PolarisSoundDataStoryBgmCtrlAct.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FPolarisSoundDataStoryBgmCtrlAct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FPolarisSoundDataStoryBgmCtrl> SoundDataStoryBgmCtrlMap;
    
    FPolarisSoundDataStoryBgmCtrlAct();
};

