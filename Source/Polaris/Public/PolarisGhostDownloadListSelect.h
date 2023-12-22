#pragma once
#include "CoreMinimal.h"
#include "DownloadListSelectElement.h"
#include "PolarisUserWidget.h"
#include "PolarisGhostDownloadListSelect.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisGhostDownloadListSelect : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisGhostDownloadListSelect();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateKey(bool isUp, bool isDown, bool NewIsDecide, bool NewIsCancel);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Start();
    
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
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 AddElement(const FDownloadListSelectElement& Element);
    
};

