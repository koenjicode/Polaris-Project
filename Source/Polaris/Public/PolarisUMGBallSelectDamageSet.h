#pragma once
#include "CoreMinimal.h"
#include "EPolarisUMGBallSelectDamageSetMoveType.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGBallSelectDamageSet.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGBallSelectDamageSet : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGBallSelectDamageSet();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShowDamageSetUMG();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInitializeUMG(int32 side, const FString& Title);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHideDamageSetUMG();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDecideDamageUMG(int32 damage_level);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCursorMoveUMG(int32 damage_level, EPolarisUMGBallSelectDamageSetMoveType move_type);
    
    UFUNCTION(BlueprintCallable)
    void CallSelectLevelCallback(int32 Level);
    
    UFUNCTION(BlueprintCallable)
    void CallDecideLevelCallback(int32 Level);
    
    UFUNCTION(BlueprintCallable)
    void CallCursorRightCallback();
    
    UFUNCTION(BlueprintCallable)
    void CallCursorLeftCallback();
    
};

