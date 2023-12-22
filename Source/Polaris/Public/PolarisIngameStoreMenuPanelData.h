#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EStoreItemType.h"
#include "PolarisIngameStoreMenuPanelData.generated.h"

class UPolarisUMGStoreButton;
class UTexture2D;

UCLASS(Blueprintable)
class POLARIS_API UPolarisIngameStoreMenuPanelData : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_OneParam(FAction, int32, ID);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStoreItemType select_type_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* texture_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText title_text_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPolarisUMGStoreButton* reference_button;
    
    UPolarisIngameStoreMenuPanelData();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Unselect();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Select();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Decide();
    
    UFUNCTION(BlueprintCallable)
    void CreatePanelData(EStoreItemType select_type, UTexture2D* Texture, const FText& title_text);
    
    UFUNCTION(BlueprintCallable)
    void Configure(int32 ID, UPolarisIngameStoreMenuPanelData::FAction OnDecide, UPolarisIngameStoreMenuPanelData::FAction onSelect, UPolarisIngameStoreMenuPanelData::FAction onUnselect);
    
};

