#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PolarisPhotoModeFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class POLARIS_API UPolarisPhotoModeFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPolarisPhotoModeFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static bool IsPhotoModeAllowEffect();
    
    UFUNCTION(BlueprintCallable)
    static bool IsPhotoMode();
    
};

