#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGTAMTutorialTelop.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGTAMTutorialTelop : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGTAMTutorialTelop();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetTitleTextId(FName Text);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetTelopTextId(FName Text);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetButtonTextId(FName Text);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnIn();
    
};

