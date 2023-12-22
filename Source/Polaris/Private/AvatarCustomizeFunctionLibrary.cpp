#include "AvatarCustomizeFunctionLibrary.h"

UAvatarCustomizeFunctionLibrary::UAvatarCustomizeFunctionLibrary() {
}

bool UAvatarCustomizeFunctionLibrary::Unlock(int32 unlock_id) {
    return false;
}

void UAvatarCustomizeFunctionLibrary::SetDisplayedNewIcon(int32 unlock_id) {
}

void UAvatarCustomizeFunctionLibrary::RequestAvatarCustomizeQuit() {
}

FLobbyAvatarData_Struct UAvatarCustomizeFunctionLibrary::RepairAvatarData(const FLobbyAvatarData_Struct& avatar_data_struct) {
    return FLobbyAvatarData_Struct{};
}

bool UAvatarCustomizeFunctionLibrary::PurchaseForMoney(int64 money) {
    return false;
}

bool UAvatarCustomizeFunctionLibrary::IsValidAvatarData(const FLobbyAvatarData_Struct& avatar_data_struct) {
    return false;
}

bool UAvatarCustomizeFunctionLibrary::IsUnlocked(int32 unlock_id) {
    return false;
}

bool UAvatarCustomizeFunctionLibrary::IsDisplayedNewIcon(int32 unlock_id) {
    return false;
}

FString UAvatarCustomizeFunctionLibrary::GetUnlockConditionMessage(int32 unlock_id) {
    return TEXT("");
}

TArray<int32> UAvatarCustomizeFunctionLibrary::GetMainMenuIndexes() {
    return TArray<int32>();
}

int64 UAvatarCustomizeFunctionLibrary::GetFightMoney() {
    return 0;
}

TArray<int32> UAvatarCustomizeFunctionLibrary::GetClothesSubMenuIndexes() {
    return TArray<int32>();
}

UAvatarItemDataRepository* UAvatarCustomizeFunctionLibrary::GetAvatarItemDataRepository() {
    return NULL;
}

FLobbyAvatarData_Struct UAvatarCustomizeFunctionLibrary::CreateDefaultAvatarDataStruct(int32 slot_no) {
    return FLobbyAvatarData_Struct{};
}

bool UAvatarCustomizeFunctionLibrary::CheckPurchaseForMoney(int64 money) {
    return false;
}


