#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "PolarisMobManager.generated.h"

class APolarisCharacterActor;
class APolarisMobCrowdNiagaraActor;

UCLASS(Blueprintable)
class POLARIS_API APolarisMobManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APolarisMobCrowdNiagaraActor*> NiagaraActors;
    
    APolarisMobManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ToggleVisibilityVATCrowd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ToggleVisibilityVAT();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ToggleVisibilitySK();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ToggleVisibilityAll();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetTargetPlayer();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsPracticeMode();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool GetTargetPlayerPos(int32 PlayerEntryId, FVector& OutPos);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    APolarisCharacterActor* GetTargetPlayer(int32 PlayerEntryId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetAllVATActionMob();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetAllMobCrowd();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ForceRemoveAlpaca2();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ForceRemoveAlpaca();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ForceMobTerror();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ForceMobReaction();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ForceMobEx();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ForceMobCheer();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DestroyAllVatCrowd();
    
};

