#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGOptionHUD.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGOptionHUD : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpperHUDDefaultPositionY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LowerHUDDefaultPositionY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpperHUDCenterLimitOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LowerHUDCenterLimitOffset;
    
    UPolarisUMGOptionHUD();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Setup(bool ball_mode);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPosition(bool Up, const float pos_y);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Select(bool Up);
    
    UFUNCTION(BlueprintCallable)
    void InvokeHUDSelectCallback(bool up_side);
    
    UFUNCTION(BlueprintCallable)
    void InvokeHUDDecideCallback(bool up_side);
    
    UFUNCTION(BlueprintCallable)
    void InvokeArrowSelectCallback(bool up_side, bool arrow_up);
    
    UFUNCTION(BlueprintCallable)
    void InvokeArrowReleaseCallback(bool up_side, bool arrow_up);
    
    UFUNCTION(BlueprintCallable)
    void InvokeArrowPressCallback(bool up_side, bool arrow_up);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool HasIOAnimationFinished(bool in);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool HasDecideAnimationFinished();
    
    UFUNCTION(BlueprintCallable)
    FVector2D GetViewportSize();
    
    UFUNCTION(BlueprintCallable)
    float GetHeightForHUD();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FrameOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FrameIn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FinishAdjust(bool Up);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Decide(bool Up);
    
};

