#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESoundTriggerPoint.h"
#include "PolarisSoundDataName.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct POLARIS_API FPolarisSoundDataName {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SoundName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NoMultiPlayFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESoundTriggerPoint TriggerPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TriggerPointOffset;
    
    FPolarisSoundDataName();
};

