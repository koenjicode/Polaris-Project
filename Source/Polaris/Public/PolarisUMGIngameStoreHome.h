#pragma once
#include "CoreMinimal.h"
#include "BlackPenBannerData.h"
#include "EStoreHomeState.h"
#include "EStoreItemAttribute.h"
#include "OtherShowcase.h"
#include "PickupShowcase.h"
#include "PolarisUMGIngameStoreMenuBase.h"
#include "StoreItemPanelStruct.h"
#include "PolarisUMGIngameStoreHome.generated.h"

class UPolarisUMGIngameStoreItemPanel;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGIngameStoreHome : public UPolarisUMGIngameStoreMenuBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStoreHomeState current_state;
    
public:
    UPolarisUMGIngameStoreHome();

protected:
    UFUNCTION(BlueprintCallable)
    UTexture2D* GetPickUpBanner(EStoreItemAttribute sell_type);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<UPolarisUMGIngameStoreItemPanel*> GetAllPanels();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateShowcaseData(FOtherShowcase showcase_info, const TArray<FStoreItemPanelStruct>& panel_infos);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateHeaderData(FPickupShowcase hedder_info, const TArray<FStoreItemPanelStruct>& panel_infos);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateBlackPenData(FBlackPenBannerData banner_info);
    
};

