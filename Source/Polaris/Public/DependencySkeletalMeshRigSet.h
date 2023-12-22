#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ClothCollision.h"
#include "DynamicBoneDataStruct.h"
#include "SkeletalMeshRigSet.h"
#include "DependencySkeletalMeshRigSet.generated.h"

class UCatwalkClothCollisionAsset;
class UCatwalkClothLcjOverrideAsset;
class UClothOverrideCollisionDataAsset;
class UClothOverrideLcjDataAsset;
class UGFurAsset;
class UParentConstraintBinary;
class UPhoenixSkeletonBinary;
class UStaticMesh;

USTRUCT(BlueprintType)
struct POLARIS_API FDependencySkeletalMeshRigSet : public FSkeletalMeshRigSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCatwalkClothCollisionAsset* CatwalkClothCollisionAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FClothCollision> CatwalkClothCollisionVariations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClothOverrideCollisionDataAsset* CatwalkClothCollisionOverrideDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClothOverrideCollisionDataAsset* CatwalkClothCollisionAttachmentDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCatwalkClothLcjOverrideAsset* CatwalkClothLcjOverrideAssetItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClothOverrideLcjDataAsset* CatwalkClothLcjOverrideDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPhoenixSkeletonBinary*> PhoenixSkeletonBinariesItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDynamicBoneDataStruct> PhoenixDynamicBoneBinariesItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UParentConstraintBinary*> ParentConstraintBinaries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName VariationName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UGFurAsset*> GFurAssetItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStaticMesh> SourceStaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsInitializeVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsAlwaysLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsUseSkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableSelfConstraint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ItemConstraintNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform OffsetTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableAbilityItemHandOff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AbilityItemConstraintNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform AbilityItemOffsetTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsShadowMesh;
    
    FDependencySkeletalMeshRigSet();
};

