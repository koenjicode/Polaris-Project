#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PartsSlotItem.generated.h"

UCLASS(Blueprintable)
class POLARIS_API UPartsSlotItem : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<int32> PartsSlotItemDataArray;
    
    UPartsSlotItem();

};

