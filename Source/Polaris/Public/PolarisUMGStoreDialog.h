#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EStoreDialogSmallTextType.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGStoreDialog.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGStoreDialog : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGStoreDialog();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetDescription(const FString& Text, bool is_raw_text, bool use_centering);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimOut(EStoreDialogSmallTextType dialog_type);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimIn(EStoreDialogSmallTextType dialog_type);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShowBackground(bool flag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsPlayAnimOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsPlayAnimIn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FString GetEffectiveDateText(int32 coin_num, FDateTime date);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CursorEvent(int32 move_x, int32 move_y);
    
};

