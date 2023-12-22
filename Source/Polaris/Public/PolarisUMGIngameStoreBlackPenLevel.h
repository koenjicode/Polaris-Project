#pragma once
#include "CoreMinimal.h"
#include "BlackPenItem.h"
#include "BlackPenItemDetail.h"
#include "BlackPenLevelData.h"
#include "BlackPenLevelWidgetName.h"
#include "PolarisUMGIngameStoreMenuBase.h"
#include "PolarisUMGIngameStoreBlackPenLevel.generated.h"

class UPolarisUMGStoreButton;

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGIngameStoreBlackPenLevel : public UPolarisUMGIngameStoreMenuBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackPenLevelWidgetName widget_names;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackPenLevelData Data;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPolarisUMGStoreButton*> m_item_panels;
    
public:
    UPolarisUMGIngameStoreBlackPenLevel();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetRequiredLevel(int32 new_level_required, bool force_init);
    
    UFUNCTION(BlueprintCallable)
    void ScrollRight();
    
    UFUNCTION(BlueprintCallable)
    void ScrollLeft();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLevelUpdated();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MinimizeLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MaximizeLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMaxLevelRequired() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFightMoneyEnough() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void IncrementLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DecrementLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UPolarisUMGStoreButton* CreateItemPanel(const FBlackPenItem& Item, const FBlackPenItemDetail& item_detail);
    
};

