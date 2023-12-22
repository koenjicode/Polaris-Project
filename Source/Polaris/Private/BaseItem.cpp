#include "BaseItem.h"

UBaseItem::UBaseItem() {
    this->SetItemPositionId = 0;
    this->MeshType = EMeshType::E_SkeletalMesh;
    this->SourceSkeletalMeshSetArray.AddDefaulted(33);
    this->SourceBasePartsMeshItem = NULL;
    this->IsCastContactShadow = true;
    this->CatwalkClothCollisionAssetItem = NULL;
    this->CatwalkClothCollisionOverrideDataAsset = NULL;
    this->CatwalkClothCollisionAttachmentDataAsset = NULL;
    this->CatwalkClothLcjOverrideAssetItem = NULL;
    this->CatwalkClothLcjOverrideDataAsset = NULL;
    this->IsCreateMaterialInstanceDynamic = true;
    this->IsAbility = false;
    this->AbilityMissileClass = NULL;
    this->AbilityMissileMaxInstanceNum = 0;
    this->IsAbilityMissileBorrowMainMesh = true;
    this->ExtraAbilityId = 0;
    this->IsExtraDefaultConstaraintNode = true;
    this->IsInitializeDispExtraItem = true;
    this->CopyExtraItemNum = 0;
    this->ItemBaseClass = NULL;
    this->DropItemBaseClass = NULL;
    this->HairScalpMask = NULL;
    this->isCommonItem = false;
    this->IsDisableMouse = false;
}


