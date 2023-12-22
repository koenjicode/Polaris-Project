#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SESTDataSet_CS.h"
#include "CustomizeSet.generated.h"

class UAuraCharacterItem;
class UBaseEyeItem;
class UBaseMakeItem;
class UEffectCharacterItem;
class UItemPrefab;

UCLASS(Blueprintable)
class POLARIS_API UCustomizeSet : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UItemPrefab>> ItemPrefabSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UItemPrefab>> ItemPrefabAccSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UBaseMakeItem>> BaseMakeItemSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UBaseEyeItem> BaseEyeItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UEffectCharacterItem> EffectCharacterItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAuraCharacterItem> AuraCharacterItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSESTDataSet_CS> SESTItemDataSetArray;
    
    UCustomizeSet();

};

