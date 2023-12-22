#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CharacterEffect.h"
#include "EffectCharacterItem.generated.h"

class UDebugEffectItem;

UCLASS(Blueprintable)
class POLARIS_API UEffectCharacterItem : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ItemName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isCommonItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FighterId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FCharacterEffect> CharacterEffectItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDebugEffectItem* DebugEffectItem;
    
    UEffectCharacterItem();

};

