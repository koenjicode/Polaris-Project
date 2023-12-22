#pragma once
#include "CoreMinimal.h"
#include "EStoreItemType.h"
#include "GS_StoreMenuType.h"
#include "PolarisUMGIngameStoreMenuBase.h"
#include "PolarisUMGIngameStoreSelectTypeUI.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGIngameStoreSelectTypeUI : public UPolarisUMGIngameStoreMenuBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    GS_StoreMenuType this_category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ListView_Name;
    
public:
    UPolarisUMGIngameStoreSelectTypeUI();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsCompleteInitListView() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 GetDataNum() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreatePanelsData(GS_StoreMenuType select_type);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreatePanelData(EStoreItemType select_type, UTexture2D* Texture, const FText& title_text);
    
};

