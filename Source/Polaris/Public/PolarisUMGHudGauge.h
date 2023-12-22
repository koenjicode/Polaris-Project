#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EPolarisUMGHudGaugeType.h"
#include "PolarisUserWidget.h"
#include "UiCommunicationStatus.h"
#include "PolarisUMGHudGauge.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGHudGauge : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGHudGauge();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ZoneShowTimer(int32 side, float Ratio);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ZoneShowGauge(int32 side, float Ratio);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ZoneShowEnable(int32 side);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ZoneShowDisable(int32 side);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateTimer(int32 Time);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateStar(int32 side, int32 Count);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateRTT(int32 Max, int32 Min, int32 Average, int32 median, float loss_rate_up, float loss_rate_down, bool is_relayed, bool is_host, int32 antenna, int32 Delay, int32 max_rollback, int32 Count, int32 total_frame, int32 last_frame, int32 key_wait_total_frame, int32 key_wait_frame);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateHealth_New(int32 side, float ratio_hp, float ratio_heal, EPolarisUMGHudGaugeType Type);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateHealth(int32 side, float ratio_hp, float ratio_heal, bool is_rage);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateGuideSprite(int32 side, bool is_visible, bool is_versus, bool is_player, bool is_ghost, FVector position, float Radius);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateCommunicationStatus(FUiCommunicationStatus Status);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ToggleZoneGauge(bool flag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowRTT(bool flag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ShowHudGauge(bool flag, bool Ignore, bool left_is_enable_zone, bool right_is_enable_zone);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowHpRate(int32 Value1, int32 Value2);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowCommunicationStatus(bool flag, bool left_display_proc_drop, bool right_display_proc_drop);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTekkenPower(int32 side, int32 tp, bool is_online);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetStarMax(int32 side, int32 Max);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetStage(const FString& text_id);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetShogoText(int32 side, const FString& text_id);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetShogoBGTexture(int32 side, const UTexture2D* Texture);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetRankTexture(int32 rank, const UTexture2D* Texture, const UTexture2D* num_texture);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPlatformIconTexture(int32 side, const UTexture2D* Texture);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPlatformIconGhost(int32 side);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetOnlineId(int32 side, const FString& Name);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetGaugeTexture(int32 side, const UTexture2D* Texture);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetGaugeAnimFlag(int32 side, bool flag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetFighterTexture(int32 side, const UTexture2D* Texture);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetFighterNameTexture2(int32 side, const UTexture2D* Texture);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetFighterNameTexture(int32 side, const UTexture2D* Texture);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetFighterBGTexture(int32 side, const UTexture2D* Texture);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetFighterBGFullTexture(int32 side, const UTexture2D* Texture);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCustomizeEnable(bool is_customized);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResetGaugeAnim(int32 side, float hp_ratio);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PrepareHudFrameInAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayRankNumAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayHudFrameOutAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayHudFrameInAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayHealAnimation(int32 side);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayFrameInAnimation_New(EPolarisUMGHudGaugeType type1, EPolarisUMGHudGaugeType type2);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayFrameInAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetWinningStreakPosition(bool bUp);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetWinningStreak(int32 side, int32 wins, bool is_visible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetTopUIPosition(float pos_y);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetProfile(int32 side, const FString& user_name, int32 rank, int32 match_type);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetBottomUIPosition(float pos_y);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRageOff(int32 side);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRageArts(int32 side);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRage(int32 side);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInitOnRound();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInitOnBattle();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDamageMiddle(int32 side);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDamageLow(int32 side);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangedZoneCounter(int32 side, int32 Now, int32 Max, int32 Val);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangedName(int32 side, const FString& user_name);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideHpRate();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AttachStoryModePatch(int32 star_max);
    
};

