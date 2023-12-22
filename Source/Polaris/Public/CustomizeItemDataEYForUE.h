#pragma once
#include "CoreMinimal.h"
#include "BaseEyeItemEdit.h"
#include "CustomizeItemDataIDForUE.h"
#include "CustomizeItemDataEYForUE.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FCustomizeItemDataEYForUE : public FCustomizeItemDataIDForUE {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBaseEyeItemEdit BEIData_Left;
    
    FCustomizeItemDataEYForUE();
};

