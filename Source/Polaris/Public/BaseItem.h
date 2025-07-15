#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ClothCollision.h"
#include "DependencySkeletalMeshRigSet.h"
#include "DropItemInfoStruct.h"
#include "DynamicBoneDataStruct.h"
#include "EMeshType.h"
#include "ItemAddAuraEffect.h"
#include "ItemAddHitEffect.h"
#include "ItemEffect.h"
#include "ItemUniqueCharacterEffect.h"
#include "ItemUniqueHitEffect.h"
#include "OverrideFaceSkinMaterialParameter.h"
#include "SkeletalMeshRigSet.h"
#include "SkeletalMeshRigSetArray.h"
#include "Templates/SubclassOf.h"
#include "BaseItem.generated.h"

class APolarisCharacterMissile;
class APolarisItemBaseActor;
class UBasePartsMeshItem;
class UCatwalkClothCollisionAsset;
class UCatwalkClothLcjOverrideAsset;
class UClothOverrideCollisionDataAsset;
class UClothOverrideLcjDataAsset;
class UGFurAsset;
class UMaterialInterface;
class UParentConstraintBinary;
class UPhoenixSkeletonBinary;
class UPhysicsAsset;
class UPolarisCharacterMotionOverrideData;
class UStaticMesh;
class UTexture;

UCLASS(BlueprintType)
class POLARIS_API UBaseItem : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 SetItemPositionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EMeshType MeshType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSkeletalMeshRigSet SourceSkeletalMeshSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize)
    TArray<FSkeletalMeshRigSetArray> SourceSkeletalMeshSetArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TObjectPtr<UBasePartsMeshItem> SourceBasePartsMeshItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UStaticMesh> SourceStaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FDependencySkeletalMeshRigSet> DependencySkeletalMeshSetArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsCastContactShadow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TObjectPtr<UPhoenixSkeletonBinary>> PhoenixSkeletonBinariesItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FDynamicBoneDataStruct> PhoenixDynamicBoneBinariesItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TObjectPtr<UParentConstraintBinary>> ParentConstraintBinaries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCatwalkClothCollisionAsset* CatwalkClothCollisionAssetItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FClothCollision> CatwalkClothCollisionVariations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TObjectPtr<UClothOverrideCollisionDataAsset> CatwalkClothCollisionOverrideDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TObjectPtr<UClothOverrideCollisionDataAsset> CatwalkClothCollisionAttachmentDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TObjectPtr<UCatwalkClothLcjOverrideAsset> CatwalkClothLcjOverrideAssetItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TObjectPtr<UClothOverrideLcjDataAsset> CatwalkClothLcjOverrideDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TObjectPtr<UGFurAsset>> GFurAssetItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UPhysicsAsset* RBANCollisionAssetItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsCreateMaterialInstanceDynamic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName AbilityItemConstaraintNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform AbilityItemOffsetTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<APolarisCharacterMissile> AbilityMissileClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 AbilityMissileMaxInstanceNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName AbilityMissileTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsAbilityMissileBorrowMainMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString ItemOffsetSlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform ItemOffsetTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ExtraAbilityId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName ExtraDefaultConstaraintNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector ExtraDefaultConstaratLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator ExtraDefaultConstaratRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector ExtraDefaultConstaratScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsExtraDefaultConstaraintNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsInitializeDispExtraItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 CopyExtraItemNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FItemEffect> ItemEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FItemAddHitEffect AddHitEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FItemUniqueHitEffect UniqueHitEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FItemUniqueCharacterEffect> UniqueCharacterEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FItemAddAuraEffect AddAuraEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<APolarisItemBaseActor> ItemBaseClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<APolarisItemBaseActor> DropItemBaseClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<int32> DropItemDependencyMeshIndexArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDropItemInfoStruct DropItemInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TObjectPtr<UTexture> HairScalpMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FOverrideFaceSkinMaterialParameter OverrideFaceSkinMaterialParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool isCommonItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsDisableMouse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsEnableFresnelOff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UPolarisCharacterMotionOverrideData*> MotionOverrideDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UMaterialInterface> SourceSkinTintColorCustomMaterial;
    
    UBaseItem();

};
