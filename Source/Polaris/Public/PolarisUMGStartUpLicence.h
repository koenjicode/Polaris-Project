#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGStartUpLicence.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGStartUpLicence : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGStartUpLicence();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayAnimUeOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayAnimUeIn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayAnimOtherOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayAnimOtherIn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsAnimUeFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsAnimOtherFinished();
    
};

