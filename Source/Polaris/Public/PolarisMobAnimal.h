#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EventOnGeneralBattleEventParam.h"
#include "EventOnInitBattleParam.h"
#include "PolarisReducibleInterface.h"
#include "PolarisMobAnimal.generated.h"

UCLASS(Blueprintable)
class POLARIS_API APolarisMobAnimal : public AActor, public IPolarisReducibleInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DissableByDrama;
    
    APolarisMobAnimal(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetDramaParameter();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RoundStart();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlaySound();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStageReset();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitBattle(FEventOnInitBattleParam Param);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInit();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnGeneralBattleEvent(FEventOnGeneralBattleEventParam Param);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsStoryMode();
    
    UFUNCTION(BlueprintCallable)
    bool IsMakuai(FString& SequenceName, FString& sceneName);
    
    UFUNCTION(BlueprintCallable)
    bool IsCurrentSeqence(const FString& seqName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GimmickBreakAction();
    
    UFUNCTION(BlueprintCallable)
    void GetCuurentSequenceName(FString& SequenceName, FString& sceneName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CheckSoundPlayable();
    

    // Fix for true pure virtual functions not being implemented
};

