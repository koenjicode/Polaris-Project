#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "PolarisTraceMeshDataAsset.generated.h"

class USkeletalMesh;

UCLASS(Blueprintable)
class POLARIS_API UPolarisTraceMeshDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* SkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* AnimBlurprintClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BoneNamePrefix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BoneNum;
    
    UPolarisTraceMeshDataAsset();

};

