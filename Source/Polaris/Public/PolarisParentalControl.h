#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EPolarisParentalControlStatus.h"
#include "EPolarisParentalControlType.h"
#include "PolarisParentalControl.generated.h"

UCLASS(Blueprintable)
class POLARIS_API UPolarisParentalControl : public UObject {
    GENERATED_BODY()
public:
    UPolarisParentalControl();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPolarisParentalControlStatus GetStatusNoMultiplayCheck(EPolarisParentalControlType InType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPolarisParentalControlStatus GetStatus(EPolarisParentalControlType InType) const;
    
};

