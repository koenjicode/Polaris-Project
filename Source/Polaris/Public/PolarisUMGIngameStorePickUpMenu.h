#pragma once
#include "CoreMinimal.h"
#include "EStoreItemAttribute.h"
#include "PolarisUMGIngameStoreMenuBase.h"
#include "StoreItemPanelStruct.h"
#include "PolarisUMGIngameStorePickUpMenu.generated.h"

class UGridPanel;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGIngameStorePickUpMenu : public UPolarisUMGIngameStoreMenuBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGridPanel* GridPanelWidget;
    
public:
    UPolarisUMGIngameStorePickUpMenu();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RepHeaderTitleText(const FText& rep_text);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RepHeaderTexture(UTexture2D* header_texture);
    
protected:
    UFUNCTION(BlueprintCallable)
    UTexture2D* GetPickUpHeader(EStoreItemAttribute sell_type);
    
public:
    UFUNCTION(BlueprintCallable)
    void GenerateItemPanels(const TArray<FStoreItemPanelStruct>& panel_infos, UClass* loaded_class);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateItemsPanelData(const TArray<FStoreItemPanelStruct>& panel_infos);
    
};

