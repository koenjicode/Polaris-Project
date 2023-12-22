#pragma once
#include "CoreMinimal.h"
#include "EPolarisUMGResultNewType.h"
#include "PolarisUMGResultNewRewardStruct.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGResultNew.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGResultNew : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGResultNew();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetRematchStatus(bool Owner, bool requested);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPlayerName(bool Owner, const FString& player_name);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPlatformIconTexture(bool Owner, UTexture2D* icon_tex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetGrayOutFlag(int32 ID, bool out);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetFighterIconTexture(bool Owner, UTexture2D* icon_tex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShowRematchStatus(bool flag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetTimeLeft(int32 ID, const FString& text_id, int32 Time);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetSelectMenuSide(int32 side);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetSelectMenuCursor(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetRewardBattlePass(const TArray<FPolarisUMGResultNewRewardStruct>& items);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetReward(const TArray<FPolarisUMGResultNewRewardStruct>& items);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetFighterName(const FString& Name);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayAnimOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayAnimIn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayAnimDecide(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAddSelectMenuItems(const TArray<FString>& items);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsAnyRematchStatusAnimationPlaying();
    
    UFUNCTION(BlueprintCallable)
    void InvokeSelectCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeDecideCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool HasInAnimationFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FString GetTimerWidgetPathName();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClearRematchHistory();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CheckRematchHistoryNum();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddRematchHistory(EPolarisUMGResultNewType result_type);
    
};

