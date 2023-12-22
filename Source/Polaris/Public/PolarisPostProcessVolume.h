#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/PostProcessVolume.h"
#include "PolarisPostProcessVolume.generated.h"

UCLASS(Blueprintable)
class POLARIS_API APolarisPostProcessVolume : public APostProcessVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector BoxBrushSize;
    
    APolarisPostProcessVolume(const FObjectInitializer& ObjectInitializer);

};

