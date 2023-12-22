#pragma once
#include "CoreMinimal.h"
#include "EReplayTipsDisplayType.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGReplay.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGReplay : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGReplay();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVisibleTips(EReplayTipsDisplayType Type);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTipsVisibilityGreat(bool Visible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTipsText(const FString& tips_text);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTipsCommandText(const FString& combo_text);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTipsComboDifficulty(int32 difficulty);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTipsComboDamageVisibility(bool Visible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTipsComboDamage(const FString& combo_text);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetHiddenTips();
    
};

