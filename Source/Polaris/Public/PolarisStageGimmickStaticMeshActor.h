#pragma once
#include "CoreMinimal.h"
#include "PolarisStageGimmickActor.h"
#include "PolarisStageGimmickStaticMeshActor.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable)
class POLARIS_API APolarisStageGimmickStaticMeshActor : public APolarisStageGimmickActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StaticMeshComponent;
    
public:
    APolarisStageGimmickStaticMeshActor(const FObjectInitializer& ObjectInitializer);

};

