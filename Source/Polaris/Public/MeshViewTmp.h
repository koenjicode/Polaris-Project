#pragma once
#include "CoreMinimal.h"
#include "MeshViewTmp.generated.h"

class USkeletalMesh;

USTRUCT(BlueprintType)
struct POLARIS_API FMeshViewTmp {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 AddedNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMesh* UseMesh;
    
    FMeshViewTmp();
};

