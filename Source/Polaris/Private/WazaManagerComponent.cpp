#include "WazaManagerComponent.h"

UWazaManagerComponent::UWazaManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AnimatingID_Now = 0;
}

int32 UWazaManagerComponent::RemoveAbilityItem(int32 ItemPositionId, int32 acc_num) {
    return 0;
}

bool UWazaManagerComponent::HasAbilityItem(int32 ID) {
    return false;
}

bool UWazaManagerComponent::GetAbilityItemData(int32 ID, FAbilityItemData& Data) {
    return false;
}

int32 UWazaManagerComponent::AddAbilityItem(int32 _Pos, UItemPrefab* source_ip, int32 acc_num, int32 itemId_Override) {
    return 0;
}


