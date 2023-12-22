#pragma once
#include "CoreMinimal.h"
#include "PartsSlotItemExclusiveSetStruct.h"
#include "PartsSlotItemSetStruct.generated.h"

class UPartsSlotItem;

USTRUCT(BlueprintType)
struct POLARIS_API FPartsSlotItemSetStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPartsSlotItem* SourcePSI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isUsePSI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPartsSlotItemExclusiveSetStruct> ExclusivePSISet;
    
    FPartsSlotItemSetStruct();
};

