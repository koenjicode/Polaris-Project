#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EColorFilterType.h"
#include "EColorSupportType.h"
#include "PolarisUniversalDesignLibrary.generated.h"

class UVolumeTexture;

UCLASS(Blueprintable)
class POLARIS_API UPolarisUniversalDesignLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPolarisUniversalDesignLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetUnivarsalDesignTexture(UVolumeTexture* InTexture);
    
    UFUNCTION(BlueprintCallable)
    static void SetUIColorSupportType(const EColorSupportType& ColorSupportType, const EColorFilterType& ColorFilterType, const int32 InLevel);
    
};

