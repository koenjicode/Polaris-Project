#pragma once
#include "CoreMinimal.h"
#include "CatwalkClothExternalMeshBindInfo.h"
#include "MergedMeshOriginalInfo.h"
#include "CatwalkClothVariation.generated.h"

class USkeletalMesh;

USTRUCT(BlueprintType)
struct FCatwalkClothVariation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCatwalkClothExternalMeshBindInfo> ExternalMeshBindInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, int32> DriveMeshNameToClothIndexMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftObjectPtr<USkeletalMesh>, FMergedMeshOriginalInfo> OriginalMergedMeshes;
    
    CATWALKCLOTH_API FCatwalkClothVariation();
};

