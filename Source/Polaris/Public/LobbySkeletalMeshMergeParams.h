#pragma once
#include "CoreMinimal.h"
#include "SkeletalMeshMerge.h"
#include "SkeletalMeshMerge.h"
#include "LobbySkeletalMeshMergeParams.generated.h"

class USkeleton;

USTRUCT(BlueprintType)
struct POLARIS_API FLobbySkeletalMeshMergeParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSkelMeshMergeSectionMapping> MeshSectionMappings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSkelMeshMergeUVTransformMapping> UVTransformsPerMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StripTopLODS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bNeedsCpuAccess: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSkeletonBefore: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeleton* Skeleton;
    
    FLobbySkeletalMeshMergeParams();
};

