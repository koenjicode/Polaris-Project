#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AuraItem.h"
#include "AuraCharacterItem.generated.h"

class UDebugEffectItem;

UCLASS(Blueprintable)
class POLARIS_API UAuraCharacterItem : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ItemName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FighterId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isCommonItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAuraItem> AuraEffectItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDebugEffectItem* DebugEffectItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isExclusive;
    
    UAuraCharacterItem();

};

