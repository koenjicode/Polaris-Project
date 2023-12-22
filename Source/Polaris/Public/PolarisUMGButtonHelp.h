#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGButtonHelp.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGButtonHelp : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGButtonHelp();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayAnimOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayAnimIn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnClearHelp();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAddHelp(const FString& Icon, const FString& Text);
    
};

