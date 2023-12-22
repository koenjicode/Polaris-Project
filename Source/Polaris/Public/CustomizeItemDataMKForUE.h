#pragma once
#include "CoreMinimal.h"
#include "BaseMakeItemEdit.h"
#include "CustomizeItemDataIDForUE.h"
#include "CustomizeItemDataMKForUE.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FCustomizeItemDataMKForUE : public FCustomizeItemDataIDForUE {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBaseMakeItemEdit BMIData;
    
    FCustomizeItemDataMKForUE();
};

