#pragma once
#include "CoreMinimal.h"
#include "ItemUniqueHitEffect.generated.h"

class UNiagaraSystem;

USTRUCT(BlueprintType)
struct POLARIS_API FItemUniqueHitEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* UniqueHitEffectAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ItemPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SortPriority;
    
    FItemUniqueHitEffect();
};

