#pragma once
#include "CoreMinimal.h"
#include "EPolarisUMGMainMenuItemState.h"
#include "EPolarisUMGMainMenuShortcutType.h"
#include "PolarisUMGMainMenuInitMenuStruct.h"
#include "PolarisUMGMainMenuItemStruct.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGMainMenu.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGMainMenu : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGMainMenu();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateMenuItem(int32 item_id, bool is_favorite, int32 ignore_menu_id);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSwapFavoriteMenuItem(int32 menu_id, int32 Index0, int32 index1);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShowCBTMenus();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSelectTabButton(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSelectShortcutButton(bool is_active, int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSelectMenus(int32 ID, int32 item_padding, const TArray<EPolarisUMGMainMenuItemState>& item_states);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSelectBannerButton(bool is_active, int32 ID, int32 from_index, int32 to_index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRemoveFavoriteMenuItem(int32 menu_id, int32 item_id);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayOutAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayInAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLaunchNews(const FString& Param);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OnIsPlayingInAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OnIsClosedNews();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInitTabButton(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInitShortcutButton(bool is_active, int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInitSelectMenus();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInitPlayGoMode();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInitPlayerInformation(const FString& player_name, const UTexture2D* rank_texture);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInitMenus(const TArray<FPolarisUMGMainMenuInitMenuStruct>& menus);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFocusReturned();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDecideShortcutButton(int32 item_id);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDecideMenuButton(int32 menu_id, int32 item_id);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDecideBannerButton();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCreateTabButton(int32 ID, const FString& Name);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCreateShortcutButton(int32 ID, EPolarisUMGMainMenuShortcutType Type, const FString& Name, bool is_selectable);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCreateMenus(int32 ID, bool is_sub_menu, const TArray<FPolarisUMGMainMenuItemStruct>& items);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCreateBannerButton(int32 ID, const UTexture2D* Texture, const FString& Text);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAddFavoriteMenuItem(int32 menu_id, int32 item_id, const FString& text_id, bool is_selectable, bool is_new_icon);
    
    UFUNCTION(BlueprintCallable)
    void InvokeTabDecideCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeShortcutSelectCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeShortcutDecideCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeMenuSelectCallback(int32 menu_id, int32 item_id);
    
    UFUNCTION(BlueprintCallable)
    void InvokeMenuDecideCallback(int32 menu_id, int32 item_id);
    
    UFUNCTION(BlueprintCallable)
    void InvokeBannerSelectCallback();
    
    UFUNCTION(BlueprintCallable)
    void InvokeBannerMarkDecideCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeBannerDecideCallback();
    
};

