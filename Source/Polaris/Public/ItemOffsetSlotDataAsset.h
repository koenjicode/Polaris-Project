#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ItemOffsetSlotDataStruct.h"
#include "ItemOffsetSlotDataAsset.generated.h"

UCLASS(Blueprintable)
class POLARIS_API UItemOffsetSlotDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FItemOffsetSlotDataStruct> ItemOffsetSlotDataArray;
    
    UItemOffsetSlotDataAsset();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FItemOffsetSlotDataStruct GetItemOffsetSlotData(const FString& _ItemOffsetSlotName) const;
    
};

