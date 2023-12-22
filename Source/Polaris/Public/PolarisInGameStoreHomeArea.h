#pragma once
#include "CoreMinimal.h"
#include "EShowcaseType.h"
#include "PolarisUserWidget.h"
#include "StoreItemPanelStruct.h"
#include "PolarisInGameStoreHomeArea.generated.h"

class UGridPanel;
class UPolarisUMGIngameStoreItemPanel;
class UUniformGridPanel;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisInGameStoreHomeArea : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_OneParam(FAction, int32, ID);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_line_num;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_column_num;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EShowcaseType showcase_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGridPanel* GridPanelWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUniformGridPanel* UniformGridPanelWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 max_column_num;
    
public:
    UPolarisInGameStoreHomeArea();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLineNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetItemNumInLine(int32 target_y) const;
    
    UFUNCTION(BlueprintCallable)
    UPolarisUMGIngameStoreItemPanel* GetItemInLine(int32 target_x, int32 target_y);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetColumnNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UWidget*> GetAllChildrenInGridPanel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAllChildNum() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<UPolarisUMGIngameStoreItemPanel*> FindAllButtons();
    
    UFUNCTION(BlueprintCallable)
    UPolarisUMGIngameStoreItemPanel* CreateOtherPanelData(UClass* loaded_class);
    
    UFUNCTION(BlueprintCallable)
    void CreateItemsPanelData(const TArray<FStoreItemPanelStruct>& panel_infos, UClass* loaded_class);
    
};

