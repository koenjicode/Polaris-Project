#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGGhostResult.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGGhostResult : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGGhostResult();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateKey(bool isUp, bool isDown, bool NewIsDecide, bool NewIsCancel);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Start();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetGhostLocation(int32 Index, int32 ghost_type, int32 ghost_index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetDefaultCursorIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsDecide();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsClose();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsCancel();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 GetCursor();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void End();
    
};

