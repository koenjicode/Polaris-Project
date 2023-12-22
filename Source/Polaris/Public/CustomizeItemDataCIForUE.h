#pragma once
#include "CoreMinimal.h"
#include "CustomizeItemDataIDForUE.h"
#include "DesignAssignStruct.h"
#include "CustomizeItemDataCIForUE.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FCustomizeItemDataCIForUE : public FCustomizeItemDataIDForUE {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsDesignValid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDesignAssignStruct> CIDesignSlotArray;
    
    FCustomizeItemDataCIForUE();
};

