#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CustomizeItemDataCIForUE.h"
#include "CustomizeItemDataACForUE.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FCustomizeItemDataACForUE : public FCustomizeItemDataCIForUE {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsAccValid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OffsetSlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform OffsetSlotTransform;
    
    FCustomizeItemDataACForUE();
};

