#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "SessionListData.h"
#include "PolarisUMGSessionList.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGSessionList : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGSessionList();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSessionListNameType(int32 name_type);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSessionListDatas(const TArray<FSessionListData>& sessionListDatas);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetOperationEnable(bool Enable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Select(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayShowAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayHideAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsWaitingAnimation();
    
    UFUNCTION(BlueprintCallable)
    void InvokeSelectCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeDecideCallback();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Decide();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Cancel();
    
};

