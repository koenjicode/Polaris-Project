#pragma once
#include "CoreMinimal.h"
#include "ItemAddHitEffect.generated.h"

class UNiagaraSystem;

USTRUCT(BlueprintType)
struct POLARIS_API FItemAddHitEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* AddHitEffectAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ItemPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SortPriority;
    
    FItemAddHitEffect();
};

