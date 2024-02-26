#include "PolarisDebugCustomizeActor.h"

APolarisDebugCustomizeActor::APolarisDebugCustomizeActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->isUseInGame = true;
    this->isRefreshRealTime = false;
    this->isBakeEnable = true;
    this->isBodyPrpEnable = true;
    this->isSqueezeEnable = true;
    this->isAbilityOffsetEnable = false;
    this->isDemo = false;
    this->isOnlyLaunchItem = true;
    this->FighterId = 0;
    this->ItemPrefabSets.AddDefaulted(17);
    this->ItemPrefabAccSets.AddDefaulted(2);
    this->BaseMakeItemSets.AddDefaulted(5);
    this->BaseSESTItemSets.AddDefaulted(5);
    this->MyPolarisCharacterActor = NULL;
    this->IsSuntan = false;
    this->isDevilSkin = false;
    this->SweatBlend = 0;
    this->Wetness = 0;
    this->DirtyBlend = 0;
    this->targetCustomizeSet = NULL;
    this->createCustomizeSetCharacter = 0;
    this->createCustomizeSetPath = TEXT("/Game/Character/Item/Customize_Set");
    this->createCustomizeSetName = TEXT("CS_");
    this->UseDemoAnimBP = NULL;
    this->UseDemoSkeleton = NULL;
    this->UseCharacterClassDebug = NULL;
    this->isAutoLoadSkeletonAssetData = true;
    this->CharacterActorCount = 0;
}

void APolarisDebugCustomizeActor::SetMyPolarisCharacterActor() {
}

void APolarisDebugCustomizeActor::ResetAll() {
}

void APolarisDebugCustomizeActor::RefreshCharacter(bool isForce) {
}


