#pragma once
#include "CoreMinimal.h"
#include "PolarisStageChangePhysicalMaterial.generated.h"

class ASkeletalMeshActor;
class AStaticMeshActor;
class UPhysicalMaterial;

USTRUCT(BlueprintType)
struct FPolarisStageChangePhysicalMaterial {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicalMaterial* DefaultMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPhysicalMaterial*> BreakLevelMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AStaticMeshActor*> TargetStaticMeshActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASkeletalMeshActor*> TargetSkeletalMeshActor;
    
    POLARIS_API FPolarisStageChangePhysicalMaterial();
};

