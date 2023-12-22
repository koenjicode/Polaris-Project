#pragma once
#include "CoreMinimal.h"
#include "EPolarisUMGHudBallGaugeAnimType.h"
#include "EPolarisUMGHudBallNumAnimType.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGHudBallGauge.generated.h"

class UCanvasPanel;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGHudBallGauge : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGHudBallGauge();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ShowHudBallGauge(bool flag, bool Ignore);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVisibilityOfNum(int32 Index, bool Visible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSingleTextureOfNum(int32 Index, const UTexture2D* digit0);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPositionOfNum(int32 Index, float X, float Y);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetDoubleTexturesOfNum(int32 Index, const UTexture2D* digit0, const UTexture2D* digit1);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetAttackGauge(int32 side, float Ratio);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestNumAnim(int32 Index, EPolarisUMGHudBallNumAnimType Type);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestAnim(EPolarisUMGHudBallGaugeAnimType Type);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetBottomUIPosition(float pos_y);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInitOnRound();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInitOnBattle();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool HasNumAnimationFinished(int32 Index, EPolarisUMGHudBallNumAnimType Type);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool HasAnimationFinished(EPolarisUMGHudBallGaugeAnimType Type);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 GetNumberOfNums() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UCanvasPanel* GetCanvasPanelOfNum() const;
    
};

