#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "ReplayFilter.h"
#include "PolarisUMGReplayList.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGReplayList : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGReplayList();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateReplayResultInfos();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateReplayPlayerNames();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UnselectButton();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTitleText(const FString& Text, bool is_raw_text);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTabButtons(const UTexture2D* button_l, const UTexture2D* button_r);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTab(int32 Index, const FString& Text, bool is_raw_text);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSortText(const FString& Display, const FString& Value, bool is_raw_text);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetReplayResultInfo(int32 Index, bool Visible, int32 round_1p, int32 round_2p);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetReplayPlayerName(int32 Index, int32 side, const FString& player_name_text);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetReplayPlayerInfo(int32 Index, int32 side, const UTexture2D* fighter_texture, const UTexture2D* rank_texture, const UTexture2D* platform_texture, const FString& player_name_text, const FString& tag_text0, const FString& tag_text1, const FString& tag_text2, const FString& tekken_power_text);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetReplayCommonInfo(int32 Index, int32 data_no, bool favorite, const FString& date_text, const FString& play_count_text, const FString& match_text, const FString& version_text, const FString& stage_text, const UTexture2D* stage_texture);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetLoadingIconEnable(bool Enable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetListScrollEnable(bool Enable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetFilters(const TArray<FReplayFilter>& Filters, bool is_raw_text);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetEmptyText(const FString& Text, bool is_raw_text);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SelectTab(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SelectButton(int32 Index, int32 Top, bool is_slided);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimShadeOn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimShadeOff();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimIn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimButtonIn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsPlayAnimShadeOn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsPlayAnimShadeOff();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsPlayAnimOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsPlayAnimIn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsPlayAnimButtonIn();
    
    UFUNCTION(BlueprintCallable)
    void InvokeTabDecideCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeButtonSelectCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeButtonDecideCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DecideButton(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClearButton();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddButton();
    
};

