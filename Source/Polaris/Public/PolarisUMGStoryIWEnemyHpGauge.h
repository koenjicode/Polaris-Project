#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGStoryIWEnemyHpGauge.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGStoryIWEnemyHpGauge : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGStoryIWEnemyHpGauge();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateVisibility(bool Visible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateHealth(float per);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateCursorVisibility(bool lockon);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerNum(int32 Num);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetFighterName(const FString& Name);
    
};

