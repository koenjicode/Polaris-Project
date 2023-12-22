#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ItemPrefab.generated.h"

class UBaseCharacterItem;
class UBaseItem;
class UCustomizeItem;

UCLASS(Blueprintable)
class POLARIS_API UItemPrefab : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBaseItem* BaseItemRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBaseCharacterItem* BaseCharacterItemRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCustomizeItem* CustomizeItemRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ParentItemPrefabName;
    
    UItemPrefab();

    UFUNCTION(BlueprintCallable)
    bool IsValidItemPrefab();
    
};

