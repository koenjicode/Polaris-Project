#pragma once
#include "CoreMinimal.h"
#include "BlackPenViewerControllerBase.h"
#include "BlackPenAccessoryViewerController.generated.h"

UCLASS(Blueprintable)
class POLARIS_API ABlackPenAccessoryViewerController : public ABlackPenViewerControllerBase {
    GENERATED_BODY()
public:
    ABlackPenAccessoryViewerController(const FObjectInitializer& ObjectInitializer);

};

