#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "StageGimmickInfo.h"
#include "PolarisUMGStageSelect.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGStageSelect : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGStageSelect();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UseCATPatch();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Setup(bool is_blue_cursor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SelectPanel(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimDecide(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsInitializing();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsFinishAnimation();
    
    UFUNCTION(BlueprintCallable)
    void InvokeSelectCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeDecideMovieCallback();
    
    UFUNCTION(BlueprintCallable)
    void InvokeDecideCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<int32> GetStageSelectableList();
    
    UFUNCTION(BlueprintCallable)
    FString GetStageNameTextId(int32 stageId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetPanelTexture(const int32 stageId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetNameTexture(const int32 stageId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetMapTexture(const int32 stageId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetLoopMovieName(int32 stageId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetDecideMovieName(int32 stageId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetBgTexture(const int32 stageId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnablePanel(bool flag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DarkenPanel(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddPanel(int32 ID, int32 stageId, FStageGimmickInfo gimmick_info);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void _SetSelectedStageID(int32 ID, bool is_random);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void _DecideSelectedStageID(int32 ID, bool is_random);
    
};

