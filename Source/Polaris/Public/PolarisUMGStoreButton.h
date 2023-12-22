#pragma once
#include "CoreMinimal.h"
#include "PolarisButton.h"
#include "StoreButtonAnimName.h"
#include "PolarisUMGStoreButton.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGStoreButton : public UPolarisButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 cursor_x;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 cursor_y;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStoreButtonAnimName anim_names;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFocusable;
    
public:
    UPolarisUMGStoreButton();

    UFUNCTION(BlueprintCallable)
    void PlayDecideSE();
    
    UFUNCTION(BlueprintCallable)
    void PlayCursorSE();
    
    UFUNCTION(BlueprintCallable)
    void PlayCancelSE();
    
    UFUNCTION(BlueprintCallable)
    void PlayAnimButtonNormal();
    
    UFUNCTION(BlueprintCallable)
    void PlayAnimButtonIn();
    
    UFUNCTION(BlueprintCallable)
    void PlayAnimButtonHover();
    
    UFUNCTION(BlueprintCallable)
    void PlayAnimButtonClick();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCursorY() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCursorX() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CallStoreSceneEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CallItemDetailSceneEvent();
    
    UFUNCTION(BlueprintCallable)
    void CallBlackPenSceneEvent();
    
};

