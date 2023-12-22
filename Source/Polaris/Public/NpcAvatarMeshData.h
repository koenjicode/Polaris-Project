#pragma once
#include "CoreMinimal.h"
#include "NpcAvatarMaterialData.h"
#include "NpcAvatarMeshData.generated.h"

class USkeletalMesh;

USTRUCT(BlueprintType)
struct FNpcAvatarMeshData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* SkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNpcAvatarMaterialData> materialDatas;
    
    POLARIS_API FNpcAvatarMeshData();
};

