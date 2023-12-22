#pragma once
#include "CoreMinimal.h"
#include "PlayerMatchPlayerInfo.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGPlayerMatchPlayerList.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGPlayerMatchPlayerList : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGPlayerMatchPlayerList();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateCursor(int32 vertical_cursor, int32 horizontal_cursor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Show(const TArray<FPlayerMatchPlayerInfo>& player_info_list, int32 max_join_num);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RefreshPlayerNames();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayShowAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayHideAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsWaitingAnimation();
    
    UFUNCTION(BlueprintCallable)
    void InvokeDecideCallback();
    
    UFUNCTION(BlueprintCallable)
    void InvokeCancelCallback();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FString GetSelectedPlayerId();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Decide();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Cancel();
    
};

