#pragma once
#include "CoreMinimal.h"
#include "DemoAttachSkeletalMeshStruct2.generated.h"

class USkeletalMesh;

USTRUCT(BlueprintType)
struct POLARIS_API FDemoAttachSkeletalMeshStruct2 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* SkelMeshComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachMeshRootBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachBoneName;
    
    FDemoAttachSkeletalMeshStruct2();
};

