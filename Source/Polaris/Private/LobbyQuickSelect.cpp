#include "LobbyQuickSelect.h"

ULobbyQuickSelect::ULobbyQuickSelect() {
}

void ULobbyQuickSelect::OpenQuickCustomizeSelect(int32 FighterId, int32 in_customize_select_slot_costume_type, int32 in_customize_select_slot_index) {
}

void ULobbyQuickSelect::OpenQuickCharacterSelect(int32 in_fighter_id) {
}

void ULobbyQuickSelect::GetQuickCustomizeSelectInfo(bool& OutIsOpenning, int32& OutCostumeType, int32& OutCustomizeSlotIndex, FString& OutSlotName) const {
}

void ULobbyQuickSelect::GetQuickCustomizeInfo(int32 in_fighter_id, int32 in_customize_select_slot_costume_type, int32 in_customize_select_slot_index, FString& out_customize_slot_name) const {
}

void ULobbyQuickSelect::GetQuickCharacterSelectInfo(bool& OutIsOpenning, int32& OutFighterId, FString& OutFighterName) const {
}

void ULobbyQuickSelect::GetQuickCharacterInfo(int32 InFighterId, FString& OutFighterName) const {
}


