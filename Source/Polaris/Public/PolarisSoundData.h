#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESoundTriggerPoint.h"
#include "PolarisSoundData.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct POLARIS_API FPolarisSoundData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SoundID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NoMultiPlayFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESoundTriggerPoint TriggerPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TriggerPointOffset;
    
    FPolarisSoundData();
};

