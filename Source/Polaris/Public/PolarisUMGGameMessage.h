#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGGameMessage.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGGameMessage : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGGameMessage();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopFighterUI();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayWin();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayTimeUp();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayRound(int32 Round);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayReplay();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayReady();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayRageArtsKO(bool is_rage_arts_ko);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayPerfect(bool is_rage_arts_ko);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayNewChallenger();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayLose();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayKOCrash(bool is_rage_arts_ko);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayKO(bool is_rage_arts_ko);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayGreat(bool is_rage_arts_ko);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayGameOver();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayFighterUI();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayFight();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayDraw();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayDoubleKOCrash();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayDoubleKO();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayContinue(int32 Count);
    
};

