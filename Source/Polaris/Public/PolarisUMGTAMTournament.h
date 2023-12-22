#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGTAMTournament.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGTAMTournament : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsEnd;
    
    UPolarisUMGTAMTournament();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartMovie();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetup(int32 current_round, bool is_pre_battle);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPreBattleStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPreBattleEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPostBattleStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPostBattleNpcStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPostBattleNpcEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPostBattleNextStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPostBattleNextEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPostBattleEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHideTournamentUI();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsInitialized();
    
};

