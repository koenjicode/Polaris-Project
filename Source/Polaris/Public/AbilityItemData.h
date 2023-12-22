#pragma once
#include "CoreMinimal.h"
#include "AbilityItemData.generated.h"

class UItemPrefab;

USTRUCT(BlueprintType)
struct FAbilityItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AbilityID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemPrefab* ItempPrefab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ItemLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AccessoryNum;
    
    POLARIS_API FAbilityItemData();
};

