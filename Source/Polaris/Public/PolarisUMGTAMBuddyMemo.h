#pragma once
#include "CoreMinimal.h"
#include "EPolarisTAMBuddyMemoIconType.h"
#include "EPolarisTAMBuddyMemoItemType.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGTAMBuddyMemo.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGTAMBuddyMemo : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGTAMBuddyMemo();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetVisibilityItemBG(EPolarisTAMBuddyMemoItemType item_type, bool is_visibility);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetVisibilityItem(EPolarisTAMBuddyMemoItemType item_type, bool is_visibility);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetVisibility(bool is_visibility);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetNameTextItem(EPolarisTAMBuddyMemoItemType item_type, FName Text, bool is_text_id);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetIconItem(EPolarisTAMBuddyMemoItemType item_type, EPolarisTAMBuddyMemoIconType icon_type);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetCommandTextItem(EPolarisTAMBuddyMemoItemType item_type, FName Text, bool is_text_id);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOutItem(EPolarisTAMBuddyMemoItemType item_type);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInItem(EPolarisTAMBuddyMemoItemType item_type);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnIn(bool is_right_side);
    
};

