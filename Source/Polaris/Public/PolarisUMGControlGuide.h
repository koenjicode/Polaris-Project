#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGControlGuide.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGControlGuide : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGControlGuide();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetButtonText(int32 side, int32 no, const FString& ButtonText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetButtonShow(int32 side, int32 no, bool Show);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetButtonForceHide(int32 side, int32 no);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetButtonData(int32 side, int32 no, const FString& ButtonText, const FString& moveText, int32 Type);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAnimStayRage(int32 side, int32 no);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAnimStayHeat(int32 side, int32 no);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAnimOutEffect(int32 side, int32 no);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAnimInRage(int32 side, int32 no);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAnimInHeat(int32 side, int32 no);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAnimFlashWait(int32 side, int32 no);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAnimFlashStop(int32 side, int32 no);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAnimFlash(int32 side, int32 no);
    
};

