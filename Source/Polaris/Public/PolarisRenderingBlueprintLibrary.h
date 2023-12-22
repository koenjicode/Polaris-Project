#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PolarisRenderingBlueprintLibrary.generated.h"

class UMaterialInterface;
class UObject;
class UTextureRenderTarget2D;

UCLASS(Blueprintable)
class UPolarisRenderingBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPolarisRenderingBlueprintLibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void PolarisDrawMaterialToRenderTarget(UObject* WorldContextObject, UTextureRenderTarget2D* TextureRenderTarget, UMaterialInterface* Material);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void PolarisClearRenderTarget2D(UObject* WorldContextObject, UTextureRenderTarget2D* TextureRenderTarget, FLinearColor ClearColor);
    
};

