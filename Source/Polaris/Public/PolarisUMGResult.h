#pragma once
#include "CoreMinimal.h"
#include "EResult_BattleResult.h"
#include "EResult_ResultType.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGResult.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGResult : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGResult();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SelectMenu(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimIn();
    
    UFUNCTION(BlueprintCallable)
    void InvokeSelectCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeDecideCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitializeResult(EResult_ResultType result_type, int32 main_widget, EResult_BattleResult battle_result);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnableMenu(bool flag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DecideMenu(int32 ID);
    
};

