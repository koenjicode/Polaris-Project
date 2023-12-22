#pragma once
#include "CoreMinimal.h"
#include "SESTBakeData.h"
#include "CustomizeSESTBakeDataForUE.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FCustomizeSESTBakeDataForUE {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsEmpty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSESTBakeData SESTBakeInfo;
    
    FCustomizeSESTBakeDataForUE();
};

