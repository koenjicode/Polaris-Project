#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ProfileCameraController.generated.h"

UCLASS(Blueprintable)
class POLARIS_API AProfileCameraController : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Distance;
    
    AProfileCameraController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TouchBGMeshes();
    
    UFUNCTION(BlueprintCallable)
    void AdjustBGToCamera();
    
};

