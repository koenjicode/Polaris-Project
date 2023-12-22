#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LobbyQuickSelect.generated.h"

UCLASS(Blueprintable)
class POLARIS_API ULobbyQuickSelect : public UObject {
    GENERATED_BODY()
public:
    ULobbyQuickSelect();

    UFUNCTION(BlueprintCallable)
    void OpenQuickCustomizeSelect(int32 FighterId, int32 in_customize_select_slot_costume_type, int32 in_customize_select_slot_index);
    
    UFUNCTION(BlueprintCallable)
    void OpenQuickCharacterSelect(int32 in_fighter_id);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetQuickCustomizeSelectInfo(bool& OutIsOpenning, int32& OutCostumeType, int32& OutCustomizeSlotIndex, FString& OutSlotName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetQuickCustomizeInfo(int32 in_fighter_id, int32 in_customize_select_slot_costume_type, FString& out_customize_slot_name) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetQuickCharacterSelectInfo(bool& OutIsOpenning, int32& OutFighterId, FString& OutFighterName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetQuickCharacterInfo(int32 InFighterId, FString& OutFighterName) const;
    
};

