#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGPractice.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGPractice : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGPractice();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVisibilityTips(bool Visible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVisibilityTimer(bool Visible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVisibilityHistory(int32 side, bool Visible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVisibilityFrameSimpleInfo(int32 side, bool Visible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVisibilityFrameInfo(int32 side, bool Visible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVisibilityDamageInfo(int32 side, bool Visible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVisibilityCountDown(bool Visible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVisibilityCommandListButton(bool Visible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVisibilityComboInfo(int32 side, bool Visible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVisibilityComboChallenge(bool Visible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTipsVisibilityGreat(bool Visible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTipsText(const FString& tips_text, bool is_raw_text);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTipsCommandText(const FString& combo_text, bool is_raw_text);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTipsComboDamage(const FString& combo_text);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTimerNum(int32 Num);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetHistoryData(int32 side, int32 Index, const UTexture2D* Icon_0, const UTexture2D* Icon_1, const UTexture2D* Icon_2, int32 lever, int32 Button, int32 frame);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetFrameInfoIconTexture(int32 side, const UTexture2D* Texture_0, const UTexture2D* Texture_1);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetDamageInfoIconTexture(int32 side, const UTexture2D* Texture_0, const UTexture2D* Texture_1, const UTexture2D* Texture_2, const UTexture2D* Texture_3, const UTexture2D* Texture_4);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCountDownNum(int32 Num);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCommandListButtonShift(bool Shift);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCommandListButtonNoteText(const FString& note_text, bool is_raw_text);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCommandListButtonNo(int32 no, bool Visible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCommandListButtonNameText(const FString& name_text, bool is_raw_text);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCommandListButtonIconTexture(const UTexture2D* Texture_0, const UTexture2D* Texture_1, const UTexture2D* Texture_2, const UTexture2D* Texture_3);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCommandListButtonDifficulty(int32 difficulty, bool Visible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCommandListButtonDamageText(const FString& damage_text, bool is_raw_text);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCommandListButtonCommandText(const FString& command_text, bool is_raw_text);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCommandListButtonCheckBox(bool checked, bool Visible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetComboChallengeName(const FString& name_text);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetComboChallengeCurrentCommand(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetComboChallengeCommand(int32 Index, const FString& command_text, const FString& command_dark_text);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetComboChallengeCheckBox(bool checked, bool Visible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWallHitOut(int32 side);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWallHitIn(int32 side);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPunishOut(int32 side);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPunishIn(int32 side);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCounterHitOut(int32 side);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCounterHitIn(int32 side);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCommandListButtonTAM();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCommandListButtonResetElapsedTime();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCommandListButtonNoteOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCommandListButtonNoteIn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnComboOut(int32 side);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnComboIn(int32 side);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnComboDamageOut(int32 side);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnComboDamageIn(int32 side);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnComboDamageCount(int32 side);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnComboCount(int32 side);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCleanHitOut(int32 side);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCleanHitIn(int32 side);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool GetVisibilityTips();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClearComboChallengeCommand();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddComboChallengeCommand(const FString& command_text, const FString& command_dark_text);
    
};

