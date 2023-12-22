#pragma once
#include "CoreMinimal.h"
#include "BoneModifyTransform.h"
#include "BoneModifyTransformArray.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FBoneModifyTransformArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBoneModifyTransform> BoneModifyTransform;
    
    FBoneModifyTransformArray();
};

