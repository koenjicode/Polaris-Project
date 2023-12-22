#pragma once
#include "CoreMinimal.h"
#include "PolarisCharacterJointAsset.generated.h"

class UPhoenixProportionBinary;
class UPhoenixSkeletonBinary;

USTRUCT(BlueprintType)
struct FPolarisCharacterJointAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPhoenixSkeletonBinary*> PhoenixSkeletonBinaries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPhoenixProportionBinary*> PhoenixProportionBinaries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPhoenixSkeletonBinary*> PhoenixSkeletonPropotionBinaries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPhoenixSkeletonBinary*> PhoenixSkeletonPropotionBeforeBinaries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPhoenixSkeletonBinary*> PhoenixSkeletonPropotionBinaries2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPhoenixSkeletonBinary*> PhoenixSkeletonPropotionBeforeBinaries2;
    
    POLARIS_API FPolarisCharacterJointAsset();
};

