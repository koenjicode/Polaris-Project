#pragma once
#include "CoreMinimal.h"
#include "ItemUniqueCharacterEffectArray.h"
#include "ItemUniqueCharacterEffectInfo.generated.h"

USTRUCT(BlueprintType)
struct FItemUniqueCharacterEffectInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FItemUniqueCharacterEffectArray> ItemUniqueCharacterEffect;
    
    POLARIS_API FItemUniqueCharacterEffectInfo();
};

