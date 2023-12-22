#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PolarisCharacterCameraActor.h"
#include "PolarisCharacterCustomizeCameraActor.generated.h"

UCLASS(Blueprintable)
class POLARIS_API APolarisCharacterCustomizeCameraActor : public APolarisCharacterCameraActor {
    GENERATED_BODY()
public:
    APolarisCharacterCustomizeCameraActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestCaptureScene(TArray<FColor>& OutColorData);
    
};

