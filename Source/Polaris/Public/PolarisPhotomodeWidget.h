#pragma once
#include "CoreMinimal.h"
#include "EPolarisUMGPhotomodeTabType.h"
#include "PolarisUMGPhotoModeWinItemStruct.h"
#include "PolarisUserWidget.h"
#include "PolarisPhotomodeWidget.generated.h"

class ACineCameraActor;
class APhotoModeActor;
class UPolarisPhotomodeWidget;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisPhotomodeWidget : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisPhotomodeWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayOutAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayInAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayExecArrowAnimation(int32 list_idx, bool is_left);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayDecideItemAnimation(int32 list_idx);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetItemValueAndText(int32 list_idx, float Value, const FString& Text);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetItemValue(int32 list_idx, float Value, const TArray<FString>& Params);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSelectItem(int32 list_idx);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEnabledGrid(bool is_enabled);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCreateTab(const TArray<EPolarisUMGPhotomodeTabType>& id_list, const TArray<UTexture2D*>& icons);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeWin(const EPolarisUMGPhotomodeTabType Type, const FString& title_id, const TArray<FPolarisUMGPhotoModeWinItemStruct>& items);
    
    UFUNCTION(BlueprintCallable)
    void InvokeTabDecideCallback(int32 Type);
    
    UFUNCTION(BlueprintCallable)
    void InvokeSliderChangeCallback(int32 ID, float Value);
    
    UFUNCTION(BlueprintCallable)
    void InvokeItemSelectCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeItemDecideCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeArrowDecideCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UPolarisPhotomodeWidget* GetPhotoWin();
    
    UFUNCTION(BlueprintCallable)
    APhotoModeActor* GetPhotoModeActor();
    
    UFUNCTION(BlueprintCallable)
    ACineCameraActor* GetCineCameraActor();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AcquirePhotoManager();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AcquireCineCamera();
    
};

