#pragma once
#include "CoreMinimal.h"
#include "PolarisSoundDataStoryBgmCtrl.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct POLARIS_API FPolarisSoundDataStoryBgmCtrl {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SoundDataStoryBgmCtrlSkip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SoundDataStoryBgmCtrlRetry;
    
    FPolarisSoundDataStoryBgmCtrl();
};

