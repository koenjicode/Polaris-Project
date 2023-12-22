#pragma once
#include "CoreMinimal.h"
#include "PhyscsMaterialAttachBoneInfo.h"
#include "AttachBoneParticleInfo.generated.h"

USTRUCT(BlueprintType)
struct FAttachBoneParticleInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FPhyscsMaterialAttachBoneInfo> BoneParticleMap;
    
    POLARIS_API FAttachBoneParticleInfo();
};

