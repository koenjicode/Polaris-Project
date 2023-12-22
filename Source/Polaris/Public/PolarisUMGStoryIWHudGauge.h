#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EPolarisUMGHudGaugeType.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGStoryIWHudGauge.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGStoryIWHudGauge : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGStoryIWHudGauge();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ZoneShowTimer(float Ratio);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ZoneShowEnable();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ZoneShowDisable();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateZoneRechargeValue(float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateTimer(int32 Time);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateHealth(float ratio_hp, float ratio_heal, EPolarisUMGHudGaugeType Type);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateGuideSprite(bool is_visible, bool is_versus, bool is_player, FVector position, float Radius);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateCombo(int32 combo_cnt);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ToggleZoneGauge(bool flag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartZoneRecharge();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ShowHudGauge(bool flag, bool Ignore);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetOnlineId(const FString& Name);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetGaugeAnimFlag(bool flag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetFighterTexture(const UTexture2D* Texture);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetFighterNameTexture(const UTexture2D* Texture);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetFighterBGTexture(const UTexture2D* Texture);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PrepareHudFrameInAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayHudFrameOutAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayHudFrameInAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayFrameInAnimation(EPolarisUMGHudGaugeType Type);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRageOff();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRageArts();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRage();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInitOnRound();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInitOnBattle();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDamageMiddle();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDamageLow();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangedZoneCounter(int32 Now, int32 Max, int32 Val);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FinishZoneRecharge();
    
};

