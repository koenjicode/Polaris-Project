#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PolarisStoreFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class POLARIS_API UPolarisStoreFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPolarisStoreFunctionLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSpecificLogoDisplayRequiredInStore();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsAlertNeededInStore();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetUpdateVcNoInStore();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetCurrentVcNumInStore();
    
};

