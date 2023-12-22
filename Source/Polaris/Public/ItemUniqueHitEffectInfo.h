#pragma once
#include "CoreMinimal.h"
#include "ItemUniqueHitEffect.h"
#include "ItemUniqueHitEffectInfo.generated.h"

USTRUCT(BlueprintType)
struct FItemUniqueHitEffectInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FItemUniqueHitEffect> ItemUniqueHitEffect;
    
    POLARIS_API FItemUniqueHitEffectInfo();
};

