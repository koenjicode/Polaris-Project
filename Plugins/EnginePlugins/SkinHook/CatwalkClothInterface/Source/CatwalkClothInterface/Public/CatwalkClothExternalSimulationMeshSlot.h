#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "CatwalkClothExternalSimulationMeshSlot.generated.h"

USTRUCT(BlueprintType)
struct FCatwalkClothExternalSimulationMeshSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComponentReference ExternalComponent;
    
    CATWALKCLOTHINTERFACE_API FCatwalkClothExternalSimulationMeshSlot();
};

