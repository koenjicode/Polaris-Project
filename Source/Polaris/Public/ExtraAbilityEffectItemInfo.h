#pragma once
#include "CoreMinimal.h"
#include "ItemEffect.h"
#include "ExtraAbilityEffectItemInfo.generated.h"

USTRUCT(BlueprintType)
struct FExtraAbilityEffectItemInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FItemEffect> ItemEffect;
    
    POLARIS_API FExtraAbilityEffectItemInfo();
};

