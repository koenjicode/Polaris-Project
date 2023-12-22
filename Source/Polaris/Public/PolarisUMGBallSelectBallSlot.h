#pragma once
#include "CoreMinimal.h"
#include "BallSlotSettingInfo.h"
#include "EPolarisUMGBallSelectBallSlotMoveType.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGBallSelectBallSlot.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGBallSelectBallSlot : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGBallSelectBallSlot();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShowSlotPanelUMG();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetInfoUMG(const FString& Info);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInitializeUMG(int32 side, const FString& Title);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHideSlotPanelUMG();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDecideSlotUMG(int32 current_slot_index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCursorMoveUMG(int32 ball_slot_num, int32 current_slot_index, int32 disp_cursor_index, int32 disp_slot_left_index, EPolarisUMGBallSelectBallSlotMoveType move_type);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCreateSlotPanelUMG(const TArray<FBallSlotSettingInfo>& InfoArray);
    
    UFUNCTION(BlueprintCallable)
    void CallSelectSlotCallback(int32 slot_num);
    
    UFUNCTION(BlueprintCallable)
    void CallDecideSlotCallback(int32 slot_num);
    
    UFUNCTION(BlueprintCallable)
    void CallCursorRightCallback();
    
    UFUNCTION(BlueprintCallable)
    void CallCursorLeftCallback();
    
};

