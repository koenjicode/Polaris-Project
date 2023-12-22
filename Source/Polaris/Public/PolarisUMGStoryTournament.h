#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGStoryTournament.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGStoryTournament : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsEnd;
    
    UPolarisUMGStoryTournament();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartMovie();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetup();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPreBattleStart(int32 battle_no, int32 Result);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPreBattleEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPostBattleStart(int32 battle_no, int32 Result);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPostBattleEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsInitialized();
    
};

