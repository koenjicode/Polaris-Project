#pragma once
#include "CoreMinimal.h"
#include "DemoAttachSkeletalMeshStruct.generated.h"

class USkeletalMesh;

USTRUCT(BlueprintType)
struct POLARIS_API FDemoAttachSkeletalMeshStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* SkelMeshComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachMeshRootBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachBoneName;
    
    FDemoAttachSkeletalMeshStruct();
};

