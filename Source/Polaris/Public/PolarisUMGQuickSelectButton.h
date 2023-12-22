#pragma once
#include "CoreMinimal.h"
#include "EPolarisUMGQuickSelectButtonType.h"
#include "EPolarisUMGQuickSelectItem.h"
#include "PolarisUMGQuickSelectButton.generated.h"

USTRUCT(BlueprintType)
struct FPolarisUMGQuickSelectButton {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPolarisUMGQuickSelectItem Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPolarisUMGQuickSelectButtonType Type;
    
    POLARIS_API FPolarisUMGQuickSelectButton();
};

