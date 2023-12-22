#pragma once
#include "CoreMinimal.h"
#include "ItemUniqueCharacterEffect.h"
#include "ItemUniqueCharacterEffectArray.generated.h"

USTRUCT(BlueprintType)
struct FItemUniqueCharacterEffectArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FItemUniqueCharacterEffect> ItemEffect;
    
    POLARIS_API FItemUniqueCharacterEffectArray();
};

