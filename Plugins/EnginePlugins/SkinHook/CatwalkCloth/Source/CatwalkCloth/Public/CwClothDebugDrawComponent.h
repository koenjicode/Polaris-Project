#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "CwClothDebugDrawComponent.generated.h"

class UMaterialInterface;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UCwClothDebugDrawComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* VertexDebugDrawMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* SimulationMeshDebugDrawMaterial;
    
    UCwClothDebugDrawComponent(const FObjectInitializer& ObjectInitializer);

};

