#pragma once
#include "CoreMinimal.h"
#include "Components/ScrollBox.h"
#include "PolarisUMGScrollBox.generated.h"

UCLASS(Blueprintable)
class POLARIS_API UPolarisUMGScrollBox : public UScrollBox {
    GENERATED_BODY()
public:
    UPolarisUMGScrollBox();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsScrolling() const;
    
};

