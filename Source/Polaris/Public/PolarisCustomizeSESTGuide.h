#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/StaticMeshActor.h"
#include "PolarisCustomizeSESTGuide.generated.h"

UCLASS(Blueprintable)
class POLARIS_API APolarisCustomizeSESTGuide : public AStaticMeshActor {
    GENERATED_BODY()
public:
    APolarisCustomizeSESTGuide(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCustomizeGuideTransform(FVector guide_origin, FVector guide_y_vector, FVector guide_x_vector, float X, float Y, float z_rotation, float uv_rotation, float Scale, float ScaleX, float ScaleY, float Depth, float Yaw, float Pitch);
    
};

