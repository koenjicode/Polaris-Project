#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGGenericCharacterSelect.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGGenericCharacterSelect : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGGenericCharacterSelect();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupPanel(int32 no, const UTexture2D* Icon, const FString& Name, bool Locked);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetInputEnable(bool Enable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SelectPanel(int32 no, bool Force);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestDecideAnim(int32 idx);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestAnimIO(bool in);
    
    UFUNCTION(BlueprintCallable)
    void InvokeSelectCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeDecideCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool HasIOAnimationFinished(bool in);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool HasDecideAnimationFinished(int32 idx);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreatePanel(int32 Num);
    
};

