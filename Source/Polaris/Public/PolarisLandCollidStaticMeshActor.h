#pragma once
#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "PolarisLandCollidStaticMeshActor.generated.h"

UCLASS(Blueprintable)
class POLARIS_API APolarisLandCollidStaticMeshActor : public AStaticMeshActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FloorNo;
    
    APolarisLandCollidStaticMeshActor(const FObjectInitializer& ObjectInitializer);

};

