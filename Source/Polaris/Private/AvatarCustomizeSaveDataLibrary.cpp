#include "AvatarCustomizeSaveDataLibrary.h"

UAvatarCustomizeSaveDataLibrary::UAvatarCustomizeSaveDataLibrary() {
}

void UAvatarCustomizeSaveDataLibrary::SetThumbnailSaveData(const TArray<uint8>& Data, int32 slot_no) {
}

void UAvatarCustomizeSaveDataLibrary::SetSlotSaveData(const FLobbyAvatarData_Struct& Data) {
}

void UAvatarCustomizeSaveDataLibrary::SetMainAvatarSlot(int32 slot_no) {
}

void UAvatarCustomizeSaveDataLibrary::Save() {
}

bool UAvatarCustomizeSaveDataLibrary::IsValidSlot(int32 slot_no) {
    return false;
}

bool UAvatarCustomizeSaveDataLibrary::HasSaveData() {
    return false;
}

void UAvatarCustomizeSaveDataLibrary::GetValidSlotSaveDatas(TArray<FLobbyAvatarData_Struct>& datas) {
}

void UAvatarCustomizeSaveDataLibrary::GetThumbnailSaveData(int32 slot_no, TArray<uint8>& Data) {
}

void UAvatarCustomizeSaveDataLibrary::GetSlotSaveData(int32 slot_no, FLobbyAvatarData_Struct& Data) {
}

int32 UAvatarCustomizeSaveDataLibrary::GetMainAvatarSlot() {
    return 0;
}

void UAvatarCustomizeSaveDataLibrary::DeleteSlot(int32 slot_no) {
}

void UAvatarCustomizeSaveDataLibrary::CopySlot(int32 src_slot, int32 dst_slot) {
}


