#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "TopStats.h"
#include "PolarisUMGPlayerCustomizeMenu.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGPlayerCustomizeMenu : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGPlayerCustomizeMenu();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateSelectedMenu(int32 Index, bool Force);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateNewMarkShogoBg(int32 no, bool Enabled);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateNewMarkShogo(int32 no, bool Enabled);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateNewMarkPlayerPanel(int32 no, bool Enabled);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateNewMarkMenu(int32 Index, bool Enabled);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateNewMarkGauge(int32 no, bool Enabled);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateLockedShogoBg(int32 no, bool Locked);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateLockedShogo(int32 no, bool Locked);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateLockedPlayerPanel(int32 no, bool Locked);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateLockedGauge(int32 no, bool Locked);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVisibilityList(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupShogoBg(int32 no, const FString& text_id, const UTexture2D* Icon, int32 price, bool new_badge, bool Locked, bool instore, int32 rarity, const FString& special_shogo_text_id, bool is_lock_hidden, bool is_dlc_hidden);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupShogo(int32 no, const FString& text_id, int32 price, bool new_badge, bool Locked, bool instore, int32 rarity, bool is_lock_hidden, bool is_dlc_hidden);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupPlayerPanel(int32 no, const FString& text_id, const UTexture2D* Icon, int32 price, bool new_badge, bool Locked, bool instore, int32 rarity, bool is_lock_hidden, bool is_dlc_hidden);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupMenuButton(int32 Index, const UTexture2D* Icon, const FString& text_id, bool Valid);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupMagicMirror(int32 no, bool onoff);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupGauge(int32 no, const FString& text_id, const UTexture2D* Icon, int32 price, bool new_badge, bool Locked, bool instore, int32 rarity, bool is_lock_hidden, bool is_dlc_hidden);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSelectedItemName(const FString& text_id, int32 rarity);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPreviewTopStats(int32 Index, const FTopStats& top_stats);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPreviewTekkenPower(int32 tekken_power);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPreviewShogoBg(const UTexture2D* Texture);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPreviewShogo(const FString& text_id);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPreviewRank(const UTexture2D* Texture);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPreviewPlayerPanel(bool onoff, const UTexture2D* Texture);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPreviewPlayerName(const FText& player_name);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPreviewPlatformTag(int32 platform_tag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPreviewGauge(const UTexture2D* Texture);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPreviewCharacter(const UTexture2D* texture_face, const UTexture2D* texture_name);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPreviewArea(const FString& text_id);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetFightMoney(int64 fight_money);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SelectShogoBg(int32 no, bool Force);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SelectShogo(int32 no, bool Force);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SelectPlayerPanel(int32 no, bool Force);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SelectMagicMirror(int32 no, bool Force);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SelectGauge(int32 no, bool Force);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestAnimIO(bool in);
    
    UFUNCTION(BlueprintCallable)
    void InvokeMenuSelectCallback(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void InvokeMenuDecideCallback(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void InvokeListSelectCallback(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void InvokeListDecideCallback(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitializeShogoList(int32 Num);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitializeShogoBgList(int32 Num);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitializePlayerPanelList(int32 Num);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitializeMagicMirrorList(int32 Num);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitializeGaugeList(int32 Num);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool HasFinishedAnimOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool HasFinishedAnimMenuSelectIn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool HasFinishedAnimMenuClick();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool HasFinishedAnimMenuBackSelectIn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool HasFinishedAnimIn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool HasFinishedAnimClick();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EquipShogoBg(int32 no, bool Force);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EquipShogo(int32 no, bool Force);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EquipPlayerPanel(int32 no, bool Force);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EquipMagicMirror(int32 no, bool Force);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EquipGauge(int32 no, bool Force);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DecideShogoBg(int32 no);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DecideShogo(int32 no);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DecidePlayerPanel(int32 no);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DecideMenu(int32 item_index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DecideMagicMirror(int32 no);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DecideGauge(int32 no);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BackMenu();
    
};

