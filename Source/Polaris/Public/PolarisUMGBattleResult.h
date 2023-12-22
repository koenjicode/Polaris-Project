#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGBattleResult.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGBattleResult : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGBattleResult();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShowBattleResult(bool flag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetRankIconTexture(const UTexture2D* Texture);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetPromotionTexture(const UTexture2D* Texture);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetBackgroundTexture(const UTexture2D* Texture);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayAnimSmall();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayAnimOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayAnimIn(int32 language_id, int32 rank_id);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OnIsPlayAnimOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInitAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCompleteAnimation();
    
};

