#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGTAMTalk.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGTAMTalk : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGTAMTalk();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStay();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShowAllMessage();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetVisibility_Tri(bool flag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetTextId(FName Text);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetText(FName Text);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetSkitId(FName skit_id);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOut_R();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOut_L();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnIn_R();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnIn_L();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnIn(int32 text_type);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsMessageFinished();
    
};

