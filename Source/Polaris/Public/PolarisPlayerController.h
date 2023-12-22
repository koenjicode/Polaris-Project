#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "PolarisPlayerController.generated.h"

UCLASS(Blueprintable)
class POLARIS_API APolarisPlayerController : public APlayerController {
    GENERATED_BODY()
public:
    APolarisPlayerController(const FObjectInitializer& ObjectInitializer);

};

