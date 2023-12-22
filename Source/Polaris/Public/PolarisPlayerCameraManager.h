#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Camera/PlayerCameraManager.h"
#include "PolarisPlayerCameraManager.generated.h"

UCLASS(Blueprintable, NonTransient)
class POLARIS_API APolarisPlayerCameraManager : public APlayerCameraManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D BaseScreenSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsAdjustHorizonalFOV;
    
    APolarisPlayerCameraManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFOVAngleNative() const;
    
};

