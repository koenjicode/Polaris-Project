#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGTAMHUDMask.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGTAMHUDMask : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGTAMHUDMask();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnZoneMaskOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnZoneMaskIn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnZoneFrameOut_L();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnZoneFrameIn_L();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetText(FName Text);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetMaskVisibility(bool flag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMaskOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMaskIn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHeatEnergyOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHeatEnergyIn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFrameOut_R();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFrameOut_L();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFrameIn_R();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFrameIn_L();
    
};

