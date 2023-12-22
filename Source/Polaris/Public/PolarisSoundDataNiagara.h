#pragma once
#include "CoreMinimal.h"
#include "PolarisSoundDataNiagara.generated.h"

class UAkAudioEvent;
class UNiagaraSystem;

USTRUCT(BlueprintType)
struct POLARIS_API FPolarisSoundDataNiagara {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UNiagaraSystem> SoundNiagara;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NoMultiPlayFrame;
    
    FPolarisSoundDataNiagara();
};

