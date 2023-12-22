#pragma once
#include "CoreMinimal.h"
#include "ESessionBattleResult.h"
#include "PlayerMatchBattleGroup.h"
#include "PlayerMatchPlayerInfo.h"
#include "PolarisUserWidget.h"
#include "SessionPlayerName.h"
#include "SessionRule.h"
#include "PolarisUMGPlayerMatchSessionRoom.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGPlayerMatchSessionRoom : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGPlayerMatchSessionRoom();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void WaitConfirm(const FString& cosmos_id);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateBattleGroupCursor(int32 battle_group_cursor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartBattle();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Skip(const FString& cosmos_id);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Setup(int32 max_join_num);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSessionRule(FSessionRule sesstion_rule);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPlayerNum(int32 current_num, int32 max_num);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPlayerInfoList(const TArray<FPlayerMatchPlayerInfo>& player_info_list);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetOwnBattleGroup(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetHostName(FSessionPlayerName host_player_name);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetGrpupTabOperationEnable(bool Enable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetBattleGroups(const TArray<FPlayerMatchBattleGroup>& battle_groups);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RemovePlayer(const FString& cosmos_id);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RefreshPlayerNames();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayShowingAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayGroupSwitchAnimation(bool is_left);
    
    UFUNCTION(BlueprintCallable)
    void OnSelectTab(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void OnRequestConfirmWait();
    
    UFUNCTION(BlueprintCallable)
    void OnRequestConfirm();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MoveGroup(FPlayerMatchPlayerInfo player_info);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsWaitingAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool HasConfirmed(const FString& cosmos_id);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FPlayerMatchPlayerInfo GetRightBattlePlayerInfo();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FPlayerMatchPlayerInfo GetLeftBattlePlayerInfo();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 GetBattleGroupCursor();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 GetBattleGroupCount();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FinishBattle(const FString& cosmos_id, ESessionBattleResult Result, bool reached_win_limit);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Confirm(const FString& cosmos_id);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CanWaitConfirm() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CancelWaitingConfirm();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CancelSkip(const FString& cosmos_id);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddPlayer(const FPlayerMatchPlayerInfo& player_info);
    
};

