#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GameplayTagContainer.h"
#include "PolarisReducibleInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UPolarisReducibleInterface : public UInterface {
    GENERATED_BODY()
};

class IPolarisReducibleInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnReductionTagQueryChanged(const FGameplayTagQuery& NewTagQuery);
    
};

