#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ELobbyMatchingAnywhere_BattleMode.h"
#include "ELobbyMatchingAnywhere_BattlePosition.h"
#include "ELobbyMatchingAnywhere_NetworkQuality.h"
#include "ELobbyMatchingAnywhere_RankRange.h"
#include "LobbyMatchingAnywhere_MatchingStatusChangedDelegate.h"
#include "LobbyMatchingAnywhere.generated.h"

UCLASS(Blueprintable)
class POLARIS_API ULobbyMatchingAnywhere : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELobbyMatchingAnywhere_BattleMode BattleMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELobbyMatchingAnywhere_RankRange RankRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELobbyMatchingAnywhere_NetworkQuality NetworkQuality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELobbyMatchingAnywhere_BattlePosition BattlePosition;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLobbyMatchingAnywhere_MatchingStatusChanged OnMatchingStatusChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanChangeCrossPlayFlag;
    
    ULobbyMatchingAnywhere();

    UFUNCTION(BlueprintCallable)
    void Tick(float InDeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void SetRankRange(ELobbyMatchingAnywhere_RankRange InNewRankLimit);
    
    UFUNCTION(BlueprintCallable)
    void SetNetworkQuality(ELobbyMatchingAnywhere_NetworkQuality InNewNetworkQuality);
    
    UFUNCTION(BlueprintCallable)
    void SetFighterId(int32 in_fighter_id);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultValues();
    
    UFUNCTION(BlueprintCallable)
    void SetCustomizeInfoMenu(int32 in_costume_type, int32 in_customize_slot);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomizeInfo(int32 in_costume_type, int32 in_customize_slot);
    
    UFUNCTION(BlueprintCallable)
    void SetCrossPlay(bool InCrossPlay);
    
    UFUNCTION(BlueprintCallable)
    void SetBattlePosition(ELobbyMatchingAnywhere_BattlePosition InNewPosition);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleMode(ELobbyMatchingAnywhere_BattleMode InNewBattleMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidCustomizeSlot(int32 in_costume_type, int32 in_customize_slot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetFighterId(int32& out_fighter_id) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomizeInfoMenu(int32& out_costume_type, int32& out_customize_slot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomizeInfo(int32& out_costume_type, int32& out_customize_slot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanCrossPlay() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanChangeCrossPlay() const;
    
};

