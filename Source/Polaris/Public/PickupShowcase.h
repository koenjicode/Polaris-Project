#pragma once
#include "CoreMinimal.h"
#include "EStoreItemAttribute.h"
#include "PickupShowcase.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FPickupShowcase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName _bannerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 _order;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStoreItemAttribute _sellType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText _copyText;
    
    FPickupShowcase();
};

