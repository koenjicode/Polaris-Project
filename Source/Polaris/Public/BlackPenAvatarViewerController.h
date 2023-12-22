#pragma once
#include "CoreMinimal.h"
#include "BlackPenViewerControllerBase.h"
#include "BlackPenAvatarViewerController.generated.h"

class AActor;

UCLASS(Blueprintable)
class POLARIS_API ABlackPenAvatarViewerController : public ABlackPenViewerControllerBase {
    GENERATED_BODY()
public:
    ABlackPenAvatarViewerController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateRightTrigger(bool isPressing);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateRightStick(float xValue, float yValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateLeftTrigger(bool isPressing);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateLeftStick(float xValue, float yValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SpawnAvatar(const TArray<int32>& EquipItems);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetAvatarHidden(bool IsHidden);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayEmote(FName emoteId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    AActor* GetAvatarActor();
    
};

